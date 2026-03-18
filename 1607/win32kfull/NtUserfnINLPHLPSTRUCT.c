/*
 * XREFs of NtUserfnINLPHLPSTRUCT @ 0x1C021CCB0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?TraceLoggingStubInvalidParamEvent@@YAXIKQEAD@Z @ 0x1C021F198 (-TraceLoggingStubInvalidParamEvent@@YAXIKQEAD@Z.c)
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
  __int64 v11; // r9
  _WORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v17[7]; // [rsp+48h] [rbp-50h] BYREF

  if ( a2 != 56 || a6 != 689 )
    TraceLoggingStubInvalidParamEvent(a2, a6, "NtUserfnINLPHLPSTRUCT");
  v7 = a4;
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    v7 = (_QWORD *)W32UserProbeAddress;
  v17[5] = v7[2];
  v8 = *(_DWORD *)v7;
  if ( (unsigned __int16)*(_DWORD *)v7 < 0x18u )
    return 0LL;
  v10 = Win32AllocPoolWithQuota((unsigned __int16)v8, 1818784597LL);
  v12 = (_WORD *)v10;
  if ( !v10 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v10, v17, (__int64)Win32FreePool, v11);
  memmove(v12, a4, (unsigned __int16)v8);
  *v12 = v8;
  v9 = _guard_dispatch_icall_fptr();
  PopAndFreeAlwaysW32ThreadLock((__int64)v17, v13, v14, v15);
  return v9;
}
