/*
 * XREFs of TpReserveTaskPost @ 0x18007CD10
 * Callers:
 *     RtlQueueWorkItem @ 0x18007C3C0 (RtlQueueWorkItem.c)
 * Callees:
 *     TppGetCurrentThreadNumaNode @ 0x18003DE48 (TppGetCurrentThreadNumaNode.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003E8AC (TppPoolpReferenceGlobalPool.c)
 */

__int64 __fastcall TpReserveTaskPost(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  NTSTATUS v3; // ebx
  _PEB_LDR_DATA *v5; // rdx
  volatile signed __int32 **v6; // rcx
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v3 = 0;
  if ( a1 )
  {
    _InterlockedIncrement(a1);
LABEL_6:
    TppGetCurrentThreadNumaNode((__int64)v8, (_DWORD *)(a2 + 8), (unsigned __int8 *)(a2 + 12));
    return (unsigned int)v3;
  }
  if ( a3 && (*(_BYTE *)(a3 + 56) & 2) != 0 )
  {
    v5 = (_PEB_LDR_DATA *)&TppPoolpSerializedPoolLock;
    v6 = (volatile signed __int32 **)&TppPoolpSerializedPool;
  }
  else
  {
    v5 = (_PEB_LDR_DATA *)&TppPoolpGlobalPoolLock;
    v6 = (volatile signed __int32 **)&TppPoolpGlobalPool;
  }
  v3 = TppPoolpReferenceGlobalPool(v6, v5, &v8);
  if ( v3 >= 0 )
    goto LABEL_6;
  return (unsigned int)v3;
}
