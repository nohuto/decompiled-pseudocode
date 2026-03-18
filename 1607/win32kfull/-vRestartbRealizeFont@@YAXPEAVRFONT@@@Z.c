/*
 * XREFs of ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C029B4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0026C2C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C029B174 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 */

void __fastcall vRestartbRealizeFont(struct RFONT *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FONTOBJ *v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 15);
  v5 = (struct _FONTOBJ *)a1;
  v4[0] = v1;
  RFONTOBJ::vDestroyFont(&v5, 0);
  PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v4);
  Win32FreePool(a1, v3);
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
}
