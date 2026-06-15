/*
 * XREFs of ??1?$CAutoPtr@VCSaDeviceInstance@@@ATL@@QEAA@XZ @ 0x180073770
 * Callers:
 *     _CSaProvider::GetSaDeviceInstance_::_1_::dtor$0 @ 0x180074D08 (_CSaProvider--GetSaDeviceInstance_--_1_--dtor$0.c)
 * Callees:
 *     ??_GCSaDeviceInstance@@QEAAPEAXI@Z @ 0x180073B50 (--_GCSaDeviceInstance@@QEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<CSaDeviceInstance>::~CAutoPtr<CSaDeviceInstance>(
        CSaDeviceInstance **a1,
        unsigned int a2)
{
  CSaDeviceInstance *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
    result = CSaDeviceInstance::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return result;
}
