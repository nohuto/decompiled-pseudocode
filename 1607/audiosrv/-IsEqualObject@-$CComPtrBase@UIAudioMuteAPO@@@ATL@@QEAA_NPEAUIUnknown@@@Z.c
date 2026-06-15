/*
 * XREFs of ?IsEqualObject@?$CComPtrBase@UIAudioMuteAPO@@@ATL@@QEAA_NPEAUIUnknown@@@Z @ 0x180064B6C
 * Callers:
 *     ?InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800649A0 (-InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall ATL::CComPtrBase<IAudioMuteAPO>::IsEqualObject(
        void (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  void (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v5; // rcx
  bool v6; // bl
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a1;
  if ( !v2 )
    return !a2;
  if ( !a2 )
    return 0;
  v7 = 0LL;
  v8 = 0LL;
  (**v2)(v2, &GUID_00000000_0000_0000_c000_000000000046, &v7);
  (**a2)(a2, &GUID_00000000_0000_0000_c000_000000000046, &v8);
  v5 = v7;
  v6 = v7 == v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v5 = v7;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
