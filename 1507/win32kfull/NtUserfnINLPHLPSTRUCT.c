/*
 * XREFs of NtUserfnINLPHLPSTRUCT @ 0x1C02227E0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ?TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z @ 0x1C0224CBC (-TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z.c)
 */

__int64 __fastcall NtUserfnINLPHLPSTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned int a6)
{
  _QWORD *v7; // rax
  int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rax
  _WORD *v11; // rdi
  _QWORD v13[7]; // [rsp+48h] [rbp-50h] BYREF

  if ( a2 != 56 || a6 != 689 )
    TraceLoggingStubInvalidParamEvent(a2, a6, "NtUserfnINLPHLPSTRUCT");
  v7 = a4;
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    v7 = (_QWORD *)W32UserProbeAddress;
  v13[5] = v7[2];
  v8 = *(_DWORD *)v7;
  if ( (unsigned __int16)*(_DWORD *)v7 < 0x18u )
    return 0LL;
  v10 = Win32AllocPoolWithQuota((unsigned __int16)v8, 1818784597LL);
  v11 = (_WORD *)v10;
  if ( !v10 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v10, v13, (__int64)Win32FreePool);
  memmove(v11, a4, (unsigned __int16)v8);
  *v11 = v8;
  v9 = _guard_dispatch_icall_fptr();
  PopAndFreeAlwaysW32ThreadLock((__int64)v13);
  return v9;
}
