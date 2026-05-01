/*
 * XREFs of ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON@@W4Enum@PendType@2@PEA_NPEAPEAUIResourceSet@2@@Z @ 0x180015790
 * Callers:
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x180002518 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIV.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011420 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000B760 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18002BC72 (memcpy_0.c)
 *     ??1?$_ContainerAllocation@V?$allocator@G@utl@@@utl@@QEAA@XZ @ 0x1800366D0 (--1-$_ContainerAllocation@V-$allocator@G@utl@@@utl@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::CreateInstance(
        struct IUnknownVtbl *a1,
        __int64 a2,
        _DWORD *a3,
        struct IUnknownVtbl *a4,
        struct IUnknownVtbl *a5,
        __int64 a6,
        struct IUnknownVtbl *Src,
        __int64 a8,
        int a9,
        int a10,
        struct IUnknownVtbl *a11,
        unsigned int a12,
        int a13,
        unsigned __int8 *a14,
        struct IUnknown *a15)
{
  unsigned __int8 *v15; // rbx
  struct IUnknown *v16; // r13
  _DWORD *v17; // r12
  unsigned int v19; // eax
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  struct IUnknown *v23; // rdi
  __int64 v24; // rdx
  struct IUnknownVtbl *lpVtbl; // r15
  unsigned __int64 v26; // rbx
  struct IUnknownVtbl *v27; // rcx
  struct IUnknown *v28; // r15
  struct IUnknownVtbl *v29; // rax
  struct IUnknownVtbl *v30; // rax
  unsigned __int64 v31; // rax
  char v32; // r12
  void **v33; // rax
  struct IUnknownVtbl *v34; // r14
  void *v35; // r13
  size_t v36; // rbx
  struct IUnknownVtbl *v37; // rbx
  struct IUnknownVtbl *v38; // rcx
  struct IUnknownVtbl *v39; // rax
  int v40; // eax
  struct IUnknown *v41; // rcx
  __int64 v42; // rdx
  _DWORD *v43; // rax
  __int128 v44; // xmm0
  unsigned __int8 v45; // cl
  struct IUnknownVtbl *v47; // rcx
  _OWORD *v48; // rax
  unsigned int v49; // [rsp+80h] [rbp-80h] BYREF
  int v50; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned __int8 *v51; // [rsp+88h] [rbp-78h] BYREF
  struct IUnknown *v52; // [rsp+90h] [rbp-70h] BYREF
  struct IUnknown *v53; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  void *Block[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v56[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  void *v58; // [rsp+E0h] [rbp-20h]
  int v59; // [rsp+E8h] [rbp-18h]
  int v60; // [rsp+ECh] [rbp-14h]
  unsigned int *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  struct IUnknown **v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  unsigned __int8 **v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  int *v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]

  v15 = a14;
  v16 = a15;
  v17 = a3;
  v50 = 0;
  v19 = a3[3];
  *(_QWORD *)&EventDescriptor.Id = a3;
  v51 = a14;
  v53 = a15;
  v52 = 0LL;
  v20 = ExecutionModel::BaseResourceSet::AcquireResources(
          a2,
          a6,
          (char *)a3,
          3u,
          a3 + 18,
          v19,
          0,
          0,
          a12,
          a13,
          a14,
          a1,
          ExecutionModel::ResourceSet::ResourceSetFactory,
          0,
          &v52);
  v23 = v52;
  v24 = (unsigned int)v20;
  v49 = v20;
  if ( v20 < 0 )
    goto LABEL_39;
  if ( v52[221].lpVtbl != a4 )
  {
    if ( a4 )
      (*((void (__fastcall **)(struct IUnknownVtbl *, _QWORD))a4->QueryInterface + 1))(a4, (unsigned int)v20);
    lpVtbl = v23[221].lpVtbl;
    if ( lpVtbl )
      (*((void (__fastcall **)(struct IUnknownVtbl *, __int64))lpVtbl->QueryInterface + 2))(v23[221].lpVtbl, v24);
    v23[221].lpVtbl = a4;
  }
  v23[222].lpVtbl = a5;
  if ( Src )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( *((_WORD *)&Src->QueryInterface + v26) );
  }
  else
  {
    v26 = 0LL;
  }
  v27 = v23[4].lpVtbl;
  v28 = v23 + 6;
  if ( v27 == (struct IUnknownVtbl *)&v23[6] )
    v29 = (struct IUnknownVtbl *)((char *)&v23[7].lpVtbl + 6);
  else
    v29 = v28->lpVtbl;
  if ( v26 <= ((char *)v29 - (char *)v27) >> 1 )
  {
    if ( v27 != Src )
      memmove(v27, Src, 2 * v26);
    v47 = (struct IUnknownVtbl *)((char *)v23[4].lpVtbl + 2 * v26);
    v23[5].lpVtbl = v47;
    LOWORD(v47->QueryInterface) = 0;
    goto LABEL_33;
  }
  if ( v27 == (struct IUnknownVtbl *)v28 )
    v30 = (struct IUnknownVtbl *)((char *)&v23[7].lpVtbl + 6);
  else
    v30 = v28->lpVtbl;
  v31 = 2 * (((char *)v30 - (char *)v27) >> 1) + 1;
  if ( v31 < v26 )
    v31 = v26;
  if ( v31 > 0x3FFFFFFFFFFFFFFELL )
    v31 = 0x3FFFFFFFFFFFFFFELL;
  if ( v26 > v31 )
  {
    v56[0] = 0LL;
    v56[1] = 0LL;
    v32 = 2;
    v33 = (void **)v56;
  }
  else
  {
    v32 = 1;
    Block[1] = (void *)(v31 + 1);
    if ( v31 + 1 > 0x7FFFFFFFFFFFFFFFLL )
      Block[0] = 0LL;
    else
      Block[0] = operator new(2 * (v31 + 1), (const struct std::nothrow_t *)&std::nothrow);
    v33 = Block;
  }
  v34 = (struct IUnknownVtbl *)*v33;
  v35 = v33[1];
  *v33 = 0LL;
  if ( (v32 & 2) != 0 )
  {
    v32 &= ~2u;
    utl::_ContainerAllocation<utl::allocator<unsigned short>>::~_ContainerAllocation<utl::allocator<unsigned short>>(
      v56,
      v24,
      v21,
      v22);
  }
  if ( (v32 & 1) != 0 && Block[0] )
    operator delete(Block[0]);
  if ( v34 )
  {
    v36 = 2 * v26;
    memcpy_0(v34, Src, v36);
    v37 = (struct IUnknownVtbl *)((char *)v34 + v36);
    LOWORD(v37->QueryInterface) = 0;
    v38 = v23[4].lpVtbl;
    if ( v38 != (struct IUnknownVtbl *)v28 )
      operator delete(v38);
    v17 = *(_DWORD **)&EventDescriptor.Id;
    v23[4].lpVtbl = v34;
    v23[5].lpVtbl = v37;
    v39 = (struct IUnknownVtbl *)((char *)v34 + 2 * ((__int64)v35 - 1));
    v16 = v53;
    v28->lpVtbl = v39;
LABEL_33:
    if ( a8 )
    {
      *(_OWORD *)&v23[8].lpVtbl = *(_OWORD *)a8;
      *(_OWORD *)&v23[10].lpVtbl = *(_OWORD *)(a8 + 16);
      *(_OWORD *)&v23[12].lpVtbl = *(_OWORD *)(a8 + 32);
      *(_OWORD *)&v23[14].lpVtbl = *(_OWORD *)(a8 + 48);
      v40 = *(_DWORD *)(a8 + 64);
    }
    else
    {
      v48 = RmSvcGlobals;
      *(_OWORD *)&v23[8].lpVtbl = *((_OWORD *)RmSvcGlobals + 122);
      *(_OWORD *)&v23[10].lpVtbl = v48[123];
      *(_OWORD *)&v23[12].lpVtbl = v48[124];
      *(_OWORD *)&v23[14].lpVtbl = v48[125];
      v40 = *((_DWORD *)v48 + 504);
    }
    LODWORD(v23[16].lpVtbl) = v40;
    v41 = v23 + 176;
    v42 = 2LL;
    HIDWORD(v23[16].lpVtbl) = a9;
    LODWORD(v23[17].lpVtbl) = a10;
    v23[18].lpVtbl = a11;
    v43 = v17;
    do
    {
      v41 += 16;
      v44 = *(_OWORD *)v43;
      v43 += 32;
      *(_OWORD *)&v41[-16].lpVtbl = v44;
      *(_OWORD *)&v41[-14].lpVtbl = *((_OWORD *)v43 - 7);
      *(_OWORD *)&v41[-12].lpVtbl = *((_OWORD *)v43 - 6);
      *(_OWORD *)&v41[-10].lpVtbl = *((_OWORD *)v43 - 5);
      *(_OWORD *)&v41[-8].lpVtbl = *((_OWORD *)v43 - 4);
      *(_OWORD *)&v41[-6].lpVtbl = *((_OWORD *)v43 - 3);
      *(_OWORD *)&v41[-4].lpVtbl = *((_OWORD *)v43 - 2);
      *(_OWORD *)&v41[-2].lpVtbl = *((_OWORD *)v43 - 1);
      --v42;
    }
    while ( v42 );
    *(_OWORD *)&v41->lpVtbl = *(_OWORD *)v43;
    *(_OWORD *)&v41[2].lpVtbl = *((_OWORD *)v43 + 1);
    *(_OWORD *)&v41[4].lpVtbl = *((_OWORD *)v43 + 2);
    *(_OWORD *)&v41[6].lpVtbl = *((_OWORD *)v43 + 3);
    *(_OWORD *)&v41[8].lpVtbl = *((_OWORD *)v43 + 4);
    *(_OWORD *)&v41[10].lpVtbl = *((_OWORD *)v43 + 5);
    v41[12].lpVtbl = *(struct IUnknownVtbl **)(v43 + 24);
    LODWORD(v24) = v49;
    v16->lpVtbl = (struct IUnknownVtbl *)&v23[171];
    goto LABEL_38;
  }
  v17 = *(_DWORD **)&EventDescriptor.Id;
  LODWORD(v24) = -2147024882;
  v49 = -2147024882;
LABEL_38:
  v15 = v51;
LABEL_39:
  if ( dword_180071060 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
  {
    v45 = v15 ? *v15 : 0;
    if ( (unsigned int)dword_180071060 > 4 )
    {
      v62 = 4LL;
      v61 = &v49;
      v63 = &v53;
      LODWORD(v51) = *v17;
      v65 = &v51;
      v50 = v45;
      v67 = &v50;
      v53 = v23;
      v64 = 8LL;
      v66 = 4LL;
      v68 = 4LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_180071068;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180064414 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_180071068;
      v58 = &unk_18006441F;
      UserData.Reserved = 2;
      v59 = 85;
      v60 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
      LODWORD(v24) = v49;
      v23 = v52;
    }
  }
  if ( (int)v24 >= 0 || !v23 )
    return (unsigned int)v24;
  ((void (__fastcall *)(struct IUnknown *, _QWORD))v23->lpVtbl[1].AddRef)(v23, 0LL);
  ((void (__fastcall *)(struct IUnknown *))v23->lpVtbl->Release)(v23);
  return v49;
}
