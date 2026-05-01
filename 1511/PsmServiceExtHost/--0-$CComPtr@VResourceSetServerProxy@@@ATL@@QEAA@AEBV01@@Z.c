/*
 * XREFs of ??0?$CComPtr@VResourceSetServerProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x180038A5C
 * Callers:
 *     ??$emplace@AEAKAEAV?$CComPtr@VResourceSetServerProxy@@@ATL@@@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@utl@@_N@1@AEAKAEAV?$CComPtr@VResourceSetServerProxy@@@ATL@@@Z @ 0x1800389D0 (--$emplace@AEAKAEAV-$CComPtr@VResourceSetServerProxy@@@ATL@@@-$_HashTable@KU-$pair@$$CBKV-$CComP.c)
 *     ?Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KPEAHPEBKPEAK@Z @ 0x180038C58 (-Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEB.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_GUID@@PEAHPEBKPEAK@Z @ 0x180039004 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_.c)
 *     ?Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KKPEAHPEBKPEAK@Z @ 0x180039344 (-Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResou.c)
 *     ?Handle_RM_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJPEAURmResourceSetInfo@@PEAK@Z @ 0x1800396F4 (-Handle_RM_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJPEAURmResourceSetInfo@@PEA.c)
 *     ?Handle_RS_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJKPEAK@Z @ 0x180039BF4 (-Handle_RS_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJKPEAK@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 *__fastcall ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi

  v2 = *a2;
  *a1 = *a2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a1;
}
