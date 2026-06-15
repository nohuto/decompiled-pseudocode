/*
 * XREFs of AudioDGGetVpoFromVpoContext @ 0x140001640
 * Callers:
 *     <none>
 * Callees:
 *     ?FindKey@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEBAHAEBK@Z @ 0x1400014A4 (-FindKey@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@Q.c)
 *     ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400035A0 (-GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualPro.c)
 *     ?GetProtectedOutputController@CSystemAudioDeviceSharedBase@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x140005D80 (-GetProtectedOutputController@CSystemAudioDeviceSharedBase@@UEAAJIPEAPEAUIAudioProtectedOutputCo.c)
 *     ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x140016830 (-Release@CVirtualProtectedOutput@@UEAAKXZ.c)
 *     ?Release@CProtectedOutputController@@UEAAKXZ @ 0x140016B90 (-Release@CProtectedOutputController@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall AudioDGGetVpoFromVpoContext(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct IAudioVirtualProtectedOutput **a5)
{
  int Key; // eax
  __int64 v8; // rbx
  __int64 v9; // rdi
  int (*v10)(CSystemAudioDeviceSharedBase *__hidden, unsigned int, struct IAudioProtectedOutputController **); // rsi
  int ProtectedOutputController; // eax
  unsigned int v12; // esi
  CStreamGroup *v13; // rbx
  __int64 (__fastcall *v14)(CStreamGroup *__hidden, unsigned __int64, unsigned int, struct IAudioProtectedOutputController *, struct IAudioVirtualProtectedOutput **); // rdi
  int StreamVpo; // eax
  struct IAudioVirtualProtectedOutput *v16; // rcx
  CVirtualProtectedOutput *v17; // rbx
  unsigned int (__fastcall *v18)(CProtectedOutputController *__hidden); // rbx
  unsigned int (__fastcall *v19)(CVirtualProtectedOutput *__hidden); // rdi
  struct IAudioVirtualProtectedOutput *v21; // [rsp+30h] [rbp-10h] BYREF
  struct IAudioProtectedOutputController *v22; // [rsp+38h] [rbp-8h] BYREF
  int v23; // [rsp+68h] [rbp+28h] BYREF

  v23 = a2;
  v21 = 0LL;
  v22 = 0LL;
  Key = ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::FindKey(
          a1,
          &v23);
  if ( Key == -1 )
    return (unsigned int)-2147023728;
  if ( Key < 0 || Key >= dword_140055E18 )
  {
    RaiseException(0xC000008C, 1u, 0, 0LL);
    JUMPOUT(0x14001C270LL);
  }
  v8 = *((_QWORD *)Block + Key);
  if ( !v8 )
  {
    return (unsigned int)-2147023728;
  }
  else
  {
    v9 = *(_QWORD *)(v8 + 72);
    v10 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, unsigned int, struct IAudioProtectedOutputController **))(*(_QWORD *)(v9 + 16) + 24LL);
    if ( v10 == CSystemAudioDeviceSharedBase::GetProtectedOutputController )
      ProtectedOutputController = CSystemAudioDeviceSharedBase::GetProtectedOutputController(
                                    (CSystemAudioDeviceSharedBase *)(v9 + 16),
                                    a4,
                                    &v22);
    else
      ProtectedOutputController = ((__int64 (__fastcall *)(__int64, _QWORD, struct IAudioProtectedOutputController **))v10)(
                                    v9 + 16,
                                    a4,
                                    &v22);
    v12 = ProtectedOutputController;
    if ( ProtectedOutputController < 0
      || ((v13 = *(CStreamGroup **)(v8 + 64)) == 0LL
        ? (StreamVpo = (*(__int64 (__fastcall **)(struct IAudioProtectedOutputController *, _QWORD, struct IAudioVirtualProtectedOutput **))(*(_QWORD *)v22 + 24LL))(
                         v22,
                         0LL,
                         &v21))
        : (v14 = *(__int64 (__fastcall **)(CStreamGroup *__hidden, unsigned __int64, unsigned int, struct IAudioProtectedOutputController *, struct IAudioVirtualProtectedOutput **))(*(_QWORD *)v13 + 80LL),
           v14 != CStreamGroup::GetStreamVpo)
        ? (StreamVpo = v14(v13, a3, a4, v22, &v21))
        : (StreamVpo = CStreamGroup::GetStreamVpo(v13, a3, a4, v22, &v21)),
          v12 = StreamVpo,
          StreamVpo < 0) )
    {
      v17 = v21;
    }
    else
    {
      v16 = v21;
      v17 = 0LL;
      v21 = 0LL;
      *a5 = v16;
    }
    if ( v22 )
    {
      v18 = *(unsigned int (__fastcall **)(CProtectedOutputController *__hidden))(*(_QWORD *)v22 + 16LL);
      if ( v18 == CProtectedOutputController::Release )
        CProtectedOutputController::Release(v22);
      else
        v18(v22);
      v17 = v21;
    }
    if ( v17 )
    {
      v19 = *(unsigned int (__fastcall **)(CVirtualProtectedOutput *__hidden))(*(_QWORD *)v17 + 16LL);
      if ( v19 == CVirtualProtectedOutput::Release )
        CVirtualProtectedOutput::Release(v17);
      else
        v19(v17);
    }
  }
  return v12;
}
