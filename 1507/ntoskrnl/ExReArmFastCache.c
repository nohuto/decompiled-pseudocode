/*
 * XREFs of ExReArmFastCache @ 0x1406EBBEC
 * Callers:
 *     sub_140700A3C @ 0x140700A3C (sub_140700A3C.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     sub_1405BC990 @ 0x1405BC990 (sub_1405BC990.c)
 *     sub_1406ED5D0 @ 0x1406ED5D0 (sub_1406ED5D0.c)
 */

__int64 __fastcall ExReArmFastCache(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rdi
  int v9; // edi
  unsigned int v10; // esi
  __int64 *v11; // r8
  unsigned int v12; // ecx
  __int64 v13; // r9
  unsigned int v14; // edx
  int v15; // eax
  int v16; // r8d
  int *v17; // rdx
  __int64 v18; // rax
  unsigned __int8 *v19; // r10
  __int64 v20; // r11
  unsigned int v21; // ecx
  unsigned int v22; // r9d
  int v23; // eax
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  size_t v27; // [rsp+28h] [rbp-29h]
  __int64 v28; // [rsp+58h] [rbp+7h] BYREF
  unsigned __int64 v29; // [rsp+60h] [rbp+Fh]
  __int64 v30; // [rsp+68h] [rbp+17h] BYREF
  _QWORD v31[3]; // [rsp+70h] [rbp+1Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v5, (ULONG_PTR)&ExpFastCacheUpdateLock, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( ExpFastCacheReArmed )
  {
    v9 = -1073700219;
  }
  else
  {
    v10 = 0;
    while ( 1 )
    {
      v9 = sub_1406ED5D0(v10, 0LL);
      if ( v9 < 0 )
        break;
      if ( ++v10 >= 5 )
      {
        ExpFastCacheReArmed = 1;
        if ( qword_14077ED28
          || (v9 = sub_1405BC990((UNICODE_STRING *)&stru_140721B40, (PVOID *)&qword_14077ED28), v9 >= 0) )
        {
          v11 = &v30;
          v12 = 0;
          v13 = 8LL;
          v30 = qword_14077EAD0;
          v14 = 0;
          do
          {
            v15 = *(unsigned __int8 *)v11;
            v11 = (__int64 *)((char *)v11 + 1);
            v15 -= 23737705;
            v12 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v12 + v15), 21), 21), 21);
            v14 += v12 + v15;
            --v13;
          }
          while ( v13 );
          v29 = __PAIR64__(v12, v14);
          v16 = 0;
          v17 = &dword_14077E480;
          do
          {
            if ( ExpFastCacheReArmed || v16 == -1 || (v18 = *((_QWORD *)v17 - 3)) == 0 || *v17 )
              v28 = 0LL;
            else
              v28 = *(_QWORD *)(v18 + 16);
            v19 = (unsigned __int8 *)&v28;
            v20 = 8LL;
            v21 = HIDWORD(v29);
            v22 = v29;
            do
            {
              v23 = *v19++;
              v23 -= 23737705;
              v21 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v21 + v23), 21), 21), 21);
              v22 += v21 + v23;
              --v20;
            }
            while ( v20 );
            v29 = __PAIR64__(v21, v22);
            ++v16;
            v17 += 18;
          }
          while ( (unsigned __int64)v16 < 5 );
          LODWORD(v27) = 24;
          v31[0] = qword_14077EAD0;
          v31[1] = __PAIR64__(v21, v22);
          v31[2] = 0LL;
          v9 = CmSetValueKey(qword_14077ED28, &stru_140721B50, 3u, v31, v27, 0LL, 0);
        }
        break;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
  KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
  v24 = KeGetCurrentThread();
  v25 = v24->KernelApcDisable + 1;
  v24->KernelApcDisable = v25;
  if ( !v25
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
    && !v24->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v9;
}
