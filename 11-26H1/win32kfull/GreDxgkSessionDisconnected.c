/*
 * XREFs of GreDxgkSessionDisconnected @ 0x1401B4268
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401B3938 (xxxRemoteDisconnect.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDxgkSessionDisconnected(char a1)
{
  __int64 DxgkWin32kInterface; // rax
  __int64 v3; // rcx

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  LOBYTE(v3) = a1;
  return (*(__int64 (__fastcall **)(__int64))(DxgkWin32kInterface + 376))(v3);
}
