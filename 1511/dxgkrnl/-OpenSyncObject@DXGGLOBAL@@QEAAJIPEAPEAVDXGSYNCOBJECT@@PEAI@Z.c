/*
 * XREFs of ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z @ 0x1C0096C80
 * Callers:
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0097574 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01581E8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C0166AEC (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0094C30 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DXGGLOBAL::OpenSyncObject(
        PERESOURCE *this,
        unsigned int a2,
        struct DXGSYNCOBJECT **a3,
        unsigned int *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  struct DXGGLOBAL *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // r8
  int v26; // edx
  DXGSYNCOBJECT *v27; // rbx
  __int64 result; // rax
  DXGFASTMUTEX *v29; // [rsp+50h] [rbp-10h] BYREF
  char v30; // [rsp+58h] [rbp-8h]

  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 1802LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a4 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 1803LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !ExIsResourceAcquiredSharedLite(this[48]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 1804LL;
    WdLogEvent5_WdAssertion(v11);
  }
  *a3 = 0LL;
  *a4 = 0;
  Global = DXGGLOBAL::GetGlobal(v10);
  v30 = 0;
  v29 = (struct DXGGLOBAL *)((char *)Global + 136);
  if ( Global == (struct DXGGLOBAL *)-136LL )
  {
    v16 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v16 + 24) = 451LL;
    WdLogEvent5_WdAssertion(v16);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)v29 == CurrentThread )
  {
    v18 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v18 + 24) = 458LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( v30 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v13, v15);
    v19[5] = &v29;
    v19[3] = 275LL;
    v19[4] = 4LL;
    v19[6] = 0LL;
    v19[7] = 0LL;
    WdLogEvent5_WdCriticalError(v19);
  }
  DXGFASTMUTEX::Acquire((union _LARGE_INTEGER *)v29);
  v21 = DXGGLOBAL::m_pGlobal;
  v30 = 1;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v22 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v22 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v22);
    v21 = DXGGLOBAL::m_pGlobal;
  }
  if ( *((struct _KTHREAD **)v21 + 17) != KeGetCurrentThread() )
  {
    v23 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v23 + 24) = 675LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = (a2 >> 6) & 0xFFFFFF;
  if ( v24 >= *((_DWORD *)v21 + 54)
    || (v25 = *((_QWORD *)v21 + 25),
        v26 = *(_DWORD *)(v25 + 16LL * v24 + 8),
        ((a2 >> 26) & 0x30) != (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0x30))
    || (v26 & 0x1000) != 0
    || (v26 & 0xF) == 0
    || (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0xF) != 8
    || (v27 = *(DXGSYNCOBJECT **)(v25 + 16LL * v24)) == 0LL )
  {
    if ( v30 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v29);
    return 3221225485LL;
  }
  if ( v30 )
  {
    v30 = 0;
    DXGFASTMUTEX::Release(v29);
  }
  if ( *((_DWORD *)v27 + 38) == 5 )
    return 3221225485LL;
  result = DXGSYNCOBJECT::Open(
             v27,
             0LL,
             0LL,
             0LL,
             a4,
             0LL,
             0LL,
             0,
             (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
  if ( (int)result >= 0 )
    *a3 = v27;
  return result;
}
