/*
 * XREFs of ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C00D1554
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00D0E8C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?RemoveFromCddPrimarySyncContextList@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000CF18 (-RemoveFromCddPrimarySyncContextList@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00838D0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICE::SynchronizePresentToPrimary(
        DXGDEVICE *this,
        struct DXGCONTEXT *a2,
        struct DXGPRESENTMUTEX *a3,
        char a4)
{
  __int64 v7; // r14
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // rbx
  struct _LIST_ENTRY **v11; // rdi
  _QWORD *v12; // rsi
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  _QWORD *v15; // r13
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v23[16]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v25[64]; // [rsp+60h] [rbp-A0h] BYREF

  DXGPROCESS::GetCurrent((__int64)this);
  v7 = *((_QWORD *)this + 2);
  v8 = *(_QWORD *)(v7 + 528);
  v9 = *(_QWORD *)(v7 + 536);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7 + 568, 0LL);
  *(_QWORD *)(v7 + 576) = KeGetCurrentThread();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(v8 + 32));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v8, (struct ADAPTER_RENDER *)v7);
  if ( a4 || !*((_QWORD *)a2 + 18) && *(_DWORD *)(v7 + 560) >= 0x40u )
  {
    v10 = 0LL;
    v11 = (struct _LIST_ENTRY **)(v7 + 544);
    while ( *v11 != (struct _LIST_ENTRY *)v11 && *v11 )
    {
      ADAPTER_RENDER::RemoveFromCddPrimarySyncContextList((ADAPTER_RENDER *)v7, *v11);
      *v14 = 0LL;
      v15 = v14 - 18;
      if ( a2 != (struct DXGCONTEXT *)(v14 - 18)
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15[2] + 16LL) + 376LL) + 8LL)
                                                     + 680LL))(v15[27])
        && (unsigned int)v10 < 0x40 )
      {
        v25[v10] = v15[27];
        v10 = (unsigned int)(v10 + 1);
      }
    }
    if ( (_DWORD)v10 )
    {
      v16 = *((_QWORD *)a2 + 2);
      v24 = ++v9;
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 376LL) + 8LL) + 544LL))(
              (unsigned int)v10,
              v25,
              1LL,
              &VidSchSyncObject,
              0,
              &v24);
      v19 = v17;
      if ( v17 < 0 )
      {
LABEL_21:
        v20 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v20 + 24) = v19;
        *(_QWORD *)(v20 + 32) = a2;
        WdLogEvent5_WdError(v20);
        goto LABEL_6;
      }
      *(_QWORD *)(v7 + 536) = v9;
    }
  }
  if ( *((_QWORD *)a2 + 20) >= v9 )
    goto LABEL_6;
  v21 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 376LL) + 8LL)
                                                                                          + 536LL))(
          *((_QWORD *)a2 + 27),
          VidSchSyncObject,
          v9);
  v19 = v21;
  if ( v21 < 0 )
    goto LABEL_21;
  *((_QWORD *)a2 + 20) = v9;
LABEL_6:
  v12 = (_QWORD *)((char *)a2 + 144);
  if ( !*v12 )
  {
    v13 = *(_QWORD **)(v7 + 552);
    *v12 = v7 + 544;
    v12[1] = v13;
    if ( *v13 != v7 + 544 )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v7 + 552) = v12;
    ++*(_DWORD *)(v7 + 560);
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  *(_QWORD *)(v7 + 576) = 0LL;
  ExReleasePushLockExclusiveEx(v7 + 568, 0LL);
  KeLeaveCriticalRegion();
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
}
