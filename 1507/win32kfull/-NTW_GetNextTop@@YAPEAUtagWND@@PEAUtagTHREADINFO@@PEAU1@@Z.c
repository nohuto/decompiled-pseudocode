/*
 * XREFs of ?NTW_GetNextTop@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@@Z @ 0x1C0042B28
 * Callers:
 *     NextTopWindow @ 0x1C0042A00 (NextTopWindow.c)
 * Callees:
 *     ?GNT_NextTopScan@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x1C0042B68 (-GNT_NextTopScan@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 */

struct tagWND *__fastcall NTW_GetNextTop(struct tagTHREADINFO *a1, struct tagWND *a2)
{
  struct tagWND *v2; // r8
  struct tagTHREADINFO *v3; // r9
  struct tagWND *v4; // rdx
  struct tagWND *result; // rax
  __int64 v6; // r8

  v2 = a2;
  v3 = a1;
  if ( !a2 )
    return GNT_NextTopScan(v3, 0LL, 0LL);
  v4 = 0LL;
  while ( 1 )
  {
    result = GNT_NextTopScan(v3, v4, v2);
    if ( result )
      break;
    v4 = (struct tagWND *)v6;
    if ( !v6 )
      return GNT_NextTopScan(v3, 0LL, 0LL);
    v2 = *(struct tagWND **)(v6 + 104);
  }
  return result;
}
