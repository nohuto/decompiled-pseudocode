/*
 * XREFs of RIMDivideToCeilingOrNearestInt @ 0x1C00CB224
 * Callers:
 *     RIMGetPointerDeviceFrameScanTime @ 0x1C00CCD08 (RIMGetPointerDeviceFrameScanTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMDivideToCeilingOrNearestInt(unsigned int a1, unsigned int a2, int a3, _DWORD *a4)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // rax

  v4 = 1;
  if ( !a3 )
  {
    v5 = (a2 + 2 * (unsigned __int64)a1) / (2 * (unsigned __int64)a2);
    if ( v5 <= 0xFFFFFFFF )
      goto LABEL_5;
    *a4 = -1;
    return 0;
  }
  if ( !a1 )
    return 0;
  LODWORD(v5) = (a1 - 1) / a2 + 1;
LABEL_5:
  *a4 = v5;
  return v4;
}
