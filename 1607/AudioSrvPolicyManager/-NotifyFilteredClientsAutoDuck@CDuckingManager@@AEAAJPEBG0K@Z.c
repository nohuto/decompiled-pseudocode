/*
 * XREFs of ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18000751C
 * Callers:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x180008118 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x180008DD4 (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180009044 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAUIAudioSessionInfo@@XZ @ 0x1800099F0 (-RemoveHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@AT.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x180009E60 (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000A35C (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::NotifyFilteredClientsAutoDuck(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4)
{
  CDuckingManager *v5; // r13
  unsigned int v6; // esi
  BOOL v7; // ebx
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  SIZE_T v10; // r12
  HANDLE ProcessHeap; // rax
  unsigned __int16 *v12; // rax
  unsigned __int16 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  const wchar_t *v16; // rax
  __int64 v17; // rax
  HANDLE v18; // rax
  const struct _TlgProvider_t *v19; // rcx
  const GUID *v20; // r8
  const GUID *v21; // r9
  int v22; // eax
  ATL::CAtlException *v24; // rbx
  UINT32 v25; // [rsp+20h] [rbp-128h]
  int DuckableSessionsList; // [rsp+30h] [rbp-118h] BYREF
  int v27; // [rsp+34h] [rbp-114h] BYREF
  const unsigned __int16 *v28; // [rsp+38h] [rbp-110h]
  unsigned __int16 *v29; // [rsp+40h] [rbp-108h]
  CDuckingManager *v30; // [rsp+48h] [rbp-100h]
  void **v31; // [rsp+50h] [rbp-F8h]
  unsigned __int16 *v32; // [rsp+58h] [rbp-F0h]
  __int64 v33; // [rsp+60h] [rbp-E8h]
  __int16 v34; // [rsp+68h] [rbp-E0h]
  __int128 v35; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+80h] [rbp-C8h]
  __int128 v37; // [rsp+88h] [rbp-C0h]
  int v38; // [rsp+98h] [rbp-B0h]
  __int64 v39; // [rsp+A0h] [rbp-A8h]
  ATL::CAtlException *v40; // [rsp+A8h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-98h] BYREF
  const char *v42; // [rsp+D0h] [rbp-78h]
  __int64 v43; // [rsp+D8h] [rbp-70h]
  int *v44; // [rsp+E0h] [rbp-68h]
  __int64 v45; // [rsp+E8h] [rbp-60h]
  int *p_DuckableSessionsList; // [rsp+F0h] [rbp-58h]
  __int64 v47; // [rsp+F8h] [rbp-50h]

  v39 = -2LL;
  v27 = a4;
  v28 = a3;
  v5 = this;
  v30 = this;
  v6 = 0;
  DuckableSessionsList = 0;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 10;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v7 = *((_QWORD *)v5 + 19) == 0LL;
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 104));
  if ( !v7 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Bu, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, a2);
    }
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
    v9 = 2 * v8 + 2;
    v10 = 2 * v8 + 66;
    ProcessHeap = GetProcessHeap();
    v12 = (unsigned __int16 *)HeapAlloc(ProcessHeap, 0, v10);
    v13 = v12;
    v29 = v12;
    if ( v12 )
    {
      *(_DWORD *)v12 = v10;
      *((_DWORD *)v12 + 1) = 512;
      *((_DWORD *)v12 + 6) = v9;
      *((_BYTE *)v12 + 60) = 1;
      *((_DWORD *)v12 + 14) = v27;
      StringCbCopyW(v12 + 32, v9, a2);
      DuckableSessionsList = CDuckingManager::GetDuckableSessionsList(v5, v28, &v35);
      if ( DuckableSessionsList >= 0 )
      {
        while ( v36 )
        {
          v14 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v35);
          v15 = v14;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v16 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 64LL))(v14);
            WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Cu, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v16);
          }
          DuckableSessionsList = 0;
          try
          {
            v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 64LL))(v15);
            v31 = &CGenerateDuckingNotification::`vftable';
            v32 = v13;
            v33 = v17;
            v34 = 257;
            CLockedList<CDuckingNotification,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v5 + 104));
          }
          catch ( ATL::CAtlException *v40 )
          {
            v24 = v40;
            if ( *(_DWORD *)v40 == -1073741571 )
              _resetstkoflw();
            DuckableSessionsList = *(_DWORD *)v24;
            v13 = v29;
            v5 = v30;
            continue;
          }
        }
      }
    }
    v18 = GetProcessHeap();
    HeapFree(v18, 0, v13);
    v22 = DuckableSessionsList;
    if ( DuckableSessionsList < 0 && (unsigned int)dword_180034030 > 2 )
    {
      v42 = "__FUNC__";
      v43 = 9LL;
      v27 = 870;
      v44 = &v27;
      v45 = 4LL;
      p_DuckableSessionsList = &DuckableSessionsList;
      v47 = 4LL;
      TlgWrite(v19, &unk_18002D869, v20, v21, v25, &pData);
      v22 = DuckableSessionsList;
    }
    v6 = v22;
  }
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(&v35);
  return v6;
}
