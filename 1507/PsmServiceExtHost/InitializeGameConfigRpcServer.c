/*
 * XREFs of InitializeGameConfigRpcServer @ 0x18002269C
 * Callers:
 *     PsmInitializeServiceExtension3 @ 0x180022550 (PsmInitializeServiceExtension3.c)
 * Callees:
 *     ??1SimpleLock@Shared@DevPlat@@QEAA@XZ @ 0x180022728 (--1SimpleLock@Shared@DevPlat@@QEAA@XZ.c)
 *     ??0SimpleLock@Shared@DevPlat@@QEAA@PEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180022748 (--0SimpleLock@Shared@DevPlat@@QEAA@PEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?LaunchRPCServerInSession@Shared@DevPlat@@YAJPEBGKPEAXP6AJ11@ZH@Z @ 0x180022A80 (-LaunchRPCServerInSession@Shared@DevPlat@@YAJPEBGKPEAXP6AJ11@ZH@Z.c)
 */

__int64 __fastcall InitializeGameConfigRpcServer(__int64 a1, struct _RTL_CRITICAL_SECTION *a2, bool a3)
{
  _QWORD *v3; // rax
  const unsigned __int16 *v4; // rdx
  void *v5; // r9
  int v6; // ebx
  int (*v8)(void *, void *); // [rsp+20h] [rbp-28h]
  int v9; // [rsp+28h] [rbp-20h]
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF

  DevPlat::Shared::SimpleLock::SimpleLock((DevPlat::Shared::SimpleLock *)v10, a2, a3);
  v3 = malloc(0x28uLL);
  if ( v3 )
  {
    *v3 = v3;
    v3[1] = v3;
    v3[2] = 0LL;
    v3[3] = 0LL;
    *((_WORD *)v3 + 16) = 2048;
  }
  ExecutionModel::Internal::_sidToGameConfigServer = v3;
  if ( v3 )
  {
    LODWORD(v8) = 0;
    v6 = DevPlat::Shared::LaunchRPCServerInSession(
           (DevPlat::Shared *)L"AllowEveryone",
           v4,
           (unsigned int)L"`",
           v5,
           v8,
           v9);
    if ( v6 >= 0 )
      ExecutionModel::Internal::_shutDown = 0;
  }
  else
  {
    v6 = -2147024882;
  }
  DevPlat::Shared::SimpleLock::~SimpleLock((DevPlat::Shared::SimpleLock *)v10);
  return (unsigned int)v6;
}
