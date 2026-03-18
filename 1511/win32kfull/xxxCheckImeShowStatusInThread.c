/*
 * XREFs of xxxCheckImeShowStatusInThread @ 0x1C00DD010
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00DD040 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall xxxCheckImeShowStatusInThread(__int64 a1)
{
  if ( (*gpsi & 4) != 0 && *(char *)(a1 + 44) >= 0 )
    xxxCheckImeShowStatus((struct tagWND *)a1, *(struct tagTHREADINFO **)(a1 + 16));
  return 1LL;
}
