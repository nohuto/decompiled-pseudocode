/*
 * XREFs of MiComputeCommitChargeForZeroPteRange @ 0x1401DF6BC
 * Callers:
 *     MiCheckCommitReleaseFromVad @ 0x1401DF30C (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MiComputeImageVadCommitCharge @ 0x1401DF764 (MiComputeImageVadCommitCharge.c)
 */

__int64 __fastcall MiComputeCommitChargeForZeroPteRange(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 48);
  v4 = 0LL;
  v5 = a3;
  if ( (v3 & 0x8000) != 0 )
  {
    if ( *(int *)(a1 + 52) < 0 )
      return a3;
  }
  else
  {
    if ( (v3 & 7) != 2 )
    {
      if ( (v3 & 0x28) != 0x28 )
        return v4;
      return a3;
    }
    v7 = (unsigned __int64)(a2 << 25 >> 16) >> 12;
    if ( a3 )
    {
      do
      {
        v8 = MiComputeImageVadCommitCharge(a1, v7, v5, &v10);
        v7 += v10;
        v4 += v8;
        v5 -= v10;
      }
      while ( v5 );
    }
  }
  return v4;
}
