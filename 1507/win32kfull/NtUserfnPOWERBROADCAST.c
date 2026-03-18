/*
 * XREFs of NtUserfnPOWERBROADCAST @ 0x1C00F3870
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UIntAdd @ 0x1C005D488 (UIntAdd.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ?TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z @ 0x1C0224CBC (-TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z.c)
 */

__int64 __fastcall NtUserfnPOWERBROADCAST(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v7; // rdi
  int v8; // ecx
  const void *v9; // rbx
  size_t v10; // rsi
  unsigned __int64 v11; // r9
  unsigned __int64 *v12; // r10
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int128 v17; // [rsp+48h] [rbp-60h]
  _QWORD v18[4]; // [rsp+70h] [rbp-38h] BYREF
  UINT puResult; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int64 v20; // [rsp+C8h] [rbp+20h]

  v20 = a4;
  v7 = 0LL;
  if ( a2 != 536 || a6 - 683 > 0xC || (v8 = 4547, !_bittest(&v8, a6 - 683)) )
  {
    UserSetLastError(87);
    TraceLoggingStubInvalidParamEvent(a2, a6, "NtUserfnPOWERBROADCAST");
    v13 = 0LL;
    UserSetLastError(87);
    return v13;
  }
  if ( ((a3 >> 15) & 1) != 0 && a4 )
  {
    v9 = (const void *)(a4 + 20);
    if ( a4 + 20 > W32UserProbeAddress || (unsigned __int64)v9 < a4 )
      *W32UserProbeAddress = 0;
    v17 = *(_OWORD *)a4;
    v10 = *(unsigned int *)(a4 + 16);
    if ( UIntAdd(*(_DWORD *)(a4 + 16), 0x14u, &puResult) < 0 )
    {
      v13 = 0LL;
      goto LABEL_19;
    }
    v14 = puResult;
    if ( puResult && (v11 + puResult > *v12 || v11 + puResult < v11) )
      *(_BYTE *)*v12 = 0;
    v15 = Win32AllocPoolWithQuota(v14, 1651536725LL);
    v7 = v15;
    if ( !v15 )
    {
      UserSetLastError(8);
      v13 = 0LL;
      goto LABEL_19;
    }
    PushW32ThreadLock(v15, v18, (__int64)Win32FreePool);
    *(_OWORD *)v7 = v17;
    *(_DWORD *)(v7 + 16) = v10;
    memmove((void *)(v7 + 20), v9, v10);
    v20 = v7;
  }
  v13 = _guard_dispatch_icall_fptr();
LABEL_19:
  if ( v7 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v18);
  return v13;
}
