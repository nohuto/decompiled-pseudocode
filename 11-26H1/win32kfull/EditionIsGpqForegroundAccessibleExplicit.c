/*
 * XREFs of EditionIsGpqForegroundAccessibleExplicit @ 0x140173660
 * Callers:
 *     <none>
 * Callees:
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x140173750 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 *     ?MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z @ 0x140173868 (-MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall EditionIsGpqForegroundAccessibleExplicit(
        __int64 a1,
        struct tagTHREADINFO *a2,
        __int64 *a3,
        __int64 a4)
{
  int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  v5 = *((_DWORD *)a3 + 2);
  v7 = *a3;
  v8 = v5;
  if ( (unsigned int)IsGpqForegroundAccessibleExplicit(a1, a2, &v7, a4) )
    return 1LL;
  MSGLUA_GPQFOREGROUNDPTI(a2);
  return 0LL;
}
