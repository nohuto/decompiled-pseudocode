/*
 * XREFs of ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x1800A5240
 * Callers:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A5A30 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x1800070AC (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18002EF60 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Attach@?$CComPtrBase@UIAudioSessionInfo@@@ATL@@QEAAXPEAUIAudioSessionInfo@@@Z @ 0x180067FD4 (-Attach@-$CComPtrBase@UIAudioSessionInfo@@@ATL@@QEAAXPEAUIAudioSessionInfo@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800A4790 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x1800A4920 (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?IsListEmpty@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAHXZ @ 0x1800A51E0 (-IsListEmpty@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAHXZ.c)
 *     ?RemoveHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAUIAudioSessionInfo@@XZ @ 0x1800A6874 (-RemoveHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@AT.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDuckingManager::NotifyFilteredClientsAutoDuck(
        CDuckingManager *this,
        wchar_t *a2,
        const unsigned __int16 *a3,
        int a4)
{
  unsigned int v5; // esi
  int DuckableSessionsList; // r14d
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  int v9; // r13d
  LPVOID v10; // rax
  void (__fastcall **v11)(_QWORD, CDuckingNotification *); // r15
  CDuckingManager *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rbx
  const wchar_t *v15; // rax
  void (__fastcall **v16)(_QWORD, CDuckingNotification *); // rax
  __int64 v18; // rax
  int *v21; // rbx
  int *v22; // rbx
  __int64 v23; // [rsp+28h] [rbp-B0h] BYREF
  void (__fastcall **v24)(_QWORD, CDuckingNotification *); // [rsp+30h] [rbp-A8h]
  __int128 v25; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-90h]
  __int128 v27; // [rsp+50h] [rbp-88h]
  int v28; // [rsp+60h] [rbp-78h]
  void (__fastcall **v29[3])(_QWORD, CDuckingNotification *); // [rsp+68h] [rbp-70h] BYREF
  __int16 v30; // [rsp+80h] [rbp-58h]
  __int64 v31; // [rsp+88h] [rbp-50h]
  ATL::CAtlException *v32; // [rsp+90h] [rbp-48h] BYREF
  ATL::CAtlException *v33; // [rsp+98h] [rbp-40h] BYREF
  CDuckingManager *v34; // [rsp+E0h] [rbp+8h] BYREF
  const wchar_t *v35; // [rsp+F0h] [rbp+18h]
  int v36; // [rsp+F8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v34 = this;
  v31 = -2LL;
  v5 = 0;
  DuckableSessionsList = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 10;
  if ( !CLockedList<CDuckingNotification,1,0>::IsListEmpty((LPCRITICAL_SECTION)((char *)this + 104)) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x2Bu,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        a2);
    }
    v7 = -1LL;
    do
      ++v7;
    while ( a2[v7] );
    v8 = 2 * v7 + 2;
    v9 = 2 * v7 + 66;
    v10 = operator new(2 * v7 + 66);
    v11 = (void (__fastcall **)(_QWORD, CDuckingNotification *))v10;
    v24 = (void (__fastcall **)(_QWORD, CDuckingNotification *))v10;
    if ( !v10 )
      goto LABEL_19;
    *(_DWORD *)v10 = v9;
    *((_DWORD *)v10 + 1) = 512;
    *((_DWORD *)v10 + 6) = v8;
    *((_BYTE *)v10 + 60) = 1;
    *((_DWORD *)v10 + 14) = v36;
    StringCbCopyW((char *)v10 + 64, v8, (char *)a2);
    v12 = v34;
    DuckableSessionsList = CDuckingManager::GetDuckableSessionsList(v34, v35, (__int64 *)&v25);
    if ( DuckableSessionsList >= 0 )
    {
      while ( v26 )
      {
        v23 = 0LL;
        v13 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v25);
        ATL::CComPtrBase<IAudioSessionInfo>::Attach(&v23, v13);
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
        {
          v14 = v23;
        }
        else
        {
          v14 = v23;
          v15 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 64LL))(v23);
          WPP_SF_S(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x2Cu,
            (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
            v15);
        }
        DuckableSessionsList = 0;
        try
        {
          v16 = (void (__fastcall **)(_QWORD, CDuckingNotification *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 64LL))(v14);
          v29[0] = (void (__fastcall **)(_QWORD, CDuckingNotification *))&CGenerateDuckingNotification::`vftable';
          v29[1] = v11;
          v29[2] = v16;
          v30 = 257;
          CLockedList<CDuckingNotification,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v12 + 104), v29);
        }
        catch ( ATL::CAtlException *v32 )
        {
          v21 = (int *)v32;
          if ( *(_DWORD *)v32 == -1073741571 )
            _resetstkoflw();
          DuckableSessionsList = *v21;
          v11 = v24;
          v14 = v23;
          v12 = v34;
        }
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    else
    {
LABEL_19:
      while ( v26 )
      {
        v34 = 0LL;
        DuckableSessionsList = 0;
        try
        {
          v18 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v25);
          ATL::CComPtrBase<IAudioSessionInfo>::Attach(&v34, v18);
        }
        catch ( ATL::CAtlException *v33 )
        {
          v22 = (int *)v33;
          if ( *(_DWORD *)v33 == -1073741571 )
            _resetstkoflw();
          DuckableSessionsList = *v22;
          v11 = v24;
        }
        if ( v34 )
          (*(void (__fastcall **)(CDuckingManager *))(*(_QWORD *)v34 + 16LL))(v34);
      }
    }
    operator delete(v11);
    if ( DuckableSessionsList < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x2Du,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        DuckableSessionsList);
    }
    v5 = DuckableSessionsList;
  }
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64 *)&v25);
  return v5;
}
