/*
 * XREFs of ExReArmFastCache @ 0x14066869C
 * Callers:
 *     sub_14067BCE0 @ 0x14067BCE0 (sub_14067BCE0.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     sub_14054598C @ 0x14054598C (sub_14054598C.c)
 *     sub_140669FD4 @ 0x140669FD4 (sub_140669FD4.c)
 */

__int64 ExReArmFastCache()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rdi
  int v4; // edi
  unsigned int v5; // esi
  __int64 *v6; // r8
  unsigned int v7; // ecx
  __int64 v8; // r9
  unsigned int v9; // edx
  int v10; // eax
  int v11; // r8d
  int *v12; // rdx
  __int64 v13; // rax
  unsigned __int8 *v14; // r10
  __int64 v15; // r11
  unsigned int v16; // ecx
  unsigned int v17; // r9d
  int v18; // eax
  size_t v20; // [rsp+28h] [rbp-19h]
  __int64 v21; // [rsp+58h] [rbp+17h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp+1Fh]
  __int64 v23; // [rsp+68h] [rbp+27h] BYREF
  int v24[2]; // [rsp+70h] [rbp+2Fh] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp+37h]
  __int64 v26; // [rsp+80h] [rbp+3Fh]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v1, (ULONG_PTR)&ExpFastCacheUpdateLock);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  if ( ExpFastCacheReArmed )
  {
    v4 = -1073700219;
  }
  else
  {
    v5 = 0;
    while ( 1 )
    {
      v4 = sub_140669FD4(v5, 0LL);
      if ( v4 < 0 )
        break;
      if ( ++v5 >= 5 )
      {
        ExpFastCacheReArmed = 1;
        if ( *(_QWORD *)&qword_1406FBD30
          || (v4 = sub_14054598C((UNICODE_STRING *)&stru_1406A1900, (PVOID *)&qword_1406FBD30), v4 >= 0) )
        {
          v6 = &v23;
          v7 = 0;
          v8 = 8LL;
          v9 = 0;
          v23 = qword_1406FBAD8;
          do
          {
            v10 = *(unsigned __int8 *)v6;
            v6 = (__int64 *)((char *)v6 + 1);
            v10 -= 23737705;
            v7 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v7 + v10), 21), 21), 21);
            v9 += v7 + v10;
            --v8;
          }
          while ( v8 );
          v22 = __PAIR64__(v7, v9);
          v11 = 0;
          v12 = &dword_1406FB450;
          do
          {
            if ( ExpFastCacheReArmed || v11 == -1 || (v13 = *((_QWORD *)v12 - 3)) == 0 || *v12 )
              v21 = 0LL;
            else
              v21 = *(_QWORD *)(v13 + 16);
            v14 = (unsigned __int8 *)&v21;
            v15 = 8LL;
            v16 = HIDWORD(v22);
            v17 = v22;
            do
            {
              v18 = *v14++;
              v18 -= 23737705;
              v16 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v16 + v18), 21), 21), 21);
              v17 += v16 + v18;
              --v15;
            }
            while ( v15 );
            v22 = __PAIR64__(v16, v17);
            ++v11;
            v12 += 18;
          }
          while ( (unsigned __int64)v11 < 5 );
          v26 = 0LL;
          LODWORD(v20) = 24;
          *(_QWORD *)v24 = qword_1406FBAD8;
          v25 = __PAIR64__(v16, v17);
          v4 = CmSetValueKey(*(__int64 *)&qword_1406FBD30, &stru_1406A18F0, 3u, v24, v20, 0LL, 0);
        }
        break;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
  KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v4;
}
