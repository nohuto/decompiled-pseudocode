/*
 * XREFs of PbmIsPlaying @ 0x180003A80
 * Callers:
 *     s_pbmIsPlaying @ 0x180003B20 (s_pbmIsPlaying.c)
 * Callees:
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x180002674 (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B5F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     WPP_SF_dS @ 0x18007C3B8 (WPP_SF_dS.c)
 */

__int64 __fastcall PbmIsPlaying(CApplicationManager *a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  int Process; // eax
  CApplicationManager *v5; // rcx
  struct CProcess *v6; // rdi
  const wchar_t *v8; // rax
  struct CProcess *v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v9 = 0LL;
  if ( a2 )
  {
    *a2 = 0;
    if ( g_ApplicationManager )
    {
      Process = CApplicationManager::RpcGetProcess(a1, a1, &v9);
      v6 = v9;
      v2 = Process;
      if ( Process >= 0 )
        *a2 = CApplicationManager::IsPlaying(v5, v9);
      if ( v6 )
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
        {
          v8 = L"Playing";
          if ( !*a2 )
            v8 = L"Paused";
          WPP_SF_dS(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            13,
            (unsigned int)&WPP_cc4817decd7d1c7b2aff0e99c7413fd5_Traceguids,
            *((_DWORD *)v6 + 42),
            (__int64)v8);
        }
        CUnknown::Release(v6);
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
