/*
 * XREFs of PbmGetSoundLevel @ 0x180004E2C
 * Callers:
 *     s_pbmGetSoundLevel @ 0x180004E20 (s_pbmGetSoundLevel.c)
 * Callees:
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProcess@@@Z @ 0x18001B4EC (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProc.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B5F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     WPP_SF_dS @ 0x18007C3B8 (WPP_SF_dS.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800A2090 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 */

__int64 __fastcall PbmGetSoundLevel(CApplicationManager *a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  int Process; // eax
  __int64 v5; // rcx
  CUnknown *v6; // rdi
  __int64 v8; // rax
  __int64 v9; // r10
  CUnknown *v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v10 = 0LL;
  if ( a2 )
  {
    *a2 = 0;
    if ( g_ApplicationManager )
    {
      Process = CApplicationManager::RpcGetProcess(a1, a1, &v10);
      v6 = v10;
      v2 = Process;
      if ( Process >= 0 )
        *a2 = CApplicationManager::GetSoundLevel(v5, v10);
      if ( v6 )
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
        {
          v8 = SoundLevelToString((unsigned int)*a2);
          WPP_SF_dS(
            *(_QWORD *)(v9 + 16),
            12,
            (unsigned int)&WPP_cc4817decd7d1c7b2aff0e99c7413fd5_Traceguids,
            *((_DWORD *)v6 + 42),
            v8);
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
