/*
 * XREFs of ?Init@CTextCache@@QEAAJXZ @ 0x1800436CC
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180044F5C (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18009E1CC (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTextCache::Init(CTextCache *this)
{
  signed int v2; // edi
  HDC CompatibleDC; // rax
  signed int LastError; // eax
  int v6; // edx
  unsigned int v7; // ecx
  int v8; // r8d

  v2 = 0;
  SetLastError(0);
  CompatibleDC = CreateCompatibleDC(0LL);
  *((_QWORD *)this + 13) = CompatibleDC;
  if ( CompatibleDC )
  {
    SetBkMode(CompatibleDC, 2);
  }
  else
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( v2 >= 0 )
      v2 = CheckGUIHandleQuota(v7, v6, v8);
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x39u);
  }
  return (unsigned int)v2;
}
