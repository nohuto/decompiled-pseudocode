/*
 * XREFs of ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00BC6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C1CC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0018B64 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C005B400 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DxgkNotifyProcessThawCallout(PRKPROCESS PROCESS, __int64 a2, __int64 a3)
{
  __int64 ProcessWin32Process; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  int **Current; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  _BYTE v16[16]; // [rsp+28h] [rbp-19h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-9h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp+7h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp+17h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)PROCESS, &EventProfilerEnter, a3, 2096);
  KeStackAttachProcess(PROCESS, &ApcState);
  ProcessWin32Process = PsGetProcessWin32Process(PROCESS);
  if ( ProcessWin32Process )
  {
    v5 = *(_QWORD *)(ProcessWin32Process + 248);
    if ( v5 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, *(struct DXGFASTMUTEX *const *)(v5 + 88));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
      v6 = v5 + 144;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v5 + 144, 0LL);
      v7 = (_QWORD *)(v5 + 248);
      *(_QWORD *)(v5 + 152) = KeGetCurrentThread();
      v8 = *(_QWORD **)(v5 + 248);
      v17[0] = v7;
      while ( 1 )
      {
        v17[1] = v8;
        Current = (int **)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v17);
        if ( !Current )
          break;
        DXGDEVICE::NotifyProcessThaw(Current);
        v8 = (_QWORD *)*v8;
      }
      v18[0] = v7;
      while ( 1 )
      {
        v7 = (_QWORD *)*v7;
        v18[1] = v7;
        v10 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v18);
        if ( !v10 )
          break;
        v14 = *(_QWORD *)(v10 + 16);
        v15 = *(_QWORD *)(v14 + 16);
        if ( v15 != v11 && *(_QWORD *)(v15 + 1992) && *(_QWORD *)(v15 + 2032) )
          DXGADAPTER::UpdateLatencyTolerances(*(DXGADAPTER **)(v14 + 16));
      }
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
      *(_QWORD *)(v6 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v6, 0LL);
      KeLeaveCriticalRegion();
      if ( v16[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
    }
  }
  KeUnstackDetachProcess(&ApcState);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 2096);
}
