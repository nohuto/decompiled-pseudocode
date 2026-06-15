/*
 * XREFs of ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800084F0
 * Callers:
 *     ?OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180008030 (-OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_ @ 0x18000537C (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180007808 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180007B98 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x180008A54 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z @ 0x180008C10 (-RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::OnAutoUnduckWorkItem(CDuckingManager *this, struct CDuckWorkItem *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  const wchar_t *v7; // rax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v9; // r9
  const unsigned __int16 *v10; // rsi
  const unsigned __int16 *v11; // rax
  const unsigned __int16 *v12; // rax
  __int64 result; // rax
  UINT32 v14; // [rsp+20h] [rbp-39h]
  int v15; // [rsp+30h] [rbp-29h] BYREF
  __int64 v16; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v18; // [rsp+60h] [rbp+7h]
  int v19; // [rsp+68h] [rbp+Fh]
  int v20; // [rsp+6Ch] [rbp+13h]
  __int64 *v21; // [rsp+70h] [rbp+17h]
  int v22; // [rsp+78h] [rbp+1Fh]
  int v23; // [rsp+7Ch] [rbp+23h]
  int *v24; // [rsp+80h] [rbp+27h]
  int v25; // [rsp+88h] [rbp+2Fh]
  int v26; // [rsp+8Ch] [rbp+33h]

  v15 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x34u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids);
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2) || *((_DWORD *)a2 + 4) )
  {
    Sleep(0x1F4u);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    v10 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 72LL))(*(_QWORD *)a2);
    if ( CDuckingManager::RemoveDuckingGainStages(this, v10, &v16) >= 0 )
      v15 = CDuckingManager::RecalculateSessionVolumes(this, v10, &v16);
    if ( !*((_DWORD *)this + 76) )
    {
      v11 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 64LL))(*(_QWORD *)a2);
      v15 = CDuckingManager::NotifyFilteredClientsAutoUnduck(this, v11);
    }
    v12 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 64LL))(*(_QWORD *)a2);
    v15 = CDuckingManager::NotifyUnfilteredClientsAutoUnduck(this, v12);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  }
  else if ( *((_DWORD *)this + 76) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v7 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 64LL))(*(_QWORD *)a2);
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x35u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v7);
    }
    v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2;
    v16 = 0LL;
    v15 = (**v8)(v8, &GUID_08460157_7ba0_4775_a5a3_97302f08c239, &v16);
    if ( v15 >= 0 )
    {
      v14 = 0;
      LOBYTE(v9) = 1;
      v15 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64))(*(_QWORD *)v16 + 48LL))(
              v16,
              &DuckingPolicyGuid,
              0LL,
              v9);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    v4 = (const struct _TlgProvider_t *)v16;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  result = (unsigned int)v15;
  if ( v15 < 0 && (unsigned int)dword_180034030 > 2 )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v18 = "__FUNC__";
    v21 = &v16;
    v24 = &v15;
    v19 = 9;
    LODWORD(v16) = 1438;
    v22 = 4;
    v25 = 4;
    TlgWrite(v4, &unk_18002D869, v5, v6, v14, &pData);
    return (unsigned int)v15;
  }
  return result;
}
