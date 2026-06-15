/*
 * XREFs of ?GetStreamGroupsConnectedToSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAUISaDeviceProxy@@PEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180076CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18001E7A0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_::operator() @ 0x18007672C (_lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_--operator().c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::GetStreamGroupsConnectedToSaDevice(__int64 a1, __int64 a2, __int64 a3)
{
  Microsoft::WRL::Details::WeakReferenceImpl **v4; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl **v5; // rdi
  unsigned int v6; // esi
  __int128 v8; // [rsp+20h] [rbp-48h]
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+50h] [rbp-18h]
  unsigned int v11; // [rsp+90h] [rbp+28h] BYREF
  __int64 v12; // [rsp+98h] [rbp+30h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+A8h] [rbp+40h] BYREF

  v13 = a3;
  v12 = a2;
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a1 + 16, (__int64)&lpCriticalSection);
  v4 = *(Microsoft::WRL::Details::WeakReferenceImpl ***)(a1 + 64);
  v5 = *(Microsoft::WRL::Details::WeakReferenceImpl ***)(a1 + 56);
  v6 = 0;
  *(_QWORD *)&v8 = &v11;
  *((_QWORD *)&v8 + 1) = &v12;
  v10 = &v13;
  v11 = 0;
  v9 = v8;
  if ( v5 != v4 )
  {
    do
      lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_::operator()((__int64)&v9, v5++);
    while ( v5 != v4 );
    v6 = v11;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
