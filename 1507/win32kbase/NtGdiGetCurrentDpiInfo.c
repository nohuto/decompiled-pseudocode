/*
 * XREFs of NtGdiGetCurrentDpiInfo @ 0x1C000D870
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetCurrentDpiInfo @ 0x1C000D8DC (DrvGetCurrentDpiInfo.c)
 */

__int64 __fastcall NtGdiGetCurrentDpiInfo(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  _OWORD v4[6]; // [rsp+20h] [rbp-68h] BYREF

  result = DrvGetCurrentDpiInfo(a1, v4);
  if ( (int)result >= 0 )
  {
    if ( a2 >= W32UserProbeAddress )
      a2 = W32UserProbeAddress;
    *a2 = v4[0];
    a2[1] = v4[1];
    a2[2] = v4[2];
    a2[3] = v4[3];
    a2[4] = v4[4];
    a2[5] = v4[5];
  }
  return result;
}
