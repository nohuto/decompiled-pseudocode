/*
 * XREFs of MiProcessCrcList @ 0x140663EAC
 * Callers:
 *     MiCombineWorkingSet @ 0x1401F7EFC (MiCombineWorkingSet.c)
 *     MiCombineAllPhysicalMemory @ 0x1406637FC (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     MiAllocatePagesForMdl @ 0x140101FA4 (MiAllocatePagesForMdl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiAllocateCombineProto @ 0x1401F7974 (MiAllocateCombineProto.c)
 *     MiCapturePfnVm @ 0x1401F7B64 (MiCapturePfnVm.c)
 *     MiDecrementCombinedPte @ 0x1401F9558 (MiDecrementCombinedPte.c)
 *     MiFreeCombineBlock @ 0x1401F9A50 (MiFreeCombineBlock.c)
 *     MiHashIsCommon @ 0x1401F9C40 (MiHashIsCommon.c)
 *     MiPushCombineBlock @ 0x1401FA04C (MiPushCombineBlock.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiValidCombineProtection @ 0x1401FB41C (MiValidCombineProtection.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiDereferenceCombineCrc @ 0x140663E7C (MiDereferenceCombineCrc.c)
 */

__int64 *__fastcall MiProcessCrcList(__int64 a1, void *a2, size_t a3, int a4)
{
  __int64 *result; // rax
  void *v6; // r12
  __int64 *v7; // r13
  __int64 v8; // rsi
  __int64 v9; // r15
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v11; // r14
  _QWORD *CombineProto; // rsi
  __int64 v13; // rdi
  unsigned int v14; // r15d
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r10
  __int64 v18; // r11
  int v19; // r13d
  __int64 v20; // r11
  char *v21; // r12
  __int64 v22; // rax
  _QWORD *v23; // rdi
  unsigned __int64 v24; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v26; // r15
  __int64 v27; // rcx
  _QWORD *v28; // rax
  char *v29; // rdi
  bool v30; // r8
  char *v31; // rax
  unsigned __int64 v32; // rcx
  int v33; // r13d
  signed int v34; // esi
  __int64 v35; // rdi
  unsigned __int64 v36; // rax
  _QWORD *v37; // rdi
  size_t v38; // r12
  char *v39; // rax
  char *v40; // r14
  __int64 i; // rsi
  __int64 v42; // rcx
  char *v43; // rdx
  size_t v44; // r15
  char *v45; // rsi
  __int64 v46; // rcx
  void *v47; // rcx
  int v48; // r15d
  _DWORD **v49; // r14
  _DWORD *v50; // rsi
  unsigned int v51; // edx
  int v52; // eax
  unsigned __int64 v53; // rdi
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // [rsp+40h] [rbp-C0h]
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  int v59; // [rsp+58h] [rbp-A8h]
  void *v60; // [rsp+60h] [rbp-A0h]
  __int64 v61[2]; // [rsp+68h] [rbp-98h] BYREF
  int v62; // [rsp+78h] [rbp-88h] BYREF
  int v63; // [rsp+7Ch] [rbp-84h]
  unsigned __int64 v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h]
  __int64 v66; // [rsp+90h] [rbp-70h]
  unsigned __int64 v67; // [rsp+98h] [rbp-68h]
  unsigned __int64 v68; // [rsp+A0h] [rbp-60h]
  __int64 v69; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v70; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-48h]
  struct _KTHREAD *v72; // [rsp+C0h] [rbp-40h]
  __int64 *v73; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v74[3]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v75[3]; // [rsp+E8h] [rbp-18h] BYREF

  v69 = a1;
  result = (__int64 *)a1;
  v63 = a4;
  v60 = a2;
  memset(v75, 0, sizeof(v75));
  v6 = a2;
  memset(v74, 0, sizeof(v74));
  if ( a3 )
  {
    v7 = *(__int64 **)a1;
    v8 = *(_QWORD *)(a1 + 8);
    v56 = (__int64)v7;
    v71 = v8;
    v9 = *v7;
    v66 = *v7;
    P = 0LL;
    v73 = v7;
    qsort(a2, a3, 0x20uLL, (int (__cdecl *)(const void *, const void *))MiCombinePageSortByHash);
    CurrentThread = KeGetCurrentThread();
    v61[1] = (__int64)v61;
    v61[0] = (__int64)v61;
    v11 = (unsigned __int64)v6;
    v72 = CurrentThread;
    v65 = 0LL;
    v64 = 0LL;
    v68 = (unsigned __int64)v6 + 32 * a3 - 32;
    if ( (unsigned __int64)v6 <= v68 )
    {
      while ( 1 )
      {
        if ( v8 && *(_DWORD *)(v8 + 4) || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
        {
LABEL_74:
          v9 = v66;
          break;
        }
        CombineProto = 0LL;
        v13 = 48LL * *(_QWORD *)(v11 + 8) - 0x58000000000LL;
        v14 = (*(_DWORD *)(v13 + 16) >> 5) & 0x1F;
        v67 = *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL;
        if ( !MiValidCombineProtection(v14) || v15 < v16 || v15 > 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_17;
        if ( (unsigned int)MiHashIsCommon(v69, *(_QWORD *)v11)
          || v11 != v68 && v17 == *(_QWORD *)(v11 + 32)
          || (void *)v11 != v6 && v17 == v18 )
        {
          v19 = 1;
          v59 = *(unsigned __int8 *)(v13 + 34) >> 6;
          if ( v59 >= 3 )
          {
            *(_QWORD *)v11 = 0LL;
LABEL_16:
            v7 = (__int64 *)v56;
            goto LABEL_17;
          }
        }
        else
        {
          CombineProto = (_QWORD *)MiAllocateCombineProto((__int64)v7, v17, v14, 0);
          if ( !CombineProto )
            goto LABEL_17;
          v19 = 2;
          v59 = 0;
        }
        Object = 0LL;
        v21 = MiCapturePfnVm(v56, v13, (__int64 *)&Object, &v70, &v62);
        if ( !v21 || v70 != v67 || v62 != v14 )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          if ( CombineProto )
            MiDecrementCombinedPte((unsigned __int64)(CombineProto + 6));
          goto LABEL_30;
        }
        if ( v19 == 1 && (*(_QWORD *)v11 != v65 || v64 == v11 - 32) )
        {
          v22 = MiAllocateCombineProto(v56, *(_QWORD *)v11, v14, 1);
          CombineProto = (_QWORD *)v22;
          if ( !v22 )
          {
            if ( Object )
              ObfDereferenceObject(Object);
LABEL_30:
            v6 = v60;
            v7 = (__int64 *)v56;
            *(_QWORD *)v11 = 0LL;
            goto LABEL_17;
          }
          if ( *(_QWORD *)(v22 + 24) )
          {
            v64 = v11;
            v19 = 2;
          }
        }
        *(_DWORD *)(v11 + 24) = v14;
        if ( CombineProto )
        {
          if ( CombineProto[3] )
            *(_QWORD *)(v11 + 24) = CombineProto;
          else
            MiPushCombineBlock(v61, CombineProto);
        }
        v23 = P;
        while ( v23 )
        {
          v24 = v23[4];
          if ( (unsigned __int64)v21 > v24 )
          {
            v23 = (_QWORD *)v23[1];
          }
          else
          {
            if ( (unsigned __int64)v21 >= v24 )
            {
              v26 = v23;
              if ( Object )
                ObfDereferenceObject(Object);
              goto LABEL_64;
            }
            v23 = (_QWORD *)*v23;
          }
        }
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6D56694Du);
        v26 = PoolWithTag;
        if ( !PoolWithTag )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          if ( CombineProto )
          {
            if ( CombineProto[3] )
            {
              MiDecrementCombinedPte((unsigned __int64)(CombineProto + 6));
            }
            else
            {
              v27 = *CombineProto;
              v28 = (_QWORD *)CombineProto[1];
              if ( *(_QWORD **)(*CombineProto + 8LL) != CombineProto || (_QWORD *)*v28 != CombineProto )
                __fastfail(3u);
              *v28 = v27;
              *(_QWORD *)(v27 + 8) = v28;
              CombineProto[4] = 0LL;
              MiFreeCombineBlock((__int64)CombineProto);
            }
            *(_QWORD *)v11 = 0LL;
            *(_QWORD *)(v11 + 24) = 0LL;
          }
          v6 = v60;
          v64 = 0LL;
          goto LABEL_16;
        }
        memset(PoolWithTag, 0, 0x38uLL);
        v29 = (char *)P;
        v30 = 0;
        v26[5] = Object;
        v26[4] = v21;
        if ( !v29 )
          goto LABEL_63;
        while ( v21 < v29 + 32 )
        {
          v31 = *(char **)v29;
          if ( !*(_QWORD *)v29 )
          {
            v30 = 0;
            goto LABEL_63;
          }
LABEL_61:
          v29 = v31;
        }
        v31 = (char *)*((_QWORD *)v29 + 1);
        if ( v31 )
          goto LABEL_61;
        v30 = 1;
LABEL_63:
        RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v29, v30, (unsigned __int64)v26);
LABEL_64:
        v32 = v67;
        *(_QWORD *)(v11 + 16) = v26[6];
        ++v26[3];
        v26[6] = v11;
        v6 = v60;
        *(_QWORD *)(v11 + 8) = (__int64)(v32 << 25) >> 16;
        if ( v19 == 1 && ((void *)v11 == v6 || *(_QWORD *)v11 != v65) )
          ++v74[v59];
        v7 = (__int64 *)v56;
LABEL_17:
        v20 = *(_QWORD *)v11;
        v11 += 32LL;
        v65 = v20;
        if ( v11 > v68 )
          goto LABEL_74;
        v8 = v71;
        CurrentThread = v72;
      }
    }
    v33 = v63;
    v34 = 0;
    v35 = 0LL;
    do
    {
      v36 = v74[v35];
      if ( v36 )
      {
        if ( v36 > 0xFFFFE )
          v36 = 1048574LL;
        v75[v35] = MiAllocatePagesForMdl(v9, 0LL, 0xFFFFFFFFFFFFFFFFuLL, 0LL, v36 << 12, v34, v33, 19);
      }
      ++v34;
      ++v35;
    }
    while ( (unsigned __int64)v34 < 3 );
    while ( P )
    {
      v37 = P;
      RtlAvlRemoveNode((unsigned __int64 *)&P, (__int64)P);
      v38 = v37[3];
      v39 = (char *)ExAllocatePoolWithTag(PagedPool, 16 * v38, 0x6D56694Du);
      v40 = v39;
      if ( v39 )
      {
        v42 = v37[6];
        if ( v42 )
        {
          v43 = v39;
          do
          {
            *(_QWORD *)v43 = *(_QWORD *)(v42 + 8);
            *((_QWORD *)v43 + 1) = v42;
            v43 += 16;
            v42 = *(_QWORD *)(v42 + 16);
          }
          while ( v42 );
        }
        qsort(v39, v38, 0x10uLL, (int (__cdecl *)(const void *, const void *))MiCombinePageSortByHash);
        v37[6] = 0LL;
        v44 = 0LL;
        if ( v38 )
        {
          v45 = v40 - 16;
          do
          {
            v46 = *((_QWORD *)v45 + 3);
            if ( v44 && *((_QWORD *)v45 + 2) == *(_QWORD *)v45 )
            {
              MiDereferenceCombineCrc(v46);
              --v37[3];
            }
            else
            {
              *(_QWORD *)(v46 + 16) = v37[6];
              v37[6] = v46;
            }
            ++v44;
            v45 += 16;
          }
          while ( v44 < v38 );
        }
        ExFreePoolWithTag(v40, 0);
        MiSharePages(v69, v37, v61, (__int64 *)&v73, v33, (__int64)v75);
      }
      else
      {
        for ( i = v37[6]; i; i = *(_QWORD *)(i + 16) )
          MiDereferenceCombineCrc(i);
      }
      v47 = (void *)v37[5];
      if ( v47 )
        ObfDereferenceObject(v47);
      ExFreePoolWithTag(v37, 0);
    }
    v48 = 0;
    v49 = (_DWORD **)v75;
    do
    {
      v50 = *v49;
      if ( *v49 )
      {
        v51 = v50[11];
        v52 = v50[10];
        if ( v51 != v52 )
        {
          v53 = (unsigned __int64)(v52 - v51) >> 12;
          memmove(v50 + 12, &v50[2 * ((unsigned __int64)v51 >> 12) + 12], 8 * v53);
          *((_QWORD *)v50 + 5) = (unsigned int)((_DWORD)v53 << 12);
          MiFreePagesFromMdl((ULONG_PTR)v50, 0);
        }
        ExFreePoolWithTag(v50, 0);
        *v49 = 0LL;
      }
      ++v48;
      ++v49;
    }
    while ( (unsigned __int64)v48 < 3 );
    while ( 1 )
    {
      v54 = v61[0];
      result = v61;
      if ( (__int64 *)v61[0] == v61 )
        break;
      v55 = *(_QWORD *)v61[0];
      if ( *(__int64 **)(v61[0] + 8) != v61 || *(_QWORD *)(v55 + 8) != v61[0] )
        __fastfail(3u);
      v61[0] = *(_QWORD *)v61[0];
      *(_QWORD *)(v55 + 8) = v61;
      *(_QWORD *)(v54 + 32) = 0LL;
      MiFreeCombineBlock(v54);
    }
  }
  return result;
}
