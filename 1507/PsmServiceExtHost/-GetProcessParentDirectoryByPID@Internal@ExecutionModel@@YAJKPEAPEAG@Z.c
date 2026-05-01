/*
 * XREFs of ?GetProcessParentDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180044848
 * Callers:
 *     ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x180007CA0 (-GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 * Callees:
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x180018F10 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024DA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::GetProcessParentDirectoryByPID(
        DWORD dwProcessId,
        unsigned __int16 **a2,
        unsigned __int16 **a3)
{
  unsigned __int16 *v3; // rbx
  size_t v6; // rax
  unsigned __int16 *v7; // rsi
  int ProcessImageInfoByPID; // edi
  size_t v9; // rax
  unsigned __int16 *v10; // rdi
  unsigned __int16 *v11; // rax
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  v13 = 260;
  v6 = 520LL;
  if ( !is_mul_ok(0x104uLL, 2uLL) )
    v6 = -1LL;
  v7 = (unsigned __int16 *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v7 )
    goto LABEL_13;
  operator delete(0LL);
  v3 = v7;
  ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(dwProcessId, 0LL, 0LL, v7, (unsigned __int16 *)&v13);
  if ( ProcessImageInfoByPID != -2147024774 )
    goto LABEL_11;
  v9 = 2LL * v13;
  if ( !is_mul_ok(v13, 2uLL) )
    v9 = -1LL;
  v10 = (unsigned __int16 *)operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 != v10 )
  {
    operator delete(v7);
    v3 = v10;
  }
  if ( !v3 )
  {
LABEL_13:
    ProcessImageInfoByPID = -2147024882;
    goto LABEL_14;
  }
  ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(dwProcessId, 0LL, 0LL, v3, (unsigned __int16 *)&v13);
LABEL_11:
  if ( ProcessImageInfoByPID >= 0 )
  {
    v11 = v3;
    v3 = 0LL;
    *a2 = v11;
  }
LABEL_14:
  operator delete(v3);
  return (unsigned int)ProcessImageInfoByPID;
}
