/*
 * XREFs of ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@PEAPEAV12@@Z @ 0x180010DF0
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAV82@@Z @ 0x18000D900 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754 (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180007F20 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000EFB0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x18000F7D8 (-SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z.c)
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PEAXPEAU_RM_ACTIVATOR@@PEAPEAV12@@Z @ 0x180012F20 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PE.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180013364 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RmpGenerateObjectHandle@@YA_KW4_RM_OBJECT_TYPE@@@Z @ 0x18001341C (-RmpGenerateObjectHandle@@YA_KW4_RM_OBJECT_TYPE@@@Z.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180013C34 (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::CreateInstance(
        struct ExecutionModel::BaseResourceSet *a1,
        __int128 *a2,
        __int64 a3,
        void *a4,
        struct IUnknown *a5,
        __int64 a6,
        struct _RM_OBJECT_HEADER *a7,
        __int64 *a8,
        _OWORD *a9,
        int a10,
        int a11,
        __int64 a12,
        int a13,
        struct _RM_ACTIVATOR *a14,
        struct IUnknown *a15,
        ExecutionModel::BaseResourceSet **a16)
{
  __int64 v16; // rax
  __int64 v21; // rbp
  unsigned __int64 ObjectHandle; // rax
  int v23; // eax
  ExecutionModel::BaseResourceSet *v24; // rbx
  unsigned int v25; // edi
  unsigned __int64 v26; // r8
  _OWORD *v27; // rax
  int v28; // eax
  char *v29; // rcx
  __int64 v30; // rdx
  __int128 *v31; // rax
  __int128 v32; // xmm0
  struct IUnknown *v33; // rdx
  unsigned int *v34; // r14
  unsigned int *v35; // r15
  int v36; // eax
  struct _RM_OBJECT_HEADER *v37; // rdi
  __int64 (__fastcall *v38)(ExecutionModel::BaseResourceSet *); // rax
  _DWORD *v39; // rdi
  __int64 (__fastcall *v40)(ExecutionModel::BaseResourceSet *); // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  _QWORD *v43; // r10
  _QWORD *v44; // r8
  _QWORD *v45; // rcx
  _QWORD *v46; // rax
  struct IUnknown *v47; // rdi
  _QWORD *v49; // rcx
  char *v50; // r9
  __int64 v51; // r8
  __int64 v52; // rsi
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // r9
  ExecutionModel::BaseResourceSet *v57; // [rsp+60h] [rbp+8h] BYREF

  v16 = *((_QWORD *)a1 + 3);
  v57 = 0LL;
  v21 = *(_QWORD *)(v16 + 208);
  ObjectHandle = RmpGenerateObjectHandle(1LL);
  v23 = ExecutionModel::ResourceSet::ResourceSetFactory(ObjectHandle, a1, (struct _RM_PARTITION *)a3, a4, a14, &v57);
  v24 = v57;
  v25 = v23;
  if ( v23 >= 0 )
  {
    if ( !a8 )
      goto LABEL_6;
    v26 = -1LL;
    do
      ++v26;
    while ( *((_WORD *)a8 + v26) );
    if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
           (__int64)v57 + 32,
           a8,
           v26) )
    {
LABEL_6:
      v27 = a9;
      if ( a9 )
      {
        *((_OWORD *)v24 + 4) = *a9;
        *((_OWORD *)v24 + 5) = v27[1];
        *((_OWORD *)v24 + 6) = v27[2];
        *((_OWORD *)v24 + 7) = v27[3];
        v28 = *((_DWORD *)v27 + 16);
      }
      else
      {
        *((_OWORD *)v24 + 4) = *(_OWORD *)(v21 + 1388);
        *((_OWORD *)v24 + 5) = *(_OWORD *)(v21 + 1404);
        *((_OWORD *)v24 + 6) = *(_OWORD *)(v21 + 1420);
        *((_OWORD *)v24 + 7) = *(_OWORD *)(v21 + 1436);
        v28 = *(_DWORD *)(v21 + 1452);
      }
      *((_DWORD *)v24 + 32) = v28;
      v29 = (char *)v24 + 1408;
      v30 = 2LL;
      *((_DWORD *)v24 + 33) = a10;
      *((_DWORD *)v24 + 34) = a11;
      *((_QWORD *)v24 + 18) = a12;
      v31 = a2;
      do
      {
        v29 += 128;
        v32 = *v31;
        v31 += 8;
        *((_OWORD *)v29 - 8) = v32;
        *((_OWORD *)v29 - 7) = *(v31 - 7);
        *((_OWORD *)v29 - 6) = *(v31 - 6);
        *((_OWORD *)v29 - 5) = *(v31 - 5);
        *((_OWORD *)v29 - 4) = *(v31 - 4);
        *((_OWORD *)v29 - 3) = *(v31 - 3);
        *((_OWORD *)v29 - 2) = *(v31 - 2);
        *((_OWORD *)v29 - 1) = *(v31 - 1);
        --v30;
      }
      while ( v30 );
      v33 = a5;
      v34 = (unsigned int *)a2 + 2;
      v35 = (unsigned int *)(a2 + 2);
      *(_OWORD *)v29 = *v31;
      *((_OWORD *)v29 + 1) = v31[1];
      *((_OWORD *)v29 + 2) = v31[2];
      *((_OWORD *)v29 + 3) = v31[3];
      *((_OWORD *)v29 + 4) = v31[4];
      *((_OWORD *)v29 + 5) = v31[5];
      *((_OWORD *)v29 + 6) = v31[6];
      *((_QWORD *)v29 + 14) = *((_QWORD *)v31 + 14);
      *((_DWORD *)v24 + 340) = *((_DWORD *)a2 + 2);
      *((_DWORD *)v24 + 341) = *((_DWORD *)a2 + 8);
      v36 = a13;
      *((_DWORD *)v24 + 2) = 0;
      *((_DWORD *)v24 + 38) = v36;
      *((_DWORD *)v24 + 338) = 1;
      if ( *((struct IUnknown **)v24 + 223) != v33 )
        ATL::AtlComPtrAssign((struct IUnknown **)v24 + 223, v33);
      v37 = a7;
      *((_QWORD *)v24 + 224) = a6;
      *((_QWORD *)v24 + 225) = *((_QWORD *)a2 + 12);
      *((_QWORD *)v24 + 226) = *((_QWORD *)a2 + 15);
      *((_QWORD *)v24 + 227) = *((_QWORD *)a2 + 18);
      *((_OWORD *)v24 + 12) = *(__int128 *)((char *)a2 + 88);
      *((_OWORD *)v24 + 13) = *(__int128 *)((char *)a2 + 104);
      *((_OWORD *)v24 + 14) = *(__int128 *)((char *)a2 + 120);
      *((_OWORD *)v24 + 15) = *(__int128 *)((char *)a2 + 136);
      *((_QWORD *)v24 + 32) = *((_QWORD *)a2 + 19);
      if ( v37 )
      {
        if ( !*((_QWORD *)v24 + 174) )
        {
          RmpObjectAddRef(v37);
          *((_QWORD *)v24 + 174) = v37;
        }
        v38 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v24 + 8LL);
        if ( v38 == ExecutionModel::BaseResourceSet::AddRef )
          ExecutionModel::BaseResourceSet::AddRef(v24);
        else
          v38(v24);
        v39 = (_DWORD *)((char *)v37 + 616);
        v40 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v24 + 8LL);
        if ( v40 == ExecutionModel::BaseResourceSet::AddRef )
          ExecutionModel::BaseResourceSet::AddRef(v24);
        else
          v40(v24);
        v41 = *(_QWORD *)v39;
        v42 = (_QWORD *)((char *)v24 + 1368);
        if ( *(_DWORD **)(*(_QWORD *)v39 + 8LL) != v39 )
          __fastfail(3u);
        *v42 = v41;
        *((_QWORD *)v24 + 172) = v39;
        *(_QWORD *)(v41 + 8) = v42;
        *(_QWORD *)v39 = v42;
        ++v39[4];
        *((_DWORD *)v24 + 350) = 0;
      }
      v43 = (_QWORD *)*((_QWORD *)v24 + 173);
      v44 = *(_QWORD **)(a3 + 200);
      if ( v44 != (_QWORD *)(a3 + 200) )
      {
        v55 = *(unsigned int *)(v43[5] + 1360LL);
        do
        {
          if ( (int)RmpEmPriorityCompare(v55, *(unsigned int *)(*(v44 - 11) + 1360LL)) > 0 )
            break;
          v44 = (_QWORD *)*v44;
        }
        while ( v44 != v56 );
      }
      v45 = (_QWORD *)v44[1];
      v46 = v43 + 16;
      if ( (_QWORD *)*v45 != v44 )
        __fastfail(3u);
      *v46 = v44;
      v43[17] = v45;
      *v45 = v46;
      v44[1] = v46;
      if ( (*((_BYTE *)a2 + 42) & 0x20) != 0 && (a2[1] & 0x100) == 0 )
        *((_DWORD *)v24 + 351) |= 0x80u;
      v47 = a15;
      if ( a15 )
      {
        v49 = (_QWORD *)((char *)v24 + 1504);
        v50 = (char *)((char *)a15 - (char *)v24);
        v51 = 3LL;
        v52 = (char *)a2 - (char *)v24;
        do
        {
          v53 = *(_QWORD *)((char *)v49 + v52 - 1408);
          v54 = *(_QWORD *)((char *)v49 + (_QWORD)v50 - 1304);
          if ( v53 == -1LL )
          {
            *v49 = -1LL;
          }
          else if ( v53 < v54 )
          {
            *v49 = 0LL;
          }
          else
          {
            *v49 = v53 - v54;
          }
          v49 += 3;
          --v51;
        }
        while ( v51 );
        ExecutionModel::ResourceSet::SetTransitionalPriorities((__int64)v47, *v34, *v35);
        if ( SBYTE4(v47[175].lpVtbl) < 0 )
          *((_DWORD *)v24 + 351) |= 0x80u;
        if ( *((struct IUnknown **)v24 + 228) != v47 )
          ATL::AtlComPtrAssign((struct IUnknown **)v24 + 228, v47);
      }
      v25 = 0;
      *a16 = v24;
      return v25;
    }
    v25 = -2147024882;
  }
  if ( v24 )
  {
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *, _QWORD))(*(_QWORD *)v24 + 32LL))(v24, 0LL);
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return v25;
}
