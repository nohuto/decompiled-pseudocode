/*
 * XREFs of ?GetProcessWorkingDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180049D8C
 * Callers:
 *     ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x18001C610 (-GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB44 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x180049B48 (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::GetProcessWorkingDirectoryByPID(
        DWORD dwProcessId,
        unsigned __int16 **a2,
        unsigned __int16 **a3)
{
  unsigned __int16 *v3; // rbx
  size_t v6; // rax
  unsigned __int16 *v7; // rsi
  __int64 v8; // rdx
  int ProcessWorkingDirectoryByPID; // edi
  size_t v10; // rax
  __int64 v11; // rdx
  unsigned __int16 *v12; // rdi
  unsigned __int16 *v13; // rax
  unsigned int v15; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  v15 = 260;
  v6 = 520LL;
  if ( !is_mul_ok(0x104uLL, 2uLL) )
    v6 = -1LL;
  v7 = (unsigned __int16 *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v7 )
    goto LABEL_13;
  operator delete(0LL);
  v3 = v7;
  ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(dwProcessId, v8, v7, (unsigned __int16 *)&v15);
  if ( ProcessWorkingDirectoryByPID != -2147024774 )
    goto LABEL_11;
  v10 = 2LL * v15;
  if ( !is_mul_ok(v15, 2uLL) )
    v10 = -1LL;
  v12 = (unsigned __int16 *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 != v12 )
  {
    operator delete(v7);
    v3 = v12;
  }
  if ( !v3 )
  {
LABEL_13:
    ProcessWorkingDirectoryByPID = -2147024882;
    goto LABEL_14;
  }
  ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(dwProcessId, v11, v3, (unsigned __int16 *)&v15);
LABEL_11:
  if ( ProcessWorkingDirectoryByPID >= 0 )
  {
    v13 = v3;
    v3 = 0LL;
    *a2 = v13;
  }
LABEL_14:
  operator delete(v3);
  return (unsigned int)ProcessWorkingDirectoryByPID;
}
