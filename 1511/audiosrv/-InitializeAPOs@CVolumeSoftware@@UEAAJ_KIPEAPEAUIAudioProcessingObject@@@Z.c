/*
 * XREFs of ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18006D7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180002254 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x1800424D8 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CVolumeSoftware::InitializeAPOs(
        CVolumeSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct IAudioProcessingObject **v4; // rbx
  CVolumeSoftware *v6; // rsi
  TraceLoggingHProvider v7; // rcx
  int v8; // ebx
  __int64 v9; // r15
  _QWORD *v10; // r12
  unsigned int v11; // eax
  unsigned int i; // ebx
  int v13; // edi
  int v14; // eax
  ATL::CAtlException *v16; // rbx
  unsigned int v17; // [rsp+30h] [rbp-58h]
  int v18; // [rsp+34h] [rbp-54h]
  ATL::CAtlException *v19; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+18h] BYREF
  struct IAudioProcessingObject **v22; // [rsp+A8h] [rbp+20h]

  v22 = a4;
  v4 = a4;
  v6 = this;
  v21 = 0;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x53u,
      (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
      (__int64)v6);
    v7 = WPP_GLOBAL_Control;
  }
  if ( a3 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 96));
    v9 = 0LL;
    while ( (unsigned int)v9 < a3 )
    {
      v10 = (_QWORD *)((char *)v6 + 88);
      Microsoft::WRL::WeakRef::~WeakRef((CVolumeSoftware *)((char *)v6 + 88));
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64))v4[v9]->lpVtbl->QueryInterface)(
             v4[v9],
             &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
             (__int64)v6 + 88) >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v10 + 40LL))(*v10, &v21);
        if ( v8 < 0 )
          goto LABEL_38;
        if ( *v10 )
          break;
      }
      v9 = (unsigned int)(v9 + 1);
      v4 = v22;
    }
    if ( *((_QWORD *)v6 + 11) )
    {
      v11 = v21;
      if ( *((_DWORD *)v6 + 17) != v21 && *((_DWORD *)v6 + 17) )
      {
        for ( i = 1; ; ++i )
        {
          v17 = i;
          if ( i >= v11 )
            break;
          try
          {
            if ( !*((_QWORD *)v6 + 5) )
              ATL::AtlThrowImpl(-2147024809);
            ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
              (__int64)v6 + 32,
              i,
              *((_QWORD *)v6 + 4));
          }
          catch ( ATL::CAtlException *v19 )
          {
            v16 = v19;
            if ( *(_DWORD *)v19 == -1073741571 )
              _resetstkoflw();
            v18 = *(_DWORD *)v16;
            v8 = *(_DWORD *)v16;
            v6 = this;
            if ( v18 < 0 )
            {
              v13 = 1;
              goto LABEL_37;
            }
            i = v17;
          }
          v11 = v21;
        }
        *((_DWORD *)v6 + 17) = v11;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 96));
      v13 = 0;
      v14 = (*(__int64 (__fastcall **)(CVolumeSoftware *))(*(_QWORD *)v6 + 216LL))(v6);
      v8 = v14;
      if ( v14 < 0 )
      {
        v7 = WPP_GLOBAL_Control;
        goto LABEL_43;
      }
      v7 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
LABEL_40:
        if ( v8 >= 0 )
          return (unsigned int)v8;
        goto LABEL_43;
      }
      WPP_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x55u,
        (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
        v6,
        v14);
LABEL_37:
      if ( !v13 )
      {
LABEL_39:
        v7 = WPP_GLOBAL_Control;
        goto LABEL_40;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x54u, (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids);
      }
      v8 = -2147467262;
    }
LABEL_38:
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 96));
    goto LABEL_39;
  }
  v8 = -2147467262;
LABEL_43:
  if ( v7 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v7 + 7) & 0x10000) != 0
    && *((_BYTE *)v7 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v7 + 2), 0x56u, (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids, v8);
  }
  return (unsigned int)v8;
}
