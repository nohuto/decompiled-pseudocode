/*
 * XREFs of MiComputeImageVadCommitCharge @ 0x1401CF7D0
 * Callers:
 *     MiCheckCommitReleaseFromVad @ 0x1401CF434 (MiCheckCommitReleaseFromVad.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x1401CF738 (MiComputeCommitChargeForZeroPteRange.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 */

unsigned __int64 __fastcall MiComputeImageVadCommitCharge(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4)
{
  __int64 ProtoPteAddress; // rax
  __int64 v7; // r10
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned __int64 result; // rax
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  ProtoPteAddress = MiGetProtoPteAddress(a1, a2, 0xDu, &v12);
  v7 = (ProtoPteAddress - *(_QWORD *)(v12 + 8)) >> 3;
  v8 = (unsigned int)(*(_DWORD *)(v12 + 44) - v7);
  if ( v8 > a3 )
    v8 = a3;
  v9 = 0LL;
  if ( (*(_BYTE *)(v12 + 32) & 0xA) == 0xA )
  {
    v10 = *(_DWORD *)(v12 + 44) - (*(_DWORD *)(v12 + 52) & 0x7FFFFFFF);
    if ( (unsigned int)v7 < v10 )
    {
      v9 = v10 - (unsigned int)v7;
      if ( v9 > v8 )
        v9 = v8;
    }
  }
  result = v9;
  *a4 = v8;
  return result;
}
