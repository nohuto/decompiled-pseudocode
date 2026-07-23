/*
 * XREFs of MmWaitMultipleForCacheManagerPrefetch @ 0x1400A7D6C
 * Callers:
 *     CcAsyncReadWorker @ 0x14013DE8C (CcAsyncReadWorker.c)
 * Callees:
 *     MmWaitForCacheManagerPrefetch @ 0x140022050 (MmWaitForCacheManagerPrefetch.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MmWaitMultipleForCacheManagerPrefetch(__int64 a1, unsigned int a2, void *a3)
{
  unsigned int v4; // edi
  unsigned int v6; // ebp
  PVOID *PoolWithTag; // rbx
  struct _KWAIT_BLOCK *WaitBlockArray; // r13
  __int64 v9; // rsi
  PVOID *v10; // r8
  __int64 *v11; // rcx
  __int64 *v12; // r15
  __int64 *v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // r11
  __int64 **v16; // r9
  _QWORD *v18; // rax
  PVOID Object[4]; // [rsp+40h] [rbp-128h] BYREF
  struct _KWAIT_BLOCK v20; // [rsp+60h] [rbp-108h] BYREF

  v4 = a2;
  v6 = a2;
  if ( a3 )
    v6 = a2 + 1;
  if ( a2 > 3 )
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 56LL * v6, 0x6157694Du);
  else
    PoolWithTag = 0LL;
  if ( PoolWithTag )
  {
    WaitBlockArray = (struct _KWAIT_BLOCK *)&PoolWithTag[v6];
  }
  else
  {
    PoolWithTag = Object;
    WaitBlockArray = &v20;
    if ( v4 > 3 )
      v4 = 3;
  }
  do
  {
    v9 = 0LL;
    if ( v4 )
    {
      v10 = PoolWithTag;
      while ( 2 )
      {
        v11 = *(__int64 **)((char *)v10 + a1 - (_QWORD)PoolWithTag);
        while ( 1 )
        {
          v12 = (__int64 *)*v11;
          if ( *((_DWORD *)v11 + 20) != *((_DWORD *)v11 + 19) )
          {
            v13 = v11 + 11;
            while ( 1 )
            {
              v14 = (__int64 *)*v13;
              if ( !*(_DWORD *)(*v13 + 36) )
                break;
              v15 = *v14;
              if ( (__int64 *)v14[1] != v13 || *(__int64 **)(v15 + 8) != v14 )
                __fastfail(3u);
              *v13 = v15;
              *(_QWORD *)(v15 + 8) = v13;
              v16 = (__int64 **)v11[12];
              if ( *v16 != v13 )
                __fastfail(3u);
              *v14 = (__int64)v13;
              v14[1] = (__int64)v16;
              *v16 = v14;
              v11[12] = (__int64)v14;
              if ( ++*((_DWORD *)v11 + 20) == *((_DWORD *)v11 + 19) )
                goto LABEL_18;
            }
            v18 = v14 + 4;
            if ( v18 )
              break;
          }
LABEL_18:
          v11 = v12;
          if ( !v12 )
          {
            MmWaitForCacheManagerPrefetch(*(_BYTE **)(a1 + 8 * v9));
            if ( PoolWithTag != Object )
              ExFreePoolWithTag(PoolWithTag, 0);
            return (unsigned int)v9;
          }
        }
        *v10 = v18;
        v9 = (unsigned int)(v9 + 1);
        ++v10;
        if ( (unsigned int)v9 < v4 )
          continue;
        break;
      }
    }
    if ( a3 )
    {
      PoolWithTag[v9] = a3;
      LODWORD(v9) = v9 + 1;
    }
  }
  while ( KeWaitForMultipleObjects(v9, PoolWithTag, WaitAny, WrVirtualMemory, 0, 0, 0LL, WaitBlockArray) != (_DWORD)v9 - 1
       || !a3 );
  if ( PoolWithTag != Object )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v6 - 1;
}
