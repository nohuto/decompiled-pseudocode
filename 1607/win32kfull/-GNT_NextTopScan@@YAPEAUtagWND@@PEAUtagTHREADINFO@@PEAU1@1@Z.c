/*
 * XREFs of ?GNT_NextTopScan@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x1C01056B0
 * Callers:
 *     NextTopWindow @ 0x1C0105548 (NextTopWindow.c)
 *     ?NTW_GetNextTop@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@@Z @ 0x1C0105670 (-NTW_GetNextTop@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall GNT_NextTopScan(struct tagTHREADINFO *a1, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v3; // rcx
  struct tagWND *result; // rax

  if ( a2 )
  {
    result = (struct tagWND *)*((_QWORD *)a2 + 9);
  }
  else
  {
    v3 = *((_QWORD *)a1 + 51);
    if ( !v3 || (*(_DWORD *)(v3 + 32) & 2) != 0 )
      return 0LL;
    result = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL) + 96LL);
  }
  while ( result && *((struct tagWND **)result + 13) != a3 )
    result = (struct tagWND *)*((_QWORD *)result + 9);
  return result;
}
