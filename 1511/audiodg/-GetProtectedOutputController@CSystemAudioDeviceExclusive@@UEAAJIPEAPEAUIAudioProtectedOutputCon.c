/*
 * XREFs of ?GetProtectedOutputController@CSystemAudioDeviceExclusive@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x14002B830
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x14002A548 (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceExclusive::GetProtectedOutputController(
        CSystemAudioDeviceExclusive *this,
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
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xCu,
        (__int64)&WPP_c56ec536faef012c7fc5216e19ea82f9_Traceguids,
        v5,
        (__int64)"CSystemAudioDeviceExclusive::GetProtectedOutputController");
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
