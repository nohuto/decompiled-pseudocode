/*
 * XREFs of NtUserfnINDEVICECHANGE @ 0x1C0111590
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

__int64 __fastcall NtUserfnINDEVICECHANGE(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        void *a4,
        __int64 a5,
        unsigned int a6)
{
  UINT *v6; // r14
  __int64 v8; // rbx
  _DWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rbx
  UINT v12; // eax
  size_t v13; // rbx
  void *v14; // r14
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  signed int v23; // r9d
  __int64 v24; // rcx
  UINT v25; // r10d
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  _QWORD v32[11]; // [rsp+60h] [rbp-58h] BYREF
  UINT puResult; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v34; // [rsp+D0h] [rbp+18h]
  void *Src; // [rsp+D8h] [rbp+20h]

  Src = a4;
  v6 = (UINT *)a4;
  v8 = (a3 >> 15) & 1;
  v9 = 0LL;
  if ( a2 != 537 || a6 != 689 )
    TraceLoggingStubInvalidParamEvent(a2, a6, "NtUserfnINDEVICECHANGE");
  if ( a3 - 0x8000 <= 0xA )
  {
    v10 = 1937LL;
    if ( _bittest64(&v10, a3 - 0x8000) )
    {
      if ( !v6 )
      {
LABEL_7:
        v11 = 0LL;
        UserSetLastError(87LL);
        return v11;
      }
    }
  }
  if ( !(_DWORD)v8 )
    goto LABEL_77;
  if ( !v6 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  if ( (unsigned __int64)v6 >= W32UserProbeAddress )
    v6 = (UINT *)W32UserProbeAddress;
  v12 = *v6;
  LODWORD(v34) = v12;
  v13 = v12;
  if ( v12 < 0xC )
    goto LABEL_7;
  v14 = Src;
  if ( (unsigned __int64)Src + v12 > W32UserProbeAddress || (char *)Src + v12 < Src )
    *W32UserProbeAddress = 0;
  if ( UIntAdd(v12, 2u, &puResult) < 0 )
  {
    UserSetLastError((unsigned int)(v15 + 85));
    return 0LL;
  }
  v16 = Win32AllocPoolWithQuota(puResult, 1986294613LL);
  v9 = (_DWORD *)v16;
  if ( !v16 )
  {
    UserSetLastError(8LL);
    v11 = 0LL;
    goto LABEL_78;
  }
  PushW32ThreadLock(v16, v32, (__int64)Win32FreePool, v17);
  memmove(v9, v14, v13);
  *((_WORD *)v9 + (v13 >> 1)) = 0;
  Src = v9;
  if ( *v9 != (_DWORD)v13 )
  {
    v11 = 0LL;
    goto LABEL_78;
  }
  if ( v9[1] == 3 )
  {
    if ( (unsigned int)v13 >= 0x10 )
    {
      v29 = -1LL;
      do
        ++v29;
      while ( *((_WORD *)v9 + v29 + 6) );
      if ( UIntAdd(v29, 1u, &puResult) >= 0 )
      {
        v30 = 2LL * puResult;
        if ( v30 > 0xFFFFFFFF )
        {
          puResult = -1;
        }
        else
        {
          puResult *= 2;
          if ( UIntAdd(v30, 0xCu, &puResult) >= 0 && puResult <= (unsigned int)v13 )
            goto LABEL_77;
        }
      }
    }
    v11 = 0LL;
    goto LABEL_78;
  }
  if ( v9[1] == 5 )
  {
    if ( (unsigned int)v13 >= 0x20 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( *((_WORD *)v9 + v27 + 14) );
      if ( UIntAdd(v27, 1u, &puResult) >= 0 )
      {
        v28 = 2LL * puResult;
        if ( v28 > 0xFFFFFFFF )
        {
          puResult = -1;
        }
        else
        {
          puResult *= 2;
          if ( UIntAdd(v28, 0x1Cu, &puResult) >= 0 && puResult <= (unsigned int)v13 )
            goto LABEL_77;
        }
      }
    }
    v11 = 0LL;
    goto LABEL_78;
  }
  if ( v9[1] != 6 )
  {
    if ( v9[1] == 7 )
    {
      if ( (unsigned int)v13 < 0x1A0 )
        goto LABEL_36;
      v21 = -1LL;
      do
        ++v21;
      while ( *((_WORD *)v9 + v21 + 8) );
      if ( UIntAdd(v21, 1u, &puResult) < 0 )
        goto LABEL_36;
      v22 = 2LL * puResult;
      v34 = v22;
      if ( v22 > 0xFFFFFFFF )
      {
        puResult = -1;
LABEL_36:
        v11 = 0LL;
        goto LABEL_78;
      }
      puResult *= 2;
      if ( UIntAdd(v22, 0x10u, &puResult) < 0 || puResult > (unsigned int)v13 )
        goto LABEL_36;
    }
    goto LABEL_77;
  }
  if ( (unsigned int)v13 < 0x38 )
  {
    v11 = 0LL;
    goto LABEL_78;
  }
  if ( a3 != 32774 )
    goto LABEL_77;
  v23 = v9[12];
  if ( v23 < 0 )
    goto LABEL_77;
  if ( (v23 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( UIntAdd(0x34u, v23, &puResult) < 0 || puResult > (unsigned int)v13 )
  {
    v11 = 0LL;
    goto LABEL_78;
  }
  v18 = (unsigned __int64)v9 + v20 + 52;
  if ( v18 < (unsigned __int64)(v9 + 13) )
    goto LABEL_55;
  v24 = -1LL;
  do
    ++v24;
  while ( *(_WORD *)(v18 + 2 * v24) );
  if ( UIntAdd(v24, 1u, &puResult) < 0 )
  {
LABEL_55:
    v11 = 0LL;
    goto LABEL_78;
  }
  v26 = 2LL * puResult;
  if ( v26 > 0xFFFFFFFF )
  {
    puResult = -1;
    goto LABEL_55;
  }
  puResult *= 2;
  if ( UIntAdd(v26, v25, &puResult) < 0 || UIntAdd(puResult, v20, &puResult) < 0 || puResult > (unsigned int)v13 )
    goto LABEL_55;
LABEL_77:
  v11 = _guard_dispatch_icall_fptr();
LABEL_78:
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v32, v18, v19, v20);
  return v11;
}
