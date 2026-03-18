/*
 * XREFs of ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C00943C8
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00B0FB0 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 * Callees:
 *     ?RemoveFromCddPrimarySyncContextList@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00076AC (-RemoveFromCddPrimarySyncContextList@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00A4A70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICE::SynchronizePresentToPrimary(
        DXGDEVICE *this,
        struct DXGCONTEXT *a2,
        struct DXGPRESENTMUTEX *a3,
        char a4)
{
  __int64 v4; // r14
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  _QWORD *v9; // rsi
  _QWORD *v10; // rcx
  __int64 v11; // rbx
  struct _LIST_ENTRY **v12; // rdi
  _QWORD *v13; // rdx
  _QWORD *v14; // r13
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v22[16]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v24[64]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = *((_QWORD *)this + 2);
  v7 = *(_QWORD *)(v4 + 528);
  v8 = *(_QWORD *)(v4 + 536);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 568, 0LL);
  *(_QWORD *)(v4 + 576) = KeGetCurrentThread();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)(v7 + 32));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v7, (struct ADAPTER_RENDER *)v4);
  if ( a4 || !*((_QWORD *)a2 + 18) && *(_DWORD *)(v4 + 560) >= 0x40u )
  {
    v11 = 0LL;
    v12 = (struct _LIST_ENTRY **)(v4 + 544);
    while ( *v12 != (struct _LIST_ENTRY *)v12 && *v12 )
    {
      ADAPTER_RENDER::RemoveFromCddPrimarySyncContextList((ADAPTER_RENDER *)v4, *v12);
      *v13 = 0LL;
      v14 = v13 - 18;
      if ( a2 != (struct DXGCONTEXT *)(v13 - 18)
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[2] + 16LL) + 376LL) + 8LL)
                                                     + 680LL))(v14[27])
        && (unsigned int)v11 < 0x40 )
      {
        v24[v11] = v14[27];
        v11 = (unsigned int)(v11 + 1);
      }
    }
    if ( (_DWORD)v11 )
    {
      v15 = *((_QWORD *)a2 + 2);
      v23 = ++v8;
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 376LL) + 8LL) + 544LL))(
              (unsigned int)v11,
              v24,
              1LL,
              &VidSchSyncObject,
              0,
              &v23);
      v18 = v16;
      if ( v16 < 0 )
      {
LABEL_23:
        v19 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v19 + 24) = v18;
        *(_QWORD *)(v19 + 32) = a2;
        WdLogEvent5_WdError(v19);
        goto LABEL_4;
      }
      *(_QWORD *)(v4 + 536) = v8;
    }
  }
  if ( *((_QWORD *)a2 + 20) >= v8 )
    goto LABEL_4;
  v20 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 376LL) + 8LL)
                                                                                          + 536LL))(
          *((_QWORD *)a2 + 27),
          VidSchSyncObject,
          v8);
  v18 = v20;
  if ( v20 < 0 )
    goto LABEL_23;
  *((_QWORD *)a2 + 20) = v8;
LABEL_4:
  v9 = (_QWORD *)((char *)a2 + 144);
  if ( !*v9 )
  {
    v10 = *(_QWORD **)(v4 + 552);
    if ( *v10 != v4 + 544 )
      __fastfail(3u);
    *v9 = v4 + 544;
    v9[1] = v10;
    *v10 = v9;
    *(_QWORD *)(v4 + 552) = v9;
    ++*(_DWORD *)(v4 + 560);
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  *(_QWORD *)(v4 + 576) = 0LL;
  ExReleasePushLockExclusiveEx(v4 + 568, 0LL);
  KeLeaveCriticalRegion();
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
}
