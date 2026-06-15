/*
 * XREFs of ?GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180090DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x180028540 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@UCriticalSectionTraits@HandleTr.c)
 *     _lambda_fdf8f02a4d754a1adb6183af8cae6406_::operator() @ 0x180090B80 (_lambda_fdf8f02a4d754a1adb6183af8cae6406_--operator().c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::GetSharedSaDevices(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Details::WeakReferenceImpl **v4; // rbp
  unsigned int v5; // esi
  Microsoft::WRL::Details::WeakReferenceImpl **v6; // rbx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock(a1 + 16, (__int64)&lpCriticalSection);
  v4 = *(Microsoft::WRL::Details::WeakReferenceImpl ***)(a1 + 88);
  v8[0] = a2;
  v5 = 0;
  v6 = *(Microsoft::WRL::Details::WeakReferenceImpl ***)(a1 + 80);
  v8[1] = &v9;
  v9 = 0;
  if ( v6 != v4 )
  {
    do
      lambda_fdf8f02a4d754a1adb6183af8cae6406_::operator()((__int64)v8, v6++);
    while ( v6 != v4 );
    v5 = v9;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
