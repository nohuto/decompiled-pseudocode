/*
 * XREFs of _lambda_f9fdf02b90e6ddf717af0a8edf5bb4ee_::operator() @ 0x1800683F0
 * Callers:
 *     ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x180027850 (-RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEAAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800670B4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEAAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006714C (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

char __fastcall lambda_f9fdf02b90e6ddf717af0a8edf5bb4ee_::operator()(
        __int64 a1,
        Microsoft::WRL::Details::WeakReferenceImpl **a2)
{
  char v2; // bl
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v4 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, &v4) < 0 || !v4 )
    v2 = 1;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v4);
  return v2;
}
