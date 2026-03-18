/*
 * XREFs of ?ReplacePreferredScaling@@YAJPEBU_D3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C00BC040
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00511C0 (DrvSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReplacePreferredScaling(__int64 a1, unsigned __int64 a2, _DWORD *a3, __int64 a4)
{
  __int16 v4; // ax
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v10; // ebp
  __int64 v11; // rdi
  __int64 v12; // rax
  _DWORD *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax

  v4 = *(_WORD *)(a2 + 20);
  v5 = a2;
  v6 = a1;
  if ( *(_WORD *)(a1 + 20) != v4 )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = *(unsigned __int16 *)(v6 + 20);
    v8 = *(unsigned __int16 *)(v5 + 20);
    goto LABEL_3;
  }
  v10 = 0;
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    v11 = 216LL * v10;
    if ( (*(_DWORD *)(v11 + v5 + 48) & 0x10000) == 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v12);
    }
    if ( *(_DWORD *)(v11 + v5 + 172) != 253 )
      goto LABEL_22;
    a3 = (_DWORD *)(v11 + v5 + 56);
    if ( a3 )
    {
      a4 = *(unsigned __int16 *)(v6 + 20);
      a2 = 0LL;
      if ( !*(_WORD *)(v6 + 20) )
        break;
      while ( 1 )
      {
        a1 = 216LL * (unsigned int)a2;
        v13 = (_DWORD *)(a1 + v6 + 48);
        if ( v13[5] == *(_DWORD *)(v11 + v5 + 68) && v13[2] == *a3 && v13[3] == a3[1] )
          break;
        a2 = (unsigned int)(a2 + 1);
        if ( (unsigned int)a2 >= (unsigned int)a4 )
          goto LABEL_14;
      }
    }
    else
    {
      v13 = 0LL;
    }
    if ( !v13 )
      break;
    if ( (*v13 & 0x400) == 0 )
    {
      v14 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v14);
    }
    if ( (*v13 & 0x10000) == 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v15);
    }
    *(_DWORD *)(v11 + v5 + 172) = v13[31];
    v16 = v13[32];
    *(_DWORD *)(v11 + v5 + 48) |= 0x10400u;
    *(_DWORD *)(v11 + v5 + 176) = v16;
LABEL_22:
    if ( ++v10 >= *(unsigned __int16 *)(v5 + 20) )
      return 0LL;
  }
LABEL_14:
  v7 = WdLogNewEntry5_WdError(a1, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = *(unsigned int *)(v11 + v5 + 64);
  v8 = *(unsigned int *)(v11 + v5 + 68);
LABEL_3:
  *(_QWORD *)(v7 + 32) = v8;
  WdLogEvent5_WdError(v7);
  return 3221225473LL;
}
