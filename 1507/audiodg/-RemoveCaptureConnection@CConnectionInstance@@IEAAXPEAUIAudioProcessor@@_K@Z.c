/*
 * XREFs of ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x140033378
 * Callers:
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140005C20 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ @ 0x140001344 (-Release@-$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140026088 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CConnectionInstance::RemoveCaptureConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+78h] [rbp+48h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 40) == 2 )
    {
      if ( (int)ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL), &v9) < 0 )
        goto LABEL_17;
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 104LL))(
        a2,
        a3,
        v9,
        *((_QWORD *)this + 1),
        -2LL);
      ATL::CComPtrBase<IAudioProcessor>::Release(&v9);
    }
    else if ( *(_DWORD *)(v6 + 40) == 1 || *(_DWORD *)(v6 + 40) == 3 )
    {
      if ( (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v6 + 32))(
             **(_QWORD **)(v6 + 32),
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v8) < 0 )
        goto LABEL_17;
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64))(*(_QWORD *)a2 + 136LL))(a2, a3, v8);
      ATL::CComPtrBase<IAudioProcessor>::Release(&v8);
    }
  }
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 40) == 2 )
    {
      if ( (int)ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v7 + 32) + 40LL), &v9) >= 0 )
      {
        (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 80LL))(
          a2,
          a3,
          v9,
          *((_QWORD *)this + 1));
        ATL::CComPtrBase<IAudioProcessor>::Release(&v9);
      }
    }
    else if ( (*(_DWORD *)(v7 + 40) == 1 || *(_DWORD *)(v7 + 40) == 3)
           && (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v7 + 32))(
                **(_QWORD **)(v7 + 32),
                &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                &v8) >= 0 )
    {
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64))(*(_QWORD *)a2 + 136LL))(a2, a3, v8);
      ATL::CComPtrBase<IAudioProcessor>::Release(&v8);
    }
  }
LABEL_17:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
