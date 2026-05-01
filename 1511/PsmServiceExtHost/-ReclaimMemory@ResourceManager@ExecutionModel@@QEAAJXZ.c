/*
 * XREFs of ?ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18003D984
 * Callers:
 *     ?ReclaimMemory@ResourceManager@ExecutionModel@@UEAAJPEAUIReclaimMemoryCallback@2@@Z @ 0x18003DB10 (-ReclaimMemory@ResourceManager@ExecutionModel@@UEAAJPEAUIReclaimMemoryCallback@2@@Z.c)
 * Callees:
 *     RmpActivityHostFindPsmResourceSets @ 0x180002984 (RmpActivityHostFindPsmResourceSets.c)
 *     ?SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x1800039C4 (-SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x18000DDEC (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPEAVResourceSet@2@@Z @ 0x18003BF1C (-CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPE.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ReclaimMemory(ExecutionModel::ResourceManager *this)
{
  struct ExecutionModel::BaseResourceSet *v1; // rdx
  int v2; // eax
  ExecutionModel::ResourceSet *v3; // rbx
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  unsigned int v7; // esi
  __int64 (__fastcall *v8)(ExecutionModel::ResourceSet *); // rdi
  __int64 v9; // rcx
  __int64 PsmResourceSets; // rax
  _QWORD *v11; // rsi
  _QWORD *i; // rdi
  int v14; // [rsp+38h] [rbp-9h] BYREF
  ExecutionModel::ResourceSet *v15; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  int *v17; // [rsp+68h] [rbp+27h]
  int v18; // [rsp+70h] [rbp+2Fh]
  int v19; // [rsp+74h] [rbp+33h]
  ExecutionModel::ResourceSet **v20; // [rsp+78h] [rbp+37h]
  int v21; // [rsp+80h] [rbp+3Fh]
  int v22; // [rsp+84h] [rbp+43h]

  v1 = (struct ExecutionModel::BaseResourceSet *)*((_QWORD *)this + 23);
  v15 = 0LL;
  v2 = ExecutionModel::ResourceManager::CheckAllPreemtableResourceSets(this, v1, &v15);
  v3 = v15;
  v14 = v2;
  if ( v2 >= 0 )
  {
    if ( v15 )
    {
      if ( ExecutionModel::ResourceSet::IsLegacy(v15) )
      {
        ExecutionModel::BaseResourceSet::SendReleaseRequest(v9, 1u);
      }
      else
      {
        PsmResourceSets = RmpActivityHostFindPsmResourceSets(
                            (wchar_t **)v3 + 4,
                            (char *)v3 + 64,
                            *((unsigned int *)v3 + 33),
                            *((_DWORD *)v3 + 34),
                            *((_QWORD *)v3 + 18));
        if ( PsmResourceSets )
        {
          v11 = (_QWORD *)(PsmResourceSets + 24);
          for ( i = *(_QWORD **)(PsmResourceSets + 24); i != v11; i = (_QWORD *)*i )
            ExecutionModel::BaseResourceSet::SendReleaseRequest(i[2], 1u);
        }
      }
    }
    else
    {
      v14 = -2147220992;
    }
  }
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v19 = 0;
    v22 = 0;
    v17 = &v14;
    v20 = &v15;
    v18 = (int)cData;
    v15 = v3;
    v21 = 8;
    TlgWrite(cData, &unk_180061C75, v5, v6, (UINT32)cData, &pData);
  }
  v7 = v14;
  if ( v3 )
  {
    v8 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v3 + 16LL);
    if ( v8 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v3);
    else
      v8(v3);
  }
  return v7;
}
