/*
 * XREFs of VfGetVerifierInformation @ 0x1406D4D60
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1406C7530 (VfSuspectDriversGetVerifierInformation.c)
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
