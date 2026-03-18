/*
 * XREFs of ExSetLicenseTamperState @ 0x140668914
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     sub_1404886E8 @ 0x1404886E8 (sub_1404886E8.c)
 *     sub_140489880 @ 0x140489880 (sub_140489880.c)
 *     sub_14048AB98 @ 0x14048AB98 (sub_14048AB98.c)
 */

void __fastcall ExSetLicenseTamperState(int a1)
{
  char v2; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rdi
  int v7; // edi
  int v8; // eax
  unsigned __int8 *v9; // rdx
  __int64 v10; // r10
  unsigned __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // r9d
  int v14; // eax
  unsigned int v15; // ecx
  unsigned __int8 *v16; // r9
  __int64 v17; // r8
  unsigned int v18; // ecx
  unsigned int v19; // edx
  int v20; // eax
  __int128 v21; // [rsp+20h] [rbp-89h]
  __int128 v22; // [rsp+40h] [rbp-69h]
  _OWORD v23[3]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v24[8]; // [rsp+80h] [rbp-29h] BYREF
  int v25; // [rsp+88h] [rbp-21h]
  _BYTE v26[48]; // [rsp+B0h] [rbp+7h] BYREF

  if ( !a1 )
    return;
  v2 = 1;
  if ( a1 == 3 )
    return;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1406FBA20, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_1406FBA20, v4, (ULONG_PTR)&qword_1406FBA20);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  if ( Data )
  {
    v8 = sub_14048AB98(v23);
    if ( v8 >= 0 )
    {
      v7 = DWORD2(v23[0]);
      goto LABEL_27;
    }
    v7 = 4;
    if ( v8 != -1073741275 || !Data )
      goto LABEL_27;
    v9 = (unsigned __int8 *)Data + 20;
    DWORD2(v21) = 4;
    *(_QWORD *)&v22 = 0LL;
    BYTE8(v22) = 1;
    if ( Data == (PVOID)-20LL )
      goto LABEL_25;
    v10 = *((unsigned int *)Data + 1);
    v11 = 0LL;
    if ( *((_DWORD *)Data + 1) )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        v14 = *v9++;
        v14 -= 23737705;
        v12 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v12 + v14), 21), 21), 21);
        v13 += v12 + v14;
        --v10;
      }
      while ( v10 );
      v11 = __PAIR64__(v12, v13);
    }
    *(_QWORD *)&v21 = v11;
    if ( !(_DWORD)NumOfElements )
      goto LABEL_26;
    v15 = 16 * NumOfElements;
    if ( 16 * (unsigned __int64)(unsigned int)NumOfElements > 0xFFFFFFFF )
    {
LABEL_25:
      *(_QWORD *)&v21 = 0LL;
      DWORD2(v21) = 4;
    }
    else
    {
      v16 = (unsigned __int8 *)qword_140701300;
      v17 = v15;
      if ( v15 )
      {
        v18 = HIDWORD(v11);
        v19 = v11;
        do
        {
          v20 = *v16++;
          v20 -= 23737705;
          v18 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v18 + v20), 21), 21), 21);
          v19 += v18 + v20;
          --v17;
        }
        while ( v17 );
        v11 = __PAIR64__(v18, v19);
      }
      *(_QWORD *)&v21 = v11;
    }
LABEL_26:
    v23[0] = v21;
    DWORD2(v23[0]) = 4;
    v23[1] = 0uLL;
    v23[2] = v22;
    sub_140489880((__int64)v23, -1, 0);
    goto LABEL_27;
  }
  v7 = dword_1406FB0F4;
LABEL_27:
  dword_1406FB0F4 = a1;
  v25 = a1;
  if ( v7 )
    v2 = 0;
  sub_140489880((__int64)v24, 2, 0);
  v26[40] = 0;
  sub_140489880((__int64)v26, 32, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1406FBA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1406FBA20);
  KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v2 )
    sub_1404886E8();
}
