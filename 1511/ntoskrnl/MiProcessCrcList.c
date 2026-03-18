/*
 * XREFs of MiProcessCrcList @ 0x14050E300
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x140129C30 (MiCombineAllPhysicalMemory.c)
 *     MiCombineWorkingSet @ 0x1401E0DFC (MiCombineWorkingSet.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14000C920 (RtlAvlInsertNodeEx.c)
 *     MiFreePagesFromMdl @ 0x140011298 (MiFreePagesFromMdl.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlAvlRemoveNode @ 0x14006BDC0 (RtlAvlRemoveNode.c)
 *     MiAllocatePagesForMdl @ 0x1400BC760 (MiAllocatePagesForMdl.c)
 *     MiValidCombineProtection @ 0x140128744 (MiValidCombineProtection.c)
 *     MiAllocateCombineProto @ 0x140128770 (MiAllocateCombineProto.c)
 *     MiCapturePfnVm @ 0x14012896C (MiCapturePfnVm.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     MiDecrementCombinedPte @ 0x14012B580 (MiDecrementCombinedPte.c)
 *     MiPushCombineBlock @ 0x14012B600 (MiPushCombineBlock.c)
 *     MiFreeCombineBlock @ 0x14012B6C8 (MiFreeCombineBlock.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiDereferenceCombineCrc @ 0x14062ACC8 (MiDereferenceCombineCrc.c)
 */

__int64 **__fastcall MiProcessCrcList(
        __int64 *a1,
        unsigned __int64 *a2,
        size_t a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 **result; // rax
  unsigned __int64 *v9; // r12
  __int64 v10; // r14
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 *v13; // rdi
  __int64 v14; // r10
  unsigned __int64 v15; // r11
  __int64 *CombineProto; // r15
  __int64 v17; // r14
  unsigned __int64 v18; // r13
  unsigned int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 *v25; // r14
  LONG *v26; // r12
  __int64 v27; // rax
  _QWORD *v28; // rsi
  unsigned __int64 v29; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v31; // r14
  LONG *v32; // rsi
  bool v33; // r8
  PVOID v34; // rax
  LONG *v35; // rax
  int v36; // esi
  __int64 v37; // rdi
  unsigned __int64 v38; // rax
  int v39; // r12d
  _QWORD *v40; // rsi
  size_t v41; // r15
  char *v42; // rax
  char *v43; // r13
  __int64 v44; // rcx
  char *v45; // rdx
  size_t v46; // r14
  char *v47; // rdi
  __int64 v48; // rcx
  void *v49; // rcx
  __int64 v50; // r12
  _DWORD **v51; // r14
  int v52; // r15d
  _DWORD *v53; // rsi
  __int64 *v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  int v57; // eax
  unsigned __int64 v58; // rdi
  __int64 v59; // rcx
  __int64 *v60; // rax
  __int64 i; // rdi
  int v62; // [rsp+48h] [rbp-C0h]
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 *v65; // [rsp+60h] [rbp-A8h]
  int v66; // [rsp+68h] [rbp-A0h]
  int v67; // [rsp+6Ch] [rbp-9Ch]
  __int64 *v68[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v69; // [rsp+80h] [rbp-88h]
  unsigned __int64 v70; // [rsp+88h] [rbp-80h]
  int v71; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 *v72; // [rsp+98h] [rbp-70h]
  __int64 *v73; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v74; // [rsp+A8h] [rbp-60h]
  _QWORD *v75; // [rsp+B0h] [rbp-58h]
  __int64 *v76; // [rsp+B8h] [rbp-50h] BYREF
  struct _KTHREAD *v77; // [rsp+C0h] [rbp-48h]
  __int64 v78; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v79; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v80[3]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v81[3]; // [rsp+F0h] [rbp-18h] BYREF

  result = (__int64 **)a1;
  v73 = a1;
  v78 = a5;
  v9 = a2;
  v75 = a7;
  v67 = a4;
  v65 = a2;
  memset(v81, 0, sizeof(v81));
  memset(v80, 0, sizeof(v80));
  if ( a3 )
  {
    v10 = *a1;
    v69 = *a1;
    P = 0LL;
    v76 = a1;
    qsort(a2, a3, 0x20uLL, MiCombinePageSortByHash);
    CurrentThread = KeGetCurrentThread();
    v68[1] = (__int64 *)v68;
    v68[0] = (__int64 *)v68;
    v12 = (unsigned __int64)&v9[4 * a3 - 4];
    v77 = CurrentThread;
    v70 = 0LL;
    v13 = v9;
    v72 = 0LL;
    v74 = v12;
    if ( (unsigned __int64)v9 <= v12 )
    {
      v14 = 0x58000000000LL;
      v15 = 0x8000000000000000uLL;
      while ( 1 )
      {
        if ( a6 && *(_DWORD *)(a6 + 4) || (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) != 0 )
        {
LABEL_60:
          v10 = v69;
          goto LABEL_61;
        }
        CombineProto = 0LL;
        v17 = 48 * v13[1] - v14;
        v18 = v15 | *(_QWORD *)(v17 + 8);
        v19 = (*(_DWORD *)(v17 + 16) >> 5) & 0x1F;
        if ( !MiValidCombineProtection(v19) || v21 + v18 > v22 )
          goto LABEL_15;
        if ( v13 != (unsigned __int64 *)v74 && *v13 == v13[4] || v13 != v9 && *v13 == v20 )
        {
          v62 = 1;
          v66 = *(unsigned __int8 *)(v17 + 34) >> 6;
          if ( v66 >= 3 )
          {
            *v13 = 0LL;
            goto LABEL_15;
          }
        }
        else
        {
          CombineProto = (__int64 *)MiAllocateCombineProto((__int64)v73, *v13, v19, 0LL);
          if ( !CombineProto )
            goto LABEL_14;
          v62 = 2;
          v66 = 0;
        }
        v24 = v17;
        Object = 0LL;
        v25 = v73;
        v26 = MiCapturePfnVm(v73, v24, (PEPROCESS *)&Object, &v79, &v71);
        if ( !v26 || v79 != v18 || v71 != v19 )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          if ( CombineProto )
            MiDecrementCombinedPte((ULONG_PTR)(CombineProto + 6));
          goto LABEL_58;
        }
        if ( v62 == 1 && (*v13 != v70 || v72 == v13 - 4) )
        {
          v27 = MiAllocateCombineProto((__int64)v25, *v13, v19, 1LL);
          CombineProto = (__int64 *)v27;
          if ( !v27 )
          {
            if ( Object )
              ObfDereferenceObject(Object);
LABEL_58:
            *v13 = 0LL;
LABEL_59:
            v9 = v65;
            goto LABEL_14;
          }
          if ( *(_QWORD *)(v27 + 24) )
          {
            v72 = v13;
            v62 = 2;
          }
        }
        *((_DWORD *)v13 + 6) = v19;
        if ( CombineProto )
        {
          if ( CombineProto[3] )
            v13[3] = (unsigned __int64)CombineProto;
          else
            MiPushCombineBlock((__int64 *)v68, CombineProto);
        }
        v28 = P;
        if ( !P )
          goto LABEL_34;
        while ( 1 )
        {
          v29 = v28[4];
          if ( (unsigned __int64)v26 <= v29 )
            break;
          v28 = (_QWORD *)v28[1];
LABEL_33:
          if ( !v28 )
            goto LABEL_34;
        }
        if ( (unsigned __int64)v26 < v29 )
          break;
        if ( v28 )
        {
          v31 = v28;
          if ( Object )
            ObfDereferenceObject(Object);
          goto LABEL_44;
        }
LABEL_34:
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6D56694Du);
        v31 = PoolWithTag;
        if ( !PoolWithTag )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          if ( CombineProto )
          {
            if ( CombineProto[3] )
            {
              MiDecrementCombinedPte((ULONG_PTR)(CombineProto + 6));
            }
            else
            {
              v59 = *CombineProto;
              v60 = (__int64 *)CombineProto[1];
              if ( *(__int64 **)(*CombineProto + 8) != CombineProto || (__int64 *)*v60 != CombineProto )
                __fastfail(3u);
              *v60 = v59;
              *(_QWORD *)(v59 + 8) = v60;
              CombineProto[4] = 0LL;
              MiFreeCombineBlock((__int64)CombineProto);
            }
            *v13 = 0LL;
            v13[3] = 0LL;
          }
          v72 = 0LL;
          goto LABEL_59;
        }
        memset(PoolWithTag, 0, 0x38uLL);
        v32 = (LONG *)P;
        v33 = 0;
        v34 = Object;
        v31[4] = v26;
        v31[5] = v34;
        if ( !v32 )
          goto LABEL_51;
        while ( 2 )
        {
          if ( v26 >= v32 + 8 )
          {
            v35 = (LONG *)*((_QWORD *)v32 + 1);
            if ( !v35 )
            {
              v33 = 1;
              goto LABEL_51;
            }
            goto LABEL_38;
          }
          v35 = *(LONG **)v32;
          if ( *(_QWORD *)v32 )
          {
LABEL_38:
            v32 = v35;
            continue;
          }
          break;
        }
        v33 = 0;
LABEL_51:
        RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v32, v33, (unsigned __int64)v31);
LABEL_44:
        v9 = v65;
        v13[2] = v31[6];
        ++v31[3];
        v31[6] = v13;
        v13[1] = (__int64)(v18 << 25) >> 16;
        if ( v62 == 1 && (v13 == v9 || *v13 != v70) )
          ++v80[v66];
LABEL_14:
        v14 = 0x58000000000LL;
        v15 = 0x8000000000000000uLL;
LABEL_15:
        v23 = *v13;
        v13 += 4;
        v70 = v23;
        if ( (unsigned __int64)v13 > v74 )
          goto LABEL_60;
        CurrentThread = v77;
      }
      v28 = (_QWORD *)*v28;
      goto LABEL_33;
    }
LABEL_61:
    v36 = 0;
    v37 = 0LL;
    do
    {
      v38 = v80[v37];
      if ( v38 )
      {
        if ( v38 > 0xFFFFE )
          v38 = 1048574LL;
        v39 = v67;
        v81[v37] = MiAllocatePagesForMdl(v10, 0LL, -1LL, 0LL, v38 << 12, v36, v67, 0x13u);
      }
      else
      {
        v39 = v67;
      }
      ++v36;
      ++v37;
    }
    while ( (unsigned __int64)v36 < 3 );
    while ( P )
    {
      v40 = P;
      RtlAvlRemoveNode((unsigned __int64 *)&P, (__int64)P);
      v41 = v40[3];
      v42 = (char *)ExAllocatePoolWithTag(PagedPool, 16 * v41, 0x6D56694Du);
      v43 = v42;
      if ( v42 )
      {
        v44 = v40[6];
        if ( v44 )
        {
          v45 = v42;
          do
          {
            *(_QWORD *)v45 = *(_QWORD *)(v44 + 8);
            *((_QWORD *)v45 + 1) = v44;
            v45 += 16;
            v44 = *(_QWORD *)(v44 + 16);
          }
          while ( v44 );
        }
        qsort(v42, v41, 0x10uLL, MiCombinePageSortByVa);
        v40[6] = 0LL;
        v46 = 0LL;
        if ( v41 )
        {
          v47 = v43 - 16;
          do
          {
            v48 = *((_QWORD *)v47 + 3);
            if ( v46 && *((_QWORD *)v47 + 2) == *(_QWORD *)v47 )
            {
              MiDereferenceCombineCrc(v48);
              --v40[3];
            }
            else
            {
              *(_QWORD *)(v48 + 16) = v40[6];
              v40[6] = v48;
            }
            ++v46;
            v47 += 16;
          }
          while ( v46 < v41 );
        }
        ExFreePoolWithTag(v43, 0);
        MiSharePages((__int64)v40, v68, &v76, v78, v39, (__int64)v81, v75);
      }
      else
      {
        for ( i = v40[6]; i; i = *(_QWORD *)(i + 16) )
          MiDereferenceCombineCrc(i);
      }
      v49 = (void *)v40[5];
      if ( v49 )
        ObfDereferenceObject(v49);
      ExFreePoolWithTag(v40, 0);
    }
    v50 = v69;
    v51 = (_DWORD **)v81;
    v52 = 0;
    do
    {
      v53 = *v51;
      if ( *v51 )
      {
        v56 = (unsigned int)v53[11];
        v57 = v53[10];
        if ( (_DWORD)v56 != v57 )
        {
          v58 = (unsigned __int64)(unsigned int)(v57 - v56) >> 12;
          memmove(v53 + 12, &v53[2 * (v56 >> 12) + 12], 8 * v58);
          v53[10] = (_DWORD)v58 << 12;
          v53[11] = 0;
          MiFreePagesFromMdl(v50, (ULONG_PTR)v53, 0);
        }
        ExFreePoolWithTag(v53, 0);
        *v51 = 0LL;
      }
      ++v52;
      ++v51;
    }
    while ( (unsigned __int64)v52 < 3 );
    while ( 1 )
    {
      v54 = v68[0];
      result = v68;
      if ( (__int64 **)v68[0] == v68 )
        break;
      v55 = *v68[0];
      if ( *((__int64 ***)v68[0] + 1) != v68 || *(__int64 **)(v55 + 8) != v68[0] )
        __fastfail(3u);
      v68[0] = *(__int64 **)v68[0];
      *(_QWORD *)(v55 + 8) = v68;
      v54[4] = 0LL;
      MiFreeCombineBlock((__int64)v54);
    }
  }
  return result;
}
