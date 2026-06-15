/*
 * XREFs of ?GetProtectedOutputController@CSystemAudioDeviceSharedNew@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x14002E220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedNew::GetProtectedOutputController(
        CSystemAudioDeviceSharedNew *this,
        unsigned int a2,
        struct IAudioProtectedOutputController **a3)
{
  int v5; // esi
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 43))(
         *((_QWORD *)this + 43),
         &GUID_69a95a38_c637_46a0_9fb2_1c939aebf2e8,
         &v7);
  if ( v5 < 0
    || (v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioProtectedOutputController **))(*(_QWORD *)v7 + 24LL))(
               v7,
               a2,
               a3),
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7),
        v5 < 0) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0x12u,
        (__int64)&WPP_c0a199d1e000f5a39bc1451c73891527_Traceguids,
        v5);
    }
  }
  return (unsigned int)v5;
}
