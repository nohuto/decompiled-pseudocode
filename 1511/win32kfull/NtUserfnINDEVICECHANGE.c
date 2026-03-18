/*
 * XREFs of NtUserfnINDEVICECHANGE @ 0x1C011EBA0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     UIntAdd @ 0x1C00A93FC (UIntAdd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z @ 0x1C022614C (-TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z.c)
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
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  signed int v19; // r9d
  __int64 v20; // r9
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  UINT v23; // r10d
  unsigned __int64 v24; // rcx
  UINT v25; // r9d
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  _QWORD v31[11]; // [rsp+60h] [rbp-58h] BYREF
  UINT puResult; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v33; // [rsp+D0h] [rbp+18h]
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
        UserSetLastError(87);
        return v11;
      }
    }
  }
  if ( !(_DWORD)v8 )
    goto LABEL_77;
  if ( !v6 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  if ( (unsigned __int64)v6 >= W32UserProbeAddress )
    v6 = (UINT *)W32UserProbeAddress;
  v12 = *v6;
  LODWORD(v33) = v12;
  v13 = v12;
  if ( v12 < 0xC )
    goto LABEL_7;
  v14 = Src;
  if ( (unsigned __int64)Src + v12 > W32UserProbeAddress || (char *)Src + v12 < Src )
    *W32UserProbeAddress = 0;
  if ( UIntAdd(v12, 2u, &puResult) < 0 )
  {
    UserSetLastError(v15 + 85);
    return 0LL;
  }
  v16 = Win32AllocPoolWithQuota(puResult, 1986294613LL);
  v9 = (_DWORD *)v16;
  if ( !v16 )
  {
    UserSetLastError(8);
    v11 = 0LL;
    goto LABEL_78;
  }
  PushW32ThreadLock(v16, v31, (__int64)Win32FreePool);
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
      v28 = -1LL;
      do
        ++v28;
      while ( *((_WORD *)v9 + v28 + 6) );
      if ( UIntAdd(v28, 1u, &puResult) >= 0 )
      {
        v29 = 2LL * puResult;
        if ( v29 > 0xFFFFFFFF )
        {
          puResult = -1;
        }
        else
        {
          puResult *= 2;
          if ( UIntAdd(v29, 0xCu, &puResult) >= 0 && puResult <= (unsigned int)v13 )
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
      v26 = -1LL;
      do
        ++v26;
      while ( *((_WORD *)v9 + v26 + 14) );
      if ( UIntAdd(v26, 1u, &puResult) >= 0 )
      {
        v27 = 2LL * puResult;
        if ( v27 > 0xFFFFFFFF )
        {
          puResult = -1;
        }
        else
        {
          puResult *= 2;
          if ( UIntAdd(v27, 0x1Cu, &puResult) >= 0 && puResult <= (unsigned int)v13 )
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
      v17 = -1LL;
      do
        ++v17;
      while ( *((_WORD *)v9 + v17 + 8) );
      if ( UIntAdd(v17, 1u, &puResult) < 0 )
        goto LABEL_36;
      v18 = 2LL * puResult;
      v33 = v18;
      if ( v18 > 0xFFFFFFFF )
      {
        puResult = -1;
LABEL_36:
        v11 = 0LL;
        goto LABEL_78;
      }
      puResult *= 2;
      if ( UIntAdd(v18, 0x10u, &puResult) < 0 || puResult > (unsigned int)v13 )
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
  v19 = v9[12];
  if ( v19 < 0 )
    goto LABEL_77;
  if ( (v19 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( UIntAdd(0x34u, v19, &puResult) < 0 || puResult > (unsigned int)v13 )
  {
    v11 = 0LL;
    goto LABEL_78;
  }
  v21 = (unsigned __int64)v9 + v20 + 52;
  if ( v21 < (unsigned __int64)(v9 + 13) )
    goto LABEL_55;
  v22 = -1LL;
  do
    ++v22;
  while ( *(_WORD *)(v21 + 2 * v22) );
  if ( UIntAdd(v22, 1u, &puResult) < 0 )
  {
LABEL_55:
    v11 = 0LL;
    goto LABEL_78;
  }
  v24 = 2LL * puResult;
  if ( v24 > 0xFFFFFFFF )
  {
    puResult = -1;
    goto LABEL_55;
  }
  puResult *= 2;
  if ( UIntAdd(v24, v23, &puResult) < 0 || UIntAdd(puResult, v25, &puResult) < 0 || puResult > (unsigned int)v13 )
    goto LABEL_55;
LABEL_77:
  v11 = _guard_dispatch_icall_fptr();
LABEL_78:
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v31);
  return v11;
}
