/*
 * XREFs of ?GetProtectedOutputController@CSystemAudioDeviceSharedBase@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x140005D80
 * Callers:
 *     AudioDGGetVpoFromVpoContext @ 0x140001640 (AudioDGGetVpoFromVpoContext.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140006560 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x140006BE0 (-GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetProtectedOutputController(
        CSystemAudioDeviceSharedBase *this,
        unsigned int a2,
        struct IAudioProtectedOutputController **a3)
{
  __int64 (__fastcall *v5)(_QWORD, GUID *, CAudioDeviceGraph **); // rdi
  int v6; // eax
  int v7; // esi
  int (*v8)(CAudioDeviceGraph *__hidden, unsigned int, struct IAudioProtectedOutputController **); // rdi
  int ProtectedOutputController; // eax
  CAudioDeviceGraph *v11; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v5 = (__int64 (__fastcall *)(_QWORD, GUID *, CAudioDeviceGraph **))***((_QWORD ***)this + 36);
  if ( (char *)v5 == (char *)ATL::CComObject<CAudioDeviceGraph>::QueryInterface )
    v6 = ATL::CComObject<CAudioDeviceGraph>::QueryInterface(
           *((_QWORD *)this + 36),
           &GUID_69a95a38_c637_46a0_9fb2_1c939aebf2e8,
           &v11);
  else
    v6 = v5(*((_QWORD *)this + 36), &GUID_69a95a38_c637_46a0_9fb2_1c939aebf2e8, &v11);
  v7 = v6;
  if ( v6 < 0
    || ((v8 = *(int (**)(CAudioDeviceGraph *__hidden, unsigned int, struct IAudioProtectedOutputController **))(*(_QWORD *)v11 + 24LL),
         v8 != CAudioDeviceGraph::GetProtectedOutputController)
      ? (ProtectedOutputController = ((__int64 (__fastcall *)(CAudioDeviceGraph *, _QWORD, struct IAudioProtectedOutputController **))v8)(
                                       v11,
                                       a2,
                                       a3))
      : (ProtectedOutputController = CAudioDeviceGraph::GetProtectedOutputController(v11, a2, a3)),
        v7 = ProtectedOutputController,
        (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v11 + 16LL))(v11),
        v7 < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        26LL,
        &WPP_c59105ced4022a196d4cc1b91b2ab5a7_Traceguids,
        (unsigned int)v7);
    }
  }
  return (unsigned int)v7;
}
