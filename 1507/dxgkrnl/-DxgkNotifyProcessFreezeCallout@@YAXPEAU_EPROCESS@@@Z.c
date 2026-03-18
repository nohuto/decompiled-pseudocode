/*
 * XREFs of ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00AACE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0009A4C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C001AF60 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C0079E60 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C0093DB8 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 */

void __fastcall DxgkNotifyProcessFreezeCallout(PRKPROCESS PROCESS, __int64 a2, __int64 a3)
{
  __int64 ProcessWin32Process; // rax
  __int64 v5; // r14
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  DXGDEVICE *Current; // rax
  __int64 v9; // rax
  DXGADAPTER *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGADAPTER *v13; // rbx
  __int64 v14; // rsi
  struct DXGADAPTER *v15; // rcx
  _BYTE v16[16]; // [rsp+28h] [rbp-59h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v19[56]; // [rsp+58h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp+Fh] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)PROCESS, &EventProfilerEnter, a3, 2087);
  KeStackAttachProcess(PROCESS, &ApcState);
  ProcessWin32Process = PsGetProcessWin32Process(PROCESS);
  if ( ProcessWin32Process )
  {
    v5 = *(_QWORD *)(ProcessWin32Process + 248);
    if ( v5 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, *(struct DXGFASTMUTEX *const *)(v5 + 88));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v5 + 144, 0LL);
      v6 = (_QWORD *)(v5 + 248);
      *(_QWORD *)(v5 + 152) = KeGetCurrentThread();
      v7 = *(_QWORD **)(v5 + 248);
      v18[0] = v5 + 248;
      while ( 1 )
      {
        v18[1] = v7;
        Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v18);
        if ( !Current )
          break;
        DXGDEVICE::NotifyProcessFreeze(Current);
        v7 = (_QWORD *)*v7;
      }
      v17[0] = v5 + 248;
      while ( 1 )
      {
        v6 = (_QWORD *)*v6;
        v17[1] = v6;
        v9 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v17);
        if ( !v9 )
          break;
        v13 = *(DXGADAPTER **)(*(_QWORD *)(v9 + 16) + 16LL);
        if ( v13 != v10 )
        {
          v14 = *((_QWORD *)v13 + 248);
          if ( v14 )
          {
            if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(v14 + 16)) )
            {
              COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, v15, 0LL);
              if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19) >= 0 )
                ADAPTER_RENDER::PurgeSegments((struct _EX_RUNDOWN_REF *)v14, 0x19u, v5);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
            }
            if ( *((_QWORD *)v13 + 252) )
              DXGADAPTER::UpdateLatencyTolerances(v13);
          }
        }
      }
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
      *(_QWORD *)(v5 + 152) = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 144, 0LL);
      KeLeaveCriticalRegion();
      if ( v16[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
    }
  }
  KeUnstackDetachProcess(&ApcState);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v11, &EventProfilerExit, v12, 2087);
}
