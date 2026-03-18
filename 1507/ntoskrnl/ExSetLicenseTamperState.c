/*
 * XREFs of ExSetLicenseTamperState @ 0x1406EBE90
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     sub_14051D108 @ 0x14051D108 (sub_14051D108.c)
 *     sub_14051E368 @ 0x14051E368 (sub_14051E368.c)
 *     sub_14055D174 @ 0x14055D174 (sub_14055D174.c)
 */

void __fastcall ExSetLicenseTamperState(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rdi
  int v13; // edi
  int v14; // eax
  unsigned __int8 *v15; // rdx
  __int64 v16; // r10
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // r8
  unsigned int v22; // ecx
  unsigned int v23; // edx
  int v24; // eax
  __int64 v25; // r9
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  __int128 v28; // [rsp+20h] [rbp-89h]
  __int128 v29; // [rsp+40h] [rbp-69h]
  _OWORD v30[3]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v31[8]; // [rsp+80h] [rbp-29h] BYREF
  int v32; // [rsp+88h] [rbp-21h]
  _BYTE v33[48]; // [rsp+B0h] [rbp+7h] BYREF

  if ( !a1 )
    return;
  v5 = 1;
  if ( a1 == 3 )
    return;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, a4);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14077EA20, 0LL);
  v12 = v7;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&qword_14077EA20, v7, (ULONG_PTR)&qword_14077EA20, v10);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( Data )
  {
    v14 = sub_14051E368(v30, v8, v9, v10);
    if ( v14 >= 0 )
    {
      v13 = DWORD2(v30[0]);
      goto LABEL_27;
    }
    v13 = 4;
    if ( v14 != -1073741275 || !Data )
      goto LABEL_27;
    v15 = (unsigned __int8 *)Data + 20;
    DWORD2(v28) = 4;
    *(_QWORD *)&v29 = 0LL;
    BYTE8(v29) = 1;
    if ( Data == (PVOID)-20LL )
      goto LABEL_25;
    v16 = *((unsigned int *)Data + 1);
    v17 = 0LL;
    if ( *((_DWORD *)Data + 1) )
    {
      v18 = 0;
      LODWORD(v10) = 0;
      do
      {
        v19 = *v15++;
        v19 -= 23737705;
        v18 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v18 + v19), 21), 21), 21);
        v10 = v18 + v19 + (_DWORD)v10;
        --v16;
      }
      while ( v16 );
      v17 = __PAIR64__(v18, v10);
    }
    *(_QWORD *)&v28 = v17;
    if ( !(_DWORD)NumOfElements )
      goto LABEL_26;
    v20 = 16 * NumOfElements;
    if ( 16 * (unsigned __int64)(unsigned int)NumOfElements > 0xFFFFFFFF )
    {
LABEL_25:
      *(_QWORD *)&v28 = 0LL;
      DWORD2(v28) = 4;
    }
    else
    {
      v10 = (__int64)qword_140784300;
      v21 = v20;
      if ( v20 )
      {
        v22 = HIDWORD(v17);
        v23 = v17;
        do
        {
          v24 = *(unsigned __int8 *)v10++;
          v24 -= 23737705;
          v22 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v22 + v24), 21), 21), 21);
          v23 += v22 + v24;
          --v21;
        }
        while ( v21 );
        v17 = __PAIR64__(v22, v23);
      }
      *(_QWORD *)&v28 = v17;
    }
LABEL_26:
    v30[0] = v28;
    DWORD2(v30[0]) = 4;
    v30[1] = 0uLL;
    v30[2] = v29;
    sub_14051D108((__int64)v30, -1, 0, v10);
    goto LABEL_27;
  }
  v13 = dword_14077E0F0;
LABEL_27:
  dword_14077E0F0 = a1;
  v32 = a1;
  if ( v13 )
    v5 = 0;
  sub_14051D108((__int64)v31, 2, 0, v10);
  v33[40] = 0;
  sub_14051D108((__int64)v33, 32, 0, v25);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14077EA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14077EA20);
  KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
  v26 = KeGetCurrentThread();
  v27 = v26->KernelApcDisable + 1;
  v26->KernelApcDisable = v27;
  if ( !v27
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
    && !v26->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v5 )
    sub_14055D174();
}
