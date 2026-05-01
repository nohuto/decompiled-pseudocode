/*
 * XREFs of ?Init@ResourceSetProxy@ExecutionModel@@QEAAJ_KW4RmResourceSetType@@PEAUIResourceSetCallback@2@@Z @ 0x18000BF64
 * Callers:
 *     ?CreateTerminalResourceSet@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180002960 (-CreateTerminalResourceSet@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180005F60 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetProxy::Init(__int64 a1, __int64 a2, int a3, struct IUnknown *a4)
{
  unsigned int v4; // ebx
  struct IUnknown **v5; // rcx

  v4 = 0;
  if ( a2 )
  {
    *(_QWORD *)(a1 + 24) = a2;
    *(_DWORD *)(a1 + 32) = a3;
    v5 = (struct IUnknown **)(a1 + 40);
    if ( *v5 != a4 )
      ATL::AtlComPtrAssign(v5, a4);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
