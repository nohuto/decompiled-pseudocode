/*
 * XREFs of ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVATOR@@PEAPEAV12@@Z @ 0x180015470
 * Callers:
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@W4Enum@PendType@2@PEAU_RM_ACTIVATOR@@PEA_NPEAPEAUIResourceSet@2@@Z @ 0x1800158E0 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpFreeHeapForHashTable @ 0x1800039E0 (RmpFreeHeapForHashTable.c)
 *     ?AddRef@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011680 (-AddRef@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x180012B18 (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001FB10 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ResourceSetFactory(
        __int64 a1,
        struct ExecutionModel::BaseResourceSet *a2,
        struct _RM_ACTIVATOR *a3,
        struct ExecutionModel::ResourceSet **a4)
{
  PVOID Heap; // rax
  PVOID v9; // rdi
  ExecutionModel::ResourceSet *v10; // rax
  ExecutionModel::ResourceSet *v11; // rax
  ExecutionModel::ResourceSet *v12; // rbx
  __int64 (__fastcall *v13)(ExecutionModel::ResourceSet *); // rax
  __int64 v14; // rsi
  __int64 v15; // r15
  int v16; // ebp
  unsigned int v17; // r9d
  _QWORD *v18; // rdx
  unsigned __int64 v20; // rax
  char *v21; // r8
  unsigned int v22; // r10d
  __int64 *v23; // r9
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rcx
  unsigned int v26; // r9d
  _QWORD **v27; // r14
  _QWORD *v28; // r11
  __int64 v29; // rcx
  void *v30; // rcx
  char v31; // al
  __int64 v32; // [rsp+20h] [rbp-108h]
  __int64 *v33; // [rsp+20h] [rbp-108h]
  __int64 v34; // [rsp+28h] [rbp-100h]
  unsigned int v35; // [rsp+30h] [rbp-F8h]
  __int64 v36; // [rsp+30h] [rbp-F8h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-E8h] BYREF

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x38uLL);
  v9 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x38uLL);
    *((_QWORD *)v9 + 3) = a1;
    *((_DWORD *)v9 + 4) = 1;
    *((_DWORD *)v9 + 8) = 1;
    *((_QWORD *)v9 + 1) = HIBYTE(a1)
                        + 37
                        * (BYTE6(a1)
                         + 37
                         * (BYTE5(a1)
                          + 37
                          * (BYTE4(a1)
                           + 37
                           * (BYTE3(a1) + 37 * (BYTE2(a1) + 37 * (BYTE1(a1) + 37 * ((unsigned __int8)a1 + 11623883LL)))))));
    *((_QWORD *)v9 + 6) = a3;
    v10 = (ExecutionModel::ResourceSet *)operator new(0x790uLL);
    if ( v10 && (v11 = ExecutionModel::ResourceSet::ResourceSet(v10), (v12 = v11) != 0LL) )
    {
      *((_QWORD *)v11 + 23) = a2;
      *((_DWORD *)v11 + 4) = *((_DWORD *)a2 + 4);
      *((_QWORD *)v11 + 3) = *((_QWORD *)a2 + 3);
      *((_QWORD *)v11 + 168) = *((_QWORD *)a2 + 168);
      if ( _InterlockedIncrement((volatile signed __int32 *)v9 + 4) < 1 )
      {
        memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
        pExceptionRecord.ExceptionCode = -1073741675;
        pExceptionRecord.ExceptionFlags = 1;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      *((_QWORD *)v12 + 174) = v9;
      *((_QWORD *)v12 + 233) = *((_QWORD *)v9 + 3);
      v13 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v12 + 8LL);
      if ( v13 == ExecutionModel::ResourceSet::AddRef )
        ExecutionModel::ResourceSet::AddRef(v12);
      else
        v13(v12);
      *((_QWORD *)v9 + 5) = v12;
      v14 = *(_QWORD *)(*((_QWORD *)v12 + 3) + 224LL) + 1864LL;
      v15 = *(_QWORD *)(*((_QWORD *)v12 + 3) + 224LL) + 1880LL;
      RtlAcquireSRWLockExclusive(v15);
      v16 = 0;
      if ( *(_DWORD *)v14 >= (unsigned int)(2 * (*(_DWORD *)(v14 + 4) >> 5)) )
      {
        v20 = 2 * ((unsigned __int64)*(unsigned int *)(v14 + 4) >> 5);
        if ( v20 <= 0xFFFFFFFF )
        {
          if ( (unsigned int)v20 < 4 )
            LODWORD(v20) = 4;
          v35 = v20;
          v33 = (__int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)v20);
          v21 = (char *)v33;
          if ( v33 )
          {
            v22 = v35;
            if ( ((v35 - 1) & v35) != 0 )
            {
              v31 = -1;
              do
              {
                ++v31;
                v22 >>= 1;
              }
              while ( v22 );
              v22 = 1 << v31;
            }
            if ( v22 > 0x4000000 )
              v22 = 0x4000000;
            v23 = v33;
            v24 = 0LL;
            v25 = (8 * (unsigned __int64)v22 + 7) >> 3;
            if ( v33 > &v33[v22] )
              v25 = 0LL;
            if ( v25 )
            {
              do
              {
                ++v24;
                *v23++ = v14 | 1;
              }
              while ( v24 < v25 );
            }
            v36 = -1LL << (*(_BYTE *)(v14 + 4) & 0x1F);
            v26 = 0;
            if ( (*(_DWORD *)(v14 + 4) & 0xFFFFFFE0) != 0 )
            {
              do
              {
                v27 = (_QWORD **)(*(_QWORD *)(v14 + 8) + 8LL * v26);
                while ( 1 )
                {
                  v28 = *v27;
                  if ( ((unsigned __int8)*v27 & 1) != 0 )
                    break;
                  *v27 = (_QWORD *)*v28;
                  v34 = v36 & v28[1];
                  v21 = (char *)v33;
                  v29 = (37
                       * (BYTE6(v34)
                        + 37
                        * (BYTE5(v34)
                         + 37
                         * (BYTE4(v34)
                          + 37
                          * (BYTE3(v34) + 37 * (BYTE2(v34) + 37 * (BYTE1(v34) + 37 * ((unsigned __int8)v34 + 11623883)))))))
                       + HIBYTE(v34)) & (v22 - 1);
                  *v28 = v33[v29];
                  v33[v29] = (__int64)v28;
                }
                ++v26;
              }
              while ( v26 < *(_DWORD *)(v14 + 4) >> 5 );
            }
            *(_DWORD *)(v14 + 4) &= 0x1Fu;
            v30 = *(void **)(v14 + 8);
            *(_DWORD *)(v14 + 4) |= 32 * v22;
            *(_QWORD *)(v14 + 8) = v21;
            if ( v30 )
              RmpFreeHeapForHashTable(v30);
            v15 = v14 + 16;
          }
        }
      }
      v17 = *(_DWORD *)(v14 + 4);
      v32 = *((_QWORD *)v9 + 1) & (-1LL << (v17 & 0x1F));
      v18 = (_QWORD *)(*(_QWORD *)(v14 + 8)
                     + 8LL
                     * ((37
                       * (BYTE6(v32)
                        + 37
                        * (BYTE5(v32)
                         + 37
                         * (BYTE4(v32)
                          + 37
                          * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
                       + HIBYTE(v32)) & ((v17 >> 5) - 1)));
      *(_QWORD *)v9 = *v18;
      *v18 = v9;
      ++*(_DWORD *)v14;
      RtlReleaseSRWLockExclusive(v15);
      *a4 = v12;
    }
    else
    {
      v16 = -1073741801;
      RmpObjectRelease((volatile signed __int32 *)v9);
    }
  }
  else
  {
    v16 = -1073741801;
  }
  return v16 | 0x10000000u;
}
