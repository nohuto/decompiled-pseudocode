/*
 * XREFs of ?CreateInstance@ResourceSetImpl@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAUIResourceSetCallback@2@PEAXPEAVHostResourceInfo@2@PEAPEAV12@@Z @ 0x1800055BC
 * Callers:
 *     ?CreateTerminalResourceSet@ResourceSetImpl@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180013B80 (-CreateTerminalResourceSet@ResourceSetImpl@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??0ResourceSetImpl@ExecutionModel@@AEAA@W4RmResourceSetType@@AEBU_ResourcePolicyDetails@@PEAVHostResourceInfo@1@PEAUIResourceSetCallback@1@PEAX@Z @ 0x180035DC0 (--0ResourceSetImpl@ExecutionModel@@AEAA@W4RmResourceSetType@@AEBU_ResourcePolicyDetails@@PEAVHos.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::CreateInstance(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  int v6; // edi
  unsigned int v11; // ebp
  __int64 v12; // rsi
  int v13; // eax
  __int64 result; // rax
  void *v15; // rax

  v6 = 0;
  v11 = 0;
  v12 = 0LL;
  if ( !a3 || !a5 )
  {
    v11 = -2147024809;
LABEL_3:
    v13 = 0;
    goto LABEL_4;
  }
  v15 = malloc(0xD0uLL);
  if ( v15 )
    v12 = ExecutionModel::ResourceSetImpl::ResourceSetImpl(v15, a1, a2, a5, a3, a4);
  if ( !v12 )
  {
    v11 = -2147024882;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = 1;
LABEL_4:
  LOBYTE(v6) = v12 != 0;
  if ( v13 != v6 )
    __int2c();
  result = v11;
  *a6 = v12;
  return result;
}
