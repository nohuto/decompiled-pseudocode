/*
 * XREFs of BgkInitialize @ 0x140787C58
 * Callers:
 *     InbvDriverInitialize @ 0x140767874 (InbvDriverInitialize.c)
 * Callees:
 *     BgkpTryEnableConsole @ 0x14011BC10 (BgkpTryEnableConsole.c)
 *     xHalSetSystemInformation @ 0x14054F598 (xHalSetSystemInformation.c)
 *     BgkpLockBgfxCodeSection @ 0x1406D9690 (BgkpLockBgfxCodeSection.c)
 *     BgConsoleGetInterface @ 0x1406D9BB4 (BgConsoleGetInterface.c)
 *     BgLibraryInitialize @ 0x1406D9CE8 (BgLibraryInitialize.c)
 *     BgkDestroy @ 0x1406DC654 (BgkDestroy.c)
 */

__int64 __fastcall BgkInitialize(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 (__fastcall **Interface)(); // rax
  int v6; // eax
  int v7; // ecx

  if ( !a1 )
    return 3221225473LL;
  if ( a2 == 1 )
    return byte_140305D78 == 0 ? 0xC0000001 : 0;
  if ( !a2 )
  {
    BgkDestroy();
    qword_1403063F0 = 0LL;
    BgkpLockBgfxCodeSection();
  }
  result = BgLibraryInitialize(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 184LL), a2);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      Interface = BgConsoleGetInterface();
      qword_140305D88 = (__int64)Interface;
      if ( Interface )
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))*Interface)(
          (unsigned int)InitConsoleFlags,
          4291217094LL,
          (unsigned int)dword_14031D098,
          0LL);
      v6 = off_1402D29C8();
      v7 = dword_14031B830;
      if ( v6 < 0 )
        v7 = 2;
      dword_14031B830 = v7;
    }
    byte_140305D78 = 1;
    byte_140305D99 = 1;
    BgkpTryEnableConsole();
    return 0LL;
  }
  return result;
}
