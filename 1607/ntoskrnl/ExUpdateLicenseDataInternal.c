/*
 * XREFs of ExUpdateLicenseDataInternal @ 0x140496F04
 * Callers:
 *     ExUpdateLicenseData @ 0x1406AEB68 (ExUpdateLicenseData.c)
 *     ExInitLicenseData @ 0x1407B505C (ExInitLicenseData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExpLicUpdateChecksum @ 0x14008795C (ExpLicUpdateChecksum.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateSection @ 0x14015AB30 (ZwCreateSection.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     MmMapViewInSystemSpace @ 0x140495FBC (MmMapViewInSystemSpace.c)
 *     sub_1404960F0 @ 0x1404960F0 (sub_1404960F0.c)
 *     ExpLicensingDescriptorCompare @ 0x140497C30 (ExpLicensingDescriptorCompare.c)
 *     ExpSetKernelDataProtection @ 0x140497CC0 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x14049822C (ExpGetKernelDataProtection.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x1404D1CE8 (ExpPutLicenseDataIntoRegistry.c)
 *     sub_1404D3608 @ 0x1404D3608 (sub_1404D3608.c)
 *     MmUnmapViewInSystemSpace @ 0x140508E94 (MmUnmapViewInSystemSpace.c)
 *     sub_1406AF0C0 @ 0x1406AF0C0 (sub_1406AF0C0.c)
 */

__int64 __fastcall ExUpdateLicenseDataInternal(int a1, unsigned int *a2)
{
  int v4; // ecx
  __int64 v5; // rdx
  unsigned int v6; // r9d
  char *v7; // rsi
  char v8; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v10; // rbx
  char v11; // cl
  unsigned int v12; // edx
  signed int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r15d
  NTSTATUS v18; // ebx
  PVOID v19; // rsi
  unsigned int *v20; // rbx
  _DWORD *v21; // rcx
  struct _KTHREAD *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // edi
  PVOID PoolWithTag; // rsi
  struct _KTHREAD *v29; // rcx
  __int64 v30; // rdi
  unsigned int v31; // r13d
  unsigned int v32; // eax
  unsigned int v33; // edx
  __int64 v34; // rsi
  _QWORD *v35; // rdi
  int v36; // eax
  __int64 v37; // r9
  __int64 v38; // rdx
  unsigned __int16 v39; // ax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  struct _KTHREAD *v43; // rax
  _BYTE *v44; // rax
  _BYTE *v45; // rdi
  signed __int8 v46; // cf
  signed int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r9
  __int64 v50; // r10
  __int64 v51; // r9
  int v52; // eax
  int v53; // edx
  __int64 v54; // r10
  int v55; // eax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  struct _KTHREAD *v60; // rax
  _BYTE *v61; // rax
  _BYTE *v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  struct _KTHREAD *v67; // rax
  _BYTE *v68; // rax
  _BYTE *v69; // rdi
  __int64 v70; // r9
  int KernelDataProtection; // eax
  int v72; // eax
  signed int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  signed int updated; // eax
  __int64 v80; // rdx
  signed int v81; // eax
  __int64 v82; // rdx
  signed int v83; // eax
  __int64 v84; // rdx
  struct _KTHREAD *v85; // rax
  _BYTE *v86; // rax
  _BYTE *v87; // rcx
  __int64 v88; // r9
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  signed int v94; // [rsp+40h] [rbp-3D8h]
  char v95; // [rsp+44h] [rbp-3D4h]
  bool v96; // [rsp+45h] [rbp-3D3h]
  char v97; // [rsp+46h] [rbp-3D2h]
  unsigned int NumOfElements; // [rsp+48h] [rbp-3D0h] BYREF
  int NumOfElements_4; // [rsp+4Ch] [rbp-3CCh]
  unsigned int *v100; // [rsp+50h] [rbp-3C8h]
  unsigned int v101; // [rsp+58h] [rbp-3C0h]
  unsigned int v102; // [rsp+5Ch] [rbp-3BCh]
  PVOID MappedBase; // [rsp+60h] [rbp-3B8h] BYREF
  PVOID P; // [rsp+68h] [rbp-3B0h]
  int v105; // [rsp+70h] [rbp-3A8h]
  PVOID v106; // [rsp+80h] [rbp-398h]
  PVOID v107; // [rsp+88h] [rbp-390h]
  LARGE_INTEGER MaximumSize; // [rsp+90h] [rbp-388h] BYREF
  HANDLE SectionHandle; // [rsp+98h] [rbp-380h] BYREF
  PVOID v110; // [rsp+A0h] [rbp-378h]
  __int128 v111; // [rsp+A8h] [rbp-370h] BYREF
  __int128 v112; // [rsp+B8h] [rbp-360h]
  __int128 v113; // [rsp+C8h] [rbp-350h]
  __int128 v114; // [rsp+D8h] [rbp-340h] BYREF
  __int128 v115; // [rsp+E8h] [rbp-330h]
  __int128 v116; // [rsp+F8h] [rbp-320h]
  __int128 v117; // [rsp+108h] [rbp-310h] BYREF
  __int128 v118; // [rsp+118h] [rbp-300h]
  __int128 v119; // [rsp+128h] [rbp-2F0h]
  __int128 v120; // [rsp+138h] [rbp-2E0h] BYREF
  __int128 v121; // [rsp+148h] [rbp-2D0h]
  __int128 v122; // [rsp+158h] [rbp-2C0h]
  __int128 v123; // [rsp+168h] [rbp-2B0h] BYREF
  __int128 v124; // [rsp+178h] [rbp-2A0h]
  __int128 v125; // [rsp+188h] [rbp-290h]
  __int128 v126; // [rsp+198h] [rbp-280h] BYREF
  __int128 v127; // [rsp+1A8h] [rbp-270h]
  __int128 v128; // [rsp+1B8h] [rbp-260h]
  ULONG_PTR ViewSize; // [rsp+1C8h] [rbp-250h] BYREF
  void *Src; // [rsp+1D0h] [rbp-248h]
  __int64 v131; // [rsp+1D8h] [rbp-240h]
  int v132; // [rsp+1E0h] [rbp-238h]
  PVOID Object; // [rsp+1E8h] [rbp-230h] BYREF
  __int128 v134; // [rsp+1F0h] [rbp-228h] BYREF
  __int128 v135; // [rsp+200h] [rbp-218h]
  __int128 v136; // [rsp+210h] [rbp-208h]
  _OWORD v137[3]; // [rsp+220h] [rbp-1F8h] BYREF
  _OWORD v138[3]; // [rsp+250h] [rbp-1C8h] BYREF
  _OWORD v139[3]; // [rsp+280h] [rbp-198h] BYREF
  _OWORD v140[3]; // [rsp+2B0h] [rbp-168h] BYREF
  __int64 v141; // [rsp+2E0h] [rbp-138h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+2E8h] [rbp-130h] BYREF
  _BYTE v143[8]; // [rsp+318h] [rbp-100h] BYREF
  int v144; // [rsp+320h] [rbp-F8h]
  _BYTE v145[8]; // [rsp+348h] [rbp-D0h] BYREF
  int v146; // [rsp+350h] [rbp-C8h]
  _BYTE v147[48]; // [rsp+378h] [rbp-A0h] BYREF
  _BYTE v148[8]; // [rsp+3A8h] [rbp-70h] BYREF
  int v149; // [rsp+3B0h] [rbp-68h]
  char v150; // [rsp+428h] [rbp+10h]
  char v151; // [rsp+430h] [rbp+18h]
  int v152; // [rsp+430h] [rbp+18h]
  _BYTE *v153; // [rsp+430h] [rbp+18h]
  bool v154; // [rsp+430h] [rbp+18h]
  _BYTE *v155; // [rsp+430h] [rbp+18h]
  char v156; // [rsp+438h] [rbp+20h]

  v96 = 0;
  v151 = 0;
  v150 = 0;
  v97 = 0;
  v156 = 0;
  MappedBase = 0LL;
  v107 = 0LL;
  v106 = 0LL;
  v110 = 0LL;
  NumOfElements = 0;
  P = 0LL;
  if ( !a2 || (unsigned int)(a1 - 25) > 0xFFE7 || ((unsigned __int8)a2 & 3) != 0 )
    goto LABEL_221;
  v4 = *a2;
  if ( *a2 > 0x10000 || (v5 = a2[1], (unsigned int)v5 > 0x10000) || (v6 = a2[2], v6 > 0x10000) )
  {
    v94 = -1073741760;
    v13 = -1073741811;
LABEL_222:
    v8 = 1;
    goto LABEL_223;
  }
  v100 = a2 + 5;
  v7 = (char *)a2 + v5 + 20;
  Src = v7;
  if ( ((unsigned __int8)v7 & 3) != 0 || v6 + (_DWORD)v5 + 20 != v4 )
  {
LABEL_221:
    v13 = -1073741811;
    v94 = -1073741811;
    goto LABEL_222;
  }
  v8 = 1;
  if ( v4 != a1 || a2[4] != 1 )
  {
    v13 = -1073741811;
    v94 = -1073741811;
LABEL_223:
    v17 = 4;
    goto LABEL_121;
  }
  v94 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140747B20, v10, (ULONG_PTR)&qword_140747B20);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( off_140747028 )
  {
    v11 = 1;
    v150 = 1;
  }
  else
  {
    v97 = 1;
    v11 = 0;
  }
  if ( InitSafeBootMode || InitIsWinPEMode )
  {
    if ( !v11 )
    {
      v94 = -1073741823;
LABEL_31:
      v13 = -1073741811;
      goto LABEL_36;
    }
LABEL_21:
    v96 = 0;
    if ( !v11 )
    {
      if ( Data )
      {
        if ( !BYTE1(NlsMbCodePageTag) && *a2 == *(_DWORD *)Data )
        {
          v12 = a2[1];
          if ( v12 == *((_DWORD *)Data + 1)
            && a2[2] == *((_DWORD *)Data + 2)
            && a2[3] == *((_DWORD *)Data + 3)
            && a2[4] == *((_DWORD *)Data + 4)
            && RtlCompareMemory((char *)Data + 20, a2 + 5, v12) == a2[1] )
          {
            v96 = RtlCompareMemory((char *)Data + *((unsigned int *)Data + 1) + 20, v7, a2[2]) == a2[2];
          }
        }
      }
    }
    goto LABEL_31;
  }
  if ( v11 || (a2[3] & 1) == 0 )
    goto LABEL_21;
  v13 = -1073741811;
  v94 = -1073741811;
LABEL_36:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140747B20);
  KeAbPostRelease((ULONG_PTR)&qword_140747B20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
  if ( v94 < 0 )
    goto LABEL_223;
  if ( v96 )
  {
    v67 = KeGetCurrentThread();
    --v67->KernelApcDisable;
    v68 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
    v69 = v68;
    v46 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140747B20, 0LL);
    if ( v46 )
      ExfAcquirePushLockExclusiveEx(&qword_140747B20, v68, (ULONG_PTR)&qword_140747B20);
    v70 = 0LL;
    if ( v69 )
      v69[26] |= 1u;
    if ( Data )
    {
      KernelDataProtection = ExpGetKernelDataProtection(v137);
      v70 = 0LL;
      if ( KernelDataProtection < 0 )
      {
        v17 = 4;
        if ( KernelDataProtection == -1073741275 )
        {
          if ( Data )
          {
            *(_QWORD *)&v111 = 0LL;
            v112 = 0uLL;
            DWORD2(v111) = 4;
            *(_QWORD *)&v113 = 0LL;
            BYTE8(v113) = 1;
            updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v111);
            if ( !updated )
            {
              if ( (_DWORD)v80 )
              {
                updated = 16 * (unsigned __int64)(unsigned int)v80 > 0xFFFFFFFF ? 0xC0000095 : 0;
                if ( !updated )
                  updated = ExpLicUpdateChecksum((__int64)qword_1407494C0, v80, &v111);
              }
            }
            if ( updated )
            {
              *(_QWORD *)&v111 = v70;
              DWORD2(v111) = 4;
              updated = v70;
            }
            v137[0] = v111;
            v137[1] = v112;
            v137[2] = v113;
          }
          else
          {
            updated = -1073741811;
          }
          if ( updated >= 0 )
          {
            DWORD2(v137[0]) = 4;
            ExpSetKernelDataProtection(v137, 0xFFFFFFFFLL, 0LL);
            v70 = 0LL;
          }
        }
        v72 = 4;
        goto LABEL_151;
      }
      v72 = DWORD2(v137[0]);
    }
    else
    {
      v72 = dword_1407470B4;
    }
    v17 = 4;
LABEL_151:
    NumOfElements_4 = v72;
    v154 = v72 != 0;
    *(_QWORD *)&v114 = v70;
    *(_QWORD *)&v115 = v70;
    DWORD2(v114) = v70;
    *((_QWORD *)&v115 + 1) = v70;
    *(_QWORD *)&v116 = 10800LL;
    BYTE8(v116) = 1;
    v73 = ExpLicUpdateChecksum((__int64)v100, (unsigned int)::NumOfElements, &v114);
    if ( v73 )
      goto LABEL_180;
    if ( (_DWORD)v74 )
    {
      v73 = 16 * (unsigned __int64)(unsigned int)v74 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( !v73 )
        v73 = ExpLicUpdateChecksum((__int64)qword_1407494C0, v74, &v114);
    }
    if ( v73 )
    {
LABEL_180:
      *(_QWORD *)&v114 = v75;
      DWORD2(v114) = 4;
      v73 = v75;
    }
    v134 = v114;
    v135 = v115;
    v136 = v116;
    if ( v73 >= 0 )
      ExpSetKernelDataProtection(&v134, 7LL, 1LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140747B20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140747B20);
    KeAbPostRelease((ULONG_PTR)&qword_140747B20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v76, v77, v78);
    if ( v154 )
      sub_1404D3608();
    v94 = 0x40000000;
    goto LABEL_121;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 544;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  MaximumSize.QuadPart = *a2;
  v17 = 4;
  v94 = ZwCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v94 < 0 )
    goto LABEL_121;
  v18 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
  v19 = Object;
  v106 = Object;
  v94 = v18;
  ZwClose(SectionHandle);
  if ( v18 < 0 )
    goto LABEL_121;
  ViewSize = 0LL;
  v94 = MmMapViewInSystemSpace(v19, &MappedBase, &ViewSize);
  if ( v94 < 0 )
    goto LABEL_121;
  v20 = (unsigned int *)MappedBase;
  *(_OWORD *)MappedBase = *(_OWORD *)a2;
  v20[4] = a2[4];
  memmove(v20 + 5, a2 + 5, a2[1]);
  memmove((char *)v20 + a2[1] + 20, Src, a2[2]);
  v21 = (unsigned int *)((char *)v20 + v20[1] + 20);
  if ( v20[2] != 4 || !v21 || *v21 != 69 )
  {
    v94 = -1073741761;
    goto LABEL_121;
  }
  v94 = sub_1404960F0((__int64)v20, 1, 0LL, 0, &NumOfElements);
  if ( v94 == -1073741789 )
  {
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    v23 = KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&qword_140747B20, v23, (ULONG_PTR)&qword_140747B20);
    if ( v23 )
      *(_BYTE *)(v23 + 26) |= 1u;
    v94 = NumOfElements > 0x923 ? 0xC000000D : 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140747B20);
    KeAbPostRelease((ULONG_PTR)&qword_140747B20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v24, v25, v26);
    if ( v94 < 0 )
      goto LABEL_121;
    v27 = NumOfElements;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * NumOfElements, 0x20534C53u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      v94 = -1073741801;
      goto LABEL_121;
    }
    v94 = sub_1404960F0((__int64)MappedBase, 0, PoolWithTag, NumOfElements, 0LL);
    if ( v94 >= 0 )
      qsort(PoolWithTag, v27, 0x10uLL, ExpLicensingDescriptorCompare);
  }
  if ( v94 >= 0 )
  {
    v95 = 0;
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    v30 = KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&qword_140747B20, v30, (ULONG_PTR)&qword_140747B20);
    if ( v30 )
      *(_BYTE *)(v30 + 26) |= 1u;
    if ( !v150 )
    {
      v31 = 0;
      v102 = 0;
      v32 = 0;
      v101 = 0;
      v33 = ::NumOfElements;
      LODWORD(v100) = ::NumOfElements;
      while ( v31 < NumOfElements && v32 < v33 )
      {
        v34 = 2LL * v32;
        v35 = (char *)P + 16 * v31;
        v36 = ExpLicensingDescriptorCompare(v35, &qword_1407494C0[2 * v32]);
        v132 = v36;
        v37 = v35[1];
        v131 = v37;
        v38 = qword_1407494C0[v34 + 1];
        v141 = v38;
        if ( v36 < 0 )
        {
          if ( (*(_DWORD *)(v37 + 8) & 2) != 0 )
            goto LABEL_79;
          v102 = ++v31;
          v32 = v101;
        }
        else
        {
          if ( v36 <= 0 )
          {
            if ( (*(_DWORD *)(v37 + 8) & 2) != 0 )
            {
              v39 = *(_WORD *)(v38 + 6);
              if ( *(_WORD *)(v37 + 6) != v39
                || memcmp(
                     (const void *)(*(unsigned __int16 *)(v37 + 2) + v37 + 16),
                     (const void *)(*(unsigned __int16 *)(v38 + 2) + 16LL + v38),
                     v39) )
              {
LABEL_79:
                v95 = 1;
                goto LABEL_82;
              }
            }
            v102 = ++v31;
          }
          v32 = ++v101;
        }
        v33 = (unsigned int)v100;
      }
      while ( v31 < NumOfElements )
      {
        v131 = *((_QWORD *)P + 2 * v31 + 1);
        if ( (*(_DWORD *)(v131 + 8) & 2) != 0 )
          goto LABEL_79;
        v102 = ++v31;
      }
    }
LABEL_82:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140747B20);
    KeAbPostRelease((ULONG_PTR)&qword_140747B20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v40, v41, v42);
    ObfReferenceObject(v106);
    v43 = KeGetCurrentThread();
    --v43->KernelApcDisable;
    v44 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
    v45 = v44;
    v46 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140747B20, 0LL);
    if ( v46 )
      ExfAcquirePushLockExclusiveEx(&qword_140747B20, v44, (ULONG_PTR)&qword_140747B20);
    if ( v45 )
      v45[26] |= 1u;
    if ( MappedBase && (!NumOfElements || P) )
    {
      *(_QWORD *)&v117 = 0LL;
      v118 = 0uLL;
      DWORD2(v117) = 0;
      *(_QWORD *)&v119 = 10800LL;
      BYTE8(v119) = 1;
      v47 = ExpLicUpdateChecksum((__int64)MappedBase + 20, NumOfElements, &v117);
      LODWORD(v100) = v47;
      if ( !v47 )
      {
        if ( (_DWORD)v48 )
        {
          v47 = (unsigned __int64)(16 * v48) > 0xFFFFFFFF ? 0xC0000095 : 0;
          LODWORD(v100) = v47;
          if ( !v47 )
          {
            v47 = ExpLicUpdateChecksum(v49, v48, &v117);
            LODWORD(v100) = v47;
          }
        }
      }
      if ( v47 )
      {
        *(_QWORD *)&v117 = v50;
        DWORD2(v117) = 4;
        v47 = v50;
        LODWORD(v100) = v50;
      }
      v134 = v117;
      v135 = v118;
      v136 = v119;
      v13 = -1073741811;
    }
    else
    {
      v13 = -1073741811;
      v47 = -1073741811;
      LODWORD(v100) = -1073741811;
    }
    v94 = v47;
    if ( v47 < 0 )
      goto LABEL_112;
    ExpSetKernelDataProtection(&v134, 7LL, 1LL);
    v110 = (PVOID)qword_1407480F0;
    v107 = Data;
    qword_1407480F0 = (__int64)v106;
    Data = MappedBase;
    MappedBase = 0LL;
    off_140747028 = 0LL;
    v156 = BYTE1(NlsMbCodePageTag);
    BYTE1(NlsMbCodePageTag) = 0;
    memset(qword_1407494C0, 0, 16LL * (unsigned int)::NumOfElements);
    LODWORD(v51) = 0;
    LODWORD(::NumOfElements) = 0;
    if ( P )
    {
      memmove(qword_1407494C0, P, 16LL * NumOfElements);
      LODWORD(::NumOfElements) = NumOfElements;
      LODWORD(v51) = 0;
    }
    BYTE6(NlsMbCodePageTag) = 1;
    if ( Data )
    {
      v52 = ExpGetKernelDataProtection(v138);
      LODWORD(v51) = 0;
      if ( v52 < 0 )
      {
        if ( v52 == -1073741275 )
        {
          if ( Data )
          {
            *(_QWORD *)&v120 = 0LL;
            v121 = 0uLL;
            DWORD2(v120) = 4;
            *(_QWORD *)&v122 = 0LL;
            BYTE8(v122) = 1;
            v81 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v120);
            if ( v81 )
              goto LABEL_194;
            if ( (_DWORD)v82 )
            {
              v81 = 16 * (unsigned __int64)(unsigned int)v82 > 0xFFFFFFFF ? 0xC0000095 : 0;
              if ( !v81 )
                v81 = ExpLicUpdateChecksum((__int64)qword_1407494C0, v82, &v120);
            }
            if ( v81 )
            {
LABEL_194:
              *(_QWORD *)&v120 = v51;
              DWORD2(v120) = 4;
              v81 = v51;
            }
            v138[0] = v120;
            v138[1] = v121;
            v138[2] = v122;
          }
          else
          {
            v81 = -1073741811;
          }
          if ( v81 >= 0 )
          {
            DWORD2(v138[0]) = 4;
            ExpSetKernelDataProtection(v138, 0xFFFFFFFFLL, 0LL);
            LODWORD(v51) = 0;
          }
        }
        v152 = 4;
        v105 = 4;
        goto LABEL_105;
      }
      v53 = DWORD2(v138[0]);
    }
    else
    {
      v53 = dword_1407470B4;
    }
    v152 = v53;
    v105 = v53;
LABEL_105:
    if ( (*((_DWORD *)Data + 3) & 1) != 0 )
    {
      dword_1407470B4 = 2;
      v144 = 2;
      ExpSetKernelDataProtection(v143, 2LL, 0LL);
      v97 = 1;
    }
    else
    {
      dword_1407470B4 = v51;
      v146 = v51;
      ExpSetKernelDataProtection(v145, 2LL, 0LL);
    }
    LOBYTE(v54) = 0;
    if ( Data )
    {
      v55 = ExpGetKernelDataProtection(v139);
      LOBYTE(v54) = 0;
      if ( v55 < 0 )
      {
        if ( v55 == -1073741275 )
        {
          if ( Data )
          {
            *(_QWORD *)&v123 = 0LL;
            v124 = 0uLL;
            DWORD2(v123) = 4;
            *(_QWORD *)&v125 = 0LL;
            BYTE8(v125) = 1;
            v83 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v123);
            if ( v83 )
              goto LABEL_209;
            if ( (_DWORD)v84 )
            {
              v83 = 16 * (unsigned __int64)(unsigned int)v84 > 0xFFFFFFFF ? 0xC0000095 : 0;
              if ( !v83 )
                v83 = ExpLicUpdateChecksum((__int64)qword_1407494C0, v84, &v123);
            }
            if ( v83 )
            {
LABEL_209:
              *(_QWORD *)&v123 = v54;
              DWORD2(v123) = 4;
              v83 = v54;
            }
            v139[0] = v123;
            v139[1] = v124;
            v139[2] = v125;
          }
          else
          {
            v83 = -1073741811;
          }
          if ( v83 >= 0 )
          {
            DWORD2(v139[0]) = 4;
            ExpSetKernelDataProtection(v139, 0xFFFFFFFFLL, 0LL);
            LOBYTE(v54) = 0;
          }
        }
        v56 = 4;
      }
      else
      {
        v56 = DWORD2(v139[0]);
      }
    }
    else
    {
      v56 = dword_1407470B4;
    }
    NumOfElements_4 = v56;
    if ( v152 == v56 || v152 && v56 )
      v151 = v54;
    else
      v151 = 1;
LABEL_112:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140747B20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140747B20);
    KeAbPostRelease((ULONG_PTR)&qword_140747B20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v57, v58, v59);
    if ( (int)v100 >= 0 )
    {
      if ( v150 || (v94 = ExpPutLicenseDataIntoRegistry(), v94 >= 0) )
      {
        if ( !v150 || v151 )
          sub_1404D3608();
        v94 = 0;
        if ( v95 == 1 )
          v94 = 263;
      }
    }
    goto LABEL_121;
  }
  if ( v94 == -1073741762 )
    v94 = -1073741811;
LABEL_121:
  if ( v156 && !BYTE1(NlsMbCodePageTag) )
    sub_1406AF0C0(&KernelLicensingCacheCorruptionFixed);
  if ( v97 )
  {
    v60 = KeGetCurrentThread();
    --v60->KernelApcDisable;
    v61 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
    v62 = v61;
    v153 = v61;
    v46 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140747B20, 0LL);
    if ( v46 )
    {
      ExfAcquirePushLockExclusiveEx(&qword_140747B20, v61, (ULONG_PTR)&qword_140747B20);
      v62 = v153;
    }
    if ( v62 )
      v62[26] |= 1u;
    v147[40] = 0;
    ExpSetKernelDataProtection(v147, 32LL, 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140747B20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140747B20);
    KeAbPostRelease((ULONG_PTR)&qword_140747B20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v63, v64, v65);
  }
  if ( v106 )
    ObfDereferenceObject(v106);
  if ( v110 )
    ObfDereferenceObject(v110);
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  if ( v107 )
    MmUnmapViewInSystemSpace(v107);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v94 == -1073741811 || (unsigned int)(v94 + 1073741761) <= 1 )
  {
    v85 = KeGetCurrentThread();
    --v85->KernelApcDisable;
    v86 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
    v87 = v86;
    v155 = v86;
    v46 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140747B20, 0LL);
    if ( v46 )
    {
      ExfAcquirePushLockExclusiveEx(&qword_140747B20, v86, (ULONG_PTR)&qword_140747B20);
      v87 = v155;
    }
    LOBYTE(v88) = 0;
    if ( v87 )
      v87[26] |= 1u;
    if ( Data )
    {
      v89 = ExpGetKernelDataProtection(v140);
      LOBYTE(v88) = 0;
      if ( v89 < 0 )
      {
        if ( v89 == -1073741275 )
        {
          if ( Data )
          {
            *(_QWORD *)&v126 = 0LL;
            v127 = 0uLL;
            DWORD2(v126) = 4;
            *(_QWORD *)&v128 = 0LL;
            BYTE8(v128) = 1;
            v13 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v126);
            if ( !v13 )
            {
              if ( (_DWORD)v90 )
              {
                v13 = 16 * (unsigned __int64)(unsigned int)v90 > 0xFFFFFFFF ? 0xC0000095 : 0;
                if ( !v13 )
                  v13 = ExpLicUpdateChecksum((__int64)qword_1407494C0, v90, &v126);
              }
            }
            if ( v13 )
            {
              *(_QWORD *)&v126 = v88;
              DWORD2(v126) = 4;
              v13 = v88;
            }
            v140[0] = v126;
            v140[1] = v127;
            v140[2] = v128;
          }
          if ( v13 >= 0 )
          {
            DWORD2(v140[0]) = 4;
            ExpSetKernelDataProtection(v140, 0xFFFFFFFFLL, 0LL);
            LOBYTE(v88) = 0;
          }
        }
      }
      else
      {
        v17 = DWORD2(v140[0]);
      }
    }
    else
    {
      v17 = dword_1407470B4;
    }
    NumOfElements_4 = v17;
    if ( v17 )
    {
      v8 = v88;
    }
    else
    {
      dword_1407470B4 = 5;
      v149 = 5;
      ExpSetKernelDataProtection(v148, 2LL, 0LL);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140747B20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140747B20);
    KeAbPostRelease((ULONG_PTR)&qword_140747B20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v91, v92, v93);
    if ( v8 )
      sub_1404D3608();
  }
  return (unsigned int)v94;
}
