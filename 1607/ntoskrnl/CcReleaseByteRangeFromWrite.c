/*
 * XREFs of CcReleaseByteRangeFromWrite @ 0x1400CCCD0
 * Callers:
 *     CcNotifyOfMappedWriteComplete @ 0x14008F218 (CcNotifyOfMappedWriteComplete.c)
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 * Callees:
 *     CcSetDirtyPinnedData @ 0x14006EDF0 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14006F1E0 (CcSetDirtyInMask.c)
 *     CcUnpinFileDataEx @ 0x1400CD700 (CcUnpinFileDataEx.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall CcReleaseByteRangeFromWrite(__int64 a1, _QWORD *a2, unsigned int a3, _WORD *a4, char a5)
{
  _QWORD *v5; // rdi
  unsigned int v6; // esi
  _QWORD *v7; // r14
  __int64 v9; // rbx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( a4 )
  {
    if ( *a4 != 765 )
      KeBugCheckEx(0x34u, 0x1474uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v9 = v14;
    do
    {
      v10 = v5[2];
      if ( *(_WORD *)v5 == 765 )
      {
        v11 = *(_DWORD *)(a1 + 152);
        v9 = v5[1];
        if ( (v11 & 0x200) != 0 )
          CcUnpinFileDataEx(v5, ((unsigned __int8)v11 >> 1) & 1, 2LL);
        if ( a5 )
          CcSetDirtyPinnedData(v5, 0LL);
        LOBYTE(a2) = 1;
        CcUnpinFileDataEx(v5, a2, 0LL);
      }
      v5 = (_QWORD *)(v10 - 16);
    }
    while ( *v7 != v9 );
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
          KeBugCheckEx(0x34u, 0x1461uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        CcSetDirtyInMask(a1, &v14, v13, 0LL);
        v12 += v13;
        v14 = v12;
        v6 -= v13;
      }
      while ( v6 );
    }
  }
}
