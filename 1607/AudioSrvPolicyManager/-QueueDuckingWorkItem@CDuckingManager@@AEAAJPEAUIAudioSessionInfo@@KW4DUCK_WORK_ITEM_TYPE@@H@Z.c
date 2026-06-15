/*
 * XREFs of ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x180007CE8
 * Callers:
 *     ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180005D90 (-OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAu.c)
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180006150 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?AddTail@?$CAtlList@PEAVCDuckWorkItem@@V?$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCDuckWorkItem@@@Z @ 0x1800098E8 (-AddTail@-$CAtlList@PEAVCDuckWorkItem@@V-$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAPEAU.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDuckingManager::QueueDuckingWorkItem(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v8; // rsi
  HANDLE ProcessHeap; // rax
  _QWORD *v10; // rax
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  unsigned __int64 v13; // r9
  _DWORD *v14; // rdi
  __int64 v15; // rax
  HANDLE v16; // rax
  signed int LastError; // eax
  HANDLE v18; // rax
  ATL::CAtlException *v20; // rbx
  UINT32 v21; // [rsp+20h] [rbp-118h]
  int v22; // [rsp+30h] [rbp-108h] BYREF
  _DWORD *v23; // [rsp+38h] [rbp-100h] BYREF
  __int64 v24; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD *v25; // [rsp+48h] [rbp-F0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-E8h] BYREF
  char v27; // [rsp+58h] [rbp-E0h]
  __int64 v28; // [rsp+60h] [rbp-D8h]
  ATL::CAtlException *v29; // [rsp+68h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-C8h] BYREF
  const char *v31; // [rsp+90h] [rbp-A8h]
  __int64 v32; // [rsp+98h] [rbp-A0h]
  __int64 *v33; // [rsp+A0h] [rbp-98h]
  __int64 v34; // [rsp+A8h] [rbp-90h]
  int *v35; // [rsp+B0h] [rbp-88h]
  __int64 v36; // [rsp+B8h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR v37; // [rsp+C0h] [rbp-78h] BYREF
  const char *v38; // [rsp+E0h] [rbp-58h]
  __int64 v39; // [rsp+E8h] [rbp-50h]
  _QWORD *v40; // [rsp+F0h] [rbp-48h]
  __int64 v41; // [rsp+F8h] [rbp-40h]
  int *v42; // [rsp+100h] [rbp-38h]
  __int64 v43; // [rsp+108h] [rbp-30h]

  v28 = -2LL;
  v8 = a1;
  v24 = a1;
  v22 = 0;
  ProcessHeap = GetProcessHeap();
  v10 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v14 = v10;
  v25 = v10;
  if ( v10 )
  {
    *v10 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v14[2] = a3;
    v14[3] = a4;
    v14[4] = a5;
  }
  else
  {
    v14 = 0LL;
  }
  v23 = v14;
  v25 = v14;
  if ( !v14 )
    goto LABEL_27;
  lpCriticalSection = (LPCRITICAL_SECTION)(v8 + 208);
  v27 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v22 = 0;
  try
  {
    ATL::CAtlList<CDuckWorkItem *,ATL::CElementTraits<CDuckWorkItem *>>::AddTail(v8 + 248, &v25);
  }
  catch ( ATL::CAtlException *v29 )
  {
    v20 = v29;
    if ( *(_DWORD *)v29 == -1073741571 )
      _resetstkoflw();
    v22 = *(_DWORD *)v20;
    v14 = v23;
    v8 = v24;
  }
  if ( v27 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v27 = 0;
  }
  if ( v22 < 0 )
  {
    if ( *(_QWORD *)v14 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v14 + 16LL))(*(_QWORD *)v14);
    v18 = GetProcessHeap();
    HeapFree(v18, 0, v14);
LABEL_27:
    v22 = -2147024882;
    goto LABEL_28;
  }
  if ( *(_QWORD *)(v8 + 296)
    || (v15 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64))(*(_QWORD *)ThreadPool + 56LL))(
                ThreadPool,
                CDuckingManager::OnDuckWorkItem,
                v8),
        (*(_QWORD *)(v8 + 296) = v15) != 0LL) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
      ThreadPool,
      *(_QWORD *)(v8 + 296));
  }
  else
  {
    if ( *(_QWORD *)v14 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v14 + 16LL))(*(_QWORD *)v14);
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v14);
    LastError = GetLastError();
    v13 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v13 = (unsigned int)LastError;
    v22 = v13;
    v11 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x31u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v13);
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v31 = "__FUNC__";
      v32 = 9LL;
      LODWORD(v24) = 1100;
      v33 = &v24;
      v34 = 4LL;
      v35 = &v22;
      v36 = 4LL;
      TlgWrite(v11, &unk_18002D869, v12, (LPCGUID)v13, v21, &pData);
    }
  }
LABEL_28:
  if ( v22 < 0 && (unsigned int)dword_180034030 > 2 )
  {
    v38 = "__FUNC__";
    v39 = 9LL;
    LODWORD(v23) = 1116;
    v40 = &v23;
    v41 = 4LL;
    v42 = &v22;
    v43 = 4LL;
    TlgWrite(v11, &unk_18002D869, v12, (LPCGUID)v13, v21, &v37);
  }
  return (unsigned int)v22;
}
