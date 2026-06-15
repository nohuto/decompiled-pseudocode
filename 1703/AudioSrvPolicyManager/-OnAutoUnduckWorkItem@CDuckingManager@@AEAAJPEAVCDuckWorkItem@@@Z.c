/*
 * XREFs of ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000851C
 * Callers:
 *     ?OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800080F0 (-OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180005B4C (WPP_SF_.c)
 *     WPP_SF_S @ 0x180005B6C (WPP_SF_S.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180007A74 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180007D68 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x180008974 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z @ 0x180008AB8 (-RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::OnAutoUnduckWorkItem(CDuckingManager *this, struct CDuckWorkItem *a2)
{
  int v4; // ebx
  const wchar_t *v5; // rax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v7; // r9
  const unsigned __int16 *v8; // rbx
  const unsigned __int16 *v9; // rax
  const unsigned __int16 *v10; // rax
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
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
    v8 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 72LL))(*(_QWORD *)a2);
    if ( (int)CDuckingManager::RemoveDuckingGainStages(this, v8, &v12) >= 0 )
      CDuckingManager::RecalculateSessionVolumes(this, v8, &v12);
    if ( !*((_DWORD *)this + 76) )
    {
      v9 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 64LL))(*(_QWORD *)a2);
      CDuckingManager::NotifyFilteredClientsAutoUnduck(this, v9);
    }
    v10 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 64LL))(*(_QWORD *)a2);
    v4 = CDuckingManager::NotifyUnfilteredClientsAutoUnduck(this, v10);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  }
  else
  {
    if ( !*((_DWORD *)this + 76) )
      return (unsigned int)v4;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v5 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 64LL))(*(_QWORD *)a2);
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x35u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v5);
    }
    v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2;
    v12 = 0LL;
    v4 = (**v6)(v6, &GUID_08460157_7ba0_4775_a5a3_97302f08c239, &v12);
    if ( v4 >= 0 )
    {
      LOBYTE(v7) = 1;
      v4 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64, _QWORD))(*(_QWORD *)v12 + 48LL))(
             v12,
             &DuckingPolicyGuid,
             0LL,
             v7,
             0LL);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v4 < 0 )
    AudPolicyLogError("CDuckingManager::OnAutoUnduckWorkItem", 1438, v4);
  return (unsigned int)v4;
}
