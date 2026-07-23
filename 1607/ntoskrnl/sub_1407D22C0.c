/*
 * XREFs of sub_1407D22C0 @ 0x1407D22C0
 * Callers:
 *     ExpInitFastCache @ 0x1407B5348 (ExpInitFastCache.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExpLicUpdateChecksum @ 0x14008795C (ExpLicUpdateChecksum.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     MmUnmapViewInSystemSpace @ 0x140508E94 (MmUnmapViewInSystemSpace.c)
 *     ExpObtainFastCacheKeyBody @ 0x14057AB9C (ExpObtainFastCacheKeyBody.c)
 *     sub_1406AED74 @ 0x1406AED74 (sub_1406AED74.c)
 *     ExpParseFastCache @ 0x1406AF6A4 (ExpParseFastCache.c)
 *     ExpParseFastCacheHelper @ 0x1406AF734 (ExpParseFastCacheHelper.c)
 *     sub_1406AF7F8 @ 0x1406AF7F8 (sub_1406AF7F8.c)
 *     sub_1406AF8BC @ 0x1406AF8BC (sub_1406AF8BC.c)
 *     ExpValidateFastCacheSize @ 0x1406AFCE0 (ExpValidateFastCacheSize.c)
 */

__int64 __fastcall sub_1407D22C0(unsigned int a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v7; // rdx
  int updated; // edi
  size_t v9; // r15
  __int64 v10; // rcx
  const void **v11; // r14
  bool v12; // zf
  int v13; // esi
  int v14; // r9d
  unsigned int v15; // edx
  unsigned __int64 v16; // r8
  _DWORD *v17; // rax
  unsigned int v18; // ebx
  unsigned int v19; // r13d
  _DWORD *v20; // rsi
  char *PoolWithTag; // rax
  char *v22; // rbx
  char *v23; // r12
  const void **v24; // rdi
  unsigned int v25; // r14d
  char *v26; // rsi
  __int64 v27; // rax
  unsigned int v28; // ebx
  __int64 v29; // rdx
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v31; // rax
  __int64 v32; // rdx
  signed __int8 v33; // cf
  _BYTE *v34; // rsi
  __int64 v35; // rdx
  int v36; // ecx
  __int64 v37; // r11
  void *v38; // r9
  char *v39; // r10
  unsigned int v40; // edi
  __int64 v41; // rdx
  int v42; // edx
  PVOID v43; // rsi
  PVOID v44; // rdi
  __int64 v45; // rcx
  void *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  size_t v51; // [rsp+20h] [rbp-A9h]
  size_t NumOfElements; // [rsp+40h] [rbp-89h] BYREF
  PVOID MappedBase; // [rsp+48h] [rbp-81h] BYREF
  void *Base; // [rsp+50h] [rbp-79h] BYREF
  char *v55; // [rsp+58h] [rbp-71h] BYREF
  int v56; // [rsp+60h] [rbp-69h]
  void *v57; // [rsp+68h] [rbp-61h] BYREF
  void *v58; // [rsp+70h] [rbp-59h] BYREF
  unsigned int v59; // [rsp+78h] [rbp-51h]
  PVOID Object; // [rsp+80h] [rbp-49h] BYREF
  __int64 v61; // [rsp+88h] [rbp-41h] BYREF
  __int64 v62; // [rsp+90h] [rbp-39h]
  _QWORD *v63; // [rsp+98h] [rbp-31h]
  char v64[8]; // [rsp+A0h] [rbp-29h] BYREF
  char v65[8]; // [rsp+A8h] [rbp-21h] BYREF
  char v66[8]; // [rsp+B0h] [rbp-19h] BYREF
  int v67[2]; // [rsp+B8h] [rbp-11h] BYREF
  void *v68; // [rsp+C0h] [rbp-9h]
  char *v69; // [rsp+C8h] [rbp-1h]

  v4 = a1;
  v5 = a3;
  v58 = (void *)a3;
  v59 = a1;
  Object = 0LL;
  MappedBase = 0LL;
  Base = 0LL;
  v63 = a4;
  updated = ExpValidateFastCacheSize(a1, a2, 0LL);
  if ( updated < 0 )
    return (unsigned int)updated;
  if ( (unsigned int)v7 < 0x18 || (_DWORD)v7 - 24 != *(_DWORD *)(v5 + 8) || *(_DWORD *)v5 != 1 )
    return (unsigned int)-1073741811;
  v61 = 0LL;
  updated = ExpLicUpdateChecksum(v5 + 24, v7, &v61);
  if ( updated < 0 )
    return (unsigned int)updated;
  if ( v61 != *(_QWORD *)(v5 + 16) )
  {
    sub_1406AF8BC(8507);
    return (unsigned int)-1073700221;
  }
  updated = ExpParseFastCacheHelper(v5, &NumOfElements, &Base);
  if ( updated >= 0 )
  {
    v9 = (unsigned int)NumOfElements;
    v10 = 9 * v4;
    v11 = (const void **)Base;
    v12 = *((_BYTE *)&unk_1407474A0 + 8 * v10 + 64) == 1;
    v13 = 0;
    v56 = 0;
    v14 = 0;
    v62 = v10;
    if ( v12 )
    {
      v15 = 0;
      if ( (_DWORD)NumOfElements )
      {
        v16 = qword_140747BD8;
        while ( v16 >= *((_QWORD *)v11[2 * v15 + 1] + 4) - (unsigned __int64)(unsigned int)dword_140747058 )
        {
          if ( v16 > *((_QWORD *)v11[2 * v15 + 1] + 4) + (unsigned __int64)(unsigned int)dword_140747058 )
          {
            LOBYTE(v11[2 * v15]) = 3;
            ++v13;
            v17 = v11[2 * v15 + 1];
            v16 = qword_140747BD8;
            v56 = v13;
            v14 += (v17[10] + 51) & 0xFFFFFFF8;
          }
          if ( ++v15 >= (unsigned int)v9 )
            goto LABEL_17;
        }
        sub_1406AF8BC(8507);
        updated = -1073700221;
        goto LABEL_67;
      }
    }
LABEL_17:
    v18 = a2 - v14;
    v19 = v9 - v13;
    updated = sub_1406AED74(v18, &Object, &MappedBase);
    if ( updated < 0 )
      goto LABEL_61;
    v12 = v13 == 0;
    v20 = MappedBase;
    if ( v12 )
    {
      memmove(MappedBase, (const void *)v5, v18);
      if ( !(_DWORD)v9 )
        goto LABEL_34;
      updated = ExpParseFastCache((__int64)v20, (__int64)v11, v9, 0LL);
      if ( updated >= 0 )
      {
        qsort(v11, v9, 0x10uLL, (int (__cdecl *)(const void *, const void *))ExpFastCacheDescriptorCompare);
        goto LABEL_34;
      }
    }
    else
    {
      *(_DWORD *)MappedBase = *(_DWORD *)v5;
      v20[1] = *(_DWORD *)(v5 + 4);
      v20[2] = v18 - 24;
      if ( v19 )
      {
        v57 = v20 + 6;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 16LL * v19, 0x20534C53u);
        v55 = PoolWithTag;
        v22 = PoolWithTag;
        if ( !PoolWithTag )
        {
          updated = -1073741801;
          goto LABEL_62;
        }
        LODWORD(NumOfElements) = 0;
        if ( (_DWORD)v9 )
        {
          v23 = (char *)v57;
          v24 = v11 + 1;
          v25 = NumOfElements;
          v26 = PoolWithTag;
          do
          {
            if ( *((_BYTE *)v24 - 8) != 3 )
            {
              v27 = 2LL * v25;
              v26[8 * v27] = 2;
              *(_QWORD *)&v26[8 * v27 + 8] = v23;
              v28 = *((_DWORD *)*v24 + 10) + 44;
              memmove(v23, *v24, v28);
              v23 += (v28 + 7) & 0xFFFFFFF8;
              ++v25;
            }
            v24 += 2;
            --v9;
          }
          while ( v9 );
          v20 = MappedBase;
          v11 = (const void **)Base;
          v5 = (__int64)v58;
          v22 = v55;
        }
      }
      else
      {
        v22 = 0LL;
      }
      ExFreePoolWithTag(v11, 0);
      LODWORD(NumOfElements) = v19;
      Base = v22;
      *((_QWORD *)v20 + 2) = 0LL;
      v11 = (const void **)v22;
      updated = ExpLicUpdateChecksum((__int64)(v20 + 6), v29, (_QWORD *)v20 + 2);
      if ( updated >= 0 )
      {
LABEL_34:
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v31 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0);
        v33 = _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL);
        v34 = v31;
        if ( v33 )
          ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v31, (ULONG_PTR)&ExpFastCacheUpdateLock);
        if ( v34 )
          v34[26] |= 1u;
        if ( !v56
          || !*(_QWORD *)&qword_140747E48
          && (int)ExpObtainFastCacheKeyBody((UNICODE_STRING *)&stru_1406E9A88, (PVOID *)&qword_140747E48) < 0 )
        {
          goto LABEL_57;
        }
        v57 = 0LL;
        v36 = ExpLicUpdateChecksum((__int64)&v58, v32, &v57);
        if ( v36 >= 0 )
        {
          v35 = 0LL;
          while ( 1 )
          {
            v36 = ExpLicUpdateChecksum((__int64)v64, v35, &v57);
            if ( v36 < 0 )
              break;
            v35 = (unsigned int)(v35 + 1);
            if ( (unsigned __int64)(int)v35 >= 5 )
            {
              v38 = v57;
              goto LABEL_47;
            }
          }
        }
        v38 = v58;
LABEL_47:
        v39 = 0LL;
        if ( v36 < 0 )
          goto LABEL_57;
        v40 = v59;
        if ( v59 != -1 )
        {
          v55 = 0LL;
          v36 = ExpLicUpdateChecksum((__int64)v65, v35, &v55);
          if ( v36 >= 0 )
          {
            v41 = 0LL;
            while ( 1 )
            {
              v36 = ExpLicUpdateChecksum((__int64)v66, v41, &v55);
              if ( v36 < 0 )
                break;
              v41 = (unsigned int)(v42 + 1);
              if ( (unsigned __int64)(int)v41 >= 5 )
              {
                v39 = v55;
                break;
              }
            }
          }
        }
        if ( v36 >= 0
          && (v68 = v38,
              LODWORD(v51) = 24,
              *(_QWORD *)v67 = v37,
              v69 = v39,
              (int)CmSetValueKey(*(__int64 *)&qword_140747E48, (UNICODE_STRING *)&stru_1406E9A78, 3, v67, v51, 0LL, 0) >= 0) )
        {
          v43 = MappedBase;
          sub_1406AF7F8(v40, MappedBase);
        }
        else
        {
LABEL_57:
          v43 = MappedBase;
        }
        v44 = Object;
        ObfReferenceObjectWithTag(Object, 0x746C6644u);
        v45 = v62;
        v46 = Base;
        MappedBase = 0LL;
        Base = 0LL;
        *((_QWORD *)&unk_1407474A0 + v62 + 2) = v46;
        *((_DWORD *)&unk_1407474A0 + 2 * v45 + 6) = NumOfElements;
        *((_QWORD *)&unk_1407474A0 + v45) = v44;
        *((_QWORD *)&unk_1407474A0 + v45 + 1) = v43;
        *((_DWORD *)&unk_1407474A0 + 2 * v45 + 8) = 0;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
        KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v47, v48, v49);
        updated = 0;
        v11 = (const void **)Base;
        *v63 = *(_QWORD *)(v5 + 16);
LABEL_61:
        v20 = MappedBase;
      }
    }
LABEL_62:
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    if ( v20 )
      MmUnmapViewInSystemSpace(v20);
    goto LABEL_67;
  }
  v11 = (const void **)Base;
LABEL_67:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)updated;
}
