/*
 * XREFs of xxxMNChar @ 0x1C0216698
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxHandleMenuMessages @ 0x1C0137D0C (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C0216698 (xxxMNChar.c)
 *     xxxMNKeyFilter @ 0x1C023DB04 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     ThreadLockExchange @ 0x1C006D548 (ThreadLockExchange.c)
 *     xxxMNCancel @ 0x1C01385D8 (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x1C0138CE0 (xxxMNSelectItem.c)
 *     xxxMessageBeep @ 0x1C014F750 (xxxMessageBeep.c)
 *     xxxMNChar @ 0x1C0216698 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0216CA8 (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C02175B8 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNFindChar @ 0x1C023D9FC (xxxMNFindChar.c)
 */

__int64 __fastcall xxxMNChar(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  bool v5; // zf
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // rdx
  _QWORD *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  _BYTE v24[4]; // [rsp+28h] [rbp-29h] BYREF
  unsigned int v25; // [rsp+2Ch] [rbp-25h]
  unsigned int v26; // [rsp+30h] [rbp-21h]
  unsigned __int64 v27; // [rsp+38h] [rbp-19h]
  _QWORD v28[3]; // [rsp+40h] [rbp-11h] BYREF
  _QWORD v29[3]; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v30[7]; // [rsp+70h] [rbp+1Fh] BYREF
  int v34; // [rsp+D0h] [rbp+7Fh]

  v3 = *(_QWORD *)(a1 + 40);
  result = 0LL;
  v34 = 0;
  v5 = (*(_DWORD *)a1 & 0x8000) == 0;
  v6 = a1;
  v27 = 0LL;
  if ( v5 )
  {
    v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v29;
    v29[1] = v3;
    if ( v3 )
      ++*(_DWORD *)(v3 + 8);
    v7 = *(_QWORD *)(a1 + 48);
    v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v28;
    v28[1] = v7;
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    v8 = xxxMNFindChar(v3, a3, *(unsigned int *)(a1 + 80), v24);
    v9 = v8;
    if ( v8 != -1 )
    {
      v25 = v8;
      while ( 1 )
      {
        v10 = v9 == -1 || v9 >= *(_DWORD *)(v3 + 52) ? 0LL : *(_QWORD *)(v3 + 80) + 152LL * v9;
        if ( !v10 || (*(_DWORD *)(v10 + 4) & 3) == 0 )
          break;
        v9 = xxxMNFindChar(v3, a3, v9, v24);
        if ( v9 == v25 )
          goto LABEL_15;
      }
      v13 = v25;
      v26 = v9;
      do
      {
        v14 = xxxMNFindChar(v3, a3, v9, v24);
        v9 = v14;
        if ( v14 == -1 || v14 >= *(_DWORD *)(v3 + 52) )
          v15 = 0LL;
        else
          v15 = *(_QWORD *)(v3 + 80) + 152LL * v14;
      }
      while ( v15 && (*(_DWORD *)(v15 + 4) & 3) != 0 && v14 != v13 );
      v5 = v13 == v14;
      v6 = a1;
      if ( v5 || v14 == v26 )
        v34 = 1;
      v9 = v26;
      if ( v26 != -1 )
        goto LABEL_32;
    }
    if ( (*(_DWORD *)v6 & 1) != 0 && a3 == 32 )
    {
      if ( (*(_DWORD *)v6 & 4) != 0 )
      {
        v9 = 0;
        v34 = 1;
        goto LABEL_32;
      }
      if ( *(_QWORD *)(v6 + 48) )
      {
LABEL_41:
        if ( (unsigned int)xxxMNSwitchToAlternateMenu((struct tagPOPUPMENU *)v6) )
          xxxMNChar(v6, a2, a3);
        goto LABEL_34;
      }
    }
    if ( v9 != -1 )
    {
LABEL_32:
      xxxMNSelectItem((struct tagPOPUPMENU *)v6, a2, v9);
      if ( v34 )
        xxxMNKeyDown(v6, a2, 13LL);
      goto LABEL_34;
    }
    if ( (*(_DWORD *)v6 & 1) != 0 )
    {
      v18 = *(_QWORD *)(v6 + 48);
      if ( v18 )
      {
        ThreadLockExchange(v18, (__int64)v28);
        v9 = xxxMNFindChar(*(_QWORD *)(v6 + 48), a3, 0LL, v24);
        if ( v9 != -1 )
          goto LABEL_41;
      }
    }
    v19 = (*(_DWORD *)v6 & 4) << 11;
    if ( (*(_DWORD *)v6 & 1) == 0 )
      LOWORD(v19) = v19 | 0x10;
    v20 = *(_QWORD *)(v6 + 8);
    if ( v20 )
    {
      v30[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v30;
      v30[1] = v20;
      ++*(_DWORD *)(v20 + 8);
      v21 = *(_QWORD **)(v6 + 40);
      if ( v21 )
        v21 = (_QWORD *)*v21;
      v27 = xxxSendMessage(
              *(struct tagWND **)(v6 + 8),
              0x120u,
              (unsigned __int16)a3 | ((unsigned __int16)v19 << 16),
              (__int64)v21);
      ThreadUnlock1(v23, v22);
    }
    v12 = v27 >> 16;
    if ( WORD1(v27) )
    {
      if ( WORD1(v27) != 1 )
      {
        v11 = (unsigned int)WORD1(v27) - 2;
        if ( WORD1(v27) == 2 )
        {
          v34 = 1;
        }
        else if ( WORD1(v27) != 3 )
        {
LABEL_56:
          if ( v9 != -1 )
            goto LABEL_32;
LABEL_34:
          ThreadUnlock1(v12, v11);
          return ThreadUnlock1(v17, v16);
        }
        v12 = *(_QWORD *)(v6 + 40);
        v9 = (__int16)v27;
        if ( (unsigned int)(unsigned __int16)v27 >= *(_DWORD *)(v12 + 52) )
          goto LABEL_34;
        goto LABEL_56;
      }
    }
    else
    {
      v11 = *(_QWORD *)(v6 + 8);
      if ( !v11 || (v12 = gptiCurrent, *(_QWORD *)(gptiCurrent + 1224LL) != v11) )
        xxxMessageBeep(0LL);
      if ( (v19 & 0x10) != 0 )
        goto LABEL_34;
    }
LABEL_15:
    xxxMNCancel(a2, 0, 0, 0LL);
    goto LABEL_34;
  }
  return result;
}
