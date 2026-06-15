/*
 * XREFs of ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEAAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800670B4
 * Callers:
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x180027750 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 *     _lambda_f9fdf02b90e6ddf717af0a8edf5bb4ee_::operator() @ 0x1800683F0 (_lambda_f9fdf02b90e6ddf717af0a8edf5bb4ee_--operator().c)
 *     _lambda_80c14477c5528a734bb27b3f731672ff_::operator() @ 0x18009074C (_lambda_80c14477c5528a734bb27b3f731672ff_--operator().c)
 *     _lambda_fdf8f02a4d754a1adb6183af8cae6406_::operator() @ 0x180090B80 (_lambda_fdf8f02a4d754a1adb6183af8cae6406_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWeakReference@@@WRL@Microsoft@@IEAAKXZ @ 0x18002B164 (-InternalRelease@-$ComPtr@UIWeakReference@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006714C (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::WeakRef::As<IInspectable>(
        Microsoft::WRL::Details::WeakReferenceImpl **a1,
        _QWORD *a2)
{
  unsigned int v4; // edi
  volatile int *v5; // rdx
  int v6; // ebx

  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(a2);
  v4 = 0;
  *a2 = 0LL;
  if ( *a1 )
  {
    v6 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, GUID *, _QWORD *))(*(_QWORD *)*a1 + 24LL))(
           *a1,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           a2);
    if ( v6 >= 0 && !*a2 )
      Microsoft::WRL::ComPtr<IWeakReference>::InternalRelease(a1, v5);
    return (unsigned int)v6;
  }
  return v4;
}
