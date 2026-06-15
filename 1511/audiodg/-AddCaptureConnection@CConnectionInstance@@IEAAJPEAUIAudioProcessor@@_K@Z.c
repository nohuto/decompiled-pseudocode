/*
 * XREFs of ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140033334
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x14000DBF0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140009220 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ @ 0x1400175EC (-Release@-$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x1400261E8 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
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
  __int64 (__fastcall *v9)(volatile signed __int32 *); // rbx
  void *v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+88h] [rbp+48h] BYREF

  v6 = -2005139396;
  v12 = 0LL;
  v11 = 0LL;
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 40) == 2 )
    {
      v6 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v7 + 32) + 40LL), &v12);
      if ( v6 < 0 )
        goto LABEL_22;
      v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 96LL))(
             a2,
             a3,
             v12,
             *((_QWORD *)this + 1),
             0LL);
      if ( v6 < 0 )
        goto LABEL_22;
      ATL::CComPtrBase<IAudioProcessor>::Release(&v12);
    }
    else if ( *(_DWORD *)(v7 + 40) == 1 || *(_DWORD *)(v7 + 40) == 3 )
    {
      v6 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, void **))(v7 + 32))(
             **(_QWORD **)(v7 + 32),
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v11);
      if ( v6 < 0 )
        goto LABEL_22;
      v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, void *))(*(_QWORD *)a2 + 120LL))(
             a2,
             a3,
             *((_QWORD *)this + 1),
             v11);
      if ( v6 < 0 )
        goto LABEL_22;
      ATL::CComPtrBase<IAudioProcessor>::Release((__int64 *)&v11);
    }
  }
  v8 = *((_QWORD *)this + 3);
  if ( !v8 )
    goto LABEL_21;
  if ( *(_DWORD *)(v8 + 40) != 2 )
  {
    if ( *(_DWORD *)(v8 + 40) == 1 || *(_DWORD *)(v8 + 40) == 3 )
    {
      v6 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, void **))(v8 + 32))(
             **(_QWORD **)(v8 + 32),
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v11);
      if ( v6 < 0 )
        goto LABEL_22;
      v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, void *))(*(_QWORD *)a2 + 128LL))(
             a2,
             a3,
             *((_QWORD *)this + 1),
             v11);
      if ( v6 < 0 )
        goto LABEL_22;
      ATL::CComPtrBase<IAudioProcessor>::Release((__int64 *)&v11);
    }
LABEL_21:
    if ( v6 >= 0 )
      goto LABEL_26;
    goto LABEL_22;
  }
  v6 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v8 + 32) + 40LL), &v12);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 72LL))(
           a2,
           a3,
           v12,
           *((_QWORD *)this + 1),
           0LL);
    if ( v6 >= 0 )
    {
      ATL::CComPtrBase<IAudioProcessor>::Release(&v12);
      goto LABEL_21;
    }
  }
LABEL_22:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_5d27bd7bd7bfafaac91857425b42f44a_Traceguids, v6);
  }
LABEL_26:
  if ( v11 )
  {
    v9 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL);
    if ( v9 == ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::Release((volatile signed __int32 *)v11);
    else
      v9((volatile signed __int32 *)v11);
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v6;
}
