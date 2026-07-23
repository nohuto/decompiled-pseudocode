/*
 * XREFs of HvpViewMapPrefetchFile @ 0x140610128
 * Callers:
 *     HvViewMapStart @ 0x14060FD68 (HvViewMapStart.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MmPrefetchPagesEx @ 0x14042AFAC (MmPrefetchPagesEx.c)
 */

__int64 __fastcall HvpViewMapPrefetchFile(__int64 a1, int a2)
{
  unsigned int v3; // edi
  _QWORD *PoolWithTag; // rax
  void *v5; // rbx
  int v6; // edi
  unsigned int v7; // edx
  _QWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  _QWORD *v12; // [rsp+40h] [rbp+18h] BYREF

  v3 = (unsigned int)(a2 + 4095) >> 12;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v3 + 16, 0x39354D43u);
  v12 = PoolWithTag;
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = a1;
    v7 = 0;
    *((_DWORD *)PoolWithTag + 2) = v3;
    *((_DWORD *)PoolWithTag + 3) = 0;
    if ( v3 )
    {
      v8 = PoolWithTag + 2;
      v9 = v3;
      do
      {
        v10 = v7;
        v7 += 4096;
        *v8++ = v10;
        --v9;
      }
      while ( v9 );
    }
    v6 = MmPrefetchPagesEx(1u, (__int64)&v12, 0LL);
    if ( v6 >= 0 )
      v6 = 0;
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
