/*
 * XREFs of ?SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x1800039C4
 * Callers:
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON@@@Z @ 0x18000382C (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x18000D87C (-TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     ?RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x18000E560 (-RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@_N@Z @ 0x1800113A8 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@_N@.c)
 *     ?OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z @ 0x18003D370 (-OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z.c)
 *     ?ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18003D984 (-ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?SendReleaseRequests@ModernActivationResourceInfo@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x18003E228 (-SendReleaseRequests@ModernActivationResourceInfo@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ?RmpActivityHostRevokeAllResourceSetsCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@PEAX@Z @ 0x180040A80 (-RmpActivityHostRevokeAllResourceSetsCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@Executi.c)
 * Callees:
 *     ?IsReleased@BaseResourceSet@ExecutionModel@@QEBA_NXZ @ 0x18000B730 (-IsReleased@BaseResourceSet@ExecutionModel@@QEBA_NXZ.c)
 *     _TlgCreateWsz @ 0x180019D30 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgCreateSid @ 0x18001CD1C (_TlgCreateSid.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

BOOLEAN __fastcall ExecutionModel::BaseResourceSet::SendReleaseRequest(__int64 a1, unsigned int a2)
{
  BOOLEAN result; // al
  __int64 v5; // rcx
  __int64 v6; // rcx
  const WCHAR *v7; // rdx
  const struct _TlgProvider_t *v8; // rcx
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  unsigned int v11; // [rsp+30h] [rbp-79h] BYREF
  int v12; // [rsp+34h] [rbp-75h] BYREF
  int v13; // [rsp+38h] [rbp-71h] BYREF
  __int64 v14; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  __int64 *v16; // [rsp+70h] [rbp-39h]
  __int64 v17; // [rsp+78h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+90h] [rbp-19h] BYREF
  int *v20; // [rsp+A0h] [rbp-9h]
  __int64 v21; // [rsp+A8h] [rbp-1h]
  int *v22; // [rsp+B0h] [rbp+7h]
  __int64 v23; // [rsp+B8h] [rbp+Fh]
  __int64 v24; // [rsp+C0h] [rbp+17h]
  __int64 v25; // [rsp+C8h] [rbp+1Fh]
  int *v26; // [rsp+D0h] [rbp+27h]
  __int64 v27; // [rsp+D8h] [rbp+2Fh]

  *(_DWORD *)(a1 + 1356) &= ~2u;
  result = ExecutionModel::BaseResourceSet::IsReleased((ExecutionModel::BaseResourceSet *)a1);
  if ( !result || *(_DWORD *)(v5 + 1352) && (*(_BYTE *)(v5 + 1356) & 4) != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(a1, a2);
    *(_DWORD *)(a1 + 1356) |= 1u;
  }
  else if ( *(_QWORD *)(v5 + 184) && (unsigned int)dword_180071060 > 4 )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)v5, 9uLL);
    if ( result )
    {
      v7 = *(const WCHAR **)(v6 + 32);
      v14 = v6;
      v16 = &v14;
      v17 = 8LL;
      TlgCreateWsz(&pDesc, v7);
      TlgCreateSid(&v19, (const SID *)(a1 + 64));
      v8 = (const struct _TlgProvider_t *)*(unsigned int *)(a1 + 132);
      v20 = &v12;
      v13 = *(_DWORD *)(a1 + 136);
      v22 = &v13;
      v24 = a1 + 144;
      v26 = (int *)&v11;
      v12 = (int)v8;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 8LL;
      v11 = a2;
      v27 = 4LL;
      return TlgWrite(v8, &unk_180063D50, v9, v10, 9u, &pData);
    }
  }
  return result;
}
