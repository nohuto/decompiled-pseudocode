/*
 * XREFs of GetOemBitmapInfoForDpi @ 0x140124A34
 * Callers:
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     BitBltSysBmp @ 0x140124BEC (BitBltSysBmp.c)
 *     GetOemBitmapInfo @ 0x140124E90 (GetOemBitmapInfo.c)
 *     NtUserBitBltSysBmp @ 0x1401BFFE0 (NtUserBitBltSysBmp.c)
 * Callees:
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z @ 0x140124AC0 (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z.c)
 *     GetDpiCacheIndex @ 0x140302350 (GetDpiCacheIndex.c)
 */

char *__fastcall GetOemBitmapInfoForDpi(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 DpiCacheIndex; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _tagOEMBITMAPSET *v7; // rbx
  __int64 CurrentProcessWin32Process; // rax

  v2 = (int)a1;
  v3 = a2;
  if ( !a2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v3 = *(unsigned __int16 *)(CurrentProcessWin32Process + 272);
  }
  DpiCacheIndex = (unsigned int)GetDpiCacheIndex(v3);
  v7 = (struct _tagOEMBITMAPSET *)(W32GetUserSessionState(v6, v5) + 43288 + 760 * DpiCacheIndex);
  EnsureOemBitmapInfoForDpiSlot(v7, v3);
  return (char *)v7 + 8 * v2 + 16;
}
