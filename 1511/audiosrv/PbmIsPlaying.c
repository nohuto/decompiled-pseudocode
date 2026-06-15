/*
 * XREFs of PbmIsPlaying @ 0x1800036EC
 * Callers:
 *     s_pbmIsPlaying @ 0x1800036E0 (s_pbmIsPlaying.c)
 * Callees:
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x180003E3C (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001D7D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 *     WPP_SF_dS @ 0x1800776A8 (WPP_SF_dS.c)
 */

__int64 __fastcall PbmIsPlaying(CApplicationManager *a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  int Process; // eax
  CApplicationManager *v5; // rcx
  int v6; // r8d
  struct CProcess *v7; // rdi
  const wchar_t *v9; // rax
  struct CProcess *v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v10 = 0LL;
  if ( a2 )
  {
    *a2 = 0;
    if ( g_ApplicationManager )
    {
      Process = CApplicationManager::RpcGetProcess(a1, a1, &v10);
      v7 = v10;
      v2 = Process;
      if ( Process >= 0 )
        *a2 = CApplicationManager::IsPlaying(v5, v10, v6);
      if ( v7 )
      {
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v9 = L"Playing";
          if ( !*a2 )
            v9 = L"Paused";
          WPP_SF_dS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            13,
            (unsigned int)&WPP_17b92df939233e863430647977143f3d_Traceguids,
            *((_DWORD *)v7 + 42),
            (__int64)v9);
        }
        CUnknown::Release(v7);
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
