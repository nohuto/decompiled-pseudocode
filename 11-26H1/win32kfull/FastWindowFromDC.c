/*
 * XREFs of FastWindowFromDC @ 0x14003E9DC
 * Callers:
 *     _ScrollDC @ 0x14003EB40 (_ScrollDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastWindowFromDC(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *i; // rbx
  __int64 v13; // rdx
  __int64 **v14; // rcx
  __int64 *v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rax

  v2 = 0LL;
  GreLockVisRgn();
  v5 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 56968) + 24LL);
  if ( (_QWORD *)*v5 != v5 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 56968) + 24LL);
    if ( *(_QWORD *)(v7 + 16) == a1 )
    {
      v9 = *(_DWORD *)(v7 + 48);
      if ( (v9 & 0x1000) != 0 && (v9 & 0x400000) == 0 )
        v2 = *(_QWORD *)(v7 + 80);
    }
    goto LABEL_3;
  }
  v10 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 56968);
  for ( i = *(__int64 **)(v10 + 24); ; i = (__int64 *)*i )
  {
    v11 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 56968) + 24LL;
    if ( i == (__int64 *)v11 )
      goto LABEL_3;
    if ( i[2] == a1 )
      break;
  }
  if ( (i[6] & 0x401000) == 0x1000 )
  {
    v14 = *(__int64 ***)(W32GetUserSessionState(v11, v10) + 56968);
    if ( v14[3] == i )
    {
LABEL_20:
      v2 = i[10];
      goto LABEL_3;
    }
    v15 = (__int64 *)*i;
    if ( (__int64 *)*i == i )
    {
      v16 = i + 1;
    }
    else
    {
      if ( (__int64 *)v15[1] != i )
        goto LABEL_21;
      v16 = i + 1;
      v14 = (__int64 **)i[1];
      if ( *v14 != i )
        goto LABEL_21;
      *v14 = v15;
      v15[1] = (__int64)v14;
    }
    v17 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 56968) + 24LL;
    v18 = *(_QWORD *)v17;
    if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) == v17 )
    {
      *i = v18;
      *v16 = v17;
      *(_QWORD *)(v18 + 8) = i;
      *(_QWORD *)v17 = i;
      goto LABEL_20;
    }
LABEL_21:
    __fastfail(3u);
  }
LABEL_3:
  GreUnlockVisRgn();
  return v2;
}
