/*
 * XREFs of ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00D25D0
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
 *     ?NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C009149C (-NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00954B4 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DxgkNotifyProcessFreezeCallout(PRKPROCESS PROCESS, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 ProcessDxgProcess; // rsi
  __int64 v6; // r8
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v10; // rax
  DXGADAPTER *v11; // r8
  DXGADAPTER *v12; // rbx
  DXGADAPTER **v13; // rcx
  _BYTE v14[16]; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp+7h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)PROCESS, &EventProfilerEnter, a3, 2087);
  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS, a2);
  if ( ProcessDxgProcess )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 80));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
    *(_BYTE *)(ProcessDxgProcess + 364) = 1;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(ProcessDxgProcess + 136, 0LL);
    v7 = (_QWORD *)(ProcessDxgProcess + 240);
    *(_QWORD *)(ProcessDxgProcess + 144) = KeGetCurrentThread();
    v8 = *(_QWORD **)(ProcessDxgProcess + 240);
    v15[0] = ProcessDxgProcess + 240;
    while ( 1 )
    {
      v15[1] = v8;
      Current = (struct _KTHREAD **)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v15);
      if ( !Current )
        break;
      DXGDEVICE::NotifyProcessFreeze(Current);
      v8 = (_QWORD *)*v8;
    }
    v16[0] = ProcessDxgProcess + 240;
    while ( 1 )
    {
      v7 = (_QWORD *)*v7;
      v16[1] = v7;
      v10 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v16);
      if ( !v10 )
        break;
      v12 = *(DXGADAPTER **)(*(_QWORD *)(v10 + 16) + 16LL);
      if ( v12 != v11 )
      {
        v13 = (DXGADAPTER **)*((_QWORD *)v12 + 267);
        if ( v13 )
        {
          ADAPTER_RENDER::NotifyProcessFreeze(v13, (struct DXGPROCESS *)ProcessDxgProcess);
          if ( *((_QWORD *)v12 + 272) )
            DXGADAPTER::UpdateLatencyTolerances(v12);
        }
      }
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
    KeUnstackDetachProcess(&ApcState);
    *(_QWORD *)(ProcessDxgProcess + 144) = 0LL;
    ExReleasePushLockExclusiveEx(ProcessDxgProcess + 136, 0LL);
    KeLeaveCriticalRegion();
    if ( v14[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerExit, v6, 2087);
}
