/*
 * XREFs of ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00BC830
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C1CC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0018B64 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C006CFB8 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C00CC378 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 */

void __fastcall DxgkNotifyProcessFreezeCallout(PRKPROCESS PROCESS, __int64 a2, __int64 a3)
{
  __int64 ProcessWin32Process; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rbx
  DXGDEVICE *Current; // rax
  __int64 v8; // rax
  DXGADAPTER *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGADAPTER *v12; // rdi
  __int64 v13; // rbx
  struct DXGADAPTER *v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-69h] BYREF
  _QWORD *v16; // [rsp+28h] [rbp-61h]
  _BYTE v17[16]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v19[16]; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v20[56]; // [rsp+60h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp+Fh] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)PROCESS, &EventProfilerEnter, a3, 2087);
  KeStackAttachProcess(PROCESS, &ApcState);
  ProcessWin32Process = PsGetProcessWin32Process(PROCESS);
  if ( ProcessWin32Process )
  {
    v5 = *(_QWORD *)(ProcessWin32Process + 248);
    if ( v5 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, *(struct DXGFASTMUTEX *const *)(v5 + 88));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v5 + 144, 0LL);
      *(_QWORD *)(v5 + 152) = KeGetCurrentThread();
      v6 = *(_QWORD **)(v5 + 248);
      v18[0] = v5 + 248;
      while ( 1 )
      {
        v18[1] = v6;
        Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v18);
        if ( !Current )
          break;
        DXGDEVICE::NotifyProcessFreeze(Current);
        v6 = (_QWORD *)*v6;
      }
      v16 = *(_QWORD **)(v5 + 248);
      v15 = v5 + 248;
      while ( 1 )
      {
        v8 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v15);
        if ( !v8 )
        {
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
          *(_QWORD *)(v5 + 152) = 0LL;
          ExReleasePushLockExclusiveEx(v5 + 144, 0LL);
          KeLeaveCriticalRegion();
          if ( v17[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
          goto LABEL_10;
        }
        v12 = *(DXGADAPTER **)(*(_QWORD *)(v8 + 16) + 16LL);
        if ( v12 != v9 )
        {
          v13 = *((_QWORD *)v12 + 249);
          if ( v13 )
            break;
        }
LABEL_22:
        v16 = (_QWORD *)*v16;
      }
      if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(v13 + 16)) )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v14, 0LL);
        if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20) < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
LABEL_20:
          if ( *((_QWORD *)v12 + 254) )
            DXGADAPTER::UpdateLatencyTolerances(v12);
          goto LABEL_22;
        }
        ADAPTER_RENDER::PurgeSegments(v13, 25LL, v5);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
      }
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)v19,
        *(struct DXGADAPTER **)(v13 + 16),
        1);
      if ( *(_DWORD *)(*(_QWORD *)(v13 + 16) + 160LL) == 1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v13 + 424) + 8LL) + 1056LL))(*(_QWORD *)(v13 + 432));
      if ( v19[8] )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
      goto LABEL_20;
    }
  }
LABEL_10:
  KeUnstackDetachProcess(&ApcState);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v10, &EventProfilerExit, v11, 2087);
}
