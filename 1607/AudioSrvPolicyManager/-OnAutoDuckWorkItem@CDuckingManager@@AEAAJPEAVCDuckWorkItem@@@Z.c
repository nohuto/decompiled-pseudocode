/*
 * XREFs of ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x180008118
 * Callers:
 *     ?OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180008030 (-OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_ @ 0x18000537C (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18000751C (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x180007A40 (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000879C (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x180008A54 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ??0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z @ 0x18000A294 (--0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::OnAutoDuckWorkItem(CDuckingManager *this, struct CDuckWorkItem *a2)
{
  const wchar_t *v4; // rax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  volatile signed __int32 *v6; // rbx
  float v7; // xmm6_4
  int v8; // ecx
  int v9; // ecx
  HANDLE ProcessHeap; // rax
  CVolumeGainStage *v11; // rbx
  int v12; // eax
  const struct _GUID *v13; // rdx
  const unsigned __int16 *v14; // r14
  int v15; // ebx
  const unsigned __int16 *v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // ebx
  const unsigned __int16 *v20; // rax
  const struct _TlgProvider_t *v21; // rcx
  const GUID *v22; // r8
  const GUID *v23; // r9
  __int64 result; // rax
  UINT32 v25; // [rsp+28h] [rbp-69h]
  int v26; // [rsp+48h] [rbp-49h] BYREF
  __int64 v27; // [rsp+50h] [rbp-41h] BYREF
  int v28; // [rsp+58h] [rbp-39h] BYREF
  __int64 v29; // [rsp+60h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-29h] BYREF
  const char *v31; // [rsp+88h] [rbp-9h]
  int v32; // [rsp+90h] [rbp-1h]
  int v33; // [rsp+94h] [rbp+3h]
  int *v34; // [rsp+98h] [rbp+7h]
  int v35; // [rsp+A0h] [rbp+Fh]
  int v36; // [rsp+A4h] [rbp+13h]
  int *v37; // [rsp+A8h] [rbp+17h]
  int v38; // [rsp+B0h] [rbp+1Fh]
  int v39; // [rsp+B4h] [rbp+23h]

  v26 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x32u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2) || *((_DWORD *)a2 + 4) )
  {
    v14 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 72LL))(*(_QWORD *)a2);
    if ( (int)CDuckingManager::ApplyDuckingGainStages(this, v14) >= 0 )
      v26 = CDuckingManager::RecalculateSessionVolumes(this, v14, 0LL);
    v15 = *((_DWORD *)a2 + 2);
    v16 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 64LL))(*(_QWORD *)a2);
    v17 = CDuckingManager::NotifyFilteredClientsAutoDuck(this, v16, v14, v15);
    v18 = *(_QWORD *)a2;
    v19 = *((_DWORD *)a2 + 2);
    v26 = v17;
    v20 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 64LL))(v18);
    v26 = CDuckingManager::NotifyUnfilteredClientsAutoDuck(this, v20, v19);
  }
  else if ( *((_DWORD *)this + 76) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v4 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 64LL))(*(_QWORD *)a2);
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v4);
    }
    v5 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2;
    v6 = 0LL;
    v27 = 0LL;
    v7 = 0.0;
    v26 = (**v5)(v5, &GUID_08460157_7ba0_4775_a5a3_97302f08c239, &v27);
    if ( v26 >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v27 + 24LL))(v27) )
      {
        v8 = *((_DWORD *)this + 77);
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 == 1 )
              v7 = FLOAT_N6_0;
          }
          else
          {
            v7 = FLOAT_N18_0;
          }
        }
        else
        {
          v7 = FLOAT_N96_0;
        }
      }
      ProcessHeap = GetProcessHeap();
      v11 = (CVolumeGainStage *)HeapAlloc(ProcessHeap, 0, 0x38uLL);
      if ( v11 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL))(v27);
        v6 = (volatile signed __int32 *)CVolumeGainStage::CVolumeGainStage(v11, v13, v7, 0LL, v12 != 0);
      }
      else
      {
        v6 = 0LL;
      }
      if ( v6 )
        v26 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 *, __int128 *))(*(_QWORD *)v27 + 40LL))(
                v27,
                v6,
                &DuckingPolicyGuid);
      else
        v26 = -2147024882;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v27 + 24LL))(v27) )
      {
        v29 = 0LL;
        v26 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v27)(
                v27,
                &GUID_ec081b02_27c6_4867_9203_959f1731a3e5,
                &v29);
        if ( v26 >= 0 )
        {
          LOBYTE(v25) = 0;
          (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v29 + 24LL))(
            v29,
            2LL,
            0LL,
            0xFFFFFFFFLL);
        }
        if ( v29 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v6 && _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1LL);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  result = (unsigned int)v26;
  if ( v26 < 0 && (unsigned int)dword_180034030 > 2 )
  {
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v31 = "__FUNC__";
    v34 = &v28;
    v37 = &v26;
    v32 = 9;
    v28 = 1310;
    v35 = 4;
    v38 = 4;
    TlgWrite(v21, &unk_18002D869, v22, v23, v25, &pData);
    return (unsigned int)v26;
  }
  return result;
}
