/*
 * XREFs of ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z @ 0x1C011E4C4
 * Callers:
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C008C6B0 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C0153F7C (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01624B0 (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0004848 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C000F904 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0083900 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DXGGLOBAL::OpenSyncObject(PERESOURCE *this, __int64 a2, struct DXGSYNCOBJECT **a3, unsigned int *a4)
{
  unsigned int v6; // ebp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGGLOBAL *Global; // rax
  DXGSYNCOBJECT *ObjectA; // rbx
  __int64 result; // rax
  _BYTE v22[8]; // [rsp+50h] [rbp-18h] BYREF
  char v23; // [rsp+58h] [rbp-10h]

  v6 = a2;
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    *(_QWORD *)(v8 + 24) = 1795LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a4 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 1796LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(this) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 24) = 1797LL;
    WdLogEvent5_WdAssertion(v14);
  }
  *a3 = 0LL;
  *a4 = 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v22);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  Global = DXGGLOBAL::GetGlobal(v16, v15, v17, v18);
  ObjectA = (DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)Global, v6, 8);
  if ( !ObjectA )
  {
    if ( v23 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
    return 3221225485LL;
  }
  if ( v23 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  if ( *((_DWORD *)ObjectA + 32) == 5 )
    return 3221225485LL;
  result = DXGSYNCOBJECT::Open(ObjectA, 0LL, 0LL, 0LL, a4, 0LL, 0LL, 0, DXGSYNCOBJECT::FlagsDefault);
  if ( (int)result >= 0 )
    *a3 = ObjectA;
  return result;
}
