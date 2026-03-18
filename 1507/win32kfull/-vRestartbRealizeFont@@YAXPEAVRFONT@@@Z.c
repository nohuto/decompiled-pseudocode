/*
 * XREFs of ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C029BDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C012610C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C029BC84 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 */

void __fastcall vRestartbRealizeFont(struct RFONT *a1)
{
  __int64 v1; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FONTOBJ *v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 15);
  v4 = (struct _FONTOBJ *)a1;
  v3[0] = v1;
  RFONTOBJ::vDestroyFont(&v4, 0);
  PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v3);
  Win32FreePool(a1);
  v4 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
}
