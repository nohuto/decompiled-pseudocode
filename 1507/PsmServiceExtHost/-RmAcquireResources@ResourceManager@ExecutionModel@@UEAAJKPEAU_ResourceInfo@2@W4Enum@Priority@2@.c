/*
 * XREFs of ?RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX2KW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180038280
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180002D10 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     RmpPsmAppInstanceIdInitializeFromCStr @ 0x180004CC0 (RmpPsmAppInstanceIdInitializeFromCStr.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     ??$emplace@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@2@@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@utl@@_N@1@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@4@@Z @ 0x180033EB4 (--$emplace@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@2@@-$_HashTable@PE.c)
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180037F90 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX4_NKW46PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x18003F4D8 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAcquireResources(
        const struct _TlgProvider_t *a1,
        unsigned int a2,
        int *a3,
        unsigned int a4,
        DWORD a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        _BYTE *a11,
        __int64 *a12)
{
  _BYTE *v12; // rax
  __int64 *v13; // rdi
  int *v14; // rbx
  const struct _TlgProvider_t *v16; // r12
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  WCHAR *v20; // rcx
  wchar_t *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // rax
  char v32; // al
  unsigned int v33; // esi
  volatile signed __int32 *v34; // r14
  int *v35; // rdi
  DWORD v36; // ebx
  int v37; // eax
  const struct _TlgProvider_t *v38; // rcx
  const GUID *v39; // r8
  const GUID *v40; // r9
  int v42; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v43; // [rsp+88h] [rbp-78h] BYREF
  __int64 v44; // [rsp+90h] [rbp-70h] BYREF
  int *v45; // [rsp+98h] [rbp-68h] BYREF
  _BYTE *v46; // [rsp+A0h] [rbp-60h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  __int64 *v48; // [rsp+B0h] [rbp-50h] BYREF
  int v49; // [rsp+B8h] [rbp-48h] BYREF
  int v50; // [rsp+BCh] [rbp-44h] BYREF
  int v51; // [rsp+C0h] [rbp-40h] BYREF
  int v52; // [rsp+C4h] [rbp-3Ch] BYREF
  __int64 v53; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v54[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE Src[80]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR v56[280]; // [rsp+130h] [rbp+30h] BYREF
  wchar_t Destination[280]; // [rsp+360h] [rbp+260h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+590h] [rbp+490h] BYREF
  int *v59; // [rsp+5B0h] [rbp+4B0h]
  __int64 v60; // [rsp+5B8h] [rbp+4B8h]
  _QWORD *v61; // [rsp+5C0h] [rbp+4C0h]
  __int64 v62; // [rsp+5C8h] [rbp+4C8h]
  unsigned int *v63; // [rsp+5D0h] [rbp+4D0h]
  __int64 v64; // [rsp+5D8h] [rbp+4D8h]
  int *v65; // [rsp+5E0h] [rbp+4E0h]
  __int64 v66; // [rsp+5E8h] [rbp+4E8h]
  __int64 **v67; // [rsp+5F0h] [rbp+4F0h]
  __int64 v68; // [rsp+5F8h] [rbp+4F8h]
  _QWORD *v69; // [rsp+600h] [rbp+500h]
  __int64 v70; // [rsp+608h] [rbp+508h]
  int **v71; // [rsp+610h] [rbp+510h]
  __int64 v72; // [rsp+618h] [rbp+518h]
  PVOID *p_P; // [rsp+620h] [rbp+520h]
  __int64 v74; // [rsp+628h] [rbp+528h]
  __int64 *v75; // [rsp+630h] [rbp+530h]
  __int64 v76; // [rsp+638h] [rbp+538h]
  wchar_t Source[232]; // [rsp+640h] [rbp+540h] BYREF

  v12 = a11;
  v13 = a12;
  v14 = a3;
  v43 = a4;
  v45 = a3;
  v16 = a1;
  v46 = a11;
  v17 = 0LL;
  v48 = a12;
  v44 = 0LL;
  P = 0LL;
  if ( a2 >= 0x30 || !a2 || !a3 || !a12 )
  {
    v42 = -2147024809;
    goto LABEL_27;
  }
  RtlEnterCriticalSection(&RmpGlobalLock);
  memset_0(v56, 0, 0x228uLL);
  *(_DWORD *)v56 = a5;
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(1, v56, (volatile signed __int32 **)&P) < 0 )
  {
    v18 = *(_QWORD *)v16;
    v52 = 464;
    v42 = (*(__int64 (__fastcall **)(const struct _TlgProvider_t *, _QWORD, wchar_t *, int *, _BYTE *, int *, int *, __int64 *))(v18 + 384))(
            v16,
            a5,
            Source,
            &v52,
            Src,
            &v51,
            &v49,
            &v53);
    if ( v42 >= 0 )
    {
      RmpPsmAppInstanceIdInitializeFromCStr(Destination, Source, Src, v51, v49, v53);
      v19 = 4LL;
      v20 = v56;
      v21 = Destination;
      do
      {
        v22 = *((_OWORD *)v21 + 1);
        *(_OWORD *)v20 = *(_OWORD *)v21;
        v23 = *((_OWORD *)v21 + 2);
        *((_OWORD *)v20 + 1) = v22;
        v24 = *((_OWORD *)v21 + 3);
        *((_OWORD *)v20 + 2) = v23;
        v25 = *((_OWORD *)v21 + 4);
        *((_OWORD *)v20 + 3) = v24;
        v26 = *((_OWORD *)v21 + 5);
        *((_OWORD *)v20 + 4) = v25;
        v27 = *((_OWORD *)v21 + 6);
        *((_OWORD *)v20 + 5) = v26;
        v28 = *((_OWORD *)v21 + 7);
        v21 += 64;
        *((_OWORD *)v20 + 6) = v27;
        v20 += 64;
        *((_OWORD *)v20 - 1) = v28;
        --v19;
      }
      while ( v19 );
      v29 = *(_OWORD *)v21;
      v30 = *((_OWORD *)v21 + 1);
      v31 = *((_QWORD *)v21 + 4);
      *(_OWORD *)v20 = v29;
      *((_OWORD *)v20 + 1) = v30;
      *((_QWORD *)v20 + 4) = v31;
      RmpActivityHostFindByTypeAndIdentifier(0, v56, (volatile signed __int32 **)&P);
    }
    v14 = v45;
  }
  v32 = 0;
  v33 = 0;
  v34 = (volatile signed __int32 *)P;
  if ( !a2 )
    goto LABEL_20;
  v35 = v14;
  v36 = a5;
  while ( 1 )
  {
    v42 = ExecutionModel::ResourceManager::RmAccessCheckEx((__int64)v16, *v35, v36, 0);
    if ( v42 < 0 )
      break;
LABEL_17:
    ++v33;
    v35 += 6;
    if ( v33 >= a2 )
    {
      v32 = 0;
      goto LABEL_19;
    }
  }
  if ( (a8 & 1) == 0 )
  {
    v42 = (*(__int64 (__fastcall **)(const struct _TlgProvider_t *, _QWORD, _QWORD))(*(_QWORD *)v16 + 152LL))(
            v16,
            (unsigned int)*v35,
            a5);
    if ( v42 < 0 )
      goto LABEL_22;
    v36 = a5;
    goto LABEL_17;
  }
  v32 = 1;
LABEL_19:
  v13 = v48;
LABEL_20:
  v37 = ExecutionModel::ExternalResourceSet::CreateInstance(
          v16,
          *((_QWORD *)v16 + 22),
          a2,
          v45,
          v43,
          a5,
          a6,
          a7,
          v32,
          a8,
          a9,
          a10,
          v34,
          v46,
          &v44);
  v17 = v44;
  v42 = v37;
  if ( v37 >= 0 )
  {
    *v13 = v44;
    utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::emplace<ExecutionModel::ResourceHandle__ * &,ExecutionModel::ExternalResourceSet * &>(
      (_DWORD)v16 + 200,
      (__int64)v54,
      v13,
      &v44);
    v42 = 0;
  }
LABEL_22:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v34 )
    RmpObjectRelease(v34);
  v12 = v46;
LABEL_27:
  if ( v12 )
    LOBYTE(a1) = *v12;
  else
    LOBYTE(a1) = 0;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(a1, 9uLL) )
  {
    v60 = 4LL;
    v59 = &v42;
    v61 = v54;
    v63 = &v43;
    v65 = &v50;
    LODWORD(v48) = a5;
    v67 = &v48;
    LODWORD(v46) = a8;
    v69 = &v46;
    LODWORD(v45) = a9;
    v71 = &v45;
    LODWORD(P) = a10;
    p_P = &P;
    LODWORD(v44) = (unsigned __int8)v38;
    v75 = &v44;
    v54[0] = v17;
    v62 = 8LL;
    v43 = a2;
    v64 = 4LL;
    v50 = (int)v40;
    v66 = 4LL;
    v68 = 4LL;
    v70 = 4LL;
    v72 = 4LL;
    v74 = 4LL;
    v76 = 4LL;
    TlgWrite(v38, &unk_18005AB2E, v39, v40, 0xBu, &pData);
  }
  return (unsigned int)v42;
}
