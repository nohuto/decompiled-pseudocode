/*
 * XREFs of ?GetProcessArgsByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x1800499A0
 * Callers:
 *     ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x18001C610 (-GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB44 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x1800497D4 (-GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::GetProcessArgsByPID(DWORD dwProcessId, char **a2, unsigned __int16 **a3)
{
  char *v4; // rbx
  size_t v6; // rax
  char *v7; // rsi
  unsigned int *v8; // r9
  int ProcessArgsByPID; // edi
  int v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v11 = 4096;
  v6 = 0x2000LL;
  if ( !is_mul_ok(0x1000uLL, 2uLL) )
    v6 = -1LL;
  v7 = (char *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    operator delete(0LL);
    v4 = v7;
    ProcessArgsByPID = Common::GetProcessArgsByPID(dwProcessId, v7, (unsigned __int16 *)&v11, v8);
    if ( ProcessArgsByPID >= 0 )
    {
      v4 = 0LL;
      *a2 = v7;
    }
  }
  else
  {
    ProcessArgsByPID = -2147024882;
  }
  operator delete(v4);
  return (unsigned int)ProcessArgsByPID;
}
