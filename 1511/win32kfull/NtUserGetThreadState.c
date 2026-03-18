/*
 * XREFs of NtUserGetThreadState @ 0x1C00E4D10
 * Callers:
 *     <none>
 * Callees:
 *     _GetQueueStatus @ 0x1C00D9BA0 (_GetQueueStatus.c)
 */

__int64 __fastcall NtUserGetThreadState(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  __int64 *v12; // rax
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  HANDLE CurrentProcessId; // rax
  bool v20; // zf
  int v21; // edi
  int v22; // edi

  v2 = EnterSharedCrit(0LL, 1LL);
  v5 = 0LL;
  v6 = v2;
  if ( a1 == 8 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v2 + 384) + 352LL);
    goto LABEL_7;
  }
  if ( a1 > 8 )
  {
    v13 = a1 - 9;
    if ( !v13 )
    {
      v4 = *(_QWORD *)(v2 + 464);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 32) ? 1LL : (*(_DWORD *)(v4 + 84) & 0x300) != 0 ? 4LL : 2LL;
        if ( (*(_DWORD *)(v4 + 84) & 1) != 0 )
          v5 |= 8uLL;
      }
      goto LABEL_7;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v5 = *(int *)(v2 + 492);
      goto LABEL_7;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v4 = gpqForeground;
      LOBYTE(v5) = *(_QWORD *)(v2 + 384) == gpqForeground;
      goto LABEL_7;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      v5 = *(unsigned int *)(*(_QWORD *)(v2 + 376) + 736LL);
      goto LABEL_7;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      v5 = *(_QWORD *)(v2 + 712);
      goto LABEL_7;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v20 = v18 == 1;
    }
    else
    {
      CurrentProcessId = PsGetCurrentProcessId();
      v4 = gpidLogon;
      if ( CurrentProcessId == (HANDLE)gpidLogon )
        goto LABEL_28;
      v20 = *(_QWORD *)(v6 + 408) == (_QWORD)grpdeskLogon;
    }
    if ( !v20 )
      goto LABEL_7;
LABEL_28:
    v5 = 1LL;
    goto LABEL_7;
  }
  if ( !a1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v2 + 384) + 72LL);
    goto LABEL_5;
  }
  v8 = a1 - 1;
  if ( !v8 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v2 + 384) + 80LL);
    goto LABEL_5;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v2 + 384) + 64LL);
    goto LABEL_5;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v12 = *(__int64 **)(v2 + 696);
LABEL_13:
    if ( v12 )
      v5 = *v12;
    goto LABEL_7;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v12 = *(__int64 **)(v2 + 704);
    goto LABEL_13;
  }
  v21 = v11 - 1;
  if ( !v21 )
  {
    LOBYTE(v5) = (GetQueueStatus(7295) & 5) != 0;
    v5 = (unsigned int)v5;
    goto LABEL_7;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v2 + 384) + 320LL);
LABEL_5:
    if ( v4 )
      v5 = *(_QWORD *)v4;
    goto LABEL_7;
  }
  if ( v22 == 1 )
    v5 = *(unsigned __int16 *)(*(_QWORD *)(v2 + 400) + 4LL);
LABEL_7:
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
