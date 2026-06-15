/*
 * XREFs of ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180056ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180026A60 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x18004FFB4 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeSoftware::InitializeAPOs(
        CVolumeSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct IAudioProcessingObject **v4; // rdi
  CVolumeSoftware *v6; // rsi
  int v7; // edi
  unsigned int i; // r14d
  _QWORD *v9; // r13
  unsigned int v10; // eax
  unsigned int j; // edi
  int v12; // eax
  int *v14; // rbx
  unsigned int v15; // [rsp+30h] [rbp-68h]
  ATL::CAtlException *v16; // [rsp+40h] [rbp-58h] BYREF
  LPCRITICAL_SECTION v17; // [rsp+48h] [rbp-50h] BYREF
  char v18; // [rsp+50h] [rbp-48h]
  unsigned int v20; // [rsp+B0h] [rbp+18h] BYREF
  struct IAudioProcessingObject **v21; // [rsp+B8h] [rbp+20h]

  v21 = a4;
  v4 = a4;
  v6 = this;
  v20 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x37u,
      (__int64)&WPP_2804faa4bc893de444441e4f62789fd8_Traceguids,
      (__int64)this);
  }
  if ( a3 )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v17, (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 208));
    for ( i = 0; i < a3; ++i )
    {
      v9 = (_QWORD *)((char *)v6 + 200);
      ATL::CComPtrBase<IPart>::Release((_QWORD *)v6 + 25);
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64))v4[i]->lpVtbl->QueryInterface)(
             v4[i],
             &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
             (__int64)v6 + 200) >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v9 + 40LL))(*v9, &v20);
        if ( v7 < 0 )
        {
LABEL_14:
          if ( v18 )
            ATL::CCritSecLock::Unlock(&v17);
          goto LABEL_42;
        }
        if ( *v9 )
          break;
        v4 = v21;
      }
    }
    if ( !*((_QWORD *)v6 + 25) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, (__int64)&WPP_2804faa4bc893de444441e4f62789fd8_Traceguids);
      }
      v7 = -2147467262;
      if ( v18 )
        ATL::CCritSecLock::Unlock(&v17);
      goto LABEL_43;
    }
    v10 = v20;
    if ( *((_DWORD *)v6 + 29) != v20 && *((_DWORD *)v6 + 29) )
    {
      for ( j = 1; ; ++j )
      {
        v15 = j;
        if ( j >= v10 )
          break;
        try
        {
          if ( !*((_QWORD *)v6 + 11) )
            ATL::AtlThrowImpl(-2147024809);
          ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
            (__int64)v6 + 80,
            j,
            *((_QWORD *)v6 + 10));
        }
        catch ( ATL::CAtlException *v16 )
        {
          v14 = (int *)v16;
          if ( *(_DWORD *)v16 == -1073741571 )
            _o__resetstkoflw();
          v7 = *v14;
          if ( *v14 < 0 )
            goto LABEL_14;
          v6 = this;
          j = v15;
        }
        v10 = v20;
      }
      *((_DWORD *)v6 + 29) = v10;
    }
    if ( v18 )
      ATL::CCritSecLock::Unlock(&v17);
    v12 = (*(__int64 (__fastcall **)(CVolumeSoftware *))(*(_QWORD *)v6 + 216LL))(v6);
    v7 = v12;
    if ( v12 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x39u,
          (__int64)&WPP_2804faa4bc893de444441e4f62789fd8_Traceguids,
          v6,
          v12);
      }
LABEL_42:
      if ( v7 >= 0 )
        return (unsigned int)v7;
    }
  }
  else
  {
    v7 = -2147467262;
  }
LABEL_43:
  AudSrvTraceLoggingErrorHelper("CVolumeSoftware::InitializeAPOs", 2088, v7);
  return (unsigned int)v7;
}
