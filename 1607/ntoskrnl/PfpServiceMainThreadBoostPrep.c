/*
 * XREFs of PfpServiceMainThreadBoostPrep @ 0x140534B20
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x1403D2AF4 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsLookupThreadByThreadId @ 0x14041F6B0 (PsLookupThreadByThreadId.c)
 */

__int64 __fastcall PfpServiceMainThreadBoostPrep(__int64 a1, _QWORD *a2)
{
  void *v3; // rcx
  NTSTATUS v5; // eax
  PVOID v6; // rdi
  unsigned int v7; // ebx
  PVOID PoolWithTag; // rax
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = 0LL;
  v3 = *(void **)(a1 + 72);
  if ( !v3 )
    return (unsigned int)-2147483614;
  v5 = PsLookupThreadByThreadId(v3, (PETHREAD *)&Object);
  v6 = Object;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( *((_QWORD *)Object + 188) == *(_QWORD *)(a1 + 80) )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA8uLL, 0x44506650u);
      if ( PoolWithTag )
      {
        *a2 = v6;
        v7 = 0;
        a2[1] = PoolWithTag;
        return v7;
      }
      v7 = -1073741670;
    }
    else
    {
      v7 = -1073741735;
    }
  }
  if ( v6 )
    ObDereferenceObjectDeferDelete(v6);
  return v7;
}
