/*
 * XREFs of ?ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z @ 0x140028ECC
 * Callers:
 *     ?RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140029280 (-RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

struct IUnknown *__fastcall ListKeyForDevice(struct IAudioDeviceEndpoint *a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  ((void (__fastcall *)(struct IAudioDeviceEndpoint *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
    a1,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v2);
  return (struct IUnknown *)v2;
}
