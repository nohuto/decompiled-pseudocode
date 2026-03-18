/*
 * XREFs of _GetGUIThreadInfo @ 0x140292988
 * Callers:
 *     NtUserGetGUIThreadInfo @ 0x1401CFB30 (NtUserGetGUIThreadInfo.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetGUIThreadInfo(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  int v4; // ecx
  __int64 v6; // rdi
  __int64 v7; // rbp
  _QWORD *v8; // rbp
  struct tagTHREADINFO *v9; // rax
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  int **v12; // rdx
  int v13; // edx
  int v14; // ecx
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // ecx
  int v24; // edx
  int v25; // ecx

  v3 = (_QWORD *)a1;
  if ( *(_DWORD *)a2 != 72 )
  {
    v4 = 87;
LABEL_3:
    UserSetLastError(v4);
    return 0LL;
  }
  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 464);
  }
  else
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(0LL, a2) + 18928);
    if ( !v6 )
      return 0LL;
    v7 = *(_QWORD *)(v6 + 128);
    if ( v7 )
    {
      v8 = *(_QWORD **)(v7 + 16);
      if ( v8[58] == v6 )
      {
        v3 = v8;
        v9 = PtiCurrent(a1);
        a1 = v8[61];
        if ( *((_QWORD *)v9 + 61) != a1 )
          goto LABEL_15;
      }
    }
  }
  if ( *(_QWORD *)(v6 + 344)
    && (v10 = PtiCurrent(a1),
        a1 = *(_QWORD *)(v6 + 344),
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 488LL) != *((_QWORD *)v10 + 61))
    || v3 && (a1 = *((_QWORD *)PtiCurrent(a1) + 61), v3[61] != a1) )
  {
LABEL_15:
    v4 = 5;
    goto LABEL_3;
  }
  *(_DWORD *)(a2 + 4) = 0;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  if ( v3 )
  {
    v11 = v3[88];
    a1 = 0LL;
    if ( v11 && (*(_DWORD *)(v11 + 200) & 8) == 0 && *(_QWORD *)(v11 + 16) )
    {
      *(_DWORD *)(a2 + 4) = 2;
      a1 = 2LL;
      *(_QWORD *)(a2 + 40) = **(_QWORD **)(v3[88] + 16LL);
    }
    v12 = (int **)v3[80];
    if ( v12 )
    {
      if ( *v12 )
      {
        *(_DWORD *)(a2 + 4) = a1 | 4;
        v13 = **v12;
        if ( (v13 & 2) != 0 )
        {
          if ( (v13 & 4) == 0 )
            goto LABEL_28;
          v14 = a1 | 0xC;
        }
        else
        {
          v14 = a1 | 0x14;
        }
        *(_DWORD *)(a2 + 4) = v14;
LABEL_28:
        a1 = *(_QWORD *)v3[80];
        v15 = *(_QWORD **)(a1 + 8);
        if ( v15 )
          *(_QWORD *)(a2 + 32) = *v15;
      }
    }
  }
  v16 = *(_QWORD **)(v6 + 128);
  if ( v16 )
    v16 = (_QWORD *)*v16;
  *(_QWORD *)(a2 + 8) = v16;
  v17 = *(_QWORD **)(v6 + 120);
  if ( v17 )
    v17 = (_QWORD *)*v17;
  *(_QWORD *)(a2 + 16) = v17;
  v18 = *(_QWORD **)(v6 + 112);
  if ( v18 )
    v18 = (_QWORD *)*v18;
  *(_QWORD *)(a2 + 24) = v18;
  *(_QWORD *)(a2 + 48) = 0LL;
  v19 = *(_QWORD **)(v6 + 344);
  if ( v19 )
  {
    *(_QWORD *)(a2 + 48) = *v19;
    v20 = PtiCurrent(a1);
    v21 = *(_QWORD *)(v6 + 344);
    if ( *(struct tagTHREADINFO **)(v21 + 16) == v20
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 136) + 8LL) + 8LL) & 0x20) == 0 )
    {
      v25 = *(_DWORD *)(v6 + 364);
      *(_DWORD *)(a2 + 56) = v25;
      *(_DWORD *)(a2 + 64) = *(_DWORD *)(v6 + 376) + v25;
      v23 = *(_DWORD *)(v6 + 368);
      *(_DWORD *)(a2 + 60) = v23;
      v24 = *(_DWORD *)(v6 + 372);
    }
    else
    {
      v22 = *(_DWORD *)(v6 + 404);
      *(_DWORD *)(a2 + 56) = v22;
      *(_DWORD *)(a2 + 64) = *(_DWORD *)(v6 + 412) + v22;
      v23 = *(_DWORD *)(v6 + 408);
      *(_DWORD *)(a2 + 60) = v23;
      v24 = *(_DWORD *)(v6 + 416);
    }
    *(_DWORD *)(a2 + 68) = v23 + v24;
    if ( !*(_DWORD *)(v6 + 356) )
      *(_DWORD *)(a2 + 4) |= 1u;
  }
  else if ( v3 && (*(_DWORD *)(v3[57] + 12LL) & 0x4000000) != 0 )
  {
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(v3[61] + 152LL);
    *(_OWORD *)(a2 + 56) = *(_OWORD *)(v3[61] + 160LL);
  }
  else
  {
    *(_OWORD *)(a2 + 56) = 0LL;
  }
  return 1LL;
}
