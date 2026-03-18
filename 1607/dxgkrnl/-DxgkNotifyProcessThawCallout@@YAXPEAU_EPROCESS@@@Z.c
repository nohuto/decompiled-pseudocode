/*
 * XREFs of ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00D2440
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C9E4 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C001CC80 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C006E2C4 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DxgkNotifyProcessThawCallout(PRKPROCESS PROCESS, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 ProcessDxgProcess; // rbx
  __int64 v6; // r8
  __int64 v7; // rsi
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  _BYTE v15[16]; // [rsp+28h] [rbp-19h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-9h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp+7h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp+17h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)PROCESS, &EventProfilerEnter, a3, 2096);
  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS, a2);
  if ( ProcessDxgProcess )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 80));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
    *(_BYTE *)(ProcessDxgProcess + 364) = 0;
    v7 = ProcessDxgProcess + 136;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(ProcessDxgProcess + 136, 0LL);
    v8 = (_QWORD *)(ProcessDxgProcess + 240);
    *(_QWORD *)(ProcessDxgProcess + 144) = KeGetCurrentThread();
    v9 = *(_QWORD **)(ProcessDxgProcess + 240);
    v16[0] = v8;
    while ( 1 )
    {
      v16[1] = v9;
      Current = (struct _KTHREAD **)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v16);
      if ( !Current )
        break;
      DXGDEVICE::NotifyProcessThaw(Current);
      v9 = (_QWORD *)*v9;
    }
    v17[0] = v8;
    while ( 1 )
    {
      v8 = (_QWORD *)*v8;
      v17[1] = v8;
      v11 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v17);
      if ( !v11 )
        break;
      v13 = *(_QWORD *)(v11 + 16);
      v14 = *(_QWORD *)(v13 + 16);
      if ( v14 != v12 && *(_QWORD *)(v14 + 2136) && *(_QWORD *)(v14 + 2176) )
        DXGADAPTER::UpdateLatencyTolerances(*(DXGADAPTER **)(v13 + 16));
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
    KeUnstackDetachProcess(&ApcState);
    *(_QWORD *)(v7 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    if ( v15[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerExit, v6, 2096);
}
