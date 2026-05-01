/*
 * XREFs of ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18003E16C
 * Callers:
 *     ?Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KPEAHPEBKPEAK@Z @ 0x180031A38 (-Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEB.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_GUID@@PEAHPEBKPEAK@Z @ 0x180031DE4 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_.c)
 *     ?Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KKPEAHPEBKPEAK@Z @ 0x180032124 (-Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResou.c)
 *     ?Handle_RS_Apply2@ResourceManagerServerProxy@@QEAAJK@Z @ 0x18003289C (-Handle_RS_Apply2@ResourceManagerServerProxy@@QEAAJK@Z.c)
 *     ?Handle_RS_Apply@ResourceManagerServerProxy@@QEAAJKK@Z @ 0x180032930 (-Handle_RS_Apply@ResourceManagerServerProxy@@QEAAJKK@Z.c)
 *     ?Handle_RS_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJKPEAK@Z @ 0x1800329D4 (-Handle_RS_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJKPEAK@Z.c)
 *     ?Handle_RS_ForceReleaseResources@ResourceManagerServerProxy@@QEAAJK@Z @ 0x180032B70 (-Handle_RS_ForceReleaseResources@ResourceManagerServerProxy@@QEAAJK@Z.c)
 *     ?Handle_RS_GetPid@ResourceManagerServerProxy@@QEAAJKPEAK@Z @ 0x180032C28 (-Handle_RS_GetPid@ResourceManagerServerProxy@@QEAAJKPEAK@Z.c)
 *     ?Handle_RS_GetResourceSetInfo@ResourceManagerServerProxy@@QEAAJKPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180032CD4 (-Handle_RS_GetResourceSetInfo@ResourceManagerServerProxy@@QEAAJKPEAU_ResourceSetInfo@ExecutionMo.c)
 *     ?Handle_RS_IsApplied@ResourceManagerServerProxy@@QEAAJKPEAH@Z @ 0x180032E30 (-Handle_RS_IsApplied@ResourceManagerServerProxy@@QEAAJKPEAH@Z.c)
 *     ?Handle_RS_IsReleased@ResourceManagerServerProxy@@QEAAJKPEAH@Z @ 0x180032EE0 (-Handle_RS_IsReleased@ResourceManagerServerProxy@@QEAAJKPEAH@Z.c)
 *     ?Handle_RS_IsValid@ResourceManagerServerProxy@@QEAAJKPEAH@Z @ 0x180032F90 (-Handle_RS_IsValid@ResourceManagerServerProxy@@QEAAJKPEAH@Z.c)
 *     ?Handle_RS_NotifyPendingResourceSetTransition@ResourceManagerServerProxy@@QEAAJKPEAURmResourceSetInfo@@@Z @ 0x180033040 (-Handle_RS_NotifyPendingResourceSetTransition@ResourceManagerServerProxy@@QEAAJKPEAURmResourceSe.c)
 *     ?Handle_RS_ReleaseResources@ResourceManagerServerProxy@@QEAAJKH@Z @ 0x18003312C (-Handle_RS_ReleaseResources@ResourceManagerServerProxy@@QEAAJKH@Z.c)
 *     ?Handle_RS_SetAutoRelease@ResourceManagerServerProxy@@QEAAJKH@Z @ 0x1800331FC (-Handle_RS_SetAutoRelease@ResourceManagerServerProxy@@QEAAJKH@Z.c)
 *     ?Handle_RS_SetExternalResourcePriorities@ResourceManagerServerProxy@@QEAAJKKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x1800332AC (-Handle_RS_SetExternalResourcePriorities@ResourceManagerServerProxy@@QEAAJKKPEAU_ResourceInfo@Ex.c)
 *     ?GetResourceSetInfos@ResourceManager@ExecutionModel@@UEAAJKPEAURmResourceSetInfo@@PEAK@Z @ 0x18003E930 (-GetResourceSetInfos@ResourceManager@ExecutionModel@@UEAAJKPEAURmResourceSetInfo@@PEAK@Z.c)
 * Callees:
 *     ??$_HashRange@PEBG@utl@@YA_KPEBG0_K@Z @ 0x1800048C4 (--$_HashRange@PEBG@utl@@YA_KPEBG0_K@Z.c)
 */

_QWORD *__fastcall utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 **a4,
        __int64 *a5,
        _QWORD *a6)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 *v12; // rcx
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 16) )
  {
    v9 = utl::_HashRange<unsigned short const *>(a3, (unsigned __int64)(a3 + 2));
    v10 = 32769 * ((9 * v9) ^ ((9 * v9) >> 11));
    v11 = *(_QWORD *)(a1 + 16) + 16 * (v10 & ((8LL << *(_BYTE *)(a1 + 32)) - 1));
    v12 = *(__int64 **)v11;
    if ( *(_QWORD *)v11 )
    {
      while ( v12 != **(__int64 ***)(v11 + 8) )
      {
        if ( v12[2] >= v10 )
        {
          if ( v12[2] > v10 )
            break;
          if ( *(_DWORD *)a3 == *((_DWORD *)v12 + 6) )
          {
            *a4 = v12;
            *a5 = *v12;
            result = a6;
            *a6 = 1LL;
            return result;
          }
        }
        v12 = (__int64 *)*v12;
      }
    }
  }
  *a4 = (__int64 *)a1;
  *a5 = a1;
  result = a6;
  *a6 = 0LL;
  return result;
}
