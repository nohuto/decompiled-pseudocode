/*
 * XREFs of ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x1800365D0
 * Callers:
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x18002D09C (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004C9C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180010B48 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@K.c)
 *     ?RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_BUFFER@@@Z @ 0x1800153B0 (-RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017C20 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::AvailabilityCheck(
        __int64 *a1,
        ExecutionModel::BaseResourceSet *a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        unsigned int a5,
        unsigned int a6,
        bool *a7)
{
  __int64 v9; // r13
  int v11; // ebx
  struct ExecutionModel::ResourceManager *v12; // rcx
  __int64 v13; // rdx
  unsigned __int8 *v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  volatile signed __int32 *v26; // rdi
  char v28; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v29[7]; // [rsp+41h] [rbp-BFh] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  ExecutionModel::BaseResourceSet *v31; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v32[560]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v33[560]; // [rsp+290h] [rbp+190h] BYREF

  P = 0LL;
  v9 = a1[28];
  v31 = a2;
  if ( a4 )
  {
    memset_0(v32, 0, 0x228uLL);
    *(_DWORD *)v32 = a6;
    if ( (int)RmpActivityHostFindByTypeAndIdentifier(v9, 1, v32, (volatile signed __int32 **)&P) < 0
      && (*(int (__fastcall **)(__int64 *, _QWORD, _BYTE *))(*a1 + 80))(a1, a6, v33) >= 0 )
    {
      v13 = 4LL;
      v14 = v32;
      v15 = v33;
      do
      {
        v16 = v15[1];
        *(_OWORD *)v14 = *v15;
        v17 = v15[2];
        *((_OWORD *)v14 + 1) = v16;
        v18 = v15[3];
        *((_OWORD *)v14 + 2) = v17;
        v19 = v15[4];
        *((_OWORD *)v14 + 3) = v18;
        v20 = v15[5];
        *((_OWORD *)v14 + 4) = v19;
        v21 = v15[6];
        *((_OWORD *)v14 + 5) = v20;
        v22 = v15[7];
        v15 += 8;
        *((_OWORD *)v14 + 6) = v21;
        v14 += 128;
        *((_OWORD *)v14 - 1) = v22;
        --v13;
      }
      while ( v13 );
      v23 = *v15;
      v24 = v15[1];
      v25 = *((_QWORD *)v15 + 4);
      *(_OWORD *)v14 = v23;
      *((_OWORD *)v14 + 1) = v24;
      *((_QWORD *)v14 + 4) = v25;
      RmpActivityHostFindByTypeAndIdentifier(a1[28], 0, v32, (volatile signed __int32 **)&P);
    }
    v26 = (volatile signed __int32 *)P;
    if ( P )
      ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
        v12,
        2u,
        a3,
        a4,
        (struct _RM_ACTIVITY_HOST *)P);
    RmpPolicyRequestBufferInitialize(a4, a3, (struct _RM_POLICY_REQUEST_BUFFER *)(v9 + 536));
    v11 = ExecutionModel::BaseResourceSet::CheckResourceAvailability(v31, v9 + 536, a6, a5, 1, v29, &v28, 0LL);
    if ( v11 >= 0 )
      *a7 = v28 && !v29[0];
    if ( v26 )
      RmpObjectRelease(v26);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v11;
}
