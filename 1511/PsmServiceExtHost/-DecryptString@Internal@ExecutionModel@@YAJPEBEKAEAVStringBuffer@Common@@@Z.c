/*
 * XREFs of ?DecryptString@Internal@ExecutionModel@@YAJPEBEKAEAVStringBuffer@Common@@@Z @ 0x180048B28
 * Callers:
 *     ?DeserializeFromPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAUGameConfig@2@PEAI@Z @ 0x180048BF8 (-DeserializeFromPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAUGameC.c)
 *     ?GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@Z @ 0x180049430 (-GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@.c)
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x18004A598 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 *     ?VerifyParentIdentifier@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBG1@Z @ 0x18004B700 (-VerifyParentIdentifier@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBG1@Z.c)
 * Callees:
 *     ?SetValue@StringBuffer@Common@@QEAAJPEBGK@Z @ 0x180027FDC (-SetValue@StringBuffer@Common@@QEAAJPEBGK@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$_UndoSolo@V_lambda_8f8ac64dbc926c8fd5f875692dc53996_@@@tlx@@QEAA@XZ @ 0x18004892C (--1-$_UndoSolo@V_lambda_8f8ac64dbc926c8fd5f875692dc53996_@@@tlx@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::Internal::DecryptString(
        BYTE *this,
        const unsigned __int8 *a2,
        Common::StringBuffer *a3,
        struct Common::StringBuffer *a4)
{
  DATA_BLOB *v5; // rax
  struct _CRYPTOAPI_BLOB *v6; // rdx
  unsigned int v7; // ebx
  signed int LastError; // eax
  DATA_BLOB pDataIn; // [rsp+40h] [rbp-20h] BYREF
  DATA_BLOB **p_pDataOut; // [rsp+50h] [rbp-10h] BYREF
  char v12; // [rsp+58h] [rbp-8h]
  DATA_BLOB *pDataOut; // [rsp+70h] [rbp+10h] BYREF

  pDataOut = 0LL;
  pDataIn.pbData = this;
  pDataIn.cbData = (unsigned int)a2;
  p_pDataOut = &pDataOut;
  v12 = 1;
  v5 = (DATA_BLOB *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  pDataOut = v5;
  if ( v5 )
  {
    v5->pbData = 0LL;
    pDataOut->cbData = 0;
    if ( CryptUnprotectData(&pDataIn, 0LL, 0LL, 0LL, 0LL, 4u, pDataOut) )
    {
      v7 = Common::StringBuffer::SetValue(a3, (const unsigned __int16 *)pDataOut->pbData, pDataOut->cbData >> 1);
    }
    else
    {
      LastError = GetLastError();
      v7 = LastError;
      if ( LastError > 0 )
        v7 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  else
  {
    v7 = -2147024882;
  }
  tlx::_UndoSolo<_lambda_8f8ac64dbc926c8fd5f875692dc53996_>::~_UndoSolo<_lambda_8f8ac64dbc926c8fd5f875692dc53996_>(
    (__int64)&p_pDataOut,
    v6);
  return v7;
}
