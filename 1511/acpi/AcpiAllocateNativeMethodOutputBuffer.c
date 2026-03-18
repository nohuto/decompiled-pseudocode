/*
 * XREFs of AcpiAllocateNativeMethodOutputBuffer @ 0x1C003EC40
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall AcpiAllocateNativeMethodOutputBuffer(__int64 a1, void *a2, SIZE_T a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rax
  __int64 v9; // rcx

  v4 = 0;
  if ( a2 )
    ExFreePoolWithTag(a2, 0x4E706341u);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a3, 0x4E706341u);
  *(_QWORD *)(a1 + 56) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, a3);
    v9 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 48) = a3;
    *a4 = v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
