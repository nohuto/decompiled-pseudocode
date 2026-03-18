/*
 * XREFs of ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C0094690
 * Callers:
 *     DxgkCreateDevice @ 0x1C008E3F0 (DxgkCreateDevice.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00DA848 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C00171F4 (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@Z @ 0x1C0081C8C (--0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C0082060 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0082554 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateDevice(
        __int64 a1,
        __int64 *a2,
        int a3,
        DXGADAPTER *a4,
        char a5,
        unsigned __int8 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGPROCESS *Current; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID PoolWithQuotaTag; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // r8
  __int64 v26; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 16)) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v34 + 24) = 18388LL;
    WdLogEvent5_WdAssertion(v34);
  }
  if ( a4 && (!DXGADAPTER::IsCoreResourceSharedOwner(a4) || !*((_QWORD *)a4 + 247)) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v33 + 24) = 18391LL;
    WdLogEvent5_WdAssertion(v33);
  }
  if ( !a2 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v35 + 24) = 18392LL;
    WdLogEvent5_WdAssertion(v35);
  }
  Current = DXGPROCESS::GetCurrent(v11);
  if ( !Current )
  {
    v36 = WdLogNewEntry5_WdAssertion(v15, v14, v17, v18);
    *(_QWORD *)(v36 + 24) = 18398LL;
    WdLogEvent5_WdAssertion(v36);
  }
  *a2 = 0LL;
  DXGADAPTER::AcquireReference(*(DXGADAPTER **)(a1 + 16));
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x4940uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
    v21 = DXGDEVICE::DXGDEVICE((__int64)PoolWithQuotaTag, a1, (__int64)Current, a3, (__int64)a4);
  else
    v21 = 0LL;
  if ( !v21 )
  {
    v37 = WdLogNewEntry5_WdLowResource(v20);
    v24 = -1073741801;
    *(_QWORD *)(v37 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v37);
LABEL_29:
    DXGADAPTER::ReleaseReference(*(DXGADAPTER **)(a1 + 16));
    return (unsigned int)v24;
  }
  v24 = DXGDEVICE::Initialize((DXGDEVICE *)v21, a5, a6);
  if ( v24 < 0 )
  {
    DXGDEVICE::DestroyAllDeviceState((DXGDEVICE *)v21, 0LL);
    DXGDEVICE::`scalar deleting destructor'((DXGDEVICE *)v21);
    goto LABEL_29;
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(v21 + 280) == 2 )
  {
    if ( *(struct _KTHREAD **)(a1 + 48) != CurrentThread )
    {
      v38 = WdLogNewEntry5_WdAssertion(v23, v22, v25, v26);
      *(_QWORD *)(v38 + 24) = 18456LL;
      WdLogEvent5_WdAssertion(v38);
    }
    v28 = (__int64 *)(a1 + 120);
    v29 = *v28;
    *(_QWORD *)v21 = *v28;
    *(_QWORD *)(v21 + 8) = v28;
    if ( *(__int64 **)(v29 + 8) != v28 )
      __fastfail(3u);
  }
  else
  {
    if ( *(struct _KTHREAD **)(a1 + 32) != CurrentThread )
    {
      v39 = WdLogNewEntry5_WdAssertion(v23, v22, v25, v26);
      *(_QWORD *)(v39 + 24) = 18461LL;
      WdLogEvent5_WdAssertion(v39);
    }
    v28 = (__int64 *)(a1 + 104);
    v29 = *v28;
    *(_QWORD *)v21 = *v28;
    *(_QWORD *)(v21 + 8) = v28;
    if ( *(__int64 **)(v29 + 8) != v28 )
      __fastfail(3u);
  }
  *(_QWORD *)(v29 + 8) = v21;
  *v28 = v21;
  v30 = v21 + 24;
  v31 = *((_QWORD *)Current + 31);
  *(_QWORD *)(v21 + 24) = v31;
  *(_QWORD *)(v21 + 32) = (char *)Current + 248;
  if ( *(struct DXGPROCESS **)(v31 + 8) != (struct DXGPROCESS *)((char *)Current + 248) )
    __fastfail(3u);
  *(_QWORD *)(v31 + 8) = v30;
  *((_QWORD *)Current + 31) = v30;
  *a2 = v21;
  return (unsigned int)v24;
}
