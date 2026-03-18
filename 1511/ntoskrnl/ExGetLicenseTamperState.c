/*
 * XREFs of ExGetLicenseTamperState @ 0x140668388
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     sub_140489880 @ 0x140489880 (sub_140489880.c)
 *     sub_14048AB98 @ 0x14048AB98 (sub_14048AB98.c)
 */

bool __fastcall ExGetLicenseTamperState(int *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  int v4; // ebx
  int v5; // eax
  unsigned __int8 *v6; // rdx
  __int64 v7; // r10
  unsigned __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  int v11; // eax
  unsigned int v12; // ecx
  unsigned __int8 *v13; // r9
  __int64 v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // edx
  int v17; // eax
  __int128 v19; // [rsp+20h] [rbp-60h]
  __int128 v20; // [rsp+40h] [rbp-40h]
  _OWORD v21[3]; // [rsp+50h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_1406FBA20, v3, (ULONG_PTR)&qword_1406FBA20);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  if ( !Data )
  {
    v4 = dword_1406FB0F4;
    goto LABEL_25;
  }
  v5 = sub_14048AB98(v21);
  if ( v5 >= 0 )
  {
    v4 = DWORD2(v21[0]);
    goto LABEL_25;
  }
  v4 = 4;
  if ( v5 == -1073741275 && Data )
  {
    v6 = (unsigned __int8 *)Data + 20;
    DWORD2(v19) = 4;
    *(_QWORD *)&v20 = 0LL;
    BYTE8(v20) = 1;
    if ( Data == (PVOID)-20LL )
      goto LABEL_23;
    v7 = *((unsigned int *)Data + 1);
    v8 = 0LL;
    if ( *((_DWORD *)Data + 1) )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        v11 = *v6++;
        v11 -= 23737705;
        v9 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v9 + v11), 21), 21), 21);
        v10 += v9 + v11;
        --v7;
      }
      while ( v7 );
      v8 = __PAIR64__(v9, v10);
    }
    *(_QWORD *)&v19 = v8;
    if ( !(_DWORD)NumOfElements )
      goto LABEL_24;
    v12 = 16 * NumOfElements;
    if ( 16 * (unsigned __int64)(unsigned int)NumOfElements > 0xFFFFFFFF )
    {
LABEL_23:
      *(_QWORD *)&v19 = 0LL;
      DWORD2(v19) = 4;
    }
    else
    {
      v13 = (unsigned __int8 *)qword_140701300;
      v14 = v12;
      if ( v12 )
      {
        v15 = HIDWORD(v8);
        v16 = v8;
        do
        {
          v17 = *v13++;
          v17 -= 23737705;
          v15 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v15 + v17), 21), 21), 21);
          v16 += v15 + v17;
          --v14;
        }
        while ( v14 );
        v8 = __PAIR64__(v15, v16);
      }
      *(_QWORD *)&v19 = v8;
    }
LABEL_24:
    v21[0] = v19;
    DWORD2(v21[0]) = 4;
    v21[1] = 0uLL;
    v21[2] = v20;
    sub_140489880((__int64)v21, -1, 0);
  }
LABEL_25:
  if ( a1 )
    *a1 = v4;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1406FBA20);
  KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v4 != 0;
}
