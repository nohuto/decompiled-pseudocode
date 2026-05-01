/*
 * XREFs of ?EncryptString@Internal@ExecutionModel@@YAJPEBGPEAPEAU_CRYPTOAPI_BLOB@@@Z @ 0x180043DD0
 * Callers:
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x1800455E4 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800190A0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18001B890 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024DA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$_UndoSolo@V_lambda_8f8ac64dbc926c8fd5f875692dc53996_@@@tlx@@QEAA@XZ @ 0x18004398C (--1-$_UndoSolo@V_lambda_8f8ac64dbc926c8fd5f875692dc53996_@@@tlx@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::Internal::EncryptString(
        ExecutionModel::Internal *this,
        unsigned __int16 *a2,
        struct _CRYPTOAPI_BLOB **a3)
{
  __int64 result; // rax
  DWORD v6; // r15d
  __int64 v7; // r14
  size_t v8; // rax
  char *v9; // rax
  wchar_t *v10; // rbx
  int v11; // edi
  DATA_BLOB *v12; // rax
  struct _CRYPTOAPI_BLOB *v13; // rdx
  signed int LastError; // eax
  DATA_BLOB *v15; // rcx
  DATA_BLOB pDataIn; // [rsp+40h] [rbp-20h] BYREF
  DATA_BLOB **p_pDataOut; // [rsp+50h] [rbp-10h] BYREF
  char v18; // [rsp+58h] [rbp-8h]
  DATA_BLOB *pDataOut; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v20; // [rsp+A8h] [rbp+48h] BYREF

  v20 = 0LL;
  result = StringCchLengthW((const unsigned __int16 *)this, 0x7FFFFFFFLL, &v20);
  if ( (int)result >= 0 )
  {
    pDataOut = 0LL;
    v6 = 2 * v20;
    v7 = v20 + 1;
    v8 = 2 * (v20 + 1);
    if ( !is_mul_ok(v20 + 1, 2uLL) )
      v8 = -1LL;
    v9 = (char *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
    v10 = (wchar_t *)v9;
    if ( v9 )
    {
      v11 = StringCchCopyW(v9, v7, (char *)this);
      if ( v11 >= 0 )
      {
        _wcslwr(v10);
        v18 = 1;
        p_pDataOut = &pDataOut;
        pDataIn.cbData = v6;
        pDataIn.pbData = (BYTE *)v10;
        v12 = (DATA_BLOB *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
        pDataOut = v12;
        if ( v12 )
        {
          v12->pbData = 0LL;
          pDataOut->cbData = 0;
          if ( CryptProtectData(&pDataIn, 0LL, 0LL, 0LL, 0LL, 4u, pDataOut) )
          {
            v15 = pDataOut;
            pDataOut = 0LL;
            *(_QWORD *)a2 = v15;
          }
          else
          {
            LastError = GetLastError();
            v11 = LastError;
            if ( LastError > 0 )
              v11 = (unsigned __int16)LastError | 0x80070000;
          }
        }
        else
        {
          v11 = -2147024882;
        }
        tlx::_UndoSolo<_lambda_8f8ac64dbc926c8fd5f875692dc53996_>::~_UndoSolo<_lambda_8f8ac64dbc926c8fd5f875692dc53996_>(
          (__int64)&p_pDataOut,
          v13);
      }
    }
    else
    {
      v11 = -2147024882;
    }
    operator delete(v10);
    return (unsigned int)v11;
  }
  return result;
}
