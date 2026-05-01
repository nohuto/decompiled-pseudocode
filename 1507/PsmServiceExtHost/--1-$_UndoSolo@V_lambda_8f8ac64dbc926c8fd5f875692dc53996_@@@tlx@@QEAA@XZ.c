/*
 * XREFs of ??1?$_UndoSolo@V_lambda_8f8ac64dbc926c8fd5f875692dc53996_@@@tlx@@QEAA@XZ @ 0x18004398C
 * Callers:
 *     ?DecryptString@Internal@ExecutionModel@@YAJPEBEKAEAVStringBuffer@Common@@@Z @ 0x180043A08 (-DecryptString@Internal@ExecutionModel@@YAJPEBEKAEAVStringBuffer@Common@@@Z.c)
 *     ?EncryptString@Internal@ExecutionModel@@YAJPEBGPEAPEAU_CRYPTOAPI_BLOB@@@Z @ 0x180043DD0 (-EncryptString@Internal@ExecutionModel@@YAJPEBGPEAPEAU_CRYPTOAPI_BLOB@@@Z.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x1800455E4 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 * Callees:
 *     ?Cleanup_DATA_BLOB@Internal@ExecutionModel@@YAXPEAU_CRYPTOAPI_BLOB@@@Z @ 0x1800439AC (-Cleanup_DATA_BLOB@Internal@ExecutionModel@@YAXPEAU_CRYPTOAPI_BLOB@@@Z.c)
 */

void __fastcall tlx::_UndoSolo<_lambda_8f8ac64dbc926c8fd5f875692dc53996_>::~_UndoSolo<_lambda_8f8ac64dbc926c8fd5f875692dc53996_>(
        __int64 a1,
        struct _CRYPTOAPI_BLOB *a2)
{
  if ( *(_BYTE *)(a1 + 8) )
    ExecutionModel::Internal::Cleanup_DATA_BLOB(**(ExecutionModel::Internal ***)a1, a2);
}
