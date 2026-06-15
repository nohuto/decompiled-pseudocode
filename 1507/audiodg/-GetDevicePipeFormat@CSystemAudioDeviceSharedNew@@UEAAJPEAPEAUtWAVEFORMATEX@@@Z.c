/*
 * XREFs of ?GetDevicePipeFormat@CSystemAudioDeviceSharedNew@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14000DF70
 * Callers:
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140011960 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14000EC10 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14000F0E0 (-GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedNew::GetDevicePipeFormat(
        CSystemAudioDeviceSharedNew *this,
        struct tWAVEFORMATEX **a2)
{
  void (__fastcall ***v2)(_QWORD, GUID *, CAudioDeviceGraph **); // rdi
  CAudioDeviceGraph *v3; // rbx
  void (__fastcall *v5)(_QWORD, GUID *, CAudioDeviceGraph **); // rbx
  __int64 (__fastcall *v6)(CAudioDeviceGraph *__hidden, struct tWAVEFORMATEX **); // rdi
  unsigned int DevicePipeFormat; // eax
  unsigned int v8; // esi
  CAudioDeviceGraph *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void (__fastcall ***)(_QWORD, GUID *, CAudioDeviceGraph **))*((_QWORD *)this + 10);
  v3 = 0LL;
  v10 = 0LL;
  if ( v2 )
  {
    v5 = **v2;
    if ( (char *)v5 == (char *)ATL::CComObject<CAudioDeviceGraph>::QueryInterface )
      ATL::CComObject<CAudioDeviceGraph>::QueryInterface(v2, &GUID_0576b5aa_7951_4359_8e0c_367830add031, &v10);
    else
      v5(v2, &GUID_0576b5aa_7951_4359_8e0c_367830add031, &v10);
    v3 = v10;
  }
  v6 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, struct tWAVEFORMATEX **))(*(_QWORD *)v3 + 64LL);
  if ( v6 == CAudioDeviceGraph::GetDevicePipeFormat )
    DevicePipeFormat = CAudioDeviceGraph::GetDevicePipeFormat(v3, a2);
  else
    DevicePipeFormat = v6(v3, a2);
  v8 = DevicePipeFormat;
  if ( v10 )
    (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v10 + 16LL))(v10);
  return v8;
}
