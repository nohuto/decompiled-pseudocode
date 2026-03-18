/*
 * XREFs of MiInitializeDriverImages @ 0x14074A790
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x14001711C (MiSplitBitmapPages.c)
 *     RtlClearBitsEx @ 0x1400A6650 (RtlClearBitsEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     MiInitializeDynamicRegion @ 0x14074A95C (MiInitializeDynamicRegion.c)
 *     VfInitBootDriversLoaded @ 0x14074AA04 (VfInitBootDriversLoaded.c)
 *     MiMarkBootImagesNonPaged @ 0x14074AE40 (MiMarkBootImagesNonPaged.c)
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x14074B6E4 (MiInitializeBootLoadedDriverPfns.c)
 *     MxMarkActiveDriverBits @ 0x14074B858 (MxMarkActiveDriverBits.c)
 */

__int64 __fastcall MiInitializeDriverImages(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  _DWORD *i; // rdi
  char *v11; // rbx
  char *v12; // r15
  __int64 v13; // r8
  unsigned __int16 v14; // cx
  char *v15; // rdi
  unsigned __int16 v16; // cx
  __int16 v17; // si
  _QWORD *PoolWithTag; // rax
  __int64 **v19; // rcx
  _BYTE v20[80]; // [rsp+A0h] [rbp+A0h] BYREF

  if ( !(unsigned int)MiInitializeDynamicRegion(12LL, 0xFFFFF80000000000uLL, 0x8000000000LL) )
    return 0LL;
  v2 = 0xFFFFF80000000000uLL;
  v3 = (unsigned __int64 *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  v4 = 0xFFFFF87FFFFFFFFFuLL;
  v5 = 4LL;
  do
  {
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v3 - 1) = v2;
    *v3 = v4;
    v3 += 2;
    --v5;
  }
  while ( v5 );
  MxMarkActiveDriverBits((unsigned int)&qword_1402FE7E0, v2, v4, (unsigned __int64)v20 & 0xFFFFFFFFFFFFFFE0uLL, 3);
  v6 = qword_1402FE7E8;
  v7 = qword_1402FE7E0;
  v8 = 0LL;
  for ( i = (_DWORD *)((((unsigned __int64)qword_1402FE7E8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v8 < v7;
        v8 += 0x8000LL )
  {
    if ( (*i & 0x800LL) == 0 )
    {
      if ( !(unsigned int)MiSplitBitmapPages(5u, v6, 8LL) )
        return 0LL;
      RtlClearBitsEx((__int64)&qword_1402FE7E0, v8, 0x8000uLL);
      v7 = qword_1402FE7E0;
    }
    v6 += 4096LL;
    i += 2;
  }
  qword_1402FE7E0 = v8;
  if ( !(unsigned int)MiInitializeDynamicRegion(11LL, 0xFFFFF96000000000uLL, 0x2000000000LL) )
    return 0LL;
  qword_1402FE558 = -1LL;
  qword_1402FE578 = 0LL;
  qword_1402FE568 = (__int64)&qword_1402FE560;
  qword_1402FE560 = (__int64)&qword_1402FE560;
  if ( MmLargePageDriverBufferLength != -1 )
  {
    v11 = (char *)&MmLargePageDriverBuffer;
    v12 = (char *)&MmLargePageDriverBuffer
        + 2 * (((unsigned __int64)(unsigned int)MmLargePageDriverBufferLength - 2) >> 1);
    if ( &MmLargePageDriverBuffer < (_UNKNOWN *)v12 )
    {
      v13 = 0x100002601LL;
      do
      {
        v14 = *(_WORD *)v11;
        if ( *(_WORD *)v11 <= 0x20u && _bittest64(&v13, v14) || v14 == 12288 )
        {
          v11 += 2;
        }
        else
        {
          if ( v14 == 42 )
          {
            byte_1402FE551 = 1;
            break;
          }
          v15 = v11;
          do
          {
            v16 = *(_WORD *)v15;
            if ( *(_WORD *)v15 <= 0x20u && _bittest64(&v13, v16) )
              break;
            if ( v16 == 12288 )
              break;
            v15 += 2;
          }
          while ( v15 < v12 );
          v17 = 2 * ((v15 - v11) >> 1);
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x704C6D4Du);
          if ( !PoolWithTag )
            break;
          PoolWithTag[3] = v11;
          *((_WORD *)PoolWithTag + 8) = v17;
          *((_WORD *)PoolWithTag + 9) = v17;
          v19 = (__int64 **)qword_1402FE568;
          *PoolWithTag = &qword_1402FE560;
          PoolWithTag[1] = v19;
          if ( *v19 != &qword_1402FE560 )
            __fastfail(3u);
          *v19 = PoolWithTag;
          v11 = v15 + 2;
          qword_1402FE568 = (__int64)PoolWithTag;
          v13 = 0x100002601LL;
        }
      }
      while ( v11 < v12 );
    }
  }
  MiInitializeBootLoadedDriverPfns(a1);
  MiReloadBootLoadedDrivers(a1);
  MiMarkBootImagesNonPaged(a1);
  VfInitBootDriversLoaded(a1);
  return 1LL;
}
