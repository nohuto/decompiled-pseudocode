/*
 * XREFs of ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180038904
 * Callers:
 *     ?Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KPEAHPEBKPEAK@Z @ 0x180038C58 (-Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEB.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_GUID@@PEAHPEBKPEAK@Z @ 0x180039004 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_.c)
 *     ?Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KKPEAHPEBKPEAK@Z @ 0x180039344 (-Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResou.c)
 *     ?Handle_RS_Apply2@ResourceManagerServerProxy@@QEAAJK@Z @ 0x180039ABC (-Handle_RS_Apply2@ResourceManagerServerProxy@@QEAAJK@Z.c)
 *     ?Handle_RS_Apply@ResourceManagerServerProxy@@QEAAJKK@Z @ 0x180039B50 (-Handle_RS_Apply@ResourceManagerServerProxy@@QEAAJKK@Z.c)
 *     ?Handle_RS_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJKPEAK@Z @ 0x180039BF4 (-Handle_RS_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJKPEAK@Z.c)
 *     ?Handle_RS_ForceReleaseResources@ResourceManagerServerProxy@@QEAAJK@Z @ 0x180039D90 (-Handle_RS_ForceReleaseResources@ResourceManagerServerProxy@@QEAAJK@Z.c)
 *     ?Handle_RS_GetPid@ResourceManagerServerProxy@@QEAAJKPEAK@Z @ 0x180039E48 (-Handle_RS_GetPid@ResourceManagerServerProxy@@QEAAJKPEAK@Z.c)
 *     ?Handle_RS_GetResourceSetInfo@ResourceManagerServerProxy@@QEAAJKPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180039EF4 (-Handle_RS_GetResourceSetInfo@ResourceManagerServerProxy@@QEAAJKPEAU_ResourceSetInfo@ExecutionMo.c)
 *     ?Handle_RS_IsApplied@ResourceManagerServerProxy@@QEAAJKPEAH@Z @ 0x18003A058 (-Handle_RS_IsApplied@ResourceManagerServerProxy@@QEAAJKPEAH@Z.c)
 *     ?Handle_RS_IsReleased@ResourceManagerServerProxy@@QEAAJKPEAH@Z @ 0x18003A108 (-Handle_RS_IsReleased@ResourceManagerServerProxy@@QEAAJKPEAH@Z.c)
 *     ?Handle_RS_IsValid@ResourceManagerServerProxy@@QEAAJKPEAH@Z @ 0x18003A1B8 (-Handle_RS_IsValid@ResourceManagerServerProxy@@QEAAJKPEAH@Z.c)
 *     ?Handle_RS_NotifyPendingResourceSetTransition@ResourceManagerServerProxy@@QEAAJKPEAURmResourceSetInfo@@@Z @ 0x18003A268 (-Handle_RS_NotifyPendingResourceSetTransition@ResourceManagerServerProxy@@QEAAJKPEAURmResourceSe.c)
 *     ?Handle_RS_ReleaseResources@ResourceManagerServerProxy@@QEAAJKH@Z @ 0x18003A354 (-Handle_RS_ReleaseResources@ResourceManagerServerProxy@@QEAAJKH@Z.c)
 *     ?Handle_RS_SetAutoRelease@ResourceManagerServerProxy@@QEAAJKH@Z @ 0x18003A424 (-Handle_RS_SetAutoRelease@ResourceManagerServerProxy@@QEAAJKH@Z.c)
 *     ?Handle_RS_SetExternalResourcePriorities@ResourceManagerServerProxy@@QEAAJKKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x18003A4D4 (-Handle_RS_SetExternalResourcePriorities@ResourceManagerServerProxy@@QEAAJKKPEAU_ResourceInfo@Ex.c)
 *     ?GetResourceSetInfos@ResourceManager@ExecutionModel@@UEAAJKPEAURmResourceSetInfo@@PEAK@Z @ 0x180043DF0 (-GetResourceSetInfos@ResourceManager@ExecutionModel@@UEAAJKPEAURmResourceSetInfo@@PEAK@Z.c)
 * Callees:
 *     ??$_HashRange@PEBG@utl@@YAIPEBG0I@Z @ 0x18001C480 (--$_HashRange@PEBG@utl@@YAIPEBG0I@Z.c)
 */

_QWORD *__fastcall utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 **a4,
        __int64 *a5,
        _QWORD *a6)
{
  __int64 v8; // r11
  int v9; // eax
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 *v12; // rcx
  _QWORD *result; // rax

  v8 = a1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v9 = utl::_HashRange<unsigned short const *>(a3, (unsigned __int64)(a3 + 2));
    v10 = 32769 * (((unsigned int)(9 * v9) >> 11) ^ (9 * v9));
    v11 = *(_QWORD *)(v8 + 16) + 16 * (v10 & ((8LL << *(_BYTE *)(v8 + 32)) - 1));
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
  *a4 = (__int64 *)v8;
  *a5 = v8;
  result = a6;
  *a6 = 0LL;
  return result;
}
