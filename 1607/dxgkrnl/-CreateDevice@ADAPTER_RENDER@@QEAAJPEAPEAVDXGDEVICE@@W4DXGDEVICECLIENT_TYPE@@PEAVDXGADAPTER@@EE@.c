/*
 * XREFs of ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C00937EC
 * Callers:
 *     DxgkCreateDevice @ 0x1C0079090 (DxgkCreateDevice.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C007C5D8 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 *     ?DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z @ 0x1C0157668 (-DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0009450 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000BE68 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C001C930 (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@Z @ 0x1C009CAB8 (--0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C009CDF8 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009D260 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateDevice(
        DXGADAPTER **a1,
        __int64 *a2,
        unsigned int a3,
        DXGADAPTER *a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 ProcessDxgProcess; // rbp
  PVOID v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // esi
  struct _KTHREAD *CurrentThread; // rax
  DXGADAPTER **v21; // rdi
  DXGADAPTER *v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1[2]) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v28 + 24) = 1293LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( a4 && (!DXGADAPTER::IsCoreResourceSharedOwner(a4) || !*((_QWORD *)a4 + 266)) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v27 + 24) = 1296LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !a2 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v29 + 24) = 1297LL;
    WdLogEvent5_WdAssertion(v29);
  }
  CurrentProcess = PsGetCurrentProcess(v10);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v12);
  if ( !ProcessDxgProcess )
  {
    v30 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v30 + 24) = 1303LL;
    WdLogEvent5_WdAssertion(v30);
  }
  *a2 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)a1[2] + 3);
  v15 = DXGQUOTAALLOCATOR<1,1265072196>::operator new(0xB60uLL);
  if ( v15 )
    v17 = DXGDEVICE::DXGDEVICE(v15, a1, ProcessDxgProcess, a3, a4);
  else
    v17 = 0LL;
  if ( !v17 )
  {
    v31 = WdLogNewEntry5_WdLowResource(v16);
    v19 = -1073741801;
    *(_QWORD *)(v31 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v31);
LABEL_29:
    DXGADAPTER::ReleaseReferenceNoTracking(a1[2]);
    return (unsigned int)v19;
  }
  v19 = DXGDEVICE::Initialize((DXGDEVICE *)v17, a5, a6);
  if ( v19 < 0 )
  {
    DXGDEVICE::DestroyAllDeviceState((DXGDEVICE *)v17, 0LL);
    DXGDEVICE::`scalar deleting destructor'((DXGDEVICE *)v17);
    goto LABEL_29;
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(v17 + 304) == 2 )
  {
    if ( a1[6] != CurrentThread )
    {
      v32 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v32 + 24) = 1363LL;
      WdLogEvent5_WdAssertion(v32);
    }
    v21 = a1 + 15;
    v22 = *v21;
    if ( *((DXGADAPTER ***)*v21 + 1) != v21 )
      __fastfail(3u);
  }
  else
  {
    if ( a1[4] != CurrentThread )
    {
      v33 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v33 + 24) = 1368LL;
      WdLogEvent5_WdAssertion(v33);
    }
    v21 = a1 + 13;
    v22 = *v21;
    if ( *((DXGADAPTER ***)*v21 + 1) != v21 )
      __fastfail(3u);
  }
  *(_QWORD *)v17 = v22;
  v23 = (_QWORD *)(ProcessDxgProcess + 240);
  *(_QWORD *)(v17 + 8) = v21;
  *((_QWORD *)v22 + 1) = v17;
  v24 = (_QWORD *)(v17 + 24);
  *v21 = (DXGADAPTER *)v17;
  v25 = *(_QWORD *)(ProcessDxgProcess + 240);
  if ( *(_QWORD *)(v25 + 8) != ProcessDxgProcess + 240 )
    __fastfail(3u);
  *v24 = v25;
  *(_QWORD *)(v17 + 32) = v23;
  *(_QWORD *)(v25 + 8) = v24;
  *v23 = v24;
  *a2 = v17;
  return (unsigned int)v19;
}
