/*
 * XREFs of ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PEAXPEAU_RM_ACTIVATOR@@PEAPEAV12@@Z @ 0x180012F20
 * Callers:
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@PEAPEAV12@@Z @ 0x180010DF0 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754 (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000EFB0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x18000FDF0 (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180013110 (-RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x180020528 (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002099C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ResourceSetFactory(
        __int64 a1,
        struct ExecutionModel::BaseResourceSet *a2,
        struct _RM_PARTITION *a3,
        void *a4,
        struct _RM_ACTIVATOR *a5,
        struct ExecutionModel::ResourceSet **a6)
{
  PVOID Heap; // rax
  PVOID v11; // rbp
  ExecutionModel::ResourceSet *v12; // rax
  ExecutionModel::ResourceSet *v13; // rax
  ExecutionModel::BaseResourceSet *v14; // rbx
  __int64 (__fastcall *v15)(ExecutionModel::BaseResourceSet *); // rax
  __int64 v16; // rsi
  int v17; // ebx

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xA0uLL);
  v11 = Heap;
  if ( !Heap )
  {
    v17 = -1073741801;
    return v17 | 0x10000000u;
  }
  memset_0(Heap, 0, 0xA0uLL);
  *((_QWORD *)v11 + 3) = a1;
  *((_DWORD *)v11 + 4) = 1;
  *((_DWORD *)v11 + 8) = 1;
  *((_QWORD *)v11 + 1) = HIBYTE(a1)
                       + 37
                       * (BYTE6(a1)
                        + 37
                        * (BYTE5(a1)
                         + 37
                         * (BYTE4(a1)
                          + 37
                          * (BYTE3(a1) + 37 * (BYTE2(a1) + 37 * (BYTE1(a1) + 37 * ((unsigned __int8)a1 + 11623883LL)))))));
  *((_QWORD *)v11 + 6) = a5;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a3) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)v11 + 14) = a3;
  if ( a4 )
  {
    v17 = RmpSystemDuplicateHandle(a4, 1u, (PHANDLE)v11 + 15);
    if ( v17 >= 0 )
      v17 = 0;
    if ( v17 < 0 )
    {
LABEL_18:
      RmpObjectRelease((struct _RM_OBJECT_HEADER *)v11);
      return v17 | 0x10000000u;
    }
  }
  v12 = (ExecutionModel::ResourceSet *)operator new(0x748uLL);
  if ( !v12 || (v13 = ExecutionModel::ResourceSet::ResourceSet(v12), (v14 = v13) == 0LL) )
  {
    v17 = -1073741801;
    goto LABEL_18;
  }
  *((_QWORD *)v13 + 23) = a2;
  *((_DWORD *)v13 + 4) = *((_DWORD *)a2 + 4);
  *((_QWORD *)v13 + 3) = *((_QWORD *)a2 + 3);
  *((_QWORD *)v13 + 168) = *((_QWORD *)a2 + 168);
  RmpObjectAddRef((struct _RM_OBJECT_HEADER *)v11);
  *((_QWORD *)v14 + 173) = v11;
  *((_QWORD *)v14 + 230) = *((_QWORD *)v11 + 3);
  v15 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v14 + 8LL);
  if ( v15 == ExecutionModel::BaseResourceSet::AddRef )
    ExecutionModel::BaseResourceSet::AddRef(v14);
  else
    v15(v14);
  *((_QWORD *)v11 + 5) = v14;
  v16 = *(_QWORD *)(*((_QWORD *)v14 + 3) + 208LL);
  RtlAcquireSRWLockExclusive(v16 + 552);
  RmpObjectTableAddObjectWithLock((struct _RM_OBJECT_TABLE *)(v16 + 536), (struct _RM_OBJECT_HEADER *)v11);
  RtlReleaseSRWLockExclusive(v16 + 552);
  *a6 = v14;
  v17 = 0;
  return v17 | 0x10000000u;
}
