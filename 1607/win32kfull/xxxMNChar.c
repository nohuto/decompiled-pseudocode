/*
 * XREFs of xxxMNChar @ 0x1C020F234
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxHandleMenuMessages @ 0x1C0141790 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C020F234 (xxxMNChar.c)
 *     xxxMNKeyFilter @ 0x1C02354DC (xxxMNKeyFilter.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     ThreadLockExchange @ 0x1C00777C4 (ThreadLockExchange.c)
 *     xxxMNCancel @ 0x1C013C7D8 (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x1C013EEDC (xxxMNSelectItem.c)
 *     xxxMessageBeep @ 0x1C0152DE0 (xxxMessageBeep.c)
 *     xxxMNChar @ 0x1C020F234 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C020F844 (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0210154 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNFindChar @ 0x1C02353D4 (xxxMNFindChar.c)
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
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // rdx
  _QWORD *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // [rsp+28h] [rbp-29h]
  _BYTE v24[4]; // [rsp+2Ch] [rbp-25h] BYREF
  unsigned int v25; // [rsp+30h] [rbp-21h]
  unsigned __int64 v26; // [rsp+38h] [rbp-19h]
  _QWORD v27[3]; // [rsp+40h] [rbp-11h] BYREF
  _QWORD v28[3]; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v29[7]; // [rsp+70h] [rbp+1Fh] BYREF
  int v33; // [rsp+D0h] [rbp+7Fh]

  v3 = *(_QWORD *)(a1 + 40);
  result = 0LL;
  v33 = 0;
  v5 = (*(_DWORD *)a1 & 0x8000) == 0;
  v6 = a1;
  v26 = 0LL;
  if ( v5 )
  {
    v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v28;
    v28[1] = v3;
    if ( v3 )
      ++*(_DWORD *)(v3 + 8);
    v7 = *(_QWORD *)(a1 + 48);
    v27[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v27;
    v27[1] = v7;
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    v8 = xxxMNFindChar(v3, a3, *(unsigned int *)(a1 + 80), v24);
    v9 = v8;
    if ( v8 != -1 )
    {
      v23 = v8;
      while ( 1 )
      {
        v10 = v9 == -1 || v9 >= *(_DWORD *)(v3 + 52) ? 0LL : *(_QWORD *)(v3 + 80) + 152LL * v9;
        if ( !v10 || (*(_DWORD *)(v10 + 4) & 3) == 0 )
          break;
        v9 = xxxMNFindChar(v3, a3, v9, v24);
        if ( v9 == v23 )
          goto LABEL_15;
      }
      v25 = v9;
      do
      {
        v13 = xxxMNFindChar(v3, a3, v9, v24);
        v9 = v13;
        if ( v13 == -1 || v13 >= *(_DWORD *)(v3 + 52) )
          v14 = 0LL;
        else
          v14 = *(_QWORD *)(v3 + 80) + 152LL * v13;
      }
      while ( v14 && (*(_DWORD *)(v14 + 4) & 3) != 0 && v13 != v23 );
      v6 = a1;
      if ( v23 == v13 || v13 == v25 )
        v33 = 1;
      v9 = v25;
      if ( v25 != -1 )
        goto LABEL_32;
    }
    if ( (*(_DWORD *)v6 & 1) != 0 && a3 == 32 )
    {
      if ( (*(_DWORD *)v6 & 4) != 0 )
      {
        v9 = 0;
        v33 = 1;
        goto LABEL_32;
      }
      if ( *(_QWORD *)(v6 + 48) )
      {
LABEL_41:
        if ( (unsigned int)xxxMNSwitchToAlternateMenu(v6, a2) )
          xxxMNChar(v6, a2, a3);
        goto LABEL_34;
      }
    }
    if ( v9 != -1 )
    {
LABEL_32:
      xxxMNSelectItem((struct tagPOPUPMENU *)v6, a2, v9);
      if ( v33 )
        xxxMNKeyDown(v6, a2, 13LL);
      goto LABEL_34;
    }
    if ( (*(_DWORD *)v6 & 1) != 0 )
    {
      v17 = *(_QWORD *)(v6 + 48);
      if ( v17 )
      {
        ThreadLockExchange(v17, (__int64)v27);
        v9 = xxxMNFindChar(*(_QWORD *)(v6 + 48), a3, 0LL, v24);
        if ( v9 != -1 )
          goto LABEL_41;
      }
    }
    v18 = (*(_DWORD *)v6 & 4) << 11;
    if ( (*(_DWORD *)v6 & 1) == 0 )
      LOWORD(v18) = v18 | 0x10;
    v19 = *(_QWORD *)(v6 + 8);
    if ( v19 )
    {
      v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v29;
      v29[1] = v19;
      ++*(_DWORD *)(v19 + 8);
      v20 = *(_QWORD **)(v6 + 40);
      if ( v20 )
        v20 = (_QWORD *)*v20;
      v26 = xxxSendMessage(
              *(struct tagWND **)(v6 + 8),
              0x120u,
              (unsigned __int16)a3 | ((unsigned __int16)v18 << 16),
              (__int64)v20);
      ThreadUnlock1(v22, v21);
    }
    v12 = v26 >> 16;
    if ( WORD1(v26) )
    {
      if ( WORD1(v26) != 1 )
      {
        v11 = (unsigned int)WORD1(v26) - 2;
        if ( WORD1(v26) == 2 )
        {
          v33 = 1;
        }
        else if ( WORD1(v26) != 3 )
        {
LABEL_56:
          if ( v9 != -1 )
            goto LABEL_32;
LABEL_34:
          ThreadUnlock1(v12, v11);
          return ThreadUnlock1(v16, v15);
        }
        v12 = *(_QWORD *)(v6 + 40);
        v9 = (__int16)v26;
        if ( (unsigned int)(unsigned __int16)v26 >= *(_DWORD *)(v12 + 52) )
          goto LABEL_34;
        goto LABEL_56;
      }
    }
    else
    {
      v11 = *(_QWORD *)(v6 + 8);
      if ( !v11 || (v12 = gptiCurrent, *(_QWORD *)(gptiCurrent + 1248LL) != v11) )
        xxxMessageBeep(0LL);
      if ( (v18 & 0x10) != 0 )
        goto LABEL_34;
    }
LABEL_15:
    xxxMNCancel(a2, 0, 0, 0LL);
    goto LABEL_34;
  }
  return result;
}
