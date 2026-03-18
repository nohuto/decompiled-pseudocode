/*
 * XREFs of PopFxRegisterDeviceWorker @ 0x1405AC9D0
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x1405AC5B0 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x1405AC800 (PopFxRegisterDevice.c)
 * Callees:
 *     PopFxActivateComponent @ 0x1400276B4 (PopFxActivateComponent.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IoAllocateIrp @ 0x1400CF78C (IoAllocateIrp.c)
 *     PopFxRegisterDeviceWithPep @ 0x140166CE8 (PopFxRegisterDeviceWithPep.c)
 *     PopFxCreateDeviceCommon @ 0x140166F8C (PopFxCreateDeviceCommon.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1401671BC (PopFxFindAcpiDeviceByUniqueId.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 *     PopFxReleaseAcpiRefDevice @ 0x140238CC4 (PopFxReleaseAcpiRefDevice.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PopFxVerifyDependencies @ 0x1406B4A70 (PopFxVerifyDependencies.c)
 */

__int64 __fastcall PopFxRegisterDeviceWorker(
        ULONG_PTR a1,
        const UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7,
        __int64 a8,
        ULONG_PTR *a9)
{
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  PVOID v13; // rbp
  int v14; // ebx
  PVOID PoolWithTag; // rax
  unsigned int v16; // esi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // r10
  __int64 v24; // rcx
  SIZE_T v25; // rdi
  unsigned __int64 v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  SIZE_T v29; // r13
  int AcpiDeviceByUniqueId; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  ULONG_PTR v33; // rsi
  int v34; // eax
  char *v35; // r15
  _DWORD *v36; // r13
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  size_t v39; // r8
  int v40; // ebp
  char *v41; // rax
  char *v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // r9
  _OWORD *v45; // rbx
  __int64 v46; // r8
  __int64 *v47; // r12
  unsigned __int64 v48; // rcx
  __int128 v49; // xmm0
  int v50; // eax
  int v51; // eax
  char *v52; // r8
  unsigned int v53; // edx
  __int64 v54; // rcx
  _DWORD *v55; // r8
  char *v56; // rcx
  char *v57; // r10
  size_t v58; // rdx
  unsigned __int64 v59; // rcx
  __int64 v60; // rax
  SIZE_T v61; // rcx
  __int64 v62; // r9
  char *v63; // rcx
  char *v64; // r12
  unsigned int v65; // ebx
  _QWORD *v66; // r13
  __int64 v67; // rdi
  unsigned int v68; // r9d
  __int64 v69; // r10
  _QWORD *v70; // r14
  __int64 v71; // r8
  __int64 v72; // rcx
  PIRP Irp; // rax
  int *v74; // rdx
  __int64 v75; // r8
  _DWORD *v76; // rcx
  int v77; // eax
  int v79; // [rsp+30h] [rbp-F8h]
  char *v80; // [rsp+30h] [rbp-F8h]
  int v81; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v82; // [rsp+38h] [rbp-F0h]
  _DWORD *v83; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v84; // [rsp+40h] [rbp-E8h]
  char *v85; // [rsp+40h] [rbp-E8h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-E0h] BYREF
  int v87; // [rsp+50h] [rbp-D8h]
  unsigned __int64 v88; // [rsp+58h] [rbp-D0h]
  _QWORD *v89; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v90; // [rsp+68h] [rbp-C0h]
  PVOID v91; // [rsp+70h] [rbp-B8h]
  PVOID P; // [rsp+78h] [rbp-B0h] BYREF
  char *v93; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v94; // [rsp+88h] [rbp-A0h]
  char *v95; // [rsp+90h] [rbp-98h]
  char *v96; // [rsp+98h] [rbp-90h]
  signed __int32 v97; // [rsp+A0h] [rbp-88h]
  size_t Size; // [rsp+A8h] [rbp-80h]
  unsigned __int64 v99; // [rsp+B0h] [rbp-78h]
  __int64 v100; // [rsp+B8h] [rbp-70h]
  _DWORD *v101; // [rsp+C0h] [rbp-68h]
  char *v102; // [rsp+C8h] [rbp-60h]
  char *v103; // [rsp+D0h] [rbp-58h]
  __int64 v104; // [rsp+D8h] [rbp-50h]

  v9 = a5;
  v10 = 0;
  P = 0LL;
  BugCheckParameter2 = 0LL;
  v13 = 0LL;
  if ( !a5 )
    return (unsigned int)-1073741811;
  v104 = a5;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 12LL * a5, 0x4D584650u);
  v91 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v79 = 0;
  v16 = 0;
  memset(PoolWithTag, 0, 12LL * a5);
  LODWORD(v18) = 0;
  do
  {
    v19 = a4 + 56LL * (unsigned int)v18;
    v20 = *(_DWORD *)(v19 + 28);
    if ( !v20
      || v20 > 1 && (!*(_QWORD *)a3 || !*(_QWORD *)(a3 + 8) || !*(_QWORD *)(a3 + 16) || *(_DWORD *)(v19 + 24) >= v20) )
    {
      goto LABEL_26;
    }
    v21 = v20 + v16;
    if ( v20 + v16 < v16 )
      goto LABEL_26;
    v22 = *(_DWORD *)(v19 + 40);
    v16 = v21;
    if ( v22 )
    {
      if ( v22 < a5 && v22 + v10 >= v10 )
      {
        v79 = v22 + v10;
        v10 += v22;
        LODWORD(v17) = 0;
        while ( 1 )
        {
          v23 = *(unsigned int *)(*(_QWORD *)(v19 + 48) + 4LL * (unsigned int)v17);
          if ( (unsigned int)v23 >= a5 )
            break;
          v17 = (unsigned int)(v17 + 1);
          ++*((_DWORD *)v91 + 3 * v23 + 2);
          if ( (unsigned int)v17 >= *(_DWORD *)(v19 + 40) )
            goto LABEL_19;
        }
      }
LABEL_26:
      v14 = -1073741811;
      goto LABEL_83;
    }
LABEL_19:
    v18 = (unsigned int)(v18 + 1);
  }
  while ( (unsigned int)v18 < a5 );
  v99 = 0LL;
  v94 = (8LL * a5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v88 = (((unsigned __int64)a5 << 8) + v94 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v24 = 24LL * v21;
  v25 = v24 + v88;
  if ( a7 > 0 )
  {
    v99 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v25 = v99 + 248;
  }
  v96 = 0LL;
  v26 = 0LL;
  v95 = 0LL;
  v82 = 0LL;
  if ( v10 )
  {
    v26 = (v25 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    v27 = 8LL * v10;
    v82 = (v27 + v26 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    v25 = v27 + v82;
  }
  v28 = ((int)(8 * a5 + 16) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v90 = v28;
  v84 = (v28 + 40LL * a5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v29 = v24 + v84;
  Size = v24 + v84;
  AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a2, (__int64 **)&P, v17, v18);
  v13 = P;
  if ( AcpiDeviceByUniqueId < 0 )
  {
    if ( AcpiDeviceByUniqueId == -1073741738 )
    {
      v13 = P;
      v14 = -1073741661;
      goto LABEL_83;
    }
    v34 = PopFxCreateDeviceCommon((__int64)a2, v31, v32, 0, &BugCheckParameter2);
    v33 = BugCheckParameter2;
    v14 = v34;
    if ( !BugCheckParameter2 )
      goto LABEL_83;
    v28 = v90;
  }
  else
  {
    v33 = (ULONG_PTR)P;
    BugCheckParameter2 = (ULONG_PTR)P;
  }
  v35 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v25, 0x4D584650u);
  if ( !v35 || (v101 = ExAllocatePoolWithTag(NonPagedPoolNx, v29, 0x4D584650u), (v36 = v101) == 0LL) )
  {
    v14 = -1073741670;
    goto LABEL_78;
  }
  memset(v35, 0, v25);
  *(_DWORD *)(v33 + 620) = a5;
  *(_QWORD *)(v33 + 624) = v35;
  v89 = (_QWORD *)(v33 + 624);
  v37 = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(v33 + 112) = *(_OWORD *)a3;
  v38 = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(v33 + 128) = v37;
  *(_QWORD *)&v37 = *(_QWORD *)(a3 + 48);
  *(_OWORD *)(v33 + 144) = v38;
  *(_QWORD *)(v33 + 160) = v37;
  *(_QWORD *)(v33 + 168) = a6;
  *(_QWORD *)(v33 + 568) = 0LL;
  v33 = BugCheckParameter2;
  v39 = Size;
  v97 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
  *(_DWORD *)(BugCheckParameter2 + 584) = v97;
  *(_DWORD *)(v33 + 580) = 5;
  memset(v36, 0, v39);
  v40 = v79;
  v41 = &v35[v94];
  *(_QWORD *)v36 = a8;
  v42 = v41;
  v43 = v88;
  v102 = v41;
  v90 = (unsigned __int64)v41;
  v36[2] = a5;
  v93 = &v35[v43];
  if ( v79 )
  {
    v96 = &v35[v26];
    v95 = &v35[v82];
  }
  v85 = (char *)v36 + v84;
  v103 = (char *)v36 + v28;
  LODWORD(v44) = 0;
  v80 = (char *)v36 + v28;
  v87 = 0;
  v45 = v41 + 48;
  v83 = (char *)v91 + 8;
  v46 = -48LL - (_QWORD)v35;
  v47 = (__int64 *)(a4 + 32);
  v100 = -48LL - (_QWORD)v35;
  v48 = 0LL;
  v94 = -16LL - (_QWORD)v36;
  v88 = 0LL;
  while ( 1 )
  {
    *(_QWORD *)(v48 + *v89) = v42;
    if ( (unsigned __int64)v45 + v46 > v25 - 256 )
      goto LABEL_69;
    v49 = *((_OWORD *)v47 - 2);
    *((_DWORD *)v45 - 8) = v44;
    *((_QWORD *)v45 + 4) = v33;
    *(_OWORD *)v42 = v49;
    *(_QWORD *)v45 = v42;
    *((_QWORD *)v45 - 1) = PopFxComponentWork;
    *((_QWORD *)v45 - 3) = 0LL;
    KeInitializeEvent((PRKEVENT)((char *)v45 + 56), NotificationEvent, 1u);
    *((_QWORD *)v45 + 10) = 0LL;
    *((_DWORD *)v45 + 27) = *((_DWORD *)v47 - 1);
    *((_QWORD *)v45 + 14) = v93;
    v50 = *((_DWORD *)v47 - 2);
    *((_DWORD *)v45 + 41) = -1;
    *((_DWORD *)v45 + 30) = v50;
    *((_DWORD *)v45 + 42) = v97;
    *((_QWORD *)v45 + 19) = 0LL;
    v51 = *((_DWORD *)v47 + 2);
    if ( v51 )
    {
      v52 = v96;
      v53 = 0;
      *((_QWORD *)v45 + 16) = v96;
      *((_DWORD *)v45 + 31) = v51;
      do
      {
        v54 = v53++;
        *(_DWORD *)v52 = *(_DWORD *)(v47[2] + 4 * v54);
        v52 += 8;
      }
      while ( v53 < *((_DWORD *)v45 + 31) );
      v96 = v52;
    }
    v55 = v83;
    if ( *v83 )
    {
      v56 = v95;
      *((_QWORD *)v45 + 18) = v95;
      v95 = &v56[8 * *v83];
    }
    v57 = v80;
    v58 = Size;
    v59 = v94 + 16;
    *(_QWORD *)((char *)v36 + v88 + 16) = v80;
    if ( (unsigned __int64)&v80[v59] > v58 - 40 )
      goto LABEL_69;
    *(_OWORD *)v80 = *((_OWORD *)v47 - 2);
    *((_QWORD *)v80 + 2) = *(v47 - 2);
    *((_DWORD *)v80 + 7) = *((_DWORD *)v47 - 1);
    *((_QWORD *)v80 + 4) = v85;
    *((_DWORD *)v80 + 6) = *((_DWORD *)v47 - 2);
    v60 = 0LL;
    v81 = 0;
    if ( *((_DWORD *)v45 + 27) )
    {
      v61 = v25 - 24;
      while ( 1 )
      {
        v62 = *v47;
        if ( v93 - v35 > v61 )
          goto LABEL_69;
        v63 = v93;
        *((_DWORD *)v93 + 4) = *(_DWORD *)(v62 + 24 * v60 + 16);
        *(_QWORD *)v63 = *(_QWORD *)(v62 + 24 * v60);
        *((_QWORD *)v63 + 1) = *(_QWORD *)(v62 + 24 * v60 + 8);
        v93 = v63 + 24;
        if ( (unsigned __int64)&v85[v94 + 16] > v58 - 24 )
          goto LABEL_69;
        *((_DWORD *)v85 + 4) = *(_DWORD *)(v62 + 24 * v60 + 16);
        *(_QWORD *)v85 = *(_QWORD *)(v62 + 24 * v60);
        *((_QWORD *)v85 + 1) = *(_QWORD *)(v62 + 24 * v60 + 8);
        v60 = (unsigned int)(v81 + 1);
        v85 += 24;
        v61 = v25 - 24;
        v81 = v60;
        if ( (unsigned int)v60 >= *((_DWORD *)v45 + 27) )
        {
          v55 = v83;
          break;
        }
      }
    }
    v42 = (char *)(v90 + 256);
    v44 = (unsigned int)(v87 + 1);
    v48 = v88 + 8;
    v90 += 256LL;
    v87 = v44;
    v80 = v57 + 40;
    v45 += 16;
    v88 += 8LL;
    v47 += 7;
    v83 = v55 + 3;
    if ( (unsigned int)v44 >= a5 )
      break;
    v46 = v100;
  }
  v64 = v103;
  if ( v40 )
  {
    v14 = PopFxVerifyDependencies(v91, v33, a5, v44);
    if ( v14 < 0 )
      goto LABEL_77;
  }
  v65 = 0;
  v66 = v89;
  v67 = 0LL;
  do
  {
    v68 = 0;
    v69 = *(_QWORD *)(v67 + *v66);
    if ( *(_DWORD *)(v69 + 172) )
    {
      v70 = v89;
      do
      {
        v71 = *(_QWORD *)(*v70 + 8LL * *(unsigned int *)(*(_QWORD *)(v69 + 176) + 8LL * v68));
        v72 = *(unsigned int *)(v71 + 188);
        *(_DWORD *)(*(_QWORD *)(v71 + 192) + 8 * v72) = v65;
        *(_DWORD *)(*(_QWORD *)(v71 + 192) + 8 * v72 + 4) = v68++;
        ++*(_DWORD *)(v71 + 188);
      }
      while ( v68 < *(_DWORD *)(v69 + 172) );
      v9 = a5;
      v66 = v89;
    }
    PopFxActivateComponent(v33, (volatile signed __int32 *)v69, 0LL, 1);
    ++v65;
    v67 += 8LL;
  }
  while ( v65 < v9 );
  v36 = v101;
  if ( a7 > 0 )
  {
    *(_QWORD *)(v33 + 24) = &v35[v99];
    Irp = IoAllocateIrp(a7 + 2, 0);
    *(_QWORD *)(v33 + 16) = Irp;
    if ( !Irp )
    {
LABEL_69:
      v14 = -1073741670;
      goto LABEL_77;
    }
  }
  if ( !(unsigned __int8)PopFxRegisterDeviceWithPep(a1, (int)a2, v33, (__int64)v36) )
    PopFxBugCheck(0x601uLL, v33, (ULONG_PTR)v36, 0LL);
  if ( v9 )
  {
    v74 = (int *)(v64 + 28);
    v75 = v104;
    v76 = v102 + 92;
    do
    {
      if ( (*(_BYTE *)(v74 - 3) & 2) != 0 )
        *v76 |= 2u;
      v77 = *v74;
      v74 += 10;
      v76[16] = v77;
      v76 += 64;
      --v75;
    }
    while ( v75 );
    v33 = BugCheckParameter2;
  }
  v35 = 0LL;
  v14 = 0;
  *a9 = v33;
  v33 = 0LL;
LABEL_77:
  ExFreePoolWithTag(v36, 0x4D584650u);
  v13 = P;
LABEL_78:
  if ( v33 && !v13 )
    ExFreePoolWithTag((PVOID)v33, 0x4D584650u);
  if ( v35 )
    ExFreePoolWithTag(v35, 0x4D584650u);
LABEL_83:
  ExFreePoolWithTag(v91, 0x4D584650u);
  if ( v13 )
    PopFxReleaseAcpiRefDevice((__int64)v13);
  return (unsigned int)v14;
}
