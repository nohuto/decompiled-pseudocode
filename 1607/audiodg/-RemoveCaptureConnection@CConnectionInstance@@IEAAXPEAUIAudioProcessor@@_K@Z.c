/*
 * XREFs of ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x140030518
 * Callers:
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140008F20 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140011470 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x140016D04 (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140025018 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CConnectionInstance::RemoveCaptureConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 (__fastcall *v8)(int *); // rax
  void *v9; // [rsp+60h] [rbp+20h] BYREF
  __int64 v10; // [rsp+78h] [rbp+38h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 40) == 2 )
    {
      if ( (int)ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL), &v10) < 0 )
        goto LABEL_17;
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 104LL))(
        a2,
        a3,
        v10,
        *((_QWORD *)this + 1));
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v10);
    }
    else if ( *(_DWORD *)(v6 + 40) == 1 || *(_DWORD *)(v6 + 40) == 3 )
    {
      if ( (****(int (__fastcall *****)(_QWORD, GUID *, void **))(v6 + 32))(
             **(_QWORD **)(v6 + 32),
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v9) < 0 )
        goto LABEL_17;
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, void *))(*(_QWORD *)a2 + 136LL))(a2, a3, v9);
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v9);
    }
  }
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 40) == 2 )
    {
      if ( (int)ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v7 + 32) + 40LL), &v10) >= 0 )
      {
        (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 80LL))(
          a2,
          a3,
          v10,
          *((_QWORD *)this + 1));
        ATL::CComPtrBase<IAudioProcessingObject>::Release(&v10);
      }
    }
    else if ( (*(_DWORD *)(v7 + 40) == 1 || *(_DWORD *)(v7 + 40) == 3)
           && (****(int (__fastcall *****)(_QWORD, GUID *, void **))(v7 + 32))(
                **(_QWORD **)(v7 + 32),
                &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                &v9) >= 0 )
    {
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, void *))(*(_QWORD *)a2 + 136LL))(a2, a3, v9);
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v9);
    }
  }
LABEL_17:
  if ( v9 )
  {
    v8 = *(__int64 (__fastcall **)(int *))(*(_QWORD *)v9 + 16LL);
    if ( v8 == ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::Release((int *)v9);
    else
      v8((int *)v9);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
}
