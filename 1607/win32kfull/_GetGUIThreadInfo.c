/*
 * XREFs of _GetGUIThreadInfo @ 0x1C00EE078
 * Callers:
 *     NtUserGetGUIThreadInfo @ 0x1C00EDF70 (NtUserGetGUIThreadInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall GetGUIThreadInfo(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rbp
  __int64 *v11; // rax
  __int64 v12; // rbp
  __int64 *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rsi
  __int64 *v21; // rax
  __int64 v22; // rax
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v27; // ecx
  int v28; // ecx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  int v31; // ecx
  int v32; // ecx

  v4 = a2;
  v5 = a1;
  if ( *a2 != 72 )
  {
    v30 = 87LL;
    goto LABEL_49;
  }
  if ( a1 )
  {
    v6 = a1[48];
  }
  else
  {
    v6 = gpqForeground;
    if ( !gpqForeground )
      return 0LL;
    v7 = *(_QWORD *)(gpqForeground + 88LL);
    if ( v7 && *(_QWORD *)(*(_QWORD *)(v7 + 16) + 384LL) == gpqForeground )
    {
      v5 = *(_QWORD **)(v7 + 16);
      v8 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
      if ( ThreadWin32Thread )
        v8 = *ThreadWin32Thread;
      if ( *(_QWORD *)(v8 + 408) != v5[51] )
        goto LABEL_48;
    }
  }
  if ( *(_QWORD *)(v6 + 256) )
  {
    v10 = 0LL;
    v11 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
    if ( v11 )
      v10 = *v11;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 256) + 16LL) + 408LL) != *(_QWORD *)(v10 + 408) )
      goto LABEL_48;
  }
  if ( v5 )
  {
    v12 = 0LL;
    v13 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
    if ( v13 )
      v12 = *v13;
    if ( v5[51] != *(_QWORD *)(v12 + 408) )
    {
LABEL_48:
      v30 = 5LL;
LABEL_49:
      UserSetLastError(v30);
      return 0LL;
    }
  }
  v4[1] = 0;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  if ( !v5 )
    goto LABEL_20;
  v14 = v5[74];
  if ( v14 && (*(_DWORD *)(v14 + 180) & 8) == 0 && *(_QWORD *)v14 )
  {
    v4[1] = 2;
    *((_QWORD *)v4 + 5) = **(_QWORD **)v5[74];
  }
  v15 = (_QWORD *)v5[66];
  if ( !v15 || !*v15 )
    goto LABEL_20;
  v27 = v4[1] | 4;
  v4[1] = v27;
  a2 = (_DWORD *)*(unsigned int *)*v15;
  if ( ((unsigned __int8)a2 & 2) == 0 )
  {
    v28 = v27 | 0x10;
LABEL_41:
    v4[1] = v28;
    goto LABEL_42;
  }
  if ( ((unsigned __int8)a2 & 4) != 0 )
  {
    v28 = v27 | 8;
    goto LABEL_41;
  }
LABEL_42:
  v29 = *(_QWORD **)(*(_QWORD *)v5[66] + 8LL);
  if ( v29 )
    *((_QWORD *)v4 + 4) = *v29;
LABEL_20:
  v16 = *(_QWORD **)(v6 + 88);
  if ( v16 )
    v16 = (_QWORD *)*v16;
  *((_QWORD *)v4 + 1) = v16;
  v17 = *(_QWORD **)(v6 + 80);
  if ( v17 )
    v17 = (_QWORD *)*v17;
  *((_QWORD *)v4 + 2) = v17;
  v18 = *(_QWORD **)(v6 + 72);
  if ( v18 )
    v18 = (_QWORD *)*v18;
  *((_QWORD *)v4 + 6) = 0LL;
  *((_QWORD *)v4 + 3) = v18;
  v19 = *(_QWORD **)(v6 + 256);
  if ( v19 )
  {
    v20 = 0LL;
    *((_QWORD *)v4 + 6) = *v19;
    v21 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
    if ( v21 )
      v20 = *v21;
    v22 = *(_QWORD *)(v6 + 256);
    if ( *(_QWORD *)(v22 + 16) != v20 && (*(_DWORD *)(*(_QWORD *)(v22 + 152) + 84LL) & 0x20) != 0 )
    {
      v31 = *(_DWORD *)(v6 + 308);
      v4[14] = v31;
      v4[16] = *(_DWORD *)(v6 + 316) + v31;
      v32 = *(_DWORD *)(v6 + 312);
      v4[15] = v32;
      v25 = *(_DWORD *)(v6 + 320) + v32;
    }
    else
    {
      v23 = *(_DWORD *)(v6 + 272);
      v4[14] = v23;
      v4[16] = *(_DWORD *)(v6 + 284) + v23;
      v24 = *(_DWORD *)(v6 + 276);
      v4[15] = v24;
      v25 = *(_DWORD *)(v6 + 280) + v24;
    }
    v4[17] = v25;
    if ( !*(_DWORD *)(v6 + 268) )
      v4[1] |= 1u;
  }
  else if ( v5 && (*(_DWORD *)(v5[47] + 12LL) & 0x4000000) != 0 )
  {
    *((_QWORD *)v4 + 6) = *(_QWORD *)(v5[51] + 136LL);
    *(_OWORD *)(v4 + 14) = *(_OWORD *)(v5[51] + 144LL);
  }
  else
  {
    *((_QWORD *)v4 + 7) = 0LL;
    *((_QWORD *)v4 + 8) = 0LL;
  }
  return 1LL;
}
