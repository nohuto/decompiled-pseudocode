/*
 * XREFs of ?GetProtectedOutputController@CSystemAudioDeviceOffload@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x140001830
 * Callers:
 *     AudioDGGetVpoFromVpoContext @ 0x1400016E0 (AudioDGGetVpoFromVpoContext.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::GetProtectedOutputController(
        CSystemAudioDeviceOffload *this,
        unsigned int a2,
        struct IAudioProtectedOutputController **a3)
{
  int v5; // esi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 26))(
         *((_QWORD *)this + 26),
         &GUID_69a95a38_c637_46a0_9fb2_1c939aebf2e8,
         &v7);
  if ( v5 < 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_Ds(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        12,
        (unsigned int)&WPP_defc16d433e2f54121a67667cf2bcce9_Traceguids,
        v5,
        (__int64)"CSystemAudioDeviceOffload::GetProtectedOutputController");
    }
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioProtectedOutputController **))(*(_QWORD *)v7 + 24LL))(
           v7,
           a2,
           a3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v5;
}
