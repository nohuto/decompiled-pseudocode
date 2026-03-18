/*
 * XREFs of CaptureDEVMODEW @ 0x1C00844E0
 * Callers:
 *     NtGdiOpenDCW @ 0x1C00424A0 (NtGdiOpenDCW.c)
 * Callees:
 *     FreeThreadBufferWithTag @ 0x1C0064B70 (FreeThreadBufferWithTag.c)
 *     AllocThreadBufferWithTag @ 0x1C006DB50 (AllocThreadBufferWithTag.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

_WORD *__fastcall CaptureDEVMODEW(unsigned __int16 *a1)
{
  int v1; // esi
  int v2; // r14d
  __int64 v3; // rdi
  _WORD *v4; // rbx

  v1 = a1[34];
  v2 = a1[35];
  v3 = (unsigned int)(v1 + v2);
  if ( (unsigned int)(v3 - 73) > 0x270FFB7 )
    return 0LL;
  v4 = (_WORD *)AllocThreadBufferWithTag(v3, 1886221383LL, 0);
  if ( v4 )
  {
    if ( (unsigned __int16 *)((char *)a1 + v3) < a1 || (char *)a1 + v3 > W32UserProbeAddress )
      *(_BYTE *)W32UserProbeAddress = 0;
    memmove(v4, a1, (unsigned int)v3);
    v4[34] = v1;
    v4[35] = v2;
  }
  return v4;
}
