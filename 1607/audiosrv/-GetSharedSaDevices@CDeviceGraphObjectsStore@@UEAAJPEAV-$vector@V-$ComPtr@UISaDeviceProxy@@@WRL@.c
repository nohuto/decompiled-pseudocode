/*
 * XREFs of ?GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180076C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18001E7A0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _lambda_63adadfa8c2e225bcf88290a3b13fd06_::operator() @ 0x18007664C (_lambda_63adadfa8c2e225bcf88290a3b13fd06_--operator().c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::GetSharedSaDevices(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Details::WeakReferenceImpl **v4; // rbx
  unsigned int v5; // esi
  Microsoft::WRL::Details::WeakReferenceImpl **v6; // rdi
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock(a1 + 16, (__int64)&lpCriticalSection);
  v8[0] = a2;
  v4 = *(Microsoft::WRL::Details::WeakReferenceImpl ***)(a1 + 88);
  v5 = 0;
  v6 = *(Microsoft::WRL::Details::WeakReferenceImpl ***)(a1 + 80);
  v8[1] = &v9;
  v9 = 0;
  if ( v6 != v4 )
  {
    do
      lambda_63adadfa8c2e225bcf88290a3b13fd06_::operator()(v8, v6++);
    while ( v6 != v4 );
    v5 = v9;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
