/*
 * XREFs of BgkInitialize @ 0x1407FD810
 * Callers:
 *     InbvDriverInitialize @ 0x1407DB3A8 (InbvDriverInitialize.c)
 * Callees:
 *     BgkpTryEnableConsole @ 0x14014FE9C (BgkpTryEnableConsole.c)
 *     xHalSetSystemInformation @ 0x1405C733C (xHalSetSystemInformation.c)
 *     BgkpLockBgfxCodeSection @ 0x14075C67C (BgkpLockBgfxCodeSection.c)
 *     BgConsoleGetInterface @ 0x14075CBFC (BgConsoleGetInterface.c)
 *     BgLibraryInitialize @ 0x14075CD30 (BgLibraryInitialize.c)
 *     BgkDestroy @ 0x14075F69C (BgkDestroy.c)
 */

__int64 __fastcall BgkInitialize(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __int64 (__fastcall **Interface)(); // rax
  int v10; // eax
  int v11; // ecx

  if ( !a1 )
    return 3221225473LL;
  if ( a2 == 1 )
    return byte_140353AF0 == 0 ? 0xC0000001 : 0;
  if ( !a2 )
  {
    BgkDestroy();
    qword_1403566F0 = 0LL;
    BgkpLockBgfxCodeSection(v5, v4, v6, v7);
  }
  result = BgLibraryInitialize(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 184LL), a2);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      Interface = BgConsoleGetInterface();
      qword_140353B00 = (__int64)Interface;
      if ( Interface )
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))*Interface)(
          (unsigned int)InitConsoleFlags,
          4291217094LL,
          (unsigned int)dword_14036E098,
          0LL);
      v10 = off_140321B18();
      v11 = dword_14036BB30;
      if ( v10 < 0 )
        v11 = 2;
      dword_14036BB30 = v11;
    }
    byte_140353AF0 = 1;
    byte_140353B10 = 1;
    BgkpTryEnableConsole();
    return 0LL;
  }
  return result;
}
