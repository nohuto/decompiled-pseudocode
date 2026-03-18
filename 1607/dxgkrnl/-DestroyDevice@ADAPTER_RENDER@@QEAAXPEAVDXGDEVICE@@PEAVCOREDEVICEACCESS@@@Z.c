/*
 * XREFs of ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00934E0
 * Callers:
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C007C5D8 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 *     ?DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z @ 0x1C0093610 (-DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00069EC (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z @ 0x1C0007AF8 (--3-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009D260 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1C009D508 (--1DXGDEVICE@@QEAA@XZ.c)
 *     ?DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C015A57C (-DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::DestroyDevice(DXGADAPTER **this, struct DXGDEVICE *a2, struct COREDEVICEACCESS *a3)
{
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  ADAPTER_DISPLAY *v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGDEVICE **v12; // rdx
  struct DXGDEVICE **v13; // rcx
  struct DXGDEVICE **v14; // rcx
  struct DXGDEVICE **v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v16 + 24) = 1445LL;
    WdLogEvent5_WdAssertion(v16);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((_DWORD *)a2 + 76) == 2 )
  {
    if ( this[6] == CurrentThread )
      goto LABEL_5;
    v17 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v17 + 24) = 1448LL;
LABEL_25:
    WdLogEvent5_WdAssertion(v17);
    goto LABEL_5;
  }
  if ( this[4] != CurrentThread )
  {
    v17 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v17 + 24) = 1452LL;
    goto LABEL_25;
  }
LABEL_5:
  v8 = (ADAPTER_DISPLAY *)*((_QWORD *)this[2] + 266);
  if ( v8 && ADAPTER_DISPLAY::IsVidPnSourceOwner(v8, a2) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v18 + 24) = 1462LL;
    WdLogEvent5_WdAssertion(v18);
  }
  CurrentProcess = PsGetCurrentProcess(v8);
  if ( !PsGetProcessDxgProcess(CurrentProcess, v10) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v19 + 24) = 1468LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v12 = (struct DXGDEVICE **)*((_QWORD *)a2 + 3);
  v13 = (struct DXGDEVICE **)*((_QWORD *)a2 + 4);
  if ( v12[1] != (struct DXGDEVICE *)((char *)a2 + 24) || *v13 != (struct DXGDEVICE *)((char *)a2 + 24) )
    __fastfail(3u);
  *v13 = (struct DXGDEVICE *)v12;
  v12[1] = (struct DXGDEVICE *)v13;
  DXGDEVICE::DestroyAllDeviceState(a2, a3);
  v14 = *(struct DXGDEVICE ***)a2;
  v15 = (struct DXGDEVICE **)*((_QWORD *)a2 + 1);
  if ( *((_DWORD *)a2 + 76) == 2 )
  {
    if ( v14[1] != a2 || *v15 != a2 )
      __fastfail(3u);
  }
  else if ( v14[1] != a2 || *v15 != a2 )
  {
    __fastfail(3u);
  }
  *v15 = (struct DXGDEVICE *)v14;
  v14[1] = (struct DXGDEVICE *)v15;
  if ( this[135] == a2 )
    ADAPTER_RENDER::DestroyVirtualGpuState((ADAPTER_RENDER *)this);
  DXGDEVICE::~DXGDEVICE(a2);
  DXGQUOTAALLOCATOR<1,1265072196>::operator delete(a2);
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
}
