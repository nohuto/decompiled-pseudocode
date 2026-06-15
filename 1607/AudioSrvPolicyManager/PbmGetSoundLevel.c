/*
 * XREFs of PbmGetSoundLevel @ 0x180018A30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_dS @ 0x1800112C4 (WPP_SF_dS.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180011348 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012764 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProcess@@@Z @ 0x180014A20 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProc.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmGetSoundLevel(CApplicationManager *a1, int *a2)
{
  unsigned int v2; // edi
  int Process; // eax
  struct CApplication *v5; // rcx
  struct CProcess *v6; // rbx
  const wchar_t *v7; // rax
  __int64 v8; // r10
  struct CProcess *v9; // rbx
  struct CProcess *v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v11 = 0LL;
  if ( a2 )
  {
    *a2 = 0;
    if ( g_ApplicationManager )
    {
      Process = CApplicationManager::RpcGetProcess(a1, a1, &v11);
      v6 = v11;
      v2 = Process;
      if ( Process >= 0 )
        *a2 = CApplicationManager::GetSoundLevel(v5, (__int64)v11);
      if ( v6 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v7 = SoundLevelToString(*a2);
          WPP_SF_dS(
            *(_QWORD *)(v8 + 16),
            0xCu,
            &WPP_b2b9e70fdf4835d1bdf2ce05ed3afacd_Traceguids,
            *((_DWORD *)v6 + 42),
            v7);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 2, 0xFFFFFFFF) == 1 )
        {
          v9 = v11;
          (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v11 + 32LL))(v11);
          (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
