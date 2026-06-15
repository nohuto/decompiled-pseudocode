/*
 * XREFs of ?GetDevicePipeFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400052B0
 * Callers:
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140002110 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140005F80 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400064F0 (-GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetDevicePipeFormat(
        CSystemAudioDeviceSharedBase *this,
        struct tWAVEFORMATEX **a2)
{
  void (__fastcall ***v2)(_QWORD, GUID *, CAudioDeviceGraph **); // r9
  CAudioDeviceGraph *v4; // rcx
  void (__fastcall *v5)(_QWORD, GUID *, CAudioDeviceGraph **); // rax
  __int64 (__fastcall *v6)(CAudioDeviceGraph *__hidden, struct tWAVEFORMATEX **); // rax
  unsigned int DevicePipeFormat; // eax
  unsigned int v8; // ebx
  CAudioDeviceGraph *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void (__fastcall ***)(_QWORD, GUID *, CAudioDeviceGraph **))*((_QWORD *)this + 3);
  v4 = 0LL;
  v10 = 0LL;
  if ( v2 )
  {
    v5 = **v2;
    if ( (char *)v5 == (char *)ATL::CComObject<CAudioDeviceGraph>::QueryInterface )
      ATL::CComObject<CAudioDeviceGraph>::QueryInterface(v2, &GUID_0576b5aa_7951_4359_8e0c_367830add031, &v10);
    else
      v5(v2, &GUID_0576b5aa_7951_4359_8e0c_367830add031, &v10);
    v4 = v10;
  }
  v6 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, struct tWAVEFORMATEX **))(*(_QWORD *)v4 + 64LL);
  if ( v6 == CAudioDeviceGraph::GetDevicePipeFormat )
    DevicePipeFormat = CAudioDeviceGraph::GetDevicePipeFormat(v4, a2);
  else
    DevicePipeFormat = v6(v4, a2);
  v8 = DevicePipeFormat;
  if ( v10 )
    (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v10 + 16LL))(v10);
  return v8;
}
