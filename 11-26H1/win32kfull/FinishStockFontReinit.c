/*
 * XREFs of FinishStockFontReinit @ 0x140232B40
 * Callers:
 *     <none>
 * Callees:
 *     FinishStockFontInit @ 0x14010FBC0 (FinishStockFontInit.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x140232C6C (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     hfontInitDefaultGuiFont @ 0x1403FB52C (hfontInitDefaultGuiFont.c)
 */

__int64 __fastcall FinishStockFontReinit(Gre::Base *c)
{
  unsigned int v1; // esi
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  __int64 v3; // rbx
  unsigned int CurrentProcessId; // eax
  __int64 v5; // r8
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r8
  void *inited; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // ecx
  __int64 result; // rax

  v1 = (unsigned int)c;
  v2 = Gre::Base::Globals(c);
  v3 = *(_QWORD *)(*((_QWORD *)v2 + 386) + 136LL);
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  LOBYTE(v5) = 10;
  HmgSetOwner(v3, CurrentProcessId & 0xFFFFFFFC, v5);
  GreDeleteObject(*(_QWORD *)(*((_QWORD *)v2 + 386) + 136LL));
  *(_QWORD *)(*((_QWORD *)v2 + 386) + 136LL) = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)v2 + 387) + 136LL);
  v7 = (unsigned int)PsGetCurrentProcessId();
  LOBYTE(v8) = 10;
  HmgSetOwner(v6, v7 & 0xFFFFFFFC, v8);
  GreDeleteObject(*(_QWORD *)(*((_QWORD *)v2 + 387) + 136LL));
  *(_QWORD *)(*((_QWORD *)v2 + 387) + 136LL) = 0LL;
  inited = (void *)hfontInitDefaultGuiFont(0xFFFFFFFFLL);
  bSetStockFont(inited, 17, 0);
  FinishStockFontInit(v1, v10, v11);
  result = W32GetSessionState(v13, v12);
  *(_DWORD *)(*(_QWORD *)(result + 96) + 24112LL) = 0;
  return result;
}
