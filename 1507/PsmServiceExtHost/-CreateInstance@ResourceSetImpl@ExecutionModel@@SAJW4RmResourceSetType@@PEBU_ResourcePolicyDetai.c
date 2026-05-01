/*
 * XREFs of ?CreateInstance@ResourceSetImpl@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAUIResourceSetCallback@2@PEAXPEAVHostResourceInfo@2@PEAPEAV12@@Z @ 0x180047968
 * Callers:
 *     ?CreateTerminalResourceSet@ResourceSetImpl@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180014CC0 (-CreateTerminalResourceSet@ResourceSetImpl@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??0ResourceSetImpl@ExecutionModel@@AEAA@W4RmResourceSetType@@AEBU_ResourcePolicyDetails@@PEAVHostResourceInfo@1@PEAUIResourceSetCallback@1@PEAX@Z @ 0x18002E744 (--0ResourceSetImpl@ExecutionModel@@AEAA@W4RmResourceSetType@@AEBU_ResourcePolicyDetails@@PEAVHos.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::CreateInstance(
        int a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  int v6; // edi
  unsigned int v11; // ebp
  __int64 v12; // rsi
  void *v13; // rax
  int v14; // eax
  __int64 result; // rax

  v6 = 0;
  v11 = 0;
  v12 = 0LL;
  if ( a3 && a5 )
  {
    v13 = malloc(0xC0uLL);
    if ( v13 )
      v12 = ExecutionModel::ResourceSetImpl::ResourceSetImpl((__int64)v13, a1, a2, a5, a3, a4);
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v14 = 1;
      goto LABEL_10;
    }
    v11 = -2147024882;
  }
  else
  {
    v11 = -2147024809;
  }
  v14 = 0;
LABEL_10:
  LOBYTE(v6) = v12 != 0;
  if ( v14 != v6 )
    __int2c();
  result = v11;
  *a6 = v12;
  return result;
}
