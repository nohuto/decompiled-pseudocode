/*
 * XREFs of sub_14051D560 @ 0x14051D560
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     NtQueryLicenseValue @ 0x14051D354 (NtQueryLicenseValue.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     sub_14051DAF8 @ 0x14051DAF8 (sub_14051DAF8.c)
 *     sub_14051DE1C @ 0x14051DE1C (sub_14051DE1C.c)
 */

__int64 __fastcall sub_14051D560(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r9
  __int64 *v6; // r15
  int v7; // esi
  unsigned int v8; // r14d
  _WORD *v9; // rcx
  unsigned __int16 v10; // r13
  __int64 (**v11)[9]; // rbx
  unsigned __int16 v12; // dx
  unsigned int *v13; // r14
  unsigned int v14; // eax
  struct _KTHREAD *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r14
  _DWORD *v18; // rax
  __int64 v19; // r9
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  __int64 *v22; // rbx
  int v23; // esi
  unsigned int v24; // r14d
  _WORD *v25; // r13
  unsigned __int16 v26; // r15
  __int64 (**v27)[9]; // r11
  unsigned __int16 v28; // dx
  _WORD *v30; // r9
  __int64 v31; // r8
  __int64 v32; // r10
  _WORD *v33; // r9
  __int64 v34; // r8
  __int64 v35; // r10
  struct _KTHREAD *CurrentThread; // rax
  __int64 v37; // r9
  __int64 v38; // r14
  struct _KTHREAD *v39; // rcx
  __int16 v40; // ax
  unsigned int v41; // eax
  struct _KTHREAD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // r9
  __int64 v45; // r14
  struct _KTHREAD *v47; // rcx
  __int16 v48; // ax
  _BYTE v49[4]; // [rsp+30h] [rbp-178h] BYREF
  int v50; // [rsp+34h] [rbp-174h]
  unsigned int v51; // [rsp+3Ch] [rbp-16Ch]
  __int64 v52; // [rsp+40h] [rbp-168h]
  __int64 v53; // [rsp+48h] [rbp-160h]
  __int64 (**v54)[9]; // [rsp+50h] [rbp-158h]
  __int64 v55; // [rsp+60h] [rbp-148h]
  int v56; // [rsp+68h] [rbp-140h]
  unsigned int v57; // [rsp+70h] [rbp-138h]
  char v58[8]; // [rsp+78h] [rbp-130h] BYREF
  _WORD *v59; // [rsp+80h] [rbp-128h]
  _DWORD *v60; // [rsp+88h] [rbp-120h]
  __int64 v61; // [rsp+90h] [rbp-118h]
  __int64 v62; // [rsp+A0h] [rbp-108h]
  __int64 *v63; // [rsp+B0h] [rbp-F8h]
  _BYTE Buf1[80]; // [rsp+C0h] [rbp-E8h] BYREF
  _BYTE v65[80]; // [rsp+110h] [rbp-98h] BYREF

  v51 = a4;
  v55 = a3;
  v53 = a2;
  v61 = a2;
  v62 = a3;
  v57 = a4;
  v52 = a5;
  v50 = 0;
  v60 = 0LL;
  v58[0] = 0;
  v59 = 0LL;
  v49[0] = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a5 )
    return (unsigned int)-1073741811;
  v50 = 0;
  if ( !*(_QWORD *)(a1 + 8) || *(_WORD *)a1 < 2u )
    return (unsigned int)-1073741811;
  v58[0] = 1;
  v59 = (_WORD *)a1;
  v56 = sub_14051DAF8();
  v6 = 0LL;
  v7 = 1;
  v8 = 0;
  v9 = v59;
  v10 = *v59;
  v54 = &off_140728E30;
  v11 = &off_140728E30;
  while ( 1 )
  {
    v12 = *((_WORD *)v11 + 4);
    if ( v10 == v12 )
      break;
    v7 += v12;
LABEL_8:
    ++v8;
    v11 += 4;
    if ( v8 >= 8 )
      goto LABEL_9;
  }
  if ( v10 >> 1 )
  {
    v30 = Buf1;
    v31 = *((_QWORD *)v9 + 1) - (_QWORD)Buf1;
    v32 = v10 >> 1;
    do
    {
      *v30 = *(_WORD *)((char *)v30 + v31) ^ ((v7 + 1) | ((_WORD)v7 << 8) | 0x5555);
      v7 += 2;
      ++v30;
      --v32;
    }
    while ( v32 );
  }
  if ( memcmp(Buf1, *v11, v12) )
  {
    v9 = v59;
    goto LABEL_8;
  }
  v6 = (__int64 *)v11[2];
LABEL_9:
  v63 = v6;
  if ( v6 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v38 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, v5);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&qword_14077EA20, v38, (ULONG_PTR)&qword_14077EA20, v37);
    if ( v38 )
      *(_BYTE *)(v38 + 26) |= 1u;
    v13 = (unsigned int *)v52;
    v50 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _BYTE *))v6)(v53, v55, v51, v52, v49);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_14077EA20);
    KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
    v39 = KeGetCurrentThread();
    v40 = v39->KernelApcDisable + 1;
    v39->KernelApcDisable = v40;
    if ( !v40
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v39->ApcState.ApcListHead[0].Flink != &v39->152
      && !v39->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    v13 = (unsigned int *)v52;
  }
  if ( v49[0] )
  {
    v41 = v50;
    if ( v50 >= 0 )
    {
      if ( *v13 > v51 )
        return (unsigned int)-1073741789;
      return v41;
    }
    return (unsigned int)v50;
  }
  v14 = v56;
  if ( v56 < 0 )
    return v14;
  v50 = 0;
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  v17 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, v5);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_14077EA20, v17, (ULONG_PTR)&qword_14077EA20, v16);
  if ( v17 )
    *(_BYTE *)(v17 + 26) |= 1u;
  if ( BYTE6(NlsMbCodePageTag) == 1 && !(_DWORD)NumOfElements )
    goto LABEL_24;
  v18 = off_14077E020;
  if ( !off_14077E020 )
  {
    v18 = Data;
    if ( !Data )
      goto LABEL_25;
  }
  v60 = v18;
  if ( *v18 == 24 )
  {
LABEL_24:
    v50 = -1073741772;
  }
  else
  {
    if ( *v18 >= 0x18u )
    {
      v50 = sub_14051DE1C(v58, v53, v55, v51, v52);
      goto LABEL_26;
    }
LABEL_25:
    v50 = -1073741762;
  }
LABEL_26:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14077EA20);
  KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
  v20 = KeGetCurrentThread();
  v21 = v20->KernelApcDisable + 1;
  v20->KernelApcDisable = v21;
  if ( !v21
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
    && !v20->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v50 == -1073741762 )
  {
    v42 = KeGetCurrentThread();
    --v42->KernelApcDisable;
    v43 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, v19);
    v45 = v43;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14077EA20, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_14077EA20, v43, (ULONG_PTR)&qword_14077EA20, v44);
    if ( v45 )
      *(_BYTE *)(v45 + 26) |= 1u;
    BYTE1(NlsMbCodePageTag) = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14077EA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14077EA20);
    KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
    v47 = KeGetCurrentThread();
    v48 = v47->KernelApcDisable + 1;
    v47->KernelApcDisable = v48;
    if ( !v48
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v47->ApcState.ApcListHead[0].Flink != &v47->152
      && !v47->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  v22 = 0LL;
  v23 = 1;
  v24 = 0;
  v25 = v59;
  v26 = *v59;
  v27 = &off_140728E30;
  while ( 2 )
  {
    v28 = *((_WORD *)v27 + 4);
    if ( v26 != v28 )
    {
      v23 += v28;
      goto LABEL_34;
    }
    if ( v26 >> 1 )
    {
      v33 = v65;
      v34 = *((_QWORD *)v25 + 1) - (_QWORD)v65;
      v35 = v26 >> 1;
      do
      {
        *v33 = *(_WORD *)((char *)v33 + v34) ^ ((v23 + 1) | ((_WORD)v23 << 8) | 0x5555);
        v23 += 2;
        ++v33;
        --v35;
      }
      while ( v35 );
    }
    if ( memcmp(v65, *v27, v28) )
    {
      v27 = v54;
LABEL_34:
      ++v24;
      v27 += 4;
      v54 = v27;
      if ( v24 >= 8 )
        goto LABEL_35;
      continue;
    }
    break;
  }
  v22 = (__int64 *)v54[3];
LABEL_35:
  if ( v22 && (v50 >= 0 || v50 == -1073741772 || v50 == -1073741275) )
  {
    v14 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _BYTE *))v22)(v53, v55, v51, v52, v49);
    if ( v49[0] )
      return v14;
  }
  return (unsigned int)v50;
}
