/*
 * XREFs of ?RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX2KW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180001C30
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002114 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     RmpPsmAppInstanceIdInitializeFromCStr @ 0x180002A70 (RmpPsmAppInstanceIdInitializeFromCStr.c)
 *     ?_EmplaceImpl@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x180002E0C (-_EmplaceImpl@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX4_NKW46PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x1800030DC (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001F5B0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAcquireResources(
        _QWORD *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        const struct _TlgProvider_t *a11,
        _QWORD *a12)
{
  __int64 v12; // r14
  _QWORD *v14; // r15
  const struct _TlgProvider_t *v16; // rcx
  unsigned int v17; // edx
  unsigned int *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  _OWORD *v21; // rcx
  wchar_t *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int64 v32; // rax
  PVOID v33; // r12
  char v34; // si
  __int64 v35; // rdi
  unsigned int *v36; // r15
  __int64 v37; // r9
  int v38; // eax
  _QWORD *v39; // rax
  int v40; // r8d
  __int64 v41; // rsi
  const struct _TlgProvider_t *v42; // rcx
  const GUID *v43; // r8
  const GUID *v44; // r9
  char v46; // [rsp+80h] [rbp-80h]
  int v47; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v48; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v49; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v50; // [rsp+98h] [rbp-68h] BYREF
  PVOID P; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v52; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-50h] BYREF
  const struct _TlgProvider_t *v54; // [rsp+B8h] [rbp-48h] BYREF
  int v55; // [rsp+C0h] [rbp-40h] BYREF
  int v56; // [rsp+C4h] [rbp-3Ch] BYREF
  int v57; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v58; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v59[3]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE Src[80]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v61[140]; // [rsp+140h] [rbp+40h] BYREF
  wchar_t Destination[280]; // [rsp+370h] [rbp+270h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+5A0h] [rbp+4A0h] BYREF
  int *v64; // [rsp+5C0h] [rbp+4C0h]
  int v65; // [rsp+5C8h] [rbp+4C8h]
  int v66; // [rsp+5CCh] [rbp+4CCh]
  _QWORD *v67; // [rsp+5D0h] [rbp+4D0h]
  int v68; // [rsp+5D8h] [rbp+4D8h]
  int v69; // [rsp+5DCh] [rbp+4DCh]
  unsigned int *v70; // [rsp+5E0h] [rbp+4E0h]
  int v71; // [rsp+5E8h] [rbp+4E8h]
  int v72; // [rsp+5ECh] [rbp+4ECh]
  const struct _TlgProvider_t **v73; // [rsp+5F0h] [rbp+4F0h]
  int v74; // [rsp+5F8h] [rbp+4F8h]
  int v75; // [rsp+5FCh] [rbp+4FCh]
  __int64 *v76; // [rsp+600h] [rbp+500h]
  int v77; // [rsp+608h] [rbp+508h]
  int v78; // [rsp+60Ch] [rbp+50Ch]
  unsigned int **v79; // [rsp+610h] [rbp+510h]
  int v80; // [rsp+618h] [rbp+518h]
  int v81; // [rsp+61Ch] [rbp+51Ch]
  _QWORD *v82; // [rsp+620h] [rbp+520h]
  int v83; // [rsp+628h] [rbp+528h]
  int v84; // [rsp+62Ch] [rbp+52Ch]
  PVOID *p_P; // [rsp+630h] [rbp+530h]
  int v86; // [rsp+638h] [rbp+538h]
  int v87; // [rsp+63Ch] [rbp+53Ch]
  _QWORD *v88; // [rsp+640h] [rbp+540h]
  int v89; // [rsp+648h] [rbp+548h]
  int v90; // [rsp+64Ch] [rbp+54Ch]
  wchar_t Source[232]; // [rsp+650h] [rbp+550h] BYREF

  v47 = 0;
  v12 = 0LL;
  P = 0LL;
  v14 = a12;
  v49 = a1;
  v16 = a11;
  v48 = a4;
  v52 = a3;
  v54 = a11;
  v50 = a12;
  v53 = 0LL;
  if ( a2 && a3 && a12 )
  {
    v17 = 0;
    v46 = 1;
    if ( a2 )
    {
      v18 = a3;
      while ( *v18 - 22 <= 4 )
      {
        ++v17;
        v18 += 6;
        if ( v17 >= a2 )
          goto LABEL_8;
      }
      v46 = 0;
    }
LABEL_8:
    RtlEnterCriticalSection(&RmpGlobalLock);
    memset_0(v61, 0, 0x228uLL);
    v61[0] = a5;
    if ( (int)RmpActivityHostFindByTypeAndIdentifier(1LL, v61, &P) < 0 )
    {
      v19 = *a1;
      v57 = 464;
      v47 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, wchar_t *, int *, _BYTE *, int *, int *, __int64 *))(v19 + 384))(
              a1,
              a5,
              Source,
              &v57,
              Src,
              &v56,
              &v55,
              &v58);
      if ( v47 >= 0 )
      {
        RmpPsmAppInstanceIdInitializeFromCStr(Destination, Source, Src, v55, v58);
        v20 = 4LL;
        v21 = v61;
        v22 = Destination;
        do
        {
          v23 = *((_OWORD *)v22 + 1);
          *v21 = *(_OWORD *)v22;
          v24 = *((_OWORD *)v22 + 2);
          v21[1] = v23;
          v25 = *((_OWORD *)v22 + 3);
          v21[2] = v24;
          v26 = *((_OWORD *)v22 + 4);
          v21[3] = v25;
          v27 = *((_OWORD *)v22 + 5);
          v21[4] = v26;
          v28 = *((_OWORD *)v22 + 6);
          v21[5] = v27;
          v29 = *((_OWORD *)v22 + 7);
          v22 += 64;
          v21[6] = v28;
          v21 += 8;
          *(v21 - 1) = v29;
          --v20;
        }
        while ( v20 );
        v30 = *(_OWORD *)v22;
        v31 = *((_OWORD *)v22 + 1);
        v32 = *((_QWORD *)v22 + 4);
        *v21 = v30;
        v21[1] = v31;
        *((_QWORD *)v21 + 4) = v32;
        RmpActivityHostFindByTypeAndIdentifier(0LL, v61, &P);
      }
    }
    v33 = P;
    v34 = 0;
    v35 = 0LL;
    if ( a2 )
    {
      v36 = v52;
      while ( 1 )
      {
        v47 = ExecutionModel::ResourceManager::RmAccessCheckEx(v49, *v36, a5, 0LL);
        if ( v47 < 0 )
          break;
        v35 = (unsigned int)(v35 + 1);
        v36 += 6;
        if ( (unsigned int)v35 >= a2 )
          goto LABEL_17;
      }
      if ( (a8 & 1) != 0 )
      {
        if ( !v46
          || (LOBYTE(v37) = 1,
              v47 = ExecutionModel::ResourceManager::RmAccessCheckEx(v49, v52[6 * v35], a5, v37),
              v47 >= 0) )
        {
          v34 = 1;
LABEL_17:
          v14 = v50;
          goto LABEL_18;
        }
      }
    }
    else
    {
LABEL_18:
      v38 = ExecutionModel::ExternalResourceSet::CreateInstance(
              v49,
              v49[22],
              a2,
              v52,
              v48,
              a5,
              a6,
              a7,
              v34,
              a8,
              a9,
              a10,
              v33,
              v54,
              &v53);
      v12 = v53;
      v47 = v38;
      if ( v38 >= 0 )
      {
        *v14 = v53;
        v39 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
        v41 = (__int64)v39;
        if ( v39 )
        {
          v39[3] = *v14;
          v39[4] = v12;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        }
        else
        {
          v41 = 0LL;
        }
        utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_EmplaceImpl(
          (_DWORD)v49 + 216,
          (unsigned int)v59,
          v40,
          0,
          v41);
      }
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
    if ( v33 )
      RmpObjectRelease(v33);
  }
  else
  {
    v47 = -2147024809;
  }
  if ( v54 )
    LOBYTE(v16) = *(_BYTE *)v54;
  else
    LOBYTE(v16) = 0;
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v16, 9uLL) )
  {
    v66 = 0;
    v69 = 0;
    v72 = 0;
    v75 = 0;
    v78 = 0;
    v81 = 0;
    v84 = 0;
    v87 = 0;
    v90 = 0;
    v64 = &v47;
    v67 = v59;
    v70 = &v48;
    v73 = &v54;
    LODWORD(v53) = a5;
    v76 = &v53;
    LODWORD(v52) = a8;
    v79 = &v52;
    LODWORD(v50) = a9;
    v82 = &v50;
    LODWORD(P) = a10;
    p_P = &P;
    LODWORD(v49) = (unsigned __int8)v42;
    v88 = &v49;
    v65 = 4;
    v59[0] = v12;
    v68 = 8;
    v48 = a2;
    v71 = 4;
    LODWORD(v54) = (_DWORD)v44;
    v74 = 4;
    v77 = 4;
    v80 = 4;
    v83 = 4;
    v86 = 4;
    v89 = 4;
    TlgWrite(v42, &unk_180061B27, v43, v44, 0xBu, &pData);
  }
  return (unsigned int)v47;
}
