/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@2@XZ @ 0x1800187FC
 * Callers:
 *     ??0PropertyMap@Input@@QEAA@XZ @ 0x180011584 (--0PropertyMap@Input@@QEAA@XZ.c)
 *     ?CreateFromStream@PropertyNode@Input@@KAJIPEAUIStream@@PEAKPEAPEAV12@@Z @ 0x180027368 (-CreateFromStream@PropertyNode@Input@@KAJIPEAUIStream@@PEAKPEAPEAV12@@Z.c)
 *     ?MoveConstruct@PropertyMap@Input@@UEAAPEAVPropertyNode@2@XZ @ 0x1800283A0 (-MoveConstruct@PropertyMap@Input@@UEAAPEAVPropertyNode@2@XZ.c)
 *     ??0SpatialInputControllerCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x180078088 (--0SpatialInputControllerCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessa.c)
 *     ??0?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@QEAA@XZ @ 0x18008E2CC (--0-$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Micros.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

_QWORD *std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Buyheadnode()
{
  _QWORD *result; // rax
  _QWORD *v1; // rcx

  result = operator new(0x38uLL);
  try
  {
    if ( result )
      *result = result;
    if ( result != (_QWORD *)-8LL )
      result[1] = result;
    v1 = result + 2;
    if ( result != (_QWORD *)-16LL )
      *v1 = result;
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<_GUID const,Input::PropertyNode *>,void *>>>::deallocate(
      (__int64)v1,
      (char *)result);
    throw;
  }
  *((_WORD *)result + 12) = 257;
  return result;
}
