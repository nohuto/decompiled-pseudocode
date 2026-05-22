/*
 * XREFs of ?SendTrackedNodesUpdates@SpatialInputControllerCollection@@QEAAXXZ @ 0x1800794EC
 * Callers:
 *     _lambda_dceba153a74a3d91faf07554a4f58ea5_::_lambda_invoker_cdecl_ @ 0x180077B10 (_lambda_dceba153a74a3d91faf07554a4f58ea5_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?GetHeadToPoseTransform@SpatialInputControllerCollection@@AEAA?AUMatrix4x4@Numerics@Foundation@Windows@@AEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18007757C (-GetHeadToPoseTransform@SpatialInputControllerCollection@@AEAA-AUMatrix4x4@Numerics@Foundation@W.c)
 *     ?ParseAndSendReport@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@PEADKKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@7@@Z @ 0x1800776FC (-ParseAndSendReport@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@Spat.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall SpatialInputControllerCollection::SendTrackedNodesUpdates(SpatialInputControllerCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // r8
  _OWORD *HeadToPoseTransform; // rax
  __int64 v5; // rcx
  struct Windows::Internal::Holographic::ISpatialGraphNodeReference *v6; // rsi
  __int64 *v7; // rdi
  __int64 *v8; // rbx
  __int64 *v9; // rax
  __int64 *i; // rax
  _OWORD v11[4]; // [rsp+68h] [rbp-49h] BYREF
  _OWORD v12[4]; // [rsp+A8h] [rbp-9h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 2832);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2832));
  HeadToPoseTransform = SpatialInputControllerCollection::GetHeadToPoseTransform(this, v12, v3);
  v11[0] = *HeadToPoseTransform;
  v11[1] = HeadToPoseTransform[1];
  v11[2] = HeadToPoseTransform[2];
  v11[3] = HeadToPoseTransform[3];
  v5 = *((_QWORD *)this + 362);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (struct Windows::Internal::Holographic::ISpatialGraphNodeReference *)*((_QWORD *)this + 362);
  if ( v2 )
    LeaveCriticalSection(v2);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 69);
  v7 = (__int64 *)*((_QWORD *)this + 350);
  v8 = (__int64 *)*v7;
  while ( v8 != v7 )
  {
    if ( *(_QWORD *)(v8[5] + 536) && v6 )
      SpatialInputControllerCollection::ParseAndSendReport(
        this,
        (struct SpatialInteractionDevices::SpatialInteractionController *)v8[5],
        0LL,
        0,
        *((_DWORD *)v8 + 8),
        v6,
        (const struct Windows::Foundation::Numerics::Matrix4x4 *)v11);
    if ( !*((_BYTE *)v8 + 25) )
    {
      v9 = (__int64 *)v8[2];
      if ( *((_BYTE *)v9 + 25) )
      {
        for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25) && v8 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v8 = i;
        v8 = i;
      }
      else
      {
        do
        {
          v8 = v9;
          v9 = (__int64 *)*v9;
        }
        while ( !*((_BYTE *)v9 + 25) );
      }
    }
  }
  if ( this != (SpatialInputControllerCollection *)-2760LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 69);
  if ( v6 )
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReference *))(*(_QWORD *)v6 + 16LL))(v6);
}
