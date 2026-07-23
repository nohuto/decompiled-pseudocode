/*
 * XREFs of ExQueryLicenseValueInternal @ 0x14051C4C0
 * Callers:
 *     NtQueryLicenseValue @ 0x14051C200 (NtQueryLicenseValue.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14051CB5C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     sub_14051CE10 @ 0x14051CE10 (sub_14051CE10.c)
 */

__int64 __fastcall ExQueryLicenseValueInternal(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  PVOID PoolWithTag; // rcx
  int v7; // r15d
  int v8; // r14d
  unsigned int v9; // esi
  _WORD *v10; // rcx
  unsigned __int16 v11; // r12
  __int64 (**v12)[9]; // rdi
  __int64 (**v13)[9]; // rbx
  unsigned __int16 v14; // dx
  __int64 *v15; // rcx
  __int64 *v16; // r12
  unsigned int *v17; // rsi
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // ebx
  size_t v21; // r8
  const void *v22; // rdx
  PVOID v23; // r13
  struct _KTHREAD *v24; // rcx
  __int64 v25; // rbx
  _DWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // r13d
  unsigned int v31; // ebx
  _WORD *v32; // r14
  unsigned __int16 v33; // si
  unsigned __int16 v34; // ax
  _WORD *v36; // r8
  __int64 v37; // r10
  __int64 v38; // r9
  _WORD *v39; // r8
  __int64 v40; // r10
  __int64 v41; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  struct _KTHREAD *v47; // rax
  _BYTE *v48; // rax
  _BYTE *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  _BYTE v53[4]; // [rsp+60h] [rbp-188h] BYREF
  int v54; // [rsp+64h] [rbp-184h]
  unsigned int v55; // [rsp+6Ch] [rbp-17Ch]
  PVOID P; // [rsp+70h] [rbp-178h]
  __int64 v57; // [rsp+78h] [rbp-170h]
  __int64 v58; // [rsp+80h] [rbp-168h]
  __int64 v59; // [rsp+88h] [rbp-160h]
  __int64 v60; // [rsp+90h] [rbp-158h]
  int v61; // [rsp+98h] [rbp-150h]
  unsigned int v62; // [rsp+A0h] [rbp-148h]
  int v63; // [rsp+A8h] [rbp-140h]
  __int64 *v64; // [rsp+B0h] [rbp-138h]
  char v65[8]; // [rsp+B8h] [rbp-130h] BYREF
  _WORD *v66; // [rsp+C0h] [rbp-128h]
  __int64 v67; // [rsp+C8h] [rbp-120h]
  _DWORD *v68; // [rsp+D0h] [rbp-118h]
  unsigned __int16 *v69; // [rsp+E0h] [rbp-108h]
  __int64 v70; // [rsp+E8h] [rbp-100h]
  __int64 *v71; // [rsp+F8h] [rbp-F0h]
  _BYTE Buf1[80]; // [rsp+100h] [rbp-E8h] BYREF
  _BYTE v73[80]; // [rsp+150h] [rbp-98h] BYREF

  v55 = a4;
  v58 = a3;
  v59 = a2;
  v69 = a1;
  v70 = a2;
  v60 = a3;
  v62 = a4;
  v57 = a5;
  v54 = 0;
  v68 = 0LL;
  v65[0] = 0;
  PoolWithTag = 0LL;
  v66 = 0LL;
  v53[0] = 0;
  P = 0LL;
  v67 = 0LL;
  if ( !a1 || !a5 || (v61 = 0, v54 = 0, !*((_QWORD *)a1 + 1)) || *a1 < 2u )
  {
    v30 = -1073741811;
    v54 = -1073741811;
    goto LABEL_41;
  }
  v65[0] = 1;
  v66 = a1;
  v63 = ExpLoadAndSortLicensingCacheDescriptors();
  v64 = 0LL;
  v7 = 1;
  v8 = 1;
  v9 = 0;
  v10 = a1;
  v11 = *a1;
  v12 = &off_1406E8820;
  v13 = &off_1406E8820;
  while ( 1 )
  {
    v14 = *((_WORD *)v13 + 4);
    if ( v11 == v14 )
      break;
    v8 += v14;
LABEL_8:
    ++v9;
    v13 += 4;
    if ( v9 >= 8 )
    {
      v15 = v64;
      goto LABEL_10;
    }
  }
  if ( v11 >> 1 )
  {
    v36 = Buf1;
    v37 = *((_QWORD *)v10 + 1) - (_QWORD)Buf1;
    v38 = v11 >> 1;
    do
    {
      *v36 = *(_WORD *)((char *)v36 + v37) ^ ((v8 + 1) | ((_WORD)v8 << 8) | 0x5555);
      v8 += 2;
      ++v36;
      --v38;
    }
    while ( v38 );
  }
  if ( memcmp(Buf1, *v13, v14) )
  {
    v10 = v66;
    goto LABEL_8;
  }
  v15 = (__int64 *)v13[2];
  v64 = v15;
LABEL_10:
  v71 = v15;
  if ( v15 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v43 = KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&qword_140747B20, v43, (ULONG_PTR)&qword_140747B20);
    if ( v43 )
      *(_BYTE *)(v43 + 26) |= 1u;
    v17 = (unsigned int *)v57;
    v18 = v55;
    v54 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _BYTE *))v64)(v59, v58, v55, v57, v53);
    v16 = 0LL;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140747B20);
    KeAbPostRelease((ULONG_PTR)&qword_140747B20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v44, v45, v46);
    v61 = v54;
  }
  else
  {
    v16 = 0LL;
    v17 = (unsigned int *)v57;
    v18 = v55;
  }
  if ( v53[0] )
  {
    v30 = v61;
    if ( v61 >= 0 && *v17 > v18 )
    {
      v30 = -1073741789;
      v54 = -1073741789;
    }
    PoolWithTag = P;
    goto LABEL_41;
  }
  v19 = v63;
  if ( v63 < 0 )
    goto LABEL_68;
  v54 = 0;
  if ( qword_1407473B8 )
  {
    v20 = *a1 + 2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x20534C53u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      v30 = -1073741801;
      v54 = -1073741801;
      goto LABEL_41;
    }
    memset(PoolWithTag, 0, v20);
    v21 = *a1;
    v22 = (const void *)*((_QWORD *)a1 + 1);
    v23 = P;
    memmove(P, v22, v21);
    v17 = (unsigned int *)v57;
    v19 = qword_1407473B8(0LL, 0LL, 0LL, 0LL, v23, v20, v58, v55, v57, v59, 0LL);
    if ( (int)(v19 + 0x80000000) < 0 || v19 == -1073741789 )
    {
      if ( !v55 )
        v19 = -1073741789;
      goto LABEL_68;
    }
  }
  v24 = KeGetCurrentThread();
  --v24->KernelApcDisable;
  v25 = KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140747B20, v25, (ULONG_PTR)&qword_140747B20);
  if ( v25 )
    *(_BYTE *)(v25 + 26) |= 1u;
  if ( !(_DWORD)NumOfElements && BYTE6(NlsMbCodePageTag) == 1 )
  {
    v54 = -1073741772;
    goto LABEL_32;
  }
  v26 = off_140747028;
  if ( off_140747028 || (v26 = Data) != 0LL )
  {
    v68 = v26;
    if ( *v26 != 24 )
    {
      if ( *v26 >= 0x18u )
      {
        v54 = sub_14051CE10(v65, v59, v58, v55, v17);
        goto LABEL_32;
      }
      goto LABEL_31;
    }
    v54 = -1073741772;
  }
  else
  {
LABEL_31:
    v54 = -1073741762;
  }
LABEL_32:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140747B20);
  KeAbPostRelease((ULONG_PTR)&qword_140747B20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v27, v28, v29);
  v30 = v54;
  if ( v54 == -1073741762 )
  {
    v47 = KeGetCurrentThread();
    --v47->KernelApcDisable;
    v48 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
    v49 = v48;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140747B20, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140747B20, v48, (ULONG_PTR)&qword_140747B20);
    if ( v49 )
      v49[26] |= 1u;
    BYTE1(NlsMbCodePageTag) = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140747B20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140747B20);
    KeAbPostRelease((ULONG_PTR)&qword_140747B20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v50, v51, v52);
    v30 = v54;
  }
  v31 = 0;
  v32 = v66;
  v33 = *v66;
  while ( 2 )
  {
    v34 = *((_WORD *)v12 + 4);
    if ( v33 != v34 )
    {
      v7 += v34;
      goto LABEL_38;
    }
    if ( v33 >> 1 )
    {
      v39 = v73;
      v40 = *((_QWORD *)v32 + 1) - (_QWORD)v73;
      v41 = v33 >> 1;
      do
      {
        *v39 = *(_WORD *)((char *)v39 + v40) ^ ((v7 + 1) | ((_WORD)v7 << 8) | 0x5555);
        v7 += 2;
        ++v39;
        --v41;
      }
      while ( v41 );
    }
    if ( memcmp(v73, *v12, v34) )
    {
LABEL_38:
      ++v31;
      v12 += 4;
      if ( v31 >= 8 )
        goto LABEL_39;
      continue;
    }
    break;
  }
  v16 = (__int64 *)v12[3];
LABEL_39:
  if ( v16 && (v30 >= 0 || v30 == -1073741772 || v30 == -1073741275) )
  {
    v19 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _BYTE *))v16)(v59, v58, v55, v57, v53);
    if ( v53[0] )
    {
LABEL_68:
      v54 = v19;
      v30 = v19;
    }
  }
  PoolWithTag = P;
LABEL_41:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v30;
}
