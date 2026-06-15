/*
 * XREFs of ?InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180028740
 * Callers:
 *     ?InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180017C80 (-InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObject@@$1?_GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800288A8 (--0-$CComQIPtr@UIAudioProcessingObject@@$1-_GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10@@3U__s_GUI.c)
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x1800288E8 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

__int64 __fastcall CMeterSoftware::InitializeAPOs(
        CMeterSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct IAudioProcessingObject **v4; // rsi
  int v7; // ebx
  CAudioSession *v8; // rcx
  unsigned int v9; // ebp
  _QWORD *v10; // r15
  __int64 v11; // rcx
  int v12; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v4 = a4;
  v7 = -2147023537;
  if ( !a4 )
    return 2147500035LL;
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_b86362f75b6f31617a79fa28476bc3ef_Traceguids, this);
    v8 = WPP_GLOBAL_Control;
  }
  if ( a3 )
  {
    v15 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v9 = 0;
    v10 = (_QWORD *)((char *)this + 40);
    while ( 1 )
    {
      ATL::CComPtrBase<IAudioMeter>::Release((char *)this + 40);
      v7 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, char *))(*v4)->lpVtbl->QueryInterface)(
             *v4,
             &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
             (char *)this + 40);
      if ( !v7 )
        break;
      ++v9;
      ++v4;
      if ( v9 >= a3 )
        goto LABEL_13;
    }
    ATL::CComQIPtr<IAudioProcessingObject,&__s_GUID const _GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10>::CComQIPtr<IAudioProcessingObject,&__s_GUID const _GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10>(
      &v16,
      *v10);
    v11 = v16;
    if ( v16 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v10 + 32LL))(*v10, (char *)this + 32);
      v11 = v16;
      v7 = v12;
    }
    else
    {
      v7 = -2147467262;
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_13:
    if ( *((_QWORD *)this + 5) )
    {
      v8 = WPP_GLOBAL_Control;
    }
    else
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_b86362f75b6f31617a79fa28476bc3ef_Traceguids);
        v8 = WPP_GLOBAL_Control;
      }
      v7 = -2147023537;
    }
    if ( v15 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v8 = WPP_GLOBAL_Control;
    }
  }
  if ( v8 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_DWORD *)v8 + 7) & 0x10000) != 0 && *((_BYTE *)v8 + 25) >= 4u )
    WPP_SF_q(*((_QWORD *)v8 + 2), 19LL, &WPP_b86362f75b6f31617a79fa28476bc3ef_Traceguids, this);
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("CMeterSoftware::InitializeAPOs", 768, v7);
  return (unsigned int)v7;
}
