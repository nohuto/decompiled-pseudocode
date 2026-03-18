/*
 * XREFs of bSetFntCacheReg @ 0x14029678C
 * Callers:
 *     ?FNTCachepInit@@YAXPEBG@Z @ 0x1401C5E88 (-FNTCachepInit@@YAXPEBG@Z.c)
 *     EngFntCacheFault @ 0x1402960A0 (EngFntCacheFault.c)
 *     FNTCachepClose @ 0x14031BBBC (FNTCachepClose.c)
 * Callees:
 *     bSetRegDWORDValue @ 0x140251908 (bSetRegDWORDValue.c)
 */

_BOOL8 __fastcall bSetFntCacheReg(unsigned int a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rbx
  __int64 SessionState; // rax

  v2 = a2;
  v3 = a1;
  SessionState = W32GetSessionState(a1, a2);
  return bSetRegDWORDValue(*(HANDLE *)(*(_QWORD *)(SessionState + 96) + 19608LL), off_14035C190[v3], v2);
}
