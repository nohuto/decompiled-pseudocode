/*
 * XREFs of ?GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18008E6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000D2F0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _lambda_fdf8f02a4d754a1adb6183af8cae6406_::operator() @ 0x18008E410 (_lambda_fdf8f02a4d754a1adb6183af8cae6406_--operator().c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::GetSharedSaDevices(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbp
  unsigned int v5; // esi
  _QWORD *v6; // rbx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock(a1 + 16, (__int64)&lpCriticalSection);
  v4 = *(_QWORD **)(a1 + 88);
  v8[0] = a2;
  v5 = 0;
  v6 = *(_QWORD **)(a1 + 80);
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
