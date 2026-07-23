/*
 * XREFs of PopFxRegisterDeviceWorker @ 0x140567268
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x140566E7C (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x14056711C (PopFxRegisterDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IoAllocateIrp @ 0x1400C3FBC (IoAllocateIrp.c)
 *     PopFxRegisterDeviceWithPep @ 0x140142488 (PopFxRegisterDeviceWithPep.c)
 *     PopFxActivateComponent @ 0x1401426E4 (PopFxActivateComponent.c)
 *     PopFxCreateDeviceCommon @ 0x140142760 (PopFxCreateDeviceCommon.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140142990 (PopFxFindAcpiDeviceByUniqueId.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1402036A4 (PopFxReleaseAcpiRefDevice.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PopFxVerifyDependencies @ 0x14066D870 (PopFxVerifyDependencies.c)
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
        __int64 **a9)
{
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  __int64 *v13; // rbp
  PVOID PoolWithTag; // rax
  unsigned int v15; // esi
  unsigned int i; // r9d
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rcx
  SIZE_T v22; // rdi
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rbx
  SIZE_T v25; // r13
  int AcpiDeviceByUniqueId; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // eax
  __int64 *v30; // rsi
  int v31; // ebx
  char *v32; // r15
  _DWORD *v33; // r13
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  size_t v36; // r8
  int v37; // ebp
  char *v38; // rax
  char *v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // r9
  _OWORD *v42; // rbx
  __int64 v43; // r8
  __int64 *v44; // r12
  unsigned __int64 v45; // rcx
  __int128 v46; // xmm0
  int v47; // eax
  int v48; // eax
  _DWORD *v49; // r8
  char *v50; // r10
  size_t v51; // rdx
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  SIZE_T v54; // rcx
  __int64 v55; // r9
  char *v56; // rcx
  char *v57; // r12
  unsigned int v58; // ebx
  _QWORD *v59; // r13
  __int64 v60; // rdi
  unsigned int v61; // r9d
  __int64 v62; // r10
  PIRP Irp; // rax
  int *v64; // rdx
  __int64 v65; // r8
  _DWORD *v66; // rcx
  int v67; // eax
  unsigned int v69; // r8d
  __int64 v70; // r10
  __int64 v71; // rax
  char *v72; // r8
  unsigned int v73; // edx
  __int64 v74; // rcx
  char *v75; // rcx
  _QWORD *v76; // r14
  __int64 v77; // r8
  __int64 v78; // rcx
  int v79; // [rsp+30h] [rbp-F8h]
  char *v80; // [rsp+30h] [rbp-F8h]
  int v81; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v82; // [rsp+38h] [rbp-F0h]
  char *v83; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v84; // [rsp+40h] [rbp-E8h]
  _DWORD *v85; // [rsp+40h] [rbp-E8h]
  int v86; // [rsp+48h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 v88; // [rsp+58h] [rbp-D0h]
  char *v89; // [rsp+60h] [rbp-C8h]
  _QWORD *v90; // [rsp+68h] [rbp-C0h]
  __int64 *v91; // [rsp+70h] [rbp-B8h] BYREF
  PVOID P; // [rsp+78h] [rbp-B0h]
  unsigned __int64 v93; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v94; // [rsp+88h] [rbp-A0h]
  signed __int32 v95; // [rsp+90h] [rbp-98h]
  char *v96; // [rsp+98h] [rbp-90h]
  char *v97; // [rsp+A0h] [rbp-88h]
  size_t Size; // [rsp+A8h] [rbp-80h]
  unsigned __int64 v99; // [rsp+B0h] [rbp-78h]
  __int64 v100; // [rsp+B8h] [rbp-70h]
  char *v101; // [rsp+C0h] [rbp-68h]
  _DWORD *v102; // [rsp+C8h] [rbp-60h]
  char *v103; // [rsp+D0h] [rbp-58h]
  __int64 v104; // [rsp+D8h] [rbp-50h]

  v9 = a5;
  v10 = 0;
  v91 = 0LL;
  BugCheckParameter2 = 0LL;
  v13 = 0LL;
  if ( a5 )
  {
    v104 = a5;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 12LL * a5, 0x4D584650u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      v79 = 0;
      v15 = 0;
      memset(PoolWithTag, 0, 12LL * a5);
      for ( i = 0; i < a5; ++i )
      {
        v17 = a4 + 56LL * i;
        v18 = *(_DWORD *)(v17 + 28);
        if ( !v18
          || v18 > 1
          && (!*(_QWORD *)a3 || !*(_QWORD *)(a3 + 8) || !*(_QWORD *)(a3 + 16) || *(_DWORD *)(v17 + 24) >= v18) )
        {
          goto LABEL_63;
        }
        v19 = v18 + v15;
        if ( v18 + v15 < v15 )
          goto LABEL_63;
        v20 = *(_DWORD *)(v17 + 40);
        v15 = v19;
        if ( v20 )
        {
          if ( v20 < a5 && v20 + v10 >= v10 )
          {
            v79 = v20 + v10;
            v10 += v20;
            v69 = 0;
            while ( 1 )
            {
              v70 = *(unsigned int *)(*(_QWORD *)(v17 + 48) + 4LL * v69);
              if ( (unsigned int)v70 >= a5 )
                break;
              ++v69;
              ++*((_DWORD *)P + 3 * v70 + 2);
              if ( v69 >= *(_DWORD *)(v17 + 40) )
                goto LABEL_8;
            }
          }
LABEL_63:
          v31 = -1073741811;
          goto LABEL_56;
        }
LABEL_8:
        ;
      }
      v99 = 0LL;
      v93 = (8LL * a5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v88 = (((unsigned __int64)a5 << 8) + v93 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v21 = 24LL * v19;
      v22 = v21 + v88;
      if ( a7 > 0 )
      {
        v99 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v22 = v99 + 248;
      }
      v96 = 0LL;
      v23 = 0LL;
      v97 = 0LL;
      v84 = 0LL;
      if ( v10 )
      {
        v23 = (v22 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        v71 = 8LL * v10;
        v84 = (v71 + v23 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        v22 = v71 + v84;
      }
      v24 = ((int)(8 * a5 + 16) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
      v94 = v24;
      v82 = (v24 + 40LL * a5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v25 = v21 + v82;
      Size = v21 + v82;
      AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a2, &v91);
      v13 = v91;
      if ( AcpiDeviceByUniqueId >= 0 )
      {
        v30 = v91;
        BugCheckParameter2 = (ULONG_PTR)v91;
LABEL_17:
        v32 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v22, 0x4D584650u);
        if ( !v32 || (v102 = ExAllocatePoolWithTag(NonPagedPoolNx, v25, 0x4D584650u), (v33 = v102) == 0LL) )
        {
          v31 = -1073741670;
          goto LABEL_53;
        }
        memset(v32, 0, v22);
        *((_DWORD *)v30 + 155) = a5;
        v30[78] = (__int64)v32;
        v90 = v30 + 78;
        v34 = *(_OWORD *)(a3 + 16);
        *((_OWORD *)v30 + 7) = *(_OWORD *)a3;
        v35 = *(_OWORD *)(a3 + 32);
        *((_OWORD *)v30 + 8) = v34;
        *(_QWORD *)&v34 = *(_QWORD *)(a3 + 48);
        *((_OWORD *)v30 + 9) = v35;
        v30[20] = v34;
        v30[21] = a6;
        v30[71] = 0LL;
        v30 = (__int64 *)BugCheckParameter2;
        v36 = Size;
        v95 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
        *(_DWORD *)(BugCheckParameter2 + 584) = v95;
        *((_DWORD *)v30 + 145) = 5;
        memset(v33, 0, v36);
        v37 = v79;
        v38 = &v32[v93];
        *(_QWORD *)v33 = a8;
        v39 = v38;
        v40 = v88;
        v103 = v38;
        v94 = (unsigned __int64)v38;
        v33[2] = a5;
        v89 = &v32[v40];
        if ( v79 )
        {
          v96 = &v32[v23];
          v97 = &v32[v84];
        }
        v83 = (char *)v33 + v82;
        v101 = (char *)v33 + v24;
        LODWORD(v41) = 0;
        v80 = (char *)v33 + v24;
        v86 = 0;
        v42 = v38 + 48;
        v85 = (char *)P + 8;
        v43 = -48LL - (_QWORD)v32;
        v44 = (__int64 *)(a4 + 32);
        v100 = -48LL - (_QWORD)v32;
        v45 = 0LL;
        v93 = -16LL - (_QWORD)v33;
        v88 = 0LL;
        while ( 1 )
        {
          *(_QWORD *)(v45 + *v90) = v39;
          if ( (unsigned __int64)v42 + v43 > v22 - 256 )
            goto LABEL_79;
          v46 = *((_OWORD *)v44 - 2);
          *((_DWORD *)v42 - 8) = v41;
          *((_QWORD *)v42 + 4) = v30;
          *(_OWORD *)v39 = v46;
          *(_QWORD *)v42 = v39;
          *((_QWORD *)v42 - 1) = PopFxComponentWork;
          *((_QWORD *)v42 - 3) = 0LL;
          KeInitializeEvent((PRKEVENT)((char *)v42 + 56), NotificationEvent, 1u);
          *((_QWORD *)v42 + 10) = 0LL;
          *((_DWORD *)v42 + 27) = *((_DWORD *)v44 - 1);
          *((_QWORD *)v42 + 14) = v89;
          v47 = *((_DWORD *)v44 - 2);
          *((_DWORD *)v42 + 41) = -1;
          *((_DWORD *)v42 + 30) = v47;
          *((_DWORD *)v42 + 42) = v95;
          *((_QWORD *)v42 + 19) = 0LL;
          v48 = *((_DWORD *)v44 + 2);
          if ( v48 )
          {
            v72 = v96;
            v73 = 0;
            *((_QWORD *)v42 + 16) = v96;
            *((_DWORD *)v42 + 31) = v48;
            do
            {
              v74 = v73++;
              *(_DWORD *)v72 = *(_DWORD *)(v44[2] + 4 * v74);
              v72 += 8;
            }
            while ( v73 < *((_DWORD *)v42 + 31) );
            v96 = v72;
          }
          v49 = v85;
          if ( *v85 )
          {
            v75 = v97;
            *((_QWORD *)v42 + 18) = v97;
            v97 = &v75[8 * *v85];
          }
          v50 = v80;
          v51 = Size;
          v52 = v93 + 16;
          *(_QWORD *)((char *)v33 + v88 + 16) = v80;
          if ( (unsigned __int64)&v80[v52] > v51 - 40 )
            goto LABEL_79;
          *(_OWORD *)v80 = *((_OWORD *)v44 - 2);
          *((_QWORD *)v80 + 2) = *(v44 - 2);
          *((_DWORD *)v80 + 7) = *((_DWORD *)v44 - 1);
          *((_QWORD *)v80 + 4) = v83;
          *((_DWORD *)v80 + 6) = *((_DWORD *)v44 - 2);
          v53 = 0LL;
          v81 = 0;
          if ( *((_DWORD *)v42 + 27) )
            break;
LABEL_34:
          v39 = (char *)(v94 + 256);
          v41 = (unsigned int)(v86 + 1);
          v45 = v88 + 8;
          v94 += 256LL;
          v86 = v41;
          v80 = v50 + 40;
          v42 += 16;
          v88 += 8LL;
          v44 += 7;
          v85 = v49 + 3;
          if ( (unsigned int)v41 >= a5 )
          {
            v57 = v101;
            if ( v37 )
            {
              v31 = PopFxVerifyDependencies(P, v30, a5, v41);
              if ( v31 < 0 )
                goto LABEL_52;
            }
            v58 = 0;
            v59 = v90;
            v60 = 0LL;
            do
            {
              v61 = 0;
              v62 = *(_QWORD *)(v60 + *v59);
              if ( *(_DWORD *)(v62 + 172) )
              {
                v76 = v90;
                do
                {
                  v77 = *(_QWORD *)(*v76 + 8LL * *(unsigned int *)(*(_QWORD *)(v62 + 176) + 8LL * v61));
                  v78 = *(unsigned int *)(v77 + 188);
                  *(_DWORD *)(*(_QWORD *)(v77 + 192) + 8 * v78) = v58;
                  *(_DWORD *)(*(_QWORD *)(v77 + 192) + 8 * v78 + 4) = v61++;
                  ++*(_DWORD *)(v77 + 188);
                }
                while ( v61 < *(_DWORD *)(v62 + 172) );
                v9 = a5;
                v59 = v90;
              }
              PopFxActivateComponent((ULONG_PTR)v30, v62, 0, 1);
              ++v58;
              v60 += 8LL;
            }
            while ( v58 < v9 );
            v33 = v102;
            if ( a7 <= 0 || (v30[3] = (__int64)&v32[v99], Irp = IoAllocateIrp(a7 + 2, 0), (v30[2] = (__int64)Irp) != 0) )
            {
              if ( !(unsigned __int8)PopFxRegisterDeviceWithPep(a1, (int)a2, (__int64)v30, (int)v33) )
                PopFxBugCheck(0x601uLL, (ULONG_PTR)v30, (ULONG_PTR)v33, 0LL);
              if ( v9 )
              {
                v64 = (int *)(v57 + 28);
                v65 = v104;
                v66 = v103 + 92;
                do
                {
                  if ( (*(_BYTE *)(v64 - 3) & 2) != 0 )
                    *v66 |= 2u;
                  v67 = *v64;
                  v64 += 10;
                  v66[16] = v67;
                  v66 += 64;
                  --v65;
                }
                while ( v65 );
                v30 = (__int64 *)BugCheckParameter2;
              }
              v32 = 0LL;
              v31 = 0;
              *a9 = v30;
              v30 = 0LL;
LABEL_52:
              ExFreePoolWithTag(v33, 0x4D584650u);
              v13 = v91;
LABEL_53:
              if ( v30 && !v13 )
                ExFreePoolWithTag(v30, 0x4D584650u);
              if ( v32 )
                ExFreePoolWithTag(v32, 0x4D584650u);
              goto LABEL_56;
            }
LABEL_79:
            v31 = -1073741670;
            goto LABEL_52;
          }
          v43 = v100;
        }
        v54 = v22 - 24;
        while ( 1 )
        {
          v55 = *v44;
          if ( v89 - v32 > v54 )
            goto LABEL_79;
          v56 = v89;
          *((_DWORD *)v89 + 4) = *(_DWORD *)(v55 + 24 * v53 + 16);
          *(_QWORD *)v56 = *(_QWORD *)(v55 + 24 * v53);
          *((_QWORD *)v56 + 1) = *(_QWORD *)(v55 + 24 * v53 + 8);
          v89 = v56 + 24;
          if ( (unsigned __int64)&v83[v93 + 16] > v51 - 24 )
            goto LABEL_79;
          *((_DWORD *)v83 + 4) = *(_DWORD *)(v55 + 24 * v53 + 16);
          *(_QWORD *)v83 = *(_QWORD *)(v55 + 24 * v53);
          *((_QWORD *)v83 + 1) = *(_QWORD *)(v55 + 24 * v53 + 8);
          v53 = (unsigned int)(v81 + 1);
          v83 += 24;
          v54 = v22 - 24;
          v81 = v53;
          if ( (unsigned int)v53 >= *((_DWORD *)v42 + 27) )
          {
            v49 = v85;
            goto LABEL_34;
          }
        }
      }
      if ( AcpiDeviceByUniqueId == -1073741738 )
      {
        v13 = v91;
        v31 = -1073741661;
        goto LABEL_56;
      }
      v29 = PopFxCreateDeviceCommon((__int64)a2, v27, v28, 0, &BugCheckParameter2);
      v30 = (__int64 *)BugCheckParameter2;
      v31 = v29;
      if ( BugCheckParameter2 )
      {
        v24 = v94;
        goto LABEL_17;
      }
LABEL_56:
      ExFreePoolWithTag(P, 0x4D584650u);
      if ( v13 )
        PopFxReleaseAcpiRefDevice((__int64)v13, (void *)0x66466F50);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v31;
}
