/*
 * XREFs of EtwpReceiveReplyDataBlock @ 0x1404B7390
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeRemoveQueue @ 0x1400A6C30 (KeRemoveQueue.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     EtwpUnreferenceDataBlock @ 0x14048EE4C (EtwpUnreferenceDataBlock.c)
 */

__int64 __fastcall EtwpReceiveReplyDataBlock(unsigned int *a1, unsigned int a2, _DWORD *a3)
{
  void *v5; // rcx
  NTSTATUS v7; // ebx
  PVOID v8; // rbp
  PLIST_ENTRY v9; // rax
  PLIST_ENTRY v10; // rdi
  struct _LIST_ENTRY *Flink; // rsi
  unsigned int Flink_high; // eax
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0;
  v5 = (void *)*a1;
  Timeout.QuadPart = EtwpOneMs * a1[1];
  v7 = ObReferenceObjectByHandle(v5, 4u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  if ( v7 >= 0 )
  {
    v8 = Object;
    if ( (*((_BYTE *)Object + 98) & 4) != 0 )
    {
      v9 = KeRemoveQueue(*((PRKQUEUE *)Object + 6), 1, &Timeout);
      v10 = v9;
      if ( v9 == (PLIST_ENTRY)258 || v9 == (PLIST_ENTRY)192 )
      {
        v7 = (int)v9;
      }
      else
      {
        Flink = v9[1].Flink;
        Flink_high = HIDWORD(Flink->Flink);
        if ( Flink_high > a2 )
        {
          v7 = -1073741789;
        }
        else
        {
          memmove(a1, Flink, Flink_high);
          v7 = 0;
        }
        *a3 = HIDWORD(Flink->Flink);
        EtwpUnreferenceDataBlock((volatile signed __int32 *)Flink);
        ExFreePoolWithTag(v10, 0);
      }
    }
    else
    {
      v7 = -1073741816;
    }
    ObfDereferenceObject(v8);
  }
  return (unsigned int)v7;
}
