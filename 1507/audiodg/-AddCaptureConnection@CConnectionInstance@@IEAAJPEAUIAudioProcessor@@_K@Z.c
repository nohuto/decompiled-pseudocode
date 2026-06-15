/*
 * XREFs of ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x1400330E0
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x1400061C0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ @ 0x140001344 (-Release@-$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140026088 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConnectionInstance::AddCaptureConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+70h] [rbp+30h] BYREF
  __int64 v11; // [rsp+88h] [rbp+48h] BYREF

  v6 = -2005139396;
  v11 = 0LL;
  v10 = 0LL;
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 40) == 2 )
    {
      v6 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v7 + 32) + 40LL), &v11);
      if ( v6 < 0 )
        goto LABEL_22;
      v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 96LL))(
             a2,
             a3,
             v11,
             *((_QWORD *)this + 1),
             0LL);
      if ( v6 < 0 )
        goto LABEL_22;
      ATL::CComPtrBase<IAudioProcessor>::Release(&v11);
    }
    else if ( *(_DWORD *)(v7 + 40) == 1 || *(_DWORD *)(v7 + 40) == 3 )
    {
      v6 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v7 + 32))(
             **(_QWORD **)(v7 + 32),
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v10);
      if ( v6 < 0 )
        goto LABEL_22;
      v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 120LL))(
             a2,
             a3,
             *((_QWORD *)this + 1),
             v10);
      if ( v6 < 0 )
        goto LABEL_22;
      ATL::CComPtrBase<IAudioProcessor>::Release(&v10);
    }
  }
  v8 = *((_QWORD *)this + 3);
  if ( !v8 )
    goto LABEL_21;
  if ( *(_DWORD *)(v8 + 40) != 2 )
  {
    if ( *(_DWORD *)(v8 + 40) == 1 || *(_DWORD *)(v8 + 40) == 3 )
    {
      v6 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v8 + 32))(
             **(_QWORD **)(v8 + 32),
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v10);
      if ( v6 < 0 )
        goto LABEL_22;
      v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 128LL))(
             a2,
             a3,
             *((_QWORD *)this + 1),
             v10);
      if ( v6 < 0 )
        goto LABEL_22;
      ATL::CComPtrBase<IAudioProcessor>::Release(&v10);
    }
LABEL_21:
    if ( v6 >= 0 )
      goto LABEL_26;
    goto LABEL_22;
  }
  v6 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v8 + 32) + 40LL), &v11);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 72LL))(
           a2,
           a3,
           v11,
           *((_QWORD *)this + 1),
           0LL);
    if ( v6 >= 0 )
    {
      ATL::CComPtrBase<IAudioProcessor>::Release(&v11);
      goto LABEL_21;
    }
  }
LABEL_22:
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xEu,
      (__int64)&WPP_5d27bd7bd7bfafaac91857425b42f44a_Traceguids,
      v6);
  }
LABEL_26:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v6;
}
