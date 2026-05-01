/*
 * XREFs of ?LocalStringToRpcString@Internal@ExecutionModel@@YAJQEBGPEAPEAG@Z @ 0x180010CCC
 * Callers:
 *     ?DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConfig@@@Z @ 0x180007FE0 (-DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConf.c)
 * Callees:
 *     memcpy_0 @ 0x180008DEC (memcpy_0.c)
 */

__int64 __fastcall ExecutionModel::Internal::LocalStringToRpcString(
        ExecutionModel::Internal *this,
        unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  __int64 v3; // rax
  size_t v6; // rsi
  void *v7; // rax
  void *v8; // rbx
  __int64 result; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( *((_WORD *)this + v3) );
  v6 = 2 * v3 + 2;
  v7 = malloc(v6);
  v8 = v7;
  if ( !v7 )
    return 2147942414LL;
  memcpy_0(v7, this, v6);
  result = 0LL;
  *(_QWORD *)a2 = v8;
  return result;
}
