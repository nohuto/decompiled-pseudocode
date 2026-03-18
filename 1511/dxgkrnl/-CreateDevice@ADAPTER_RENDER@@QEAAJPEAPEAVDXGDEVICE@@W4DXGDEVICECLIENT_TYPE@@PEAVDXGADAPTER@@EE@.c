/*
 * XREFs of ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C006AF64
 * Callers:
 *     DxgkCreateDevice @ 0x1C008B790 (DxgkCreateDevice.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C009F874 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000B0FC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C0018838 (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@Z @ 0x1C006B110 (--0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C006B51C (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C006B970 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateDevice(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        DXGADAPTER *a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rbp
  PVOID v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 16)) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v28 + 24) = 18799LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( a4 && (!DXGADAPTER::IsCoreResourceSharedOwner(a4) || !*((_QWORD *)a4 + 248)) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v27 + 24) = 18802LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !a2 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v29 + 24) = 18803LL;
    WdLogEvent5_WdAssertion(v29);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v30 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v30 + 24) = 18809LL;
    WdLogEvent5_WdAssertion(v30);
  }
  *a2 = 0LL;
  DXGADAPTER::AcquireReference(*(DXGADAPTER **)(a1 + 16));
  v13 = DXGQUOTAALLOCATOR<1,1265072196>::operator new(0xB40uLL);
  if ( v13 )
    v18 = DXGDEVICE::DXGDEVICE(v13, a1, Current, a3, a4);
  else
    v18 = 0LL;
  if ( !v18 )
  {
    v31 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
    v20 = -1073741801;
    *(_QWORD *)(v31 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v31);
LABEL_29:
    DXGADAPTER::ReleaseReference(*(DXGADAPTER **)(a1 + 16));
    return (unsigned int)v20;
  }
  v20 = DXGDEVICE::Initialize((DXGDEVICE *)v18, a5, a6);
  if ( v20 < 0 )
  {
    DXGDEVICE::DestroyAllDeviceState((DXGDEVICE *)v18, 0LL);
    DXGDEVICE::`scalar deleting destructor'((DXGDEVICE *)v18);
    goto LABEL_29;
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(v18 + 280) == 2 )
  {
    if ( *(struct _KTHREAD **)(a1 + 48) != CurrentThread )
    {
      v32 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v32 + 24) = 18867LL;
      WdLogEvent5_WdAssertion(v32);
    }
    v22 = (__int64 *)(a1 + 120);
    v23 = *v22;
    *(_QWORD *)v18 = *v22;
    *(_QWORD *)(v18 + 8) = v22;
    if ( *(__int64 **)(v23 + 8) != v22 )
      __fastfail(3u);
  }
  else
  {
    if ( *(struct _KTHREAD **)(a1 + 32) != CurrentThread )
    {
      v33 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v33 + 24) = 18872LL;
      WdLogEvent5_WdAssertion(v33);
    }
    v22 = (__int64 *)(a1 + 104);
    v23 = *v22;
    *(_QWORD *)v18 = *v22;
    *(_QWORD *)(v18 + 8) = v22;
    if ( *(__int64 **)(v23 + 8) != v22 )
      __fastfail(3u);
  }
  *(_QWORD *)(v23 + 8) = v18;
  *v22 = v18;
  v24 = v18 + 24;
  v25 = *((_QWORD *)Current + 31);
  *(_QWORD *)(v18 + 24) = v25;
  *(_QWORD *)(v18 + 32) = (char *)Current + 248;
  if ( *(struct DXGPROCESS **)(v25 + 8) != (struct DXGPROCESS *)((char *)Current + 248) )
    __fastfail(3u);
  *(_QWORD *)(v25 + 8) = v24;
  *((_QWORD *)Current + 31) = v24;
  *a2 = v18;
  return (unsigned int)v20;
}
