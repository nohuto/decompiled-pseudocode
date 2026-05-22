/*
 * XREFs of ?CheckAndSendCaptureEnded@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z @ 0x180010110
 * Callers:
 *     ?RouteNextInputToTarget@GestureTargetingTarget@@QEAAJIPEAX0AEBUtagMsgRoutingInfo@@@Z @ 0x18000F80C (-RouteNextInputToTarget@GestureTargetingTarget@@QEAAJIPEAX0AEBUtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x18000934C (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     ?InContactPointersPresent@GestureTargetingTarget@@AEAA_NPEAUInputInfo@@@Z @ 0x180010078 (-InContactPointersPresent@GestureTargetingTarget@@AEAA_NPEAUInputInfo@@@Z.c)
 *     ?Head@?$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJPEAPEAUChainedTarget@GestureTargetingTarget@@@Z @ 0x180010D64 (-Head@-$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJPEAPEAUChainedTarget@G.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureTargetingTarget::CheckAndSendCaptureEnded(GestureTargetingTarget *this, struct InputInfo *a2)
{
  int v3; // r12d
  unsigned int v4; // r14d
  _DWORD *v5; // rsi
  int PointersFromInput; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  struct Pointer **v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r9d
  __int64 v15; // rcx
  unsigned int v17; // [rsp+30h] [rbp-98h] BYREF
  __int64 v18; // [rsp+38h] [rbp-90h] BYREF
  struct Pointer *v19[10]; // [rsp+40h] [rbp-88h] BYREF

  v17 = 0;
  if ( !GestureTargetingTarget::InContactPointersPresent(this, a2) )
  {
    v3 = 0;
    v4 = *((_DWORD *)this + 21) - 1;
    if ( *((_DWORD *)this + 21) != 1 )
    {
      v5 = (_DWORD *)((char *)this + 64);
      while ( 1 )
      {
        v18 = 0LL;
        PointersFromInput = DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::Head(v5, &v18);
        if ( PointersFromInput < 0 )
          break;
        v9 = (_QWORD *)v18;
        if ( *(_BYTE *)(v18 + 1896) )
        {
          PointersFromInput = GetPointersFromInput((struct InputInfo *)(v18 + 8), v7, v19, &v17);
          if ( PointersFromInput < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_22;
            v14 = 579;
LABEL_21:
            Template_qqq(v8, &MinInput_Warning_CheckResult, 4, v14, PointersFromInput);
            goto LABEL_22;
          }
          if ( v17 )
          {
            v10 = v19;
            v11 = v17;
            do
            {
              v12 = (__int64)*v10++;
              *(_DWORD *)(v12 + 4) = 0;
              --v11;
            }
            while ( v11 );
          }
          *((_DWORD *)v9 + 136) = 4;
          (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v9 + 24LL))(*v9, v9 + 1);
        }
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 16LL))(*v9);
        v13 = (unsigned int)v5[5];
        if ( !(_DWORD)v13 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            Template_qqq(v13, &MinInput_Warning_CheckResult, 4, 93, 5);
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              Template_qqq(v15, &MinInput_Warning_CheckResult, 4, 594, 5);
          }
LABEL_22:
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v5[3] = (unsigned int)(v5[3] + 1) % v5[2];
        v5[5] = v13 - 1;
        if ( ++v3 >= v4 )
          return 0LL;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_22;
      v14 = 571;
      goto LABEL_21;
    }
  }
  return 0LL;
}
