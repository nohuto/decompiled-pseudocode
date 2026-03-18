/*
 * XREFs of NtUserfnPOWERBROADCAST @ 0x1C0118360
 * Callers:
 *     <none>
 * Callees:
 *     UIntAdd @ 0x1C0070A70 (UIntAdd.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?TraceLoggingStubInvalidParamEvent@@YAXIKQEAD@Z @ 0x1C021F198 (-TraceLoggingStubInvalidParamEvent@@YAXIKQEAD@Z.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 *v14; // r10
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r9
  __int128 v20; // [rsp+48h] [rbp-60h]
  _QWORD v21[4]; // [rsp+70h] [rbp-38h] BYREF
  UINT puResult; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int64 v23; // [rsp+C8h] [rbp+20h]

  v23 = a4;
  v7 = 0LL;
  if ( a2 != 536 || a6 - 683 > 0xC || (v8 = 4547, !_bittest(&v8, a6 - 683)) )
  {
    UserSetLastError(87LL);
    TraceLoggingStubInvalidParamEvent(a2, a6, "NtUserfnPOWERBROADCAST");
    v15 = 0LL;
    UserSetLastError(87LL);
    return v15;
  }
  if ( ((a3 >> 15) & 1) != 0 && a4 )
  {
    v9 = (const void *)(a4 + 20);
    if ( a4 + 20 > W32UserProbeAddress || (unsigned __int64)v9 < a4 )
      *W32UserProbeAddress = 0;
    v20 = *(_OWORD *)a4;
    v10 = *(unsigned int *)(a4 + 16);
    if ( UIntAdd(*(_DWORD *)(a4 + 16), 0x14u, &puResult) < 0 )
    {
      v15 = 0LL;
      goto LABEL_19;
    }
    v16 = puResult;
    if ( puResult && (v13 + puResult > *v14 || v13 + puResult < v13) )
      *(_BYTE *)*v14 = 0;
    v17 = Win32AllocPoolWithQuota(v16, 1651536725LL);
    v7 = v17;
    if ( !v17 )
    {
      UserSetLastError(8LL);
      v15 = 0LL;
      goto LABEL_19;
    }
    PushW32ThreadLock(v17, v21, (__int64)Win32FreePool, v18);
    *(_OWORD *)v7 = v20;
    *(_DWORD *)(v7 + 16) = v10;
    memmove((void *)(v7 + 20), v9, v10);
    v23 = v7;
  }
  v15 = _guard_dispatch_icall_fptr();
LABEL_19:
  if ( v7 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v21, v11, v12, v13);
  return v15;
}
