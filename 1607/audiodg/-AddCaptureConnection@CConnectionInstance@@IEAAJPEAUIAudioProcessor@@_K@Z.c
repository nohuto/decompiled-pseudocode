/*
 * XREFs of ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140030288
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x140009510 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140011470 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x140016D04 (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140025018 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConnectionInstance::AddCaptureConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 (__fastcall *v10)(int *); // rax
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  void *v13; // [rsp+88h] [rbp+48h] BYREF

  v6 = -2005139396;
  v7 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 40) == 2 )
    {
      v6 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v8 + 32) + 40LL), &v12);
      if ( v6 < 0 )
      {
LABEL_16:
        v7 = v12;
        goto LABEL_23;
      }
      v7 = v12;
      v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 96LL))(
             a2,
             a3,
             v12,
             *((_QWORD *)this + 1),
             0LL);
      if ( v6 < 0 )
        goto LABEL_23;
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v12);
      v7 = v12;
    }
    else if ( *(_DWORD *)(v8 + 40) == 1 || *(_DWORD *)(v8 + 40) == 3 )
    {
      v6 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, void **))(v8 + 32))(
             **(_QWORD **)(v8 + 32),
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v13);
      if ( v6 < 0 )
        goto LABEL_23;
      v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, void *))(*(_QWORD *)a2 + 120LL))(
             a2,
             a3,
             *((_QWORD *)this + 1),
             v13);
      if ( v6 < 0 )
        goto LABEL_23;
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v13);
    }
  }
  v9 = *((_QWORD *)this + 3);
  if ( !v9 )
    goto LABEL_22;
  if ( *(_DWORD *)(v9 + 40) != 2 )
  {
    if ( *(_DWORD *)(v9 + 40) == 1 || *(_DWORD *)(v9 + 40) == 3 )
    {
      v6 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, void **))(v9 + 32))(
             **(_QWORD **)(v9 + 32),
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v13);
      if ( v6 < 0 )
        goto LABEL_23;
      v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, void *))(*(_QWORD *)a2 + 128LL))(
             a2,
             a3,
             *((_QWORD *)this + 1),
             v13);
      if ( v6 < 0 )
        goto LABEL_23;
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v13);
    }
LABEL_22:
    if ( v6 >= 0 )
      goto LABEL_28;
    goto LABEL_23;
  }
  v6 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v9 + 32) + 40LL), &v12);
  if ( v6 < 0 )
    goto LABEL_16;
  v7 = v12;
  v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 72LL))(
         a2,
         a3,
         v12,
         *((_QWORD *)this + 1),
         0LL);
  if ( v6 >= 0 )
  {
    ATL::CComPtrBase<IAudioProcessingObject>::Release(&v12);
    v7 = v12;
    goto LABEL_22;
  }
LABEL_23:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_1ca138749e453a9e5342dd7aa161b4a4_Traceguids, v6);
  }
  AudDGTraceLoggingErrorHelper("CConnectionInstance::AddCaptureConnection", 584, v6);
LABEL_28:
  if ( v13 )
  {
    v10 = *(__int64 (__fastcall **)(int *))(*(_QWORD *)v13 + 16LL);
    if ( v10 == ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::Release((int *)v13);
    else
      v10((int *)v13);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
