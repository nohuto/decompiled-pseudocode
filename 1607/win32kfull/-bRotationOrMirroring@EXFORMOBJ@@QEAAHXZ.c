/*
 * XREFs of ?bRotationOrMirroring@EXFORMOBJ@@QEAAHXZ @ 0x1C013AF90
 * Callers:
 *     NtGdiTransparentBlt @ 0x1C013A310 (NtGdiTransparentBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EXFORMOBJ::bRotationOrMirroring(float **this)
{
  float *v1; // rdx
  __int64 result; // rax

  v1 = *this;
  if ( ((_DWORD)(*this)[8] & 1) == 0 )
    return 1LL;
  result = 0LL;
  if ( !*((_DWORD *)this + 3) && (*v1 < 0.0 || v1[3] < 0.0) )
    return 1LL;
  return result;
}
