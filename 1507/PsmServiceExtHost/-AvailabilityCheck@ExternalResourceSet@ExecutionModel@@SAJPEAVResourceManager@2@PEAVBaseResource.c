/*
 * XREFs of ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x18003F1E8
 * Callers:
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x180038730 (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 * Callees:
 *     ?RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_BUFFER@@@Z @ 0x180002280 (-RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180002D10 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     RmpPsmAppInstanceIdInitializeFromCStr @ 0x180004CC0 (RmpPsmAppInstanceIdInitializeFromCStr.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800052E0 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@W44PendType@2@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEA_N4PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18000E980 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@K.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::AvailabilityCheck(
        __int64 *a1,
        ExecutionModel::BaseResourceSet *a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        int a5,
        unsigned int a6,
        bool *a7)
{
  int v11; // ebx
  struct ExecutionModel::ResourceManager *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  WCHAR *v15; // rcx
  wchar_t *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  volatile signed __int32 *v27; // rdi
  int *v28; // rbx
  char v30; // [rsp+50h] [rbp-B0h] BYREF
  char v31; // [rsp+51h] [rbp-AFh] BYREF
  struct _RM_ACTIVITY_HOST *v32; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  int v34; // [rsp+64h] [rbp-9Ch] BYREF
  int v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  _BYTE Src[80]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR v38[280]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t Destination[280]; // [rsp+300h] [rbp+200h] BYREF
  WCHAR v40[280]; // [rsp+530h] [rbp+430h] BYREF
  wchar_t Source[232]; // [rsp+760h] [rbp+660h] BYREF

  v32 = 0LL;
  if ( a4 )
  {
    memset_0(v38, 0, 0x228uLL);
    *(_DWORD *)v38 = a6;
    if ( (int)RmpActivityHostFindByTypeAndIdentifier(1, v38, (volatile signed __int32 **)&v32) < 0 )
    {
      v13 = *a1;
      v34 = 464;
      if ( (*(int (__fastcall **)(__int64 *, _QWORD, wchar_t *, int *, _BYTE *, int *, int *, __int64 *))(v13 + 384))(
             a1,
             a6,
             Source,
             &v34,
             Src,
             &v33,
             &v35,
             &v36) >= 0 )
      {
        RmpPsmAppInstanceIdInitializeFromCStr(Destination, Source, Src, v33, v35, v36);
        v14 = 4LL;
        v15 = v40;
        v16 = Destination;
        do
        {
          v17 = *((_OWORD *)v16 + 1);
          *(_OWORD *)v15 = *(_OWORD *)v16;
          v18 = *((_OWORD *)v16 + 2);
          *((_OWORD *)v15 + 1) = v17;
          v19 = *((_OWORD *)v16 + 3);
          *((_OWORD *)v15 + 2) = v18;
          v20 = *((_OWORD *)v16 + 4);
          *((_OWORD *)v15 + 3) = v19;
          v21 = *((_OWORD *)v16 + 5);
          *((_OWORD *)v15 + 4) = v20;
          v22 = *((_OWORD *)v16 + 6);
          *((_OWORD *)v15 + 5) = v21;
          v23 = *((_OWORD *)v16 + 7);
          v16 += 64;
          *((_OWORD *)v15 + 6) = v22;
          v15 += 64;
          *((_OWORD *)v15 - 1) = v23;
          --v14;
        }
        while ( v14 );
        v24 = *(_OWORD *)v16;
        v25 = *((_OWORD *)v16 + 1);
        v26 = *((_QWORD *)v16 + 4);
        *(_OWORD *)v15 = v24;
        *((_OWORD *)v15 + 1) = v25;
        *((_QWORD *)v15 + 4) = v26;
        RmpActivityHostFindByTypeAndIdentifier(0, v40, (volatile signed __int32 **)&v32);
      }
    }
    v27 = (volatile signed __int32 *)v32;
    if ( v32 )
      ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(v12, a3, a4, v32);
    v28 = (int *)RmSvcGlobals;
    RmpPolicyRequestBufferInitialize(a4, a3, (struct _RM_POLICY_REQUEST_BUFFER *)((char *)RmSvcGlobals + 384));
    v11 = ExecutionModel::BaseResourceSet::CheckResourceAvailability(a2, v28 + 96, a6, a5, 1, 0LL, &v31, &v30, 0LL);
    if ( v11 >= 0 )
      *a7 = v30 && !v31;
    if ( v27 )
      RmpObjectRelease(v27);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v11;
}
