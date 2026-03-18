/*
 * XREFs of MiProcessCrcList @ 0x1406A8BBC
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1402273C8 (MiCombineAllPhysicalMemory.c)
 *     MiCombineWorkingSet @ 0x140227B38 (MiCombineWorkingSet.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MiAllocatePagesForMdl @ 0x140076E38 (MiAllocatePagesForMdl.c)
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     MiFreePagesFromMdl @ 0x1400E2D98 (MiFreePagesFromMdl.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiAllocateCombineProto @ 0x140226FF8 (MiAllocateCombineProto.c)
 *     MiCapturePfnVm @ 0x140227228 (MiCapturePfnVm.c)
 *     MiDecrementCombinedPte @ 0x14022A0F0 (MiDecrementCombinedPte.c)
 *     MiFreeCombineBlock @ 0x14022A730 (MiFreeCombineBlock.c)
 *     MiPushCombineBlock @ 0x14022AF18 (MiPushCombineBlock.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 *     MiValidCombineProtection @ 0x14022C9D8 (MiValidCombineProtection.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiCombineCompareVm @ 0x1406A89BC (MiCombineCompareVm.c)
 *     MiDereferenceCombineCrc @ 0x1406A8B8C (MiDereferenceCombineCrc.c)
 *     MiVmCrcCompare @ 0x1406A92BC (MiVmCrcCompare.c)
 */

__int64 **__fastcall MiProcessCrcList(__int64 *a1, void *a2, size_t a3, int a4, _QWORD *a5, __int64 a6, _QWORD *a7)
{
  __int16 v7; // r14
  void *v9; // r12
  __int64 **result; // rax
  __int64 v11; // r13
  __int64 v12; // r15
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v14; // rsi
  __int64 *CombineProto; // r14
  __int64 v16; // rdi
  unsigned int v17; // r15d
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // r12d
  unsigned int v21; // r13d
  __int64 v22; // r8
  __int64 v23; // rax
  _QWORD *v24; // rdi
  signed __int32 *v25; // rsi
  int v26; // eax
  _QWORD *v27; // r15
  _QWORD *PoolWithTag; // rax
  __int64 v29; // rcx
  __int64 *v30; // rax
  _QWORD *v31; // rdi
  bool v32; // r8
  unsigned __int64 v33; // r14
  _QWORD *v34; // rax
  __int64 v35; // rax
  bool v36; // zf
  int v37; // esi
  __int64 v38; // rdi
  unsigned __int64 v39; // rax
  _QWORD *v40; // rdi
  size_t v41; // r12
  char *v42; // rax
  char *v43; // r15
  __int64 i; // rsi
  __int64 v45; // rcx
  char *v46; // rdx
  size_t v47; // r14
  char *v48; // rsi
  __int64 v49; // rcx
  void *v50; // rcx
  __int64 v51; // r12
  _DWORD **v52; // r14
  int v53; // r15d
  _DWORD *v54; // rsi
  unsigned int v55; // edx
  int v56; // eax
  unsigned __int64 v57; // rdi
  __int64 *v58; // rcx
  __int64 v59; // rax
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  void *v64; // [rsp+60h] [rbp-A0h]
  __int64 *v65[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v66; // [rsp+78h] [rbp-88h]
  __int64 v67; // [rsp+80h] [rbp-80h]
  unsigned __int64 v68; // [rsp+88h] [rbp-78h]
  int v69; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v70; // [rsp+98h] [rbp-68h]
  unsigned __int64 v71; // [rsp+A0h] [rbp-60h]
  signed __int32 *v72; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v73; // [rsp+B0h] [rbp-50h]
  _QWORD *v74; // [rsp+B8h] [rbp-48h]
  __int64 *v75; // [rsp+C0h] [rbp-40h] BYREF
  struct _KTHREAD *v76; // [rsp+C8h] [rbp-38h]
  _QWORD *v77; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v78; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v79[3]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v80[3]; // [rsp+F8h] [rbp-8h] BYREF

  v77 = a5;
  v7 = a4;
  v74 = a7;
  v9 = a2;
  result = 0LL;
  v64 = a2;
  v11 = (__int64)a1;
  memset(v80, 0, sizeof(v80));
  memset(v79, 0, sizeof(v79));
  if ( a3 )
  {
    v12 = *a1;
    v75 = a1;
    v66 = v12;
    P = 0LL;
    qsort(a2, a3, 0x20uLL, (int (__cdecl *)(const void *, const void *))MiCombinePageSortByHash);
    CurrentThread = KeGetCurrentThread();
    v65[1] = (__int64 *)v65;
    v65[0] = (__int64 *)v65;
    v14 = (unsigned __int64)v9;
    v76 = CurrentThread;
    v67 = 0LL;
    v68 = 0LL;
    v71 = (unsigned __int64)v9 + 32 * a3 - 32;
    v73 = (unsigned __int64)v9;
    if ( (unsigned __int64)v9 <= v71 )
    {
      while ( 1 )
      {
        if ( a6 && *(_DWORD *)(a6 + 4) || (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) != 0 )
        {
LABEL_74:
          v7 = a4;
          v12 = v66;
          break;
        }
        CombineProto = 0LL;
        v16 = 48LL * *(_QWORD *)(v14 + 8) - 0x58000000000LL;
        v17 = (*(_DWORD *)(v16 + 16) >> 5) & 0x1F;
        v70 = *(_QWORD *)(v16 + 8) | 0x8000000000000000uLL;
        if ( !MiValidCombineProtection(v17) || (unsigned __int64)(v18 + 0x98000000000LL) > 0x7FFFFFFFFFLL )
          goto LABEL_16;
        if ( (v14 == v71 || *(_QWORD *)v14 != *(_QWORD *)(v14 + 32)) && ((void *)v14 == v9 || *(_QWORD *)v14 != v19) )
        {
          CombineProto = (__int64 *)MiAllocateCombineProto(v11, *(_QWORD *)v14, v17, 0);
          if ( !CombineProto )
            goto LABEL_16;
          v20 = 2;
          v21 = 0;
        }
        else
        {
          v20 = 1;
          v21 = *(unsigned __int8 *)(v16 + 34) >> 6;
          if ( v21 >= 3 )
          {
            *(_QWORD *)v14 = 0LL;
LABEL_14:
            v9 = v64;
            goto LABEL_15;
          }
        }
        Object = 0LL;
        v72 = MiCapturePfnVm(a1, v16, &Object, &v78, &v69);
        if ( !v72 || v78 != v70 || v69 != v17 )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          if ( CombineProto )
            MiDecrementCombinedPte(CombineProto + 6);
          goto LABEL_29;
        }
        if ( v20 == 1 && (*(_QWORD *)v14 != v67 || v68 == v14 - 32) )
        {
          v23 = MiAllocateCombineProto((__int64)a1, *(_QWORD *)v14, v17, 1);
          CombineProto = (__int64 *)v23;
          if ( !v23 )
          {
            if ( Object )
              ObfDereferenceObject(Object);
LABEL_29:
            v9 = v64;
            v11 = (__int64)a1;
            *(_QWORD *)v14 = 0LL;
            goto LABEL_16;
          }
          if ( *(_QWORD *)(v23 + 24) )
          {
            v68 = v14;
            v20 = 2;
          }
        }
        *(_DWORD *)(v14 + 24) = v17;
        if ( CombineProto )
        {
          if ( CombineProto[3] )
            *(_QWORD *)(v14 + 24) = CombineProto;
          else
            MiPushCombineBlock((__int64 *)v65, CombineProto);
        }
        v24 = P;
        if ( P )
        {
          v25 = v72;
          do
          {
            v26 = MiVmCrcCompare(v25, v24);
            if ( v26 >= 0 )
            {
              if ( v26 <= 0 )
                break;
              v24 = (_QWORD *)v24[1];
            }
            else
            {
              v24 = (_QWORD *)*v24;
            }
          }
          while ( v24 );
          v14 = v73;
          if ( v24 )
          {
            v27 = v24;
            if ( Object )
              ObfDereferenceObject(Object);
            goto LABEL_65;
          }
        }
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6D56694Du);
        v27 = PoolWithTag;
        if ( !PoolWithTag )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          if ( CombineProto )
          {
            if ( CombineProto[3] )
            {
              MiDecrementCombinedPte(CombineProto + 6);
            }
            else
            {
              v29 = *CombineProto;
              v30 = (__int64 *)CombineProto[1];
              if ( *(__int64 **)(*CombineProto + 8) != CombineProto || (__int64 *)*v30 != CombineProto )
                __fastfail(3u);
              *v30 = v29;
              *(_QWORD *)(v29 + 8) = v30;
              CombineProto[4] = 0LL;
              MiFreeCombineBlock((__int64)CombineProto);
            }
            *(_QWORD *)v14 = 0LL;
            *(_QWORD *)(v14 + 24) = 0LL;
          }
          v68 = 0LL;
          goto LABEL_14;
        }
        memset(PoolWithTag, 0, 0x38uLL);
        v31 = P;
        v32 = 0;
        v33 = (unsigned __int64)v72;
        v27[5] = Object;
        v27[4] = v33;
        if ( !v31 )
          goto LABEL_64;
        while ( (int)MiCombineCompareVm(v33, (__int64)v31) >= 0 )
        {
          v34 = (_QWORD *)v31[1];
          if ( !v34 )
          {
            v32 = 1;
            goto LABEL_64;
          }
LABEL_62:
          v31 = v34;
        }
        v34 = (_QWORD *)*v31;
        if ( *v31 )
          goto LABEL_62;
        v32 = 0;
LABEL_64:
        RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v31, v32, (unsigned __int64)v27);
LABEL_65:
        *(_QWORD *)(v14 + 16) = v27[6];
        ++v27[3];
        v35 = (__int64)(v70 << 25) >> 16;
        v36 = v20 == 1;
        v27[6] = v14;
        v9 = v64;
        *(_QWORD *)(v14 + 8) = v35;
        if ( v36 && ((void *)v14 == v9 || *(_QWORD *)v14 != v67) )
          ++v79[v21];
LABEL_15:
        v11 = (__int64)a1;
LABEL_16:
        v22 = *(_QWORD *)v14;
        v14 += 32LL;
        v67 = v22;
        v73 = v14;
        if ( v14 > v71 )
          goto LABEL_74;
        CurrentThread = v76;
      }
    }
    v37 = 0;
    v38 = 0LL;
    do
    {
      v39 = v79[v38];
      if ( v39 )
      {
        if ( v39 > 0xFFFFE )
          v39 = 1048574LL;
        v80[v38] = MiAllocatePagesForMdl(v12, 0LL, -1LL, 0LL, v39 << 12, v37, v7, 0x13u);
      }
      ++v37;
      ++v38;
    }
    while ( (unsigned __int64)v37 < 3 );
    while ( P )
    {
      v40 = P;
      RtlAvlRemoveNode((unsigned __int64 *)&P, (__int64)P);
      v41 = v40[3];
      v42 = (char *)ExAllocatePoolWithTag(PagedPool, 16 * v41, 0x6D56694Du);
      v43 = v42;
      if ( v42 )
      {
        v45 = v40[6];
        if ( v45 )
        {
          v46 = v42;
          do
          {
            *(_QWORD *)v46 = *(_QWORD *)(v45 + 8);
            *((_QWORD *)v46 + 1) = v45;
            v46 += 16;
            v45 = *(_QWORD *)(v45 + 16);
          }
          while ( v45 );
        }
        qsort(v42, v41, 0x10uLL, (int (__cdecl *)(const void *, const void *))MiCombinePageSortByHash);
        v40[6] = 0LL;
        v47 = 0LL;
        if ( v41 )
        {
          v48 = v43 - 16;
          do
          {
            v49 = *((_QWORD *)v48 + 3);
            if ( v47 && *((_QWORD *)v48 + 2) == *(_QWORD *)v48 )
            {
              MiDereferenceCombineCrc(v49);
              --v40[3];
            }
            else
            {
              *(_QWORD *)(v49 + 16) = v40[6];
              v40[6] = v49;
            }
            ++v47;
            v48 += 16;
          }
          while ( v47 < v41 );
        }
        ExFreePoolWithTag(v43, 0);
        MiSharePages(v40, v65, &v75, v77, a4, (__int64)v80, v74);
      }
      else
      {
        for ( i = v40[6]; i; i = *(_QWORD *)(i + 16) )
          MiDereferenceCombineCrc(i);
      }
      v50 = (void *)v40[5];
      if ( v50 )
        ObfDereferenceObject(v50);
      ExFreePoolWithTag(v40, 0);
    }
    v51 = v66;
    v52 = (_DWORD **)v80;
    v53 = 0;
    do
    {
      v54 = *v52;
      if ( *v52 )
      {
        v55 = v54[11];
        v56 = v54[10];
        if ( v55 != v56 )
        {
          v57 = (unsigned __int64)(v56 - v55) >> 12;
          memmove(v54 + 12, &v54[2 * ((unsigned __int64)v55 >> 12) + 12], 8 * v57);
          v54[10] = (_DWORD)v57 << 12;
          v54[11] = 0;
          MiFreePagesFromMdl(v51, (ULONG_PTR)v54, 0);
        }
        ExFreePoolWithTag(v54, 0);
        *v52 = 0LL;
      }
      ++v53;
      ++v52;
    }
    while ( (unsigned __int64)v53 < 3 );
    while ( 1 )
    {
      v58 = v65[0];
      result = v65;
      if ( (__int64 **)v65[0] == v65 )
        break;
      v59 = *v65[0];
      if ( *((__int64 ***)v65[0] + 1) != v65 || *(__int64 **)(v59 + 8) != v65[0] )
        __fastfail(3u);
      v65[0] = *(__int64 **)v65[0];
      *(_QWORD *)(v59 + 8) = v65;
      v58[4] = 0LL;
      MiFreeCombineBlock((__int64)v58);
    }
  }
  return result;
}
