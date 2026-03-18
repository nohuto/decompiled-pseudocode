/*
 * XREFs of _GetGUIThreadInfo @ 0x1C00C63A0
 * Callers:
 *     NtUserGetGUIThreadInfo @ 0x1C00C6290 (NtUserGetGUIThreadInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall GetGUIThreadInfo(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // r14
  __int64 *v10; // rax
  __int64 v11; // r14
  __int64 *v12; // rax
  __int64 v13; // rcx
  int **v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rax
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v28; // ecx
  int v29; // edx
  int v30; // ecx
  _QWORD *v31; // rax
  int v32; // ecx
  int v33; // ecx

  v3 = a1;
  if ( *(_DWORD *)a2 != 72 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  v4 = 0LL;
  if ( a1 )
  {
    v5 = a1[49];
  }
  else
  {
    v5 = gpqForeground;
    if ( !gpqForeground )
      return 0LL;
    v6 = *(_QWORD *)(gpqForeground + 80LL);
    if ( v6 && *(_QWORD *)(*(_QWORD *)(v6 + 16) + 392LL) == gpqForeground )
    {
      v3 = *(_QWORD **)(v6 + 16);
      v7 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v7 = *ThreadWin32Thread;
      if ( *(_QWORD *)(v7 + 416) != v3[52] )
      {
LABEL_50:
        UserSetLastError(5);
        return 0LL;
      }
    }
  }
  if ( *(_QWORD *)(v5 + 248) )
  {
    v9 = 0LL;
    v10 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v10 )
      v9 = *v10;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 248) + 16LL) + 416LL) != *(_QWORD *)(v9 + 416) )
      goto LABEL_50;
  }
  if ( v3 )
  {
    v11 = 0LL;
    v12 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v12 )
      v11 = *v12;
    if ( v3[52] != *(_QWORD *)(v11 + 416) )
      goto LABEL_50;
  }
  *(_DWORD *)(a2 + 4) = 0;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  if ( !v3 )
    goto LABEL_20;
  v13 = v3[75];
  if ( v13 && (*(_DWORD *)(v13 + 180) & 8) == 0 && *(_QWORD *)v13 )
  {
    *(_DWORD *)(a2 + 4) = 2;
    *(_QWORD *)(a2 + 40) = **(_QWORD **)v3[75];
  }
  v14 = (int **)v3[67];
  if ( !v14 || !*v14 )
    goto LABEL_20;
  v28 = *(_DWORD *)(a2 + 4) | 4;
  *(_DWORD *)(a2 + 4) = v28;
  v29 = **v14;
  if ( (v29 & 2) == 0 )
  {
    v30 = v28 | 0x10;
LABEL_43:
    *(_DWORD *)(a2 + 4) = v30;
    goto LABEL_44;
  }
  if ( (v29 & 4) != 0 )
  {
    v30 = v28 | 8;
    goto LABEL_43;
  }
LABEL_44:
  v31 = *(_QWORD **)(*(_QWORD *)v3[67] + 8LL);
  if ( v31 )
    *(_QWORD *)(a2 + 32) = *v31;
LABEL_20:
  v15 = *(__int64 **)(v5 + 80);
  if ( v15 )
    v16 = *v15;
  else
    v16 = 0LL;
  *(_QWORD *)(a2 + 8) = v16;
  v17 = *(__int64 **)(v5 + 72);
  if ( v17 )
    v18 = *v17;
  else
    v18 = 0LL;
  *(_QWORD *)(a2 + 16) = v18;
  v19 = *(__int64 **)(v5 + 64);
  if ( v19 )
    v20 = *v19;
  else
    v20 = 0LL;
  *(_QWORD *)(a2 + 24) = v20;
  *(_QWORD *)(a2 + 48) = 0LL;
  v21 = *(_QWORD **)(v5 + 248);
  if ( v21 )
  {
    *(_QWORD *)(a2 + 48) = *v21;
    v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v22 )
      v4 = *v22;
    v23 = *(_QWORD *)(v5 + 248);
    if ( *(_QWORD *)(v23 + 16) != v4 && (*(_DWORD *)(*(_QWORD *)(v23 + 152) + 84LL) & 0x20) != 0 )
    {
      v32 = *(_DWORD *)(v5 + 300);
      *(_DWORD *)(a2 + 56) = v32;
      *(_DWORD *)(a2 + 64) = *(_DWORD *)(v5 + 308) + v32;
      v33 = *(_DWORD *)(v5 + 304);
      *(_DWORD *)(a2 + 60) = v33;
      v26 = *(_DWORD *)(v5 + 312) + v33;
    }
    else
    {
      v24 = *(_DWORD *)(v5 + 264);
      *(_DWORD *)(a2 + 56) = v24;
      *(_DWORD *)(a2 + 64) = *(_DWORD *)(v5 + 276) + v24;
      v25 = *(_DWORD *)(v5 + 268);
      *(_DWORD *)(a2 + 60) = v25;
      v26 = *(_DWORD *)(v5 + 272) + v25;
    }
    *(_DWORD *)(a2 + 68) = v26;
    if ( !*(_DWORD *)(v5 + 260) )
      *(_DWORD *)(a2 + 4) |= 1u;
  }
  else if ( v3 && (*(_DWORD *)(v3[48] + 12LL) & 0x4000000) != 0 )
  {
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(v3[52] + 136LL);
    *(_OWORD *)(a2 + 56) = *(_OWORD *)(v3[52] + 144LL);
  }
  else
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  return 1LL;
}
