/*
 * XREFs of AudioDGGetVpoFromVpoContext @ 0x1400016E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProtectedOutputController@CSystemAudioDeviceOffload@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x140001830 (-GetProtectedOutputController@CSystemAudioDeviceOffload@@UEAAJIPEAPEAUIAudioProtectedOutputContr.c)
 *     ?FindKey@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEBAHAEBK@Z @ 0x140002058 (-FindKey@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@Q.c)
 *     ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400117A0 (-GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualPro.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
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
  __int64 (__fastcall *v10)(CSystemAudioDeviceOffload *__hidden, unsigned int, struct IAudioProtectedOutputController **); // rsi
  int ProtectedOutputController; // eax
  unsigned int v12; // esi
  CStreamGroup *v13; // rbx
  __int64 (__usercall *v14)@<rax>(CStreamGroup *__hidden@<rcx>, unsigned __int64@<rdx>, unsigned int@<r8d>, struct IAudioProtectedOutputController *@<r9>, struct IAudioVirtualProtectedOutput **); // rdi
  int StreamVpo; // eax
  struct IAudioVirtualProtectedOutput *v16; // rcx
  struct IAudioVirtualProtectedOutput *v17; // rbx
  struct IAudioVirtualProtectedOutput *v19; // [rsp+30h] [rbp-10h] BYREF
  struct IAudioProtectedOutputController *v20; // [rsp+38h] [rbp-8h] BYREF
  int v21; // [rsp+68h] [rbp+28h] BYREF

  v21 = a2;
  v19 = 0LL;
  v20 = 0LL;
  Key = ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::FindKey(
          a1,
          &v21);
  if ( Key == -1 )
    return (unsigned int)-2147023728;
  if ( Key < 0 || Key >= dword_140055E20 )
  {
    RaiseException(0xC000008C, 1u, 0, 0LL);
    JUMPOUT(0x14001C234LL);
  }
  v8 = *((_QWORD *)Block + Key);
  if ( !v8 )
  {
    return (unsigned int)-2147023728;
  }
  else
  {
    v9 = *(_QWORD *)(v8 + 72);
    v10 = *(__int64 (__fastcall **)(CSystemAudioDeviceOffload *__hidden, unsigned int, struct IAudioProtectedOutputController **))(*(_QWORD *)(v9 + 16) + 24LL);
    if ( v10 == CSystemAudioDeviceOffload::GetProtectedOutputController )
      ProtectedOutputController = CSystemAudioDeviceOffload::GetProtectedOutputController(
                                    (CSystemAudioDeviceOffload *)(v9 + 16),
                                    a4,
                                    &v20);
    else
      ProtectedOutputController = v10((CSystemAudioDeviceOffload *)(v9 + 16), a4, &v20);
    v12 = ProtectedOutputController;
    if ( ProtectedOutputController < 0
      || ((v13 = *(CStreamGroup **)(v8 + 64)) == 0LL
        ? (StreamVpo = (*(__int64 (__fastcall **)(struct IAudioProtectedOutputController *, _QWORD, struct IAudioVirtualProtectedOutput **))(*(_QWORD *)v20 + 24LL))(
                         v20,
                         0LL,
                         &v19))
        : (v14 = *(__int64 (__usercall **)@<rax>(CStreamGroup *__hidden@<rcx>, unsigned __int64@<rdx>, unsigned int@<r8d>, struct IAudioProtectedOutputController *@<r9>, struct IAudioVirtualProtectedOutput **))(*(_QWORD *)v13 + 88LL),
           v14 != CStreamGroup::GetStreamVpo)
        ? (StreamVpo = ((__int64 (__fastcall *)(CStreamGroup *, unsigned __int64, _QWORD, struct IAudioProtectedOutputController *, struct IAudioVirtualProtectedOutput **))v14)(
                         v13,
                         a3,
                         a4,
                         v20,
                         &v19))
        : (StreamVpo = CStreamGroup::GetStreamVpo(v13, a3, a4, v20, &v19)),
          v12 = StreamVpo,
          StreamVpo < 0) )
    {
      v17 = v19;
    }
    else
    {
      v16 = v19;
      v17 = 0LL;
      v19 = 0LL;
      *a5 = v16;
    }
    if ( v20 )
    {
      (*(void (__fastcall **)(struct IAudioProtectedOutputController *))(*(_QWORD *)v20 + 16LL))(v20);
      v17 = v19;
    }
    if ( v17 )
      (*(void (__fastcall **)(struct IAudioVirtualProtectedOutput *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v12;
}
