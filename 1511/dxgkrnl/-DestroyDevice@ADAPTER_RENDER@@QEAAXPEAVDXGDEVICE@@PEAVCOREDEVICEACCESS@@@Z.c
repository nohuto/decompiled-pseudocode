/*
 * XREFs of ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006AC6C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0067BB4 (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AD88 (-DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C009F874 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z @ 0x1C00048AC (--3-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007D20 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C006B970 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1C006BB80 (--1DXGDEVICE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_RENDER::DestroyDevice(DXGADAPTER **this, struct DXGDEVICE *a2, struct COREDEVICEACCESS *a3)
{
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  ADAPTER_DISPLAY *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct DXGDEVICE **v11; // rdx
  struct DXGDEVICE **v12; // rcx
  struct DXGDEVICE **v13; // rcx
  struct DXGDEVICE **v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v15 + 24) = 18949LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((_DWORD *)a2 + 70) == 2 )
  {
    if ( this[6] == CurrentThread )
      goto LABEL_5;
    v16 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v16 + 24) = 18952LL;
LABEL_23:
    WdLogEvent5_WdAssertion(v16);
    goto LABEL_5;
  }
  if ( this[4] != CurrentThread )
  {
    v16 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v16 + 24) = 18956LL;
    goto LABEL_23;
  }
LABEL_5:
  v8 = (ADAPTER_DISPLAY *)*((_QWORD *)this[2] + 248);
  if ( v8 && ADAPTER_DISPLAY::IsVidPnSourceOwner(v8, a2) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v17 + 24) = 18966LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    v18 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v18 + 24) = 18972LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v11 = (struct DXGDEVICE **)*((_QWORD *)a2 + 3);
  v12 = (struct DXGDEVICE **)*((_QWORD *)a2 + 4);
  if ( v11[1] != (struct DXGDEVICE *)((char *)a2 + 24) || *v12 != (struct DXGDEVICE *)((char *)a2 + 24) )
    __fastfail(3u);
  *v12 = (struct DXGDEVICE *)v11;
  v11[1] = (struct DXGDEVICE *)v12;
  DXGDEVICE::DestroyAllDeviceState(a2, a3);
  v13 = *(struct DXGDEVICE ***)a2;
  v14 = (struct DXGDEVICE **)*((_QWORD *)a2 + 1);
  if ( *((_DWORD *)a2 + 70) == 2 )
  {
    if ( v13[1] != a2 || *v14 != a2 )
      __fastfail(3u);
  }
  else if ( v13[1] != a2 || *v14 != a2 )
  {
    __fastfail(3u);
  }
  *v14 = (struct DXGDEVICE *)v13;
  v13[1] = (struct DXGDEVICE *)v14;
  DXGDEVICE::~DXGDEVICE(a2);
  DXGQUOTAALLOCATOR<1,1265072196>::operator delete(a2);
  DXGADAPTER::ReleaseReference(this[2]);
}
