/*
 * XREFs of ?GetProcessNameByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180006AB0
 * Callers:
 *     ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x18001C610 (-GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 * Callees:
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x180006B68 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB44 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::GetProcessNameByPID(
        DWORD dwProcessId,
        unsigned __int16 **a2,
        unsigned __int16 **a3)
{
  unsigned __int16 *v3; // rbx
  unsigned __int64 v6; // rax
  unsigned __int16 *v7; // rsi
  int ProcessImageInfoByPID; // edi
  unsigned __int16 *v9; // rax
  unsigned __int64 v11; // rax
  unsigned __int16 *v12; // rdi
  unsigned int *v13; // [rsp+28h] [rbp-20h]
  unsigned int *v14; // [rsp+28h] [rbp-20h]
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  v15 = 260;
  v6 = 520LL;
  if ( !is_mul_ok(0x104uLL, 2uLL) )
    v6 = -1LL;
  v7 = (unsigned __int16 *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v7 )
    goto LABEL_8;
  operator delete(0LL);
  v3 = v7;
  ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(dwProcessId, v7, (unsigned __int16 *)&v15, 0LL, 0LL, v13);
  if ( ProcessImageInfoByPID != -2147024774 )
    goto LABEL_5;
  v11 = 2LL * v15;
  if ( !is_mul_ok(v15, 2uLL) )
    v11 = -1LL;
  v12 = (unsigned __int16 *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 != v12 )
  {
    operator delete(v7);
    v3 = v12;
  }
  if ( !v3 )
  {
LABEL_8:
    ProcessImageInfoByPID = -2147024882;
    goto LABEL_7;
  }
  ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(dwProcessId, v3, (unsigned __int16 *)&v15, 0LL, 0LL, v14);
LABEL_5:
  if ( ProcessImageInfoByPID >= 0 )
  {
    v9 = v3;
    v3 = 0LL;
    *a2 = v9;
  }
LABEL_7:
  operator delete(v3);
  return (unsigned int)ProcessImageInfoByPID;
}
