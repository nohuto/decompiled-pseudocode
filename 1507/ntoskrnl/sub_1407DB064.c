/*
 * XREFs of sub_1407DB064 @ 0x1407DB064
 * Callers:
 *     sub_1407DA854 @ 0x1407DA854 (sub_1407DA854.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     MmUnmapViewInSystemSpace @ 0x14051BEC8 (MmUnmapViewInSystemSpace.c)
 *     ExpParseFastCacheHelper @ 0x1405A9894 (ExpParseFastCacheHelper.c)
 *     ExpParseFastCache @ 0x1405A9954 (ExpParseFastCache.c)
 *     sub_1405A99E4 @ 0x1405A99E4 (sub_1405A99E4.c)
 *     ExpValidateFastCacheSize @ 0x1405A9AF4 (ExpValidateFastCacheSize.c)
 *     sub_1405BC990 @ 0x1405BC990 (sub_1405BC990.c)
 *     sub_1406ED5D0 @ 0x1406ED5D0 (sub_1406ED5D0.c)
 *     sub_1406ED694 @ 0x1406ED694 (sub_1406ED694.c)
 */

__int64 __fastcall sub_1407DB064(unsigned int a1, unsigned int a2, __int64 a3, _QWORD *a4)
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
  unsigned int v24; // ebx
  unsigned int v25; // r12d
  const void *v26; // rdx
  _DWORD *v27; // rsi
  __int64 v28; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v30; // rax
  __int64 v31; // r9
  signed __int8 v32; // cf
  __int64 v33; // rsi
  PVOID v34; // rsi
  PVOID v35; // rdi
  __int64 v36; // rcx
  void *v37; // rax
  struct _KTHREAD *v38; // rcx
  __int16 v39; // ax
  _DWORD *v41; // rax
  int v42; // eax
  _BYTE *PoolWithTag; // r13
  unsigned int v44; // esi
  const void **v45; // rdi
  char *v46; // r14
  __int64 v47; // rax
  unsigned int v48; // ebx
  unsigned __int8 *v49; // r11
  unsigned int v50; // ecx
  unsigned __int64 v51; // rax
  __int64 v52; // r10
  unsigned int v53; // r8d
  int v54; // ecx
  __int64 v55; // r14
  __int64 *v56; // r8
  __int64 v57; // r9
  unsigned int v58; // ecx
  unsigned int v59; // edx
  int v60; // eax
  unsigned int v61; // r15d
  int *v62; // rdi
  int *v63; // rdx
  int v64; // r8d
  __int64 v65; // rax
  unsigned __int8 *v66; // r10
  __int64 v67; // r11
  unsigned int v68; // ecx
  unsigned int v69; // r9d
  int v70; // eax
  unsigned __int64 v71; // rax
  void *v72; // rcx
  unsigned int v73; // ecx
  __int64 *v74; // r8
  __int64 v75; // r9
  unsigned int v76; // edx
  int v77; // eax
  int v78; // edx
  __int64 v79; // rax
  unsigned __int8 *v80; // r9
  __int64 v81; // r10
  unsigned int v82; // ecx
  unsigned int v83; // r8d
  int v84; // eax
  size_t v85; // [rsp+20h] [rbp-E0h]
  size_t NumOfElements; // [rsp+40h] [rbp-C0h] BYREF
  PVOID MappedBase; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v88; // [rsp+50h] [rbp-B0h]
  void *Base; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v90; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v91; // [rsp+68h] [rbp-98h]
  unsigned __int64 v92; // [rsp+70h] [rbp-90h]
  unsigned __int64 v93; // [rsp+78h] [rbp-88h]
  void *v94; // [rsp+80h] [rbp-80h]
  __int64 v95; // [rsp+88h] [rbp-78h] BYREF
  __int64 v96; // [rsp+90h] [rbp-70h] BYREF
  void *v97; // [rsp+98h] [rbp-68h]
  PVOID Object; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v99; // [rsp+A8h] [rbp-58h]
  __int64 v100; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v101; // [rsp+B8h] [rbp-48h]
  __int64 v102; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v103; // [rsp+C8h] [rbp-38h]
  _QWORD *v104; // [rsp+D0h] [rbp-30h]
  __int64 v105; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v106[3]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = a1;
  v100 = a3;
  v99 = a1;
  Object = 0LL;
  MappedBase = 0LL;
  Base = 0LL;
  v104 = a4;
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
  v90 = 0LL;
  if ( v9 )
  {
    v13 = HIDWORD(v90);
    v14 = v90;
    do
    {
      v15 = *v10++;
      v15 -= 23737705;
      v13 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v13 + v15), 21), 21), 21);
      v14 += v13 + v15;
      --v12;
    }
    while ( v12 );
    v90 = __PAIR64__(v13, v14);
    v11 = __PAIR64__(v13, v14);
  }
  if ( v11 != *(_QWORD *)(a3 + 16) )
  {
    sub_1406ED694(8507);
    return (unsigned int)-1073700221;
  }
  v8 = ExpParseFastCacheHelper(a3, (unsigned int *)&NumOfElements, &Base);
  if ( v8 >= 0 )
  {
    v16 = (unsigned int)NumOfElements;
    v17 = 9 * v4;
    v18 = (const void **)Base;
    v19 = *((_BYTE *)&unk_14077E460 + 8 * v17 + 64) == 1;
    v20 = 0;
    LODWORD(v88) = 0;
    v21 = 0;
    v103 = v17;
    if ( v19 )
    {
      v22 = 0;
      if ( (_DWORD)NumOfElements )
      {
        v23 = qword_14077EAD0;
        while ( v23 >= *((_QWORD *)v18[2 * v22 + 1] + 4) - (unsigned __int64)(unsigned int)dword_14077E060 )
        {
          if ( v23 > *((_QWORD *)v18[2 * v22 + 1] + 4) + (unsigned __int64)(unsigned int)dword_14077E060 )
          {
            LOBYTE(v18[2 * v22]) = 3;
            ++v20;
            v41 = v18[2 * v22 + 1];
            v23 = qword_14077EAD0;
            LODWORD(v88) = v20;
            v21 += (v41[10] + 51) & 0xFFFFFFF8;
          }
          if ( ++v22 >= (unsigned int)v16 )
            goto LABEL_19;
        }
        sub_1406ED694(8507);
        v8 = -1073700221;
        goto LABEL_40;
      }
    }
LABEL_19:
    v24 = a2 - v21;
    v25 = v16 - v20;
    v8 = sub_1405A99E4(v24, &Object, &MappedBase);
    if ( v8 >= 0 )
    {
      if ( v20 )
      {
        v42 = *(_DWORD *)a3;
        v27 = MappedBase;
        *(_DWORD *)MappedBase = v42;
        v27[1] = *(_DWORD *)(v100 + 4);
        v27[2] = v24 - 24;
        if ( v25 )
        {
          v97 = v27 + 6;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v25, 0x20534C53u);
          if ( !PoolWithTag )
          {
            v8 = -1073741801;
            goto LABEL_36;
          }
          LODWORD(NumOfElements) = 0;
          if ( (_DWORD)v16 )
          {
            v44 = NumOfElements;
            v45 = v18 + 1;
            v46 = (char *)v97;
            do
            {
              if ( *((_BYTE *)v45 - 8) != 3 )
              {
                v47 = 2LL * v44;
                PoolWithTag[8 * v47] = 2;
                *(_QWORD *)&PoolWithTag[8 * v47 + 8] = v46;
                v48 = *((_DWORD *)*v45 + 10) + 44;
                memmove(v46, *v45, v48);
                v46 += (v48 + 7) & 0xFFFFFFF8;
                ++v44;
              }
              v45 += 2;
              --v16;
            }
            while ( v16 );
            v27 = MappedBase;
            v18 = (const void **)Base;
          }
        }
        else
        {
          PoolWithTag = 0LL;
        }
        ExFreePoolWithTag(v18, 0);
        LODWORD(NumOfElements) = v25;
        Base = PoolWithTag;
        v49 = (unsigned __int8 *)(v27 + 6);
        *((_QWORD *)v27 + 2) = 0LL;
        v50 = v27[2];
        v18 = (const void **)PoolWithTag;
        if ( v27 == (_DWORD *)-24LL || v27 == (_DWORD *)-16LL )
        {
          v8 = -1073741811;
          goto LABEL_36;
        }
        v51 = 0LL;
        v52 = v50;
        v93 = 0LL;
        if ( v50 )
        {
          v53 = HIDWORD(v93);
          LODWORD(v28) = v93;
          do
          {
            v54 = *v49++;
            v54 -= 23737705;
            v53 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v53 + v54), 21), 21), 21);
            v28 = v53 + v54 + (_DWORD)v28;
            --v52;
          }
          while ( v52 );
          v93 = __PAIR64__(v53, v28);
          v51 = __PAIR64__(v53, v28);
        }
        *((_QWORD *)v27 + 2) = v51;
        v20 = v88;
      }
      else
      {
        v26 = (const void *)a3;
        v27 = MappedBase;
        memmove(MappedBase, v26, v24);
        if ( (_DWORD)v16 )
        {
          v8 = ExpParseFastCache((__int64)v27, (__int64)v18, v16, 0LL);
          if ( v8 < 0 )
          {
LABEL_36:
            if ( Object )
              ObfDereferenceObjectWithTag(Object, 0x746C6644u);
            if ( v27 )
              MmUnmapViewInSystemSpace(v27);
            goto LABEL_40;
          }
          qsort(v18, v16, 0x10uLL, (int (__cdecl *)(const void *, const void *))ExpFastCacheDescriptorCompare);
        }
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v30 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0LL, v28);
      v32 = _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL);
      v33 = v30;
      if ( v32 )
        ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v30, (ULONG_PTR)&ExpFastCacheUpdateLock, v31);
      if ( v33 )
        *(_BYTE *)(v33 + 26) |= 1u;
      if ( !v20 )
        goto LABEL_29;
      v34 = MappedBase;
      v55 = *((_QWORD *)MappedBase + 2);
      if ( qword_14077ED28 || (int)sub_1405BC990((UNICODE_STRING *)&stru_140721B40, (PVOID *)&qword_14077ED28) >= 0 )
      {
        v56 = &v105;
        v57 = 8LL;
        v91 = 0LL;
        v58 = 0;
        v59 = 0;
        v105 = qword_14077EAD0;
        do
        {
          v60 = *(unsigned __int8 *)v56;
          v56 = (__int64 *)((char *)v56 + 1);
          v60 -= 23737705;
          v58 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v58 + v60), 21), 21), 21);
          v59 += v58 + v60;
          --v57;
        }
        while ( v57 );
        v91 = __PAIR64__(v58, v59);
        v101 = __PAIR64__(v58, v59);
        v61 = v99;
        v62 = &dword_14077E480;
        v63 = &dword_14077E480;
        v64 = 0;
        while ( 1 )
        {
          if ( ExpFastCacheReArmed )
            goto LABEL_75;
          if ( v64 == v99 )
          {
            v95 = v55;
            goto LABEL_76;
          }
          v65 = *((_QWORD *)v63 - 3);
          if ( !v65 || *v63 )
LABEL_75:
            v95 = 0LL;
          else
            v95 = *(_QWORD *)(v65 + 16);
LABEL_76:
          v66 = (unsigned __int8 *)&v95;
          v88 = v101;
          v67 = 8LL;
          v68 = HIDWORD(v101);
          v69 = v101;
          do
          {
            v70 = *v66++;
            v70 -= 23737705;
            v68 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v68 + v70), 21), 21), 21);
            v69 += v68 + v70;
            --v67;
          }
          while ( v67 );
          v88 = __PAIR64__(v68, v69);
          v71 = __PAIR64__(v68, v69);
          v101 = __PAIR64__(v68, v69);
          ++v64;
          v63 += 18;
          if ( (unsigned __int64)v64 >= 5 )
          {
            v72 = 0LL;
            if ( v99 != -1 )
            {
              v92 = 0LL;
              v73 = 0;
              v74 = &v102;
              v75 = 8LL;
              v102 = qword_14077EAD0;
              v76 = 0;
              do
              {
                v77 = *(unsigned __int8 *)v74;
                v74 = (__int64 *)((char *)v74 + 1);
                v77 -= 23737705;
                v73 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v73 + v77), 21), 21), 21);
                v76 += v73 + v77;
                --v75;
              }
              while ( v75 );
              v92 = __PAIR64__(v73, v76);
              v97 = (void *)__PAIR64__(v73, v76);
              v78 = 0;
              do
              {
                if ( ExpFastCacheReArmed || v78 == -1 || (v79 = *((_QWORD *)v62 - 3)) == 0 || *v62 )
                  v96 = 0LL;
                else
                  v96 = *(_QWORD *)(v79 + 16);
                v80 = (unsigned __int8 *)&v96;
                v94 = v97;
                v81 = 8LL;
                v82 = HIDWORD(v97);
                v83 = (unsigned int)v97;
                do
                {
                  v84 = *v80++;
                  v84 -= 23737705;
                  v82 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v82 + v84), 21), 21), 21);
                  v83 += v82 + v84;
                  --v81;
                }
                while ( v81 );
                v72 = (void *)__PAIR64__(v82, v83);
                v94 = v72;
                v97 = v72;
                ++v78;
                v62 += 18;
              }
              while ( (unsigned __int64)v78 < 5 );
              v71 = v88;
            }
            v106[2] = v72;
            LODWORD(v85) = 24;
            v106[0] = qword_14077EAD0;
            v106[1] = v71;
            if ( (int)CmSetValueKey(qword_14077ED28, &stru_140721B50, 3u, v106, v85, 0LL, 0) >= 0 )
            {
              v34 = MappedBase;
              sub_1406ED5D0(v61, MappedBase);
              break;
            }
LABEL_29:
            v34 = MappedBase;
            break;
          }
        }
      }
      v35 = Object;
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      v36 = v103;
      v37 = Base;
      MappedBase = 0LL;
      Base = 0LL;
      *((_QWORD *)&unk_14077E460 + v103 + 2) = v37;
      *((_DWORD *)&unk_14077E460 + 2 * v36 + 6) = NumOfElements;
      *((_QWORD *)&unk_14077E460 + v36) = v35;
      *((_QWORD *)&unk_14077E460 + v36 + 1) = v34;
      *((_DWORD *)&unk_14077E460 + 2 * v36 + 8) = 0;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
      KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
      v38 = KeGetCurrentThread();
      v39 = v38->KernelApcDisable + 1;
      v38->KernelApcDisable = v39;
      if ( !v39
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v38->ApcState.ApcListHead[0].Flink != &v38->152
        && !v38->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v8 = 0;
      v18 = (const void **)Base;
      *v104 = *(_QWORD *)(v100 + 16);
    }
    v27 = MappedBase;
    goto LABEL_36;
  }
  v18 = (const void **)Base;
LABEL_40:
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  return (unsigned int)v8;
}
