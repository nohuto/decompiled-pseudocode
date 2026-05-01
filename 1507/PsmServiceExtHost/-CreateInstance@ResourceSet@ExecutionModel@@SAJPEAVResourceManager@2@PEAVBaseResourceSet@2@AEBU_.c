/*
 * XREFs of ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON@@W4Enum@PendType@2@PEA_NPEAPEAUIResourceSet@2@@Z @ 0x180016C40
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180012E10 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x1800351D4 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIV.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000ECD0 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180024ED2 (memcpy_0.c)
 *     ??1?$_ContainerAllocation@V?$allocator@G@utl@@@utl@@QEAA@XZ @ 0x18002EE5C (--1-$_ContainerAllocation@V-$allocator@G@utl@@@utl@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::CreateInstance(
        struct IUnknownVtbl *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *Src,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11,
        unsigned int a12,
        int a13,
        unsigned __int8 *a14,
        char *a15)
{
  unsigned __int8 *v15; // rbx
  char *v16; // r13
  __int128 *v17; // r12
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  char *v23; // rdi
  const GUID *v24; // r9
  __int64 v25; // r15
  unsigned __int64 v26; // rbx
  char *v27; // rcx
  char **v28; // r15
  char *v29; // rax
  __int64 v30; // rdx
  char *v31; // rax
  unsigned __int64 v32; // rax
  char v33; // r12
  void **v34; // rax
  char *v35; // r14
  void *v36; // r13
  size_t v37; // rbx
  char *v38; // rbx
  char **v39; // rcx
  char *v40; // rax
  int v41; // eax
  __int128 *v42; // rcx
  __int128 *v43; // rax
  __int128 v44; // xmm0
  _WORD *v46; // rcx
  _OWORD *v47; // rax
  const struct _TlgProvider_t *v48; // rcx
  const struct _TlgProvider_t *v49; // rcx
  const GUID *v50; // r8
  unsigned int v51; // [rsp+80h] [rbp-80h] BYREF
  void *Block[2]; // [rsp+88h] [rbp-78h] BYREF
  __int128 *v53; // [rsp+98h] [rbp-68h] BYREF
  char *v54; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int8 *v55; // [rsp+A8h] [rbp-58h]
  _QWORD v56[2]; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  char **v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  __int128 **v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  void **v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]

  v15 = a14;
  v16 = a15;
  v17 = (__int128 *)a3;
  LODWORD(Block[0]) = 0;
  v19 = a3[3];
  v53 = (__int128 *)a3;
  v55 = a14;
  v54 = a15;
  Block[0] = 0LL;
  v20 = ExecutionModel::BaseResourceSet::AcquireResources(
          a2,
          a6,
          (char *)a3,
          3u,
          a3 + 16,
          v19,
          0,
          0,
          a12,
          a13,
          a14,
          a1,
          (struct IUnknown *)ExecutionModel::ResourceSet::ResourceSetFactory,
          0,
          (struct IUnknown **)Block);
  v23 = (char *)Block[0];
  v24 = (const GUID *)(unsigned int)v20;
  v51 = v20;
  if ( v20 < 0 )
    goto LABEL_39;
  if ( *((_QWORD *)Block[0] + 220) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 8LL))(a4, v21, v22, (unsigned int)v20);
    v25 = *((_QWORD *)v23 + 220);
    if ( v25 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, const GUID *))(*(_QWORD *)v25 + 16LL))(
        *((_QWORD *)v23 + 220),
        v21,
        v22,
        v24);
    *((_QWORD *)v23 + 220) = a4;
  }
  *((_QWORD *)v23 + 221) = a5;
  if ( Src )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( *(_WORD *)&Src[2 * v26] );
  }
  else
  {
    v26 = 0LL;
  }
  v27 = (char *)*((_QWORD *)v23 + 4);
  v28 = (char **)(v23 + 48);
  if ( v27 == v23 + 48 )
    v29 = v23 + 62;
  else
    v29 = *v28;
  v30 = 2LL;
  if ( v26 <= (v29 - v27) >> 1 )
  {
    if ( v27 != Src )
    {
      memmove(v27, Src, 2 * v26);
      v30 = 2LL;
    }
    v46 = (_WORD *)(*((_QWORD *)v23 + 4) + 2 * v26);
    *((_QWORD *)v23 + 5) = v46;
    *v46 = 0;
    goto LABEL_33;
  }
  if ( v27 == (char *)v28 )
    v31 = v23 + 62;
  else
    v31 = *v28;
  v32 = 2 * ((v31 - v27) >> 1) + 1;
  if ( v32 < v26 )
    v32 = v26;
  if ( v32 > 0x3FFFFFFFFFFFFFFELL )
    v32 = 0x3FFFFFFFFFFFFFFELL;
  if ( v26 > v32 )
  {
    v33 = 2;
    v56[0] = 0LL;
    v56[1] = 0LL;
    v34 = (void **)v56;
  }
  else
  {
    v33 = 1;
    Block[1] = (void *)(v32 + 1);
    if ( v32 + 1 > 0x7FFFFFFFFFFFFFFFLL )
      Block[0] = 0LL;
    else
      Block[0] = operator new(2 * (v32 + 1), (const struct std::nothrow_t *)&std::nothrow);
    v34 = Block;
  }
  v35 = (char *)*v34;
  v36 = v34[1];
  *v34 = 0LL;
  if ( (v33 & 2) != 0 )
  {
    v33 &= ~2u;
    utl::_ContainerAllocation<utl::allocator<unsigned short>>::~_ContainerAllocation<utl::allocator<unsigned short>>(
      v56,
      v30,
      v22,
      v24);
  }
  if ( (v33 & 1) != 0 && Block[0] )
    operator delete(Block[0]);
  if ( v35 )
  {
    v37 = 2 * v26;
    memcpy_0(v35, Src, v37);
    v38 = &v35[v37];
    *(_WORD *)v38 = 0;
    v39 = (char **)*((_QWORD *)v23 + 4);
    if ( v39 != v28 )
      operator delete(v39);
    v17 = v53;
    *((_QWORD *)v23 + 4) = v35;
    v30 = 2LL;
    *((_QWORD *)v23 + 5) = v38;
    v40 = &v35[2 * ((__int64)v36 - 1)];
    v16 = v54;
    *v28 = v40;
LABEL_33:
    if ( a8 )
    {
      *((_OWORD *)v23 + 4) = *(_OWORD *)a8;
      *((_OWORD *)v23 + 5) = *(_OWORD *)(a8 + 16);
      *((_OWORD *)v23 + 6) = *(_OWORD *)(a8 + 32);
      *((_OWORD *)v23 + 7) = *(_OWORD *)(a8 + 48);
      v41 = *(_DWORD *)(a8 + 64);
    }
    else
    {
      v47 = RmSvcGlobals;
      *((_OWORD *)v23 + 4) = *((_OWORD *)RmSvcGlobals + 121);
      *((_OWORD *)v23 + 5) = v47[122];
      *((_OWORD *)v23 + 6) = v47[123];
      *((_OWORD *)v23 + 7) = v47[124];
      v41 = *((_DWORD *)v47 + 500);
    }
    *((_DWORD *)v23 + 32) = v41;
    v42 = v17;
    *((_DWORD *)v23 + 33) = a9;
    *((_DWORD *)v23 + 34) = a10;
    *((_QWORD *)v23 + 18) = a11;
    v43 = (__int128 *)(v23 + 1408);
    do
    {
      v43 += 8;
      v44 = *v42;
      v42 += 8;
      *(v43 - 8) = v44;
      *(v43 - 7) = *(v42 - 7);
      *(v43 - 6) = *(v42 - 6);
      *(v43 - 5) = *(v42 - 5);
      *(v43 - 4) = *(v42 - 4);
      *(v43 - 3) = *(v42 - 3);
      *(v43 - 2) = *(v42 - 2);
      *(v43 - 1) = *(v42 - 1);
      --v30;
    }
    while ( v30 );
    *v43 = *v42;
    v43[1] = v42[1];
    v43[2] = v42[2];
    v43[3] = v42[3];
    v43[4] = v42[4];
    v43[5] = v42[5];
    LODWORD(v24) = v51;
    *(_QWORD *)v16 = v23 + 1368;
    goto LABEL_38;
  }
  v17 = v53;
  LODWORD(v24) = -2147024882;
  v51 = -2147024882;
LABEL_38:
  v15 = v55;
LABEL_39:
  if ( dword_1800690A0 )
  {
    if ( (qword_1800690B0 & 1) != 0 )
    {
      v48 = (const struct _TlgProvider_t *)qword_1800690B8;
      if ( (qword_1800690B8 & 1) == qword_1800690B8 )
      {
        if ( v15 )
          v48 = (const struct _TlgProvider_t *)*v15;
        else
          LOBYTE(v48) = 0;
        if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v48, 1uLL) )
        {
          v59 = 4LL;
          v58 = &v51;
          v60 = &v54;
          LODWORD(v53) = *(_DWORD *)v17;
          v62 = &v53;
          LODWORD(Block[0]) = (unsigned __int8)v49;
          v64 = Block;
          v54 = v23;
          v61 = 8LL;
          v63 = 4LL;
          v65 = 4LL;
          TlgWrite(v49, &unk_18005C77F, v50, v24, 6u, &pData);
          LODWORD(v24) = v51;
        }
      }
    }
  }
  if ( (int)v24 >= 0 || !v23 )
    return (unsigned int)v24;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v23 + 32LL))(v23);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v23 + 16LL))(v23);
  return v51;
}
