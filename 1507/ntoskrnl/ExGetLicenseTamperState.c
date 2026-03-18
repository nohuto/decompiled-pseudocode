/*
 * XREFs of ExGetLicenseTamperState @ 0x1406EB74C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     sub_14051D108 @ 0x14051D108 (sub_14051D108.c)
 *     sub_14051E368 @ 0x14051E368 (sub_14051E368.c)
 */

bool __fastcall ExGetLicenseTamperState(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  int v11; // eax
  __int64 v12; // r9
  unsigned __int8 *v13; // rdx
  __int64 v14; // r10
  unsigned __int64 v15; // rax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // r8
  unsigned int v20; // ecx
  unsigned int v21; // edx
  int v22; // eax
  struct _KTHREAD *v23; // rdx
  __int16 v24; // ax
  __int128 v26; // [rsp+20h] [rbp-60h]
  __int128 v27; // [rsp+40h] [rbp-40h]
  _OWORD v28[3]; // [rsp+50h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_14077EA20, v7, (ULONG_PTR)&qword_14077EA20, v9);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( !Data )
  {
    v10 = dword_14077E0F0;
    goto LABEL_25;
  }
  v11 = sub_14051E368(v28, v6, v8, v9);
  if ( v11 >= 0 )
  {
    v10 = DWORD2(v28[0]);
    goto LABEL_25;
  }
  v10 = 4;
  if ( v11 == -1073741275 && Data )
  {
    v13 = (unsigned __int8 *)Data + 20;
    DWORD2(v26) = 4;
    *(_QWORD *)&v27 = 0LL;
    BYTE8(v27) = 1;
    if ( Data == (PVOID)-20LL )
      goto LABEL_23;
    v14 = *((unsigned int *)Data + 1);
    v15 = 0LL;
    if ( *((_DWORD *)Data + 1) )
    {
      v16 = 0;
      LODWORD(v12) = 0;
      do
      {
        v17 = *v13++;
        v17 -= 23737705;
        v16 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v16 + v17), 21), 21), 21);
        v12 = v16 + v17 + (_DWORD)v12;
        --v14;
      }
      while ( v14 );
      v15 = __PAIR64__(v16, v12);
    }
    *(_QWORD *)&v26 = v15;
    if ( !(_DWORD)NumOfElements )
      goto LABEL_24;
    v18 = 16 * NumOfElements;
    if ( 16 * (unsigned __int64)(unsigned int)NumOfElements > 0xFFFFFFFF )
    {
LABEL_23:
      *(_QWORD *)&v26 = 0LL;
      DWORD2(v26) = 4;
    }
    else
    {
      v12 = (__int64)qword_140784300;
      v19 = v18;
      if ( v18 )
      {
        v20 = HIDWORD(v15);
        v21 = v15;
        do
        {
          v22 = *(unsigned __int8 *)v12++;
          v22 -= 23737705;
          v20 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v20 + v22), 21), 21), 21);
          v21 += v20 + v22;
          --v19;
        }
        while ( v19 );
        v15 = __PAIR64__(v20, v21);
      }
      *(_QWORD *)&v26 = v15;
    }
LABEL_24:
    v28[0] = v26;
    DWORD2(v28[0]) = 4;
    v28[1] = 0uLL;
    v28[2] = v27;
    sub_14051D108((__int64)v28, -1, 0, v12);
  }
LABEL_25:
  if ( a1 )
    *a1 = v10;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14077EA20);
  KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
  v23 = KeGetCurrentThread();
  v24 = v23->KernelApcDisable + 1;
  v23->KernelApcDisable = v24;
  if ( !v24
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
    && !v23->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v10 != 0;
}
