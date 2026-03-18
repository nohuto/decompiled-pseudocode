/*
 * XREFs of sub_140489CE0 @ 0x140489CE0
 * Callers:
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     NtQueryLicenseValue @ 0x140489ACC (NtQueryLicenseValue.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     sub_14048A234 @ 0x14048A234 (sub_14048A234.c)
 *     sub_14048A4FC @ 0x14048A4FC (sub_14048A4FC.c)
 */

__int64 __fastcall sub_140489CE0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  int v5; // edi
  int v6; // esi
  unsigned int v7; // r14d
  _WORD *v8; // rcx
  unsigned __int16 v9; // r12
  __int64 (**v10)[9]; // r15
  __int64 (**v11)[9]; // rbx
  unsigned __int16 v12; // dx
  __int64 *v13; // rcx
  __int64 *v14; // r12
  unsigned int v15; // ebx
  unsigned int *v16; // r14
  int v17; // eax
  struct _KTHREAD *v18; // rcx
  __int64 v19; // rbx
  _DWORD *v20; // rax
  unsigned int v21; // ebx
  _WORD *v22; // r14
  unsigned __int16 v23; // si
  unsigned __int16 v24; // ax
  _WORD *v26; // r8
  __int64 v27; // r10
  __int64 v28; // r9
  _WORD *v29; // r8
  __int64 v30; // r10
  __int64 v31; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v33; // rbx
  struct _KTHREAD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  _BYTE v37[4]; // [rsp+30h] [rbp-178h] BYREF
  int v38; // [rsp+34h] [rbp-174h]
  unsigned int v39; // [rsp+3Ch] [rbp-16Ch]
  int v40; // [rsp+40h] [rbp-168h]
  __int64 v41; // [rsp+48h] [rbp-160h]
  __int64 v42; // [rsp+50h] [rbp-158h]
  __int64 v43; // [rsp+58h] [rbp-150h]
  __int64 v44; // [rsp+60h] [rbp-148h]
  unsigned int v45; // [rsp+68h] [rbp-140h]
  __int64 *v46; // [rsp+70h] [rbp-138h]
  char v47[8]; // [rsp+78h] [rbp-130h] BYREF
  _WORD *v48; // [rsp+80h] [rbp-128h]
  int v49; // [rsp+88h] [rbp-120h]
  _DWORD *v50; // [rsp+90h] [rbp-118h]
  __int64 v51; // [rsp+A0h] [rbp-108h]
  __int64 *v52; // [rsp+B0h] [rbp-F8h]
  _BYTE Buf1[80]; // [rsp+C0h] [rbp-E8h] BYREF
  _BYTE v54[80]; // [rsp+110h] [rbp-98h] BYREF

  v39 = a4;
  v44 = a3;
  v41 = a2;
  v51 = a2;
  v43 = a3;
  v45 = a4;
  v42 = a5;
  v38 = 0;
  v50 = 0LL;
  v47[0] = 0;
  v48 = 0LL;
  v37[0] = 0;
  if ( !a1 || !a5 || (v40 = 0, v38 = 0, !*(_QWORD *)(a1 + 8)) || *(_WORD *)a1 < 2u )
  {
    v15 = -1073741811;
    v38 = -1073741811;
    return v15;
  }
  v47[0] = 1;
  v48 = (_WORD *)a1;
  v49 = sub_14048A234();
  v46 = 0LL;
  v5 = 1;
  v6 = 1;
  v7 = 0;
  v8 = v48;
  v9 = *v48;
  v10 = &off_1406A8CA0;
  v11 = &off_1406A8CA0;
  while ( 1 )
  {
    v12 = *((_WORD *)v11 + 4);
    if ( v9 == v12 )
      break;
    v6 += v12;
LABEL_8:
    ++v7;
    v11 += 4;
    if ( v7 >= 8 )
    {
      v13 = v46;
      goto LABEL_10;
    }
  }
  if ( v9 >> 1 )
  {
    v26 = Buf1;
    v27 = *((_QWORD *)v8 + 1) - (_QWORD)Buf1;
    v28 = v9 >> 1;
    do
    {
      *v26 = *(_WORD *)((char *)v26 + v27) ^ ((v6 + 1) | ((_WORD)v6 << 8) | 0x5555);
      v6 += 2;
      ++v26;
      --v28;
    }
    while ( v28 );
  }
  if ( memcmp(Buf1, *v11, v12) )
  {
    v8 = v48;
    goto LABEL_8;
  }
  v13 = (__int64 *)v11[2];
  v46 = v13;
LABEL_10:
  v52 = v13;
  if ( v13 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v33 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&qword_1406FBA20, v33, (ULONG_PTR)&qword_1406FBA20);
    if ( v33 )
      *(_BYTE *)(v33 + 26) |= 1u;
    v16 = (unsigned int *)v42;
    v38 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _BYTE *))v46)(v41, v44, v39, v42, v37);
    v14 = 0LL;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1406FBA20);
    KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v15 = v38;
  }
  else
  {
    v14 = 0LL;
    v15 = v40;
    v16 = (unsigned int *)v42;
  }
  if ( v37[0] )
  {
    if ( (v15 & 0x80000000) == 0 && *v16 > v39 )
    {
      v15 = -1073741789;
      v38 = -1073741789;
    }
    return v15;
  }
  v17 = v49;
  if ( v49 < 0 )
    goto LABEL_58;
  v38 = 0;
  v18 = KeGetCurrentThread();
  --v18->KernelApcDisable;
  v19 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_1406FBA20, v19, (ULONG_PTR)&qword_1406FBA20);
  if ( v19 )
    *(_BYTE *)(v19 + 26) |= 1u;
  if ( !(_DWORD)NumOfElements && BYTE6(NlsMbCodePageTag) == 1 )
  {
    v38 = -1073741772;
    goto LABEL_28;
  }
  v20 = off_1406FB020;
  if ( off_1406FB020 || (v20 = Data) != 0LL )
  {
    v50 = v20;
    if ( *v20 != 24 )
    {
      if ( *v20 >= 0x18u )
      {
        v38 = sub_14048A4FC(v47, v41, v44, v39, v16);
        goto LABEL_28;
      }
      goto LABEL_27;
    }
    v38 = -1073741772;
  }
  else
  {
LABEL_27:
    v38 = -1073741762;
  }
LABEL_28:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1406FBA20);
  KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v40 = v38;
  if ( v38 == -1073741762 )
  {
    v34 = KeGetCurrentThread();
    --v34->KernelApcDisable;
    v35 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
    v36 = v35;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1406FBA20, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_1406FBA20, v35, (ULONG_PTR)&qword_1406FBA20);
    if ( v36 )
      *(_BYTE *)(v36 + 26) |= 1u;
    BYTE1(NlsMbCodePageTag) = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1406FBA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1406FBA20);
    KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v40 = v38;
  }
  v21 = 0;
  v22 = v48;
  v23 = *v48;
  while ( 2 )
  {
    v24 = *((_WORD *)v10 + 4);
    if ( v23 != v24 )
    {
      v5 += v24;
      goto LABEL_34;
    }
    if ( v23 >> 1 )
    {
      v29 = v54;
      v30 = *((_QWORD *)v22 + 1) - (_QWORD)v54;
      v31 = v23 >> 1;
      do
      {
        *v29 = *(_WORD *)((char *)v29 + v30) ^ ((v5 + 1) | ((_WORD)v5 << 8) | 0x5555);
        v5 += 2;
        ++v29;
        --v31;
      }
      while ( v31 );
    }
    if ( memcmp(v54, *v10, v24) )
    {
LABEL_34:
      ++v21;
      v10 += 4;
      if ( v21 >= 8 )
        goto LABEL_35;
      continue;
    }
    break;
  }
  v14 = (__int64 *)v10[3];
LABEL_35:
  v15 = v40;
  if ( v14 && (v40 >= 0 || v40 == -1073741772 || v40 == -1073741275) )
  {
    v17 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _BYTE *))v14)(v41, v44, v39, v42, v37);
    if ( v37[0] )
    {
LABEL_58:
      v15 = v17;
      v38 = v17;
    }
  }
  return v15;
}
