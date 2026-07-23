/*
 * XREFs of PiSwDeviceMakeCompatibleIds @ 0x1404CE6F8
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1403F0544 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiSwDeviceMakeCompatibleIds(__int64 a1, _QWORD *a2)
{
  const wchar_t *v2; // rbx
  unsigned int v3; // edi
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rsi
  _OWORD *PoolWithTag; // rax
  _OWORD *v10; // rbp
  _WORD *v11; // r14
  _OWORD *v12; // rsi
  __int64 v13; // r15
  __int64 v14; // r15
  __int64 result; // rax

  v2 = *(const wchar_t **)(a1 + 32);
  v3 = 0;
  v6 = 0LL;
  if ( v2 )
  {
    while ( *v2 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v2[v7] );
      v8 = v7 + 1;
      if ( wcsicmp(v2, L"SWD\\GenericRaw") && wcsicmp(v2, L"SWD\\Generic") )
        v6 += 2 * v8;
      v2 += v8;
    }
  }
  if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
    v6 += 30LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6 + 26, 0x57706E50u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    v11 = *(_WORD **)(a1 + 32);
    v12 = PoolWithTag;
    if ( v11 )
    {
      while ( *v11 )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( v11[v13] );
        v14 = v13 + 1;
        if ( wcsicmp(v11, L"SWD\\GenericRaw") && wcsicmp(v11, L"SWD\\Generic") )
        {
          memmove(v12, v11, 2 * v14);
          v12 = (_OWORD *)((char *)v12 + 2 * v14);
        }
        v11 += v14;
      }
    }
    if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
    {
      *v12 = *(_OWORD *)L"SWD\\GenericRaw";
      *((_QWORD *)v12 + 2) = *(_QWORD *)L"ricRaw";
      *((_DWORD *)v12 + 6) = *(_DWORD *)L"aw";
      *((_WORD *)v12 + 14) = PiSwGenericRawCompatibleId[14];
      v12 = (_OWORD *)((char *)v12 + 30);
    }
    *v12 = *(_OWORD *)L"SWD\\Generic";
    *((_QWORD *)v12 + 2) = *(_QWORD *)L"ric";
    *((_WORD *)v12 + 12) = 0;
  }
  else
  {
    v3 = -1073741670;
  }
  result = v3;
  *a2 = v10;
  return result;
}
