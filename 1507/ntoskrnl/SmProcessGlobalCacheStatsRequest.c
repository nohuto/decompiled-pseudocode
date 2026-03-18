/*
 * XREFs of SmProcessGlobalCacheStatsRequest @ 0x1406D9604
 * Callers:
 *     SmQueryStoreInformation @ 0x140583E10 (SmQueryStoreInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SmpCacheStatsCopy @ 0x1405B5C4C (SmpCacheStatsCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessGlobalCacheStatsRequest(ULONG64 a1, int a2, _DWORD *a3, char a4)
{
  unsigned int v8; // ebx
  bool v9; // zf
  __int64 v10; // rsi
  _BYTE *v11; // rcx
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  __int64 v14; // rdx
  _OWORD *v15; // rax
  _DWORD v17[228]; // [rsp+20h] [rbp-3B8h] BYREF

  memset(v17, 0, 0x388uLL);
  if ( a2 == 904 )
  {
    v8 = 0;
    v9 = a4 == 0;
    v10 = 7LL;
    if ( !v9 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (_BYTE *)a1;
      if ( a1 >= MmUserProbeAddress )
        v11 = (_BYTE *)MmUserProbeAddress;
      *v11 = *v11;
      v11[903] = v11[903];
    }
    v12 = (_OWORD *)a1;
    v13 = v17;
    v14 = 7LL;
    do
    {
      *v13 = *v12;
      v13[1] = v12[1];
      v13[2] = v12[2];
      v13[3] = v12[3];
      v13[4] = v12[4];
      v13[5] = v12[5];
      v13[6] = v12[6];
      v13 += 8;
      *(v13 - 1) = v12[7];
      v12 += 8;
      --v14;
    }
    while ( v14 );
    *(_QWORD *)v13 = *(_QWORD *)v12;
    if ( LOBYTE(v17[0]) != 5 || (v17[0] & 0xFFFFFF00) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      SmpCacheStatsCopy((__int64)SmGlobals, (__int64)&v17[2], (__int64)&unk_1403530A8);
      v15 = v17;
      do
      {
        *(_OWORD *)a1 = *v15;
        *(_OWORD *)(a1 + 16) = v15[1];
        *(_OWORD *)(a1 + 32) = v15[2];
        *(_OWORD *)(a1 + 48) = v15[3];
        *(_OWORD *)(a1 + 64) = v15[4];
        *(_OWORD *)(a1 + 80) = v15[5];
        *(_OWORD *)(a1 + 96) = v15[6];
        a1 += 128LL;
        *(_OWORD *)(a1 - 16) = v15[7];
        v15 += 8;
        --v10;
      }
      while ( v10 );
      *(_QWORD *)a1 = *(_QWORD *)v15;
      *a3 = 904;
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return v8;
}
