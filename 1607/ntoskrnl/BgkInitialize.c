/*
 * XREFs of BgkInitialize @ 0x1407D3DF4
 * Callers:
 *     InbvDriverInitialize @ 0x1407B1F00 (InbvDriverInitialize.c)
 * Callees:
 *     BgkpTryEnableConsole @ 0x14012739C (BgkpTryEnableConsole.c)
 *     xHalSetSystemInformation @ 0x140581DF0 (xHalSetSystemInformation.c)
 *     BgkpLockBgfxCodeSection @ 0x140725674 (BgkpLockBgfxCodeSection.c)
 *     BgConsoleGetInterface @ 0x140725A90 (BgConsoleGetInterface.c)
 *     BgLibraryInitialize @ 0x140725CB8 (BgLibraryInitialize.c)
 *     BgkDestroy @ 0x140728724 (BgkDestroy.c)
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
    return byte_140328E20 == 0 ? 0xC0000001 : 0;
  if ( !a2 )
  {
    BgkDestroy();
    qword_140328B70 = 0LL;
    BgkpLockBgfxCodeSection();
  }
  result = BgLibraryInitialize(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 184LL), a2);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      Interface = BgConsoleGetInterface();
      qword_140328D08 = (__int64)Interface;
      if ( Interface )
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))*Interface)(
          (unsigned int)InitConsoleFlags,
          4291217094LL,
          (unsigned int)dword_1403420A8,
          0LL);
      v6 = off_1402F37E8();
      v7 = dword_140341130;
      if ( v6 < 0 )
        v7 = 2;
      dword_140341130 = v7;
    }
    byte_140328E20 = 1;
    byte_140328D13 = 1;
    BgkpTryEnableConsole();
    return 0LL;
  }
  return result;
}
