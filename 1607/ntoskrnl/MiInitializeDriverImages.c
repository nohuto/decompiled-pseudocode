/*
 * XREFs of MiInitializeDriverImages @ 0x1407A4F78
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140013C68 (RtlClearBitsEx.c)
 *     MiGetAnyMultiplexedVm @ 0x14001D05C (MiGetAnyMultiplexedVm.c)
 *     MiSplitBitmapPages @ 0x140101E54 (MiSplitBitmapPages.c)
 *     MiBuildDynamicRegion @ 0x14013C940 (MiBuildDynamicRegion.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     VfInitBootDriversLoaded @ 0x1407A52D8 (VfInitBootDriversLoaded.c)
 *     MiMarkBootImagesNonPaged @ 0x1407A5740 (MiMarkBootImagesNonPaged.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x1407A5FDC (MiInitializeBootLoadedDriverPfns.c)
 *     MxMarkActiveDriverBits @ 0x1407A6134 (MxMarkActiveDriverBits.c)
 */

__int64 __fastcall MiInitializeDriverImages(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v3; // r15
  unsigned __int64 v4; // r8
  unsigned __int64 *v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  _DWORD *v9; // rdi
  unsigned __int64 i; // rbx
  __int64 result; // rax
  char *v12; // rbx
  char *v13; // r15
  __int64 v14; // r8
  unsigned __int16 v15; // cx
  char *v16; // rdi
  unsigned __int16 v17; // cx
  __int16 v18; // si
  _QWORD *PoolWithTag; // rax
  _QWORD *v20; // rcx
  _BYTE v21[80]; // [rsp+A0h] [rbp+A0h] BYREF

  v1 = qword_140327FF0;
  qword_140326B68 = (__int64)MiGetAnyMultiplexedVm(1);
  v3 = qword_140326B68;
  if ( !(unsigned int)MiBuildDynamicRegion(&qword_140326B20, v1, 0x8000000000uLL) )
    return 0LL;
  v4 = v1 + 0x7FFFFFFFFFLL;
  v5 = (unsigned __int64 *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  v6 = 4LL;
  do
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v5 - 1) = v1;
    *v5 = v4;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  MxMarkActiveDriverBits((unsigned int)&qword_140326B20, v1, v4, (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL, 3);
  v7 = qword_140326B28;
  v8 = qword_140326B20;
  v9 = (_DWORD *)((((unsigned __int64)qword_140326B28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  for ( i = 0LL; i < v8; i += 0x8000LL )
  {
    if ( (*v9 & 0x800LL) == 0 )
    {
      if ( !(unsigned int)MiSplitBitmapPages(5u, v7, 8LL) )
        return 0LL;
      RtlClearBitsEx((__int64)&qword_140326B20, i, 0x8000uLL);
      v8 = qword_140326B20;
    }
    v7 += 4096LL;
    v9 += 2;
  }
  qword_140326B20 = i;
  qword_140326BB8 = v3;
  if ( !(unsigned int)MiBuildDynamicRegion(qword_140326B70, qword_1403268C8, 0x2000000000uLL) )
    return 0LL;
  qword_140326818 = -1LL;
  qword_140326848 = 0LL;
  qword_140326828 = (__int64)&qword_140326820;
  qword_140326820 = (__int64)&qword_140326820;
  if ( MmLargePageDriverBufferLength != -1 )
  {
    v12 = (char *)&MmLargePageDriverBuffer;
    v13 = (char *)&MmLargePageDriverBuffer
        + 2 * (((unsigned __int64)(unsigned int)MmLargePageDriverBufferLength - 2) >> 1);
    if ( &MmLargePageDriverBuffer < (_UNKNOWN *)v13 )
    {
      v14 = 0x100002601LL;
      do
      {
        v15 = *(_WORD *)v12;
        if ( *(_WORD *)v12 <= 0x20u && _bittest64(&v14, v15) || v15 == 12288 )
        {
          v12 += 2;
        }
        else
        {
          if ( v15 == 42 )
          {
            byte_140326811 = 1;
            break;
          }
          v16 = v12;
          do
          {
            v17 = *(_WORD *)v16;
            if ( *(_WORD *)v16 <= 0x20u && _bittest64(&v14, v17) )
              break;
            if ( v17 == 12288 )
              break;
            v16 += 2;
          }
          while ( v16 < v13 );
          v18 = 2 * ((v16 - v12) >> 1);
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x704C6D4Du);
          if ( !PoolWithTag )
            break;
          PoolWithTag[3] = v12;
          *((_WORD *)PoolWithTag + 8) = v18;
          *((_WORD *)PoolWithTag + 9) = v18;
          v20 = (_QWORD *)qword_140326828;
          if ( *(__int64 **)qword_140326828 != &qword_140326820 )
            __fastfail(3u);
          *PoolWithTag = &qword_140326820;
          v12 = v16 + 2;
          PoolWithTag[1] = v20;
          *v20 = PoolWithTag;
          v14 = 0x100002601LL;
          qword_140326828 = (__int64)PoolWithTag;
        }
      }
      while ( v12 < v13 );
    }
  }
  MiInitializeBootLoadedDriverPfns(a1);
  MiReloadBootLoadedDrivers(a1);
  MiMarkBootImagesNonPaged(a1);
  VfInitBootDriversLoaded(a1);
  result = 1LL;
  qword_140326838 = (__int64)&qword_140326830;
  qword_140326830 = &qword_140326830;
  return result;
}
