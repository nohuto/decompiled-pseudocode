/*
 * XREFs of ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800081CC
 * Callers:
 *     ?OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800080F0 (-OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180005B4C (WPP_SF_.c)
 *     WPP_SF_S @ 0x180005B6C (WPP_SF_S.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x180007828 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x180007C18 (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000874C (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x180008974 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ??0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z @ 0x180009FD8 (--0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::OnAutoDuckWorkItem(CDuckingManager *this, struct CDuckWorkItem *a2)
{
  int v4; // edi
  const wchar_t *v5; // rax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  volatile signed __int32 *v7; // rbx
  float v8; // xmm6_4
  int v9; // ecx
  int v10; // ecx
  HANDLE ProcessHeap; // rax
  CVolumeGainStage *v12; // rbx
  int v13; // eax
  const struct _GUID *v14; // rdx
  const unsigned __int16 *v15; // rdi
  int v16; // ebx
  const unsigned __int16 *v17; // rax
  int v18; // ebx
  const unsigned __int16 *v19; // rax
  int v21; // [rsp+20h] [rbp-30h]
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF

  v4 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x32u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2) || *((_DWORD *)a2 + 4) )
  {
    v15 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 72LL))(*(_QWORD *)a2);
    if ( (int)CDuckingManager::ApplyDuckingGainStages(this, v15) >= 0 )
      CDuckingManager::RecalculateSessionVolumes(this, v15, 0LL);
    v16 = *((_DWORD *)a2 + 2);
    v17 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 64LL))(*(_QWORD *)a2);
    CDuckingManager::NotifyFilteredClientsAutoDuck(this, v17, v15, v16);
    v18 = *((_DWORD *)a2 + 2);
    v19 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 64LL))(*(_QWORD *)a2);
    v4 = CDuckingManager::NotifyUnfilteredClientsAutoDuck(this, v19, v18);
  }
  else if ( *((_DWORD *)this + 76) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v5 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 64LL))(*(_QWORD *)a2);
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v5);
    }
    v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2;
    v7 = 0LL;
    v22 = 0LL;
    v8 = 0.0;
    v4 = (**v6)(v6, &GUID_08460157_7ba0_4775_a5a3_97302f08c239, &v22);
    if ( v4 >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v22 + 24LL))(v22) )
      {
        v9 = *((_DWORD *)this + 77);
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
              v8 = FLOAT_N6_0;
          }
          else
          {
            v8 = FLOAT_N18_0;
          }
        }
        else
        {
          v8 = FLOAT_N96_0;
        }
      }
      ProcessHeap = GetProcessHeap();
      v12 = (CVolumeGainStage *)HeapAlloc(ProcessHeap, 0, 0x38uLL);
      if ( v12 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
        v7 = (volatile signed __int32 *)CVolumeGainStage::CVolumeGainStage(v12, v14, v8, 0LL, v13 != 0);
      }
      else
      {
        v7 = 0LL;
      }
      if ( v7 )
        v4 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 *, __int128 *))(*(_QWORD *)v22 + 40LL))(
               v22,
               v7,
               &DuckingPolicyGuid);
      else
        v4 = -2147024882;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v22 + 24LL))(v22) )
      {
        v23 = 0LL;
        v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v22)(
               v22,
               &GUID_ec081b02_27c6_4867_9203_959f1731a3e5,
               &v23);
        if ( v4 >= 0 )
        {
          LOBYTE(v21) = 0;
          (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD))(*(_QWORD *)v23 + 24LL))(
            v23,
            2LL,
            0LL,
            0xFFFFFFFFLL,
            v21,
            0LL);
        }
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v7 && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1LL);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( v4 < 0 )
    AudPolicyLogError("CDuckingManager::OnAutoDuckWorkItem", 1310, v4);
  return (unsigned int)v4;
}
