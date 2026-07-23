/*
 * XREFs of VfGetVerifierInformation @ 0x140720F40
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140715ED8 (VfSuspectDriversGetVerifierInformation.c)
 */

__int64 __fastcall VfGetVerifierInformation(void *a1, unsigned int a2, unsigned int *a3, int a4)
{
  unsigned int v6; // esi
  PVOID PoolWithTag; // rax
  void *v9; // rbx
  unsigned int VerifierInformation; // edi
  unsigned int v11; // eax

  v6 = a2;
  *a3 = 0;
  if ( a2 > 0xA00000 )
    v6 = 10485760;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x706D5456u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v6);
    VerifierInformation = VfSuspectDriversGetVerifierInformation((__int64)PoolWithTag, v6, a3, (__int64)a1, a4);
    v11 = *a3;
    if ( *a3 > v6 )
      v11 = v6;
    memmove(a1, v9, v11);
    ExFreePoolWithTag(v9, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return VerifierInformation;
}
