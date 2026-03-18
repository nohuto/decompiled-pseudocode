/*
 * XREFs of sub_140785A2C @ 0x140785A2C
 * Callers:
 *     sub_14076255C @ 0x14076255C (sub_14076255C.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x1403C7C24 (MmUnmapViewInSystemSpace.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     sub_14054598C @ 0x14054598C (sub_14054598C.c)
 *     sub_1406695B8 @ 0x1406695B8 (sub_1406695B8.c)
 *     ExpParseFastCache @ 0x140669E80 (ExpParseFastCache.c)
 *     ExpParseFastCacheHelper @ 0x140669F10 (ExpParseFastCacheHelper.c)
 *     sub_140669FD4 @ 0x140669FD4 (sub_140669FD4.c)
 *     sub_14066A098 @ 0x14066A098 (sub_14066A098.c)
 *     ExpValidateFastCacheSize @ 0x14066A5F0 (ExpValidateFastCacheSize.c)
 */

__int64 __fastcall sub_140785A2C(unsigned int a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // r14
  unsigned int v7; // edx
  int v8; // edi
  unsigned int v9; // ecx
  unsigned __int8 *v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // r10
  unsigned int v13; // edx
  unsigned int v14; // r8d
  int v15; // ecx
  size_t v16; // r15
  __int64 v17; // rcx
  const void **v18; // r14
  bool v19; // zf
  int v20; // r13d
  int v21; // r9d
  unsigned int v22; // edx
  unsigned __int64 v23; // r8
  _DWORD *v24; // rax
  unsigned int v25; // ebx
  unsigned int v26; // r12d
  const void *v27; // rdx
  _DWORD *v28; // rsi
  int v29; // eax
  _BYTE *PoolWithTag; // r13
  unsigned int v31; // esi
  const void **v32; // rdi
  char *v33; // r14
  __int64 v34; // rax
  unsigned int v35; // ebx
  unsigned __int8 *v36; // r11
  int v37; // ecx
  unsigned __int64 v38; // rax
  __int64 v39; // r10
  unsigned int v40; // r8d
  unsigned int v41; // r9d
  int v42; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v44; // rax
  signed __int8 v45; // cf
  __int64 v46; // rsi
  PVOID v47; // rsi
  __int64 v48; // r14
  __int64 *v49; // r8
  __int64 v50; // r9
  unsigned int v51; // ecx
  unsigned int v52; // edx
  int v53; // eax
  unsigned int v54; // r15d
  int *v55; // rdi
  int *v56; // rdx
  int v57; // r8d
  __int64 v58; // rax
  unsigned __int8 *v59; // r10
  __int64 v60; // r11
  unsigned int v61; // ecx
  unsigned int v62; // r9d
  int v63; // eax
  unsigned __int64 v64; // rax
  void *v65; // rcx
  unsigned int v66; // ecx
  __int64 *v67; // r8
  __int64 v68; // r9
  unsigned int v69; // edx
  int v70; // eax
  int v71; // edx
  __int64 v72; // rax
  unsigned __int8 *v73; // r9
  __int64 v74; // r10
  unsigned int v75; // ecx
  unsigned int v76; // r8d
  int v77; // eax
  PVOID v78; // rdi
  __int64 v79; // rcx
  void *v80; // rax
  size_t v82; // [rsp+20h] [rbp-E0h]
  size_t NumOfElements; // [rsp+40h] [rbp-C0h] BYREF
  PVOID MappedBase; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v85; // [rsp+50h] [rbp-B0h]
  void *Base; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v87; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v88; // [rsp+68h] [rbp-98h]
  unsigned __int64 v89; // [rsp+70h] [rbp-90h]
  unsigned __int64 v90; // [rsp+78h] [rbp-88h]
  void *v91; // [rsp+80h] [rbp-80h]
  __int64 v92; // [rsp+88h] [rbp-78h] BYREF
  __int64 v93; // [rsp+90h] [rbp-70h] BYREF
  void *v94; // [rsp+98h] [rbp-68h]
  PVOID Object; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v96; // [rsp+A8h] [rbp-58h]
  __int64 v97; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v98; // [rsp+B8h] [rbp-48h]
  __int64 v99; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v100; // [rsp+C8h] [rbp-38h]
  _QWORD *v101; // [rsp+D0h] [rbp-30h]
  __int64 v102; // [rsp+D8h] [rbp-28h] BYREF
  int v103[2]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v104; // [rsp+E8h] [rbp-18h]
  void *v105; // [rsp+F0h] [rbp-10h]

  v4 = a1;
  v97 = a3;
  v96 = a1;
  Object = 0LL;
  MappedBase = 0LL;
  Base = 0LL;
  v101 = a4;
  v8 = ExpValidateFastCacheSize(a1, a2, 0LL);
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( v7 < 0x18 )
    return (unsigned int)-1073741811;
  v9 = *(_DWORD *)(a3 + 8);
  if ( v7 - 24 != v9 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a3 != 1 )
    return (unsigned int)-1073741811;
  v10 = (unsigned __int8 *)(a3 + 24);
  if ( a3 == -24 )
    return (unsigned int)-1073741811;
  v11 = 0LL;
  v12 = v9;
  v87 = 0LL;
  if ( v9 )
  {
    v13 = HIDWORD(v87);
    v14 = v87;
    do
    {
      v15 = *v10++;
      v15 -= 23737705;
      v13 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v13 + v15), 21), 21), 21);
      v14 += v13 + v15;
      --v12;
    }
    while ( v12 );
    v87 = __PAIR64__(v13, v14);
    v11 = __PAIR64__(v13, v14);
  }
  if ( v11 != *(_QWORD *)(a3 + 16) )
  {
    sub_14066A098(8507);
    return (unsigned int)-1073700221;
  }
  v8 = ExpParseFastCacheHelper(a3, &NumOfElements, &Base);
  if ( v8 >= 0 )
  {
    v16 = (unsigned int)NumOfElements;
    v17 = 9 * v4;
    v18 = (const void **)Base;
    v19 = *((_BYTE *)&unk_1406FB430 + 8 * v17 + 64) == 1;
    v20 = 0;
    LODWORD(v85) = 0;
    v21 = 0;
    v100 = v17;
    if ( v19 )
    {
      v22 = 0;
      if ( (_DWORD)NumOfElements )
      {
        v23 = qword_1406FBAD8;
        while ( v23 >= *((_QWORD *)v18[2 * v22 + 1] + 4) - (unsigned __int64)(unsigned int)dword_1406FB058 )
        {
          if ( v23 > *((_QWORD *)v18[2 * v22 + 1] + 4) + (unsigned __int64)(unsigned int)dword_1406FB058 )
          {
            LOBYTE(v18[2 * v22]) = 3;
            ++v20;
            v24 = v18[2 * v22 + 1];
            v23 = qword_1406FBAD8;
            LODWORD(v85) = v20;
            v21 += (v24[10] + 51) & 0xFFFFFFF8;
          }
          if ( ++v22 >= (unsigned int)v16 )
            goto LABEL_21;
        }
        sub_14066A098(8507);
        v8 = -1073700221;
        goto LABEL_91;
      }
    }
LABEL_21:
    v25 = a2 - v21;
    v26 = v16 - v20;
    v8 = sub_1406695B8(v25, &Object, &MappedBase);
    if ( v8 < 0 )
    {
LABEL_85:
      v28 = MappedBase;
      goto LABEL_86;
    }
    if ( v20 )
    {
      v29 = *(_DWORD *)a3;
      v28 = MappedBase;
      *(_DWORD *)MappedBase = v29;
      v28[1] = *(_DWORD *)(v97 + 4);
      v28[2] = v25 - 24;
      if ( v26 )
      {
        v94 = v28 + 6;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v26, 0x20534C53u);
        if ( !PoolWithTag )
        {
          v8 = -1073741801;
          goto LABEL_86;
        }
        LODWORD(NumOfElements) = 0;
        if ( (_DWORD)v16 )
        {
          v31 = NumOfElements;
          v32 = v18 + 1;
          v33 = (char *)v94;
          do
          {
            if ( *((_BYTE *)v32 - 8) != 3 )
            {
              v34 = 2LL * v31;
              PoolWithTag[8 * v34] = 2;
              *(_QWORD *)&PoolWithTag[8 * v34 + 8] = v33;
              v35 = *((_DWORD *)*v32 + 10) + 44;
              memmove(v33, *v32, v35);
              v33 += (v35 + 7) & 0xFFFFFFF8;
              ++v31;
            }
            v32 += 2;
            --v16;
          }
          while ( v16 );
          v28 = MappedBase;
          v18 = (const void **)Base;
        }
      }
      else
      {
        PoolWithTag = 0LL;
      }
      ExFreePoolWithTag(v18, 0);
      LODWORD(NumOfElements) = v26;
      Base = PoolWithTag;
      v36 = (unsigned __int8 *)(v28 + 6);
      *((_QWORD *)v28 + 2) = 0LL;
      v37 = v28[2];
      v18 = (const void **)PoolWithTag;
      if ( v28 != (_DWORD *)-24LL && v28 != (_DWORD *)-16LL )
      {
        v38 = 0LL;
        v39 = (unsigned int)v28[2];
        v90 = 0LL;
        if ( v37 )
        {
          v40 = HIDWORD(v90);
          v41 = v90;
          do
          {
            v42 = *v36++;
            v42 -= 23737705;
            v40 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v40 + v42), 21), 21), 21);
            v41 += v40 + v42;
            --v39;
          }
          while ( v39 );
          v90 = __PAIR64__(v40, v41);
          v38 = __PAIR64__(v40, v41);
        }
        *((_QWORD *)v28 + 2) = v38;
        v20 = v85;
        goto LABEL_45;
      }
      v8 = -1073741811;
    }
    else
    {
      v27 = (const void *)a3;
      v28 = MappedBase;
      memmove(MappedBase, v27, v25);
      if ( !(_DWORD)v16 )
      {
LABEL_45:
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v44 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0LL);
        v45 = _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL);
        v46 = v44;
        if ( v45 )
          ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v44, (ULONG_PTR)&ExpFastCacheUpdateLock);
        if ( v46 )
          *(_BYTE *)(v46 + 26) |= 1u;
        if ( !v20 )
          goto LABEL_81;
        v47 = MappedBase;
        v48 = *((_QWORD *)MappedBase + 2);
        if ( *(_QWORD *)&qword_1406FBD30
          || (int)sub_14054598C((UNICODE_STRING *)&stru_1406A1900, (PVOID *)&qword_1406FBD30) >= 0 )
        {
          v49 = &v102;
          v50 = 8LL;
          v88 = 0LL;
          v51 = 0;
          v52 = 0;
          v102 = qword_1406FBAD8;
          do
          {
            v53 = *(unsigned __int8 *)v49;
            v49 = (__int64 *)((char *)v49 + 1);
            v53 -= 23737705;
            v51 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v51 + v53), 21), 21), 21);
            v52 += v51 + v53;
            --v50;
          }
          while ( v50 );
          v88 = __PAIR64__(v51, v52);
          v98 = __PAIR64__(v51, v52);
          v54 = v96;
          v55 = &dword_1406FB450;
          v56 = &dword_1406FB450;
          v57 = 0;
          while ( 1 )
          {
            if ( ExpFastCacheReArmed )
              goto LABEL_61;
            if ( v57 == v96 )
            {
              v92 = v48;
              goto LABEL_62;
            }
            v58 = *((_QWORD *)v56 - 3);
            if ( !v58 || *v56 )
LABEL_61:
              v92 = 0LL;
            else
              v92 = *(_QWORD *)(v58 + 16);
LABEL_62:
            v59 = (unsigned __int8 *)&v92;
            v85 = v98;
            v60 = 8LL;
            v61 = HIDWORD(v98);
            v62 = v98;
            do
            {
              v63 = *v59++;
              v63 -= 23737705;
              v61 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v61 + v63), 21), 21), 21);
              v62 += v61 + v63;
              --v60;
            }
            while ( v60 );
            v85 = __PAIR64__(v61, v62);
            v64 = __PAIR64__(v61, v62);
            v98 = __PAIR64__(v61, v62);
            ++v57;
            v56 += 18;
            if ( (unsigned __int64)v57 >= 5 )
            {
              v65 = 0LL;
              if ( v96 != -1 )
              {
                v89 = 0LL;
                v66 = 0;
                v67 = &v99;
                v68 = 8LL;
                v99 = qword_1406FBAD8;
                v69 = 0;
                do
                {
                  v70 = *(unsigned __int8 *)v67;
                  v67 = (__int64 *)((char *)v67 + 1);
                  v70 -= 23737705;
                  v66 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v66 + v70), 21), 21), 21);
                  v69 += v66 + v70;
                  --v68;
                }
                while ( v68 );
                v89 = __PAIR64__(v66, v69);
                v94 = (void *)__PAIR64__(v66, v69);
                v71 = 0;
                do
                {
                  if ( ExpFastCacheReArmed || v71 == -1 || (v72 = *((_QWORD *)v55 - 3)) == 0 || *v55 )
                    v93 = 0LL;
                  else
                    v93 = *(_QWORD *)(v72 + 16);
                  v73 = (unsigned __int8 *)&v93;
                  v91 = v94;
                  v74 = 8LL;
                  v75 = HIDWORD(v94);
                  v76 = (unsigned int)v94;
                  do
                  {
                    v77 = *v73++;
                    v77 -= 23737705;
                    v75 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v75 + v77), 21), 21), 21);
                    v76 += v75 + v77;
                    --v74;
                  }
                  while ( v74 );
                  v65 = (void *)__PAIR64__(v75, v76);
                  v91 = v65;
                  v94 = v65;
                  ++v71;
                  v55 += 18;
                }
                while ( (unsigned __int64)v71 < 5 );
                v64 = v85;
              }
              v105 = v65;
              LODWORD(v82) = 24;
              *(_QWORD *)v103 = qword_1406FBAD8;
              v104 = v64;
              if ( (int)CmSetValueKey(*(__int64 *)&qword_1406FBD30, &stru_1406A18F0, 3u, v103, v82, 0LL, 0) >= 0 )
              {
                v47 = MappedBase;
                sub_140669FD4(v54, MappedBase);
                break;
              }
LABEL_81:
              v47 = MappedBase;
              break;
            }
          }
        }
        v78 = Object;
        ObfReferenceObjectWithTag(Object, 0x746C6644u);
        v79 = v100;
        v80 = Base;
        MappedBase = 0LL;
        Base = 0LL;
        *((_QWORD *)&unk_1406FB430 + v100 + 2) = v80;
        *((_DWORD *)&unk_1406FB430 + 2 * v79 + 6) = NumOfElements;
        *((_QWORD *)&unk_1406FB430 + v79) = v78;
        *((_QWORD *)&unk_1406FB430 + v79 + 1) = v47;
        *((_DWORD *)&unk_1406FB430 + 2 * v79 + 8) = 0;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
        KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v8 = 0;
        v18 = (const void **)Base;
        *v101 = *(_QWORD *)(v97 + 16);
        goto LABEL_85;
      }
      v8 = ExpParseFastCache((__int64)v28, (__int64)v18, v16, 0LL);
      if ( v8 >= 0 )
      {
        qsort(v18, v16, 0x10uLL, (int (__cdecl *)(const void *, const void *))ExpFastCacheDescriptorCompare);
        goto LABEL_45;
      }
    }
LABEL_86:
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    if ( v28 )
      MmUnmapViewInSystemSpace(v28);
    goto LABEL_91;
  }
  v18 = (const void **)Base;
LABEL_91:
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  return (unsigned int)v8;
}
