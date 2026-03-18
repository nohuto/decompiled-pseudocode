/*
 * XREFs of ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C006C644
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C008593C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 * Callees:
 *     ?RemoveFromCddPrimarySyncContextList@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0001F6C (-RemoveFromCddPrimarySyncContextList@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0094C04 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
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
  _QWORD *v10; // rsi
  _QWORD *v11; // rcx
  __int64 v12; // rbx
  struct _LIST_ENTRY **v13; // rdi
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

  DXGPROCESS::GetCurrent();
  v7 = *((_QWORD *)this + 2);
  v8 = *(_QWORD *)(v7 + 600);
  v9 = *(_QWORD *)(v7 + 608);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7 + 640, 0LL);
  *(_QWORD *)(v7 + 648) = KeGetCurrentThread();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(v8 + 32));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v8, (struct ADAPTER_RENDER *)v7);
  if ( a4 || !*((_QWORD *)a2 + 18) && *(_DWORD *)(v7 + 632) >= 0x40u )
  {
    v12 = 0LL;
    v13 = (struct _LIST_ENTRY **)(v7 + 616);
    while ( *v13 != (struct _LIST_ENTRY *)v13 && *v13 )
    {
      ADAPTER_RENDER::RemoveFromCddPrimarySyncContextList((ADAPTER_RENDER *)v7, *v13);
      *v14 = 0LL;
      v15 = v14 - 18;
      if ( a2 != (struct DXGCONTEXT *)(v14 - 18)
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15[2] + 16LL) + 400LL) + 8LL)
                                                     + 680LL))(v15[27])
        && (unsigned int)v12 < 0x40 )
      {
        v25[v12] = v15[27];
        v12 = (unsigned int)(v12 + 1);
      }
    }
    if ( (_DWORD)v12 )
    {
      v16 = *((_QWORD *)a2 + 2);
      v24 = ++v9;
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 400LL) + 8LL) + 544LL))(
              (unsigned int)v12,
              v25,
              1LL,
              &VidSchSyncObject,
              0,
              &v24);
      v19 = v17;
      if ( v17 < 0 )
      {
LABEL_23:
        v20 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v20 + 24) = v19;
        *(_QWORD *)(v20 + 32) = a2;
        WdLogEvent5_WdError(v20);
        goto LABEL_4;
      }
      *(_QWORD *)(v7 + 608) = v9;
    }
  }
  if ( *((_QWORD *)a2 + 20) >= v9 )
    goto LABEL_4;
  v21 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 400LL) + 8LL)
                                                                                          + 536LL))(
          *((_QWORD *)a2 + 27),
          VidSchSyncObject,
          v9);
  v19 = v21;
  if ( v21 < 0 )
    goto LABEL_23;
  *((_QWORD *)a2 + 20) = v9;
LABEL_4:
  v10 = (_QWORD *)((char *)a2 + 144);
  if ( !*v10 )
  {
    v11 = *(_QWORD **)(v7 + 624);
    *v10 = v7 + 616;
    v10[1] = v11;
    if ( *v11 != v7 + 616 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v7 + 624) = v10;
    ++*(_DWORD *)(v7 + 632);
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  *(_QWORD *)(v7 + 648) = 0LL;
  ExReleasePushLockExclusiveEx(v7 + 640, 0LL);
  KeLeaveCriticalRegion();
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
}
