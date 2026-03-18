/*
 * XREFs of CcReleaseByteRangeFromWrite @ 0x1400E4134
 * Callers:
 *     CcFlushCachePriv @ 0x1400AFD30 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1400E4064 (CcNotifyOfMappedWriteComplete.c)
 * Callees:
 *     CcSetDirtyPinnedData @ 0x14001FFA0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x14003A5E0 (CcUnpinFileDataEx.c)
 *     CcSetDirtyInMask @ 0x1400B2DE0 (CcSetDirtyInMask.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall CcReleaseByteRangeFromWrite(__int64 a1, __int64 *a2, unsigned int a3, _WORD *a4, char a5)
{
  _QWORD *v5; // rdi
  unsigned int v6; // esi
  __int64 v9; // rbx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  v6 = a3;
  if ( a4 )
  {
    if ( *a4 != 765 )
      KeBugCheckEx(0x34u, 0x13FEuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v9 = v14;
    do
    {
      v10 = v5[2];
      if ( *(_WORD *)v5 == 765 )
      {
        v11 = *(_DWORD *)(a1 + 152);
        v9 = v5[1];
        if ( (v11 & 0x200) != 0 )
          CcUnpinFileDataEx((__int64)v5, (v11 & 2) != 0, 2);
        if ( a5 )
          CcSetDirtyPinnedData(v5, 0LL);
        CcUnpinFileDataEx((__int64)v5, 1, 0);
      }
      v5 = (_QWORD *)(v10 - 16);
    }
    while ( *a2 != v9 );
  }
  else if ( a5 )
  {
    v12 = *a2;
    v14 = *a2;
    if ( a3 )
    {
      do
      {
        if ( (v12 & 0xFFFFFFFFFE000000uLL) < ((v12 + v6 - 1LL) & 0xFFFFFFFFFE000000uLL) )
          v13 = ((v12 + 0x1FFFFFF) & 0xFE000000) - v12;
        else
          v13 = v6;
        if ( v13 > 0x2000000 )
          KeBugCheckEx(0x34u, 0x13EBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        CcSetDirtyInMask(a1, &v14, v13, 0LL);
        v12 += v13;
        v14 = v12;
        v6 -= v13;
      }
      while ( v6 );
    }
  }
}
