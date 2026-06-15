/*
 * XREFs of ??1?$ComPtr@UIMMDevice@@@WRL@Microsoft@@QEAA@XZ @ 0x1800510B0
 * Callers:
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$3 @ 0x18003B226 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$3.c)
 *     _CSaDeviceProxy::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18003B24F (_CSaDeviceProxy--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _DeriveDeviceGraphFormatsForStream_::_1_::dtor$4 @ 0x18003B2C0 (_DeriveDeviceGraphFormatsForStream_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IMMDevice>::~ComPtr<IMMDevice>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IMMDevice>::InternalRelease(a1);
}
