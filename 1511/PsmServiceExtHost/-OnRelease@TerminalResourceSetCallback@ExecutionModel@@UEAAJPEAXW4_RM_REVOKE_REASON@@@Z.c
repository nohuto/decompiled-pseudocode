/*
 * XREFs of ?OnRelease@TerminalResourceSetCallback@ExecutionModel@@UEAAJPEAXW4_RM_REVOKE_REASON@@@Z @ 0x180043390
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GTerminalSetRevokeData@ExecutionModel@@QEAAPEAXI@Z @ 0x18004333C (--_GTerminalSetRevokeData@ExecutionModel@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ExecutionModel::TerminalResourceSetCallback::OnRelease(__int64 a1)
{
  ExecutionModel::TerminalSetRevokeData *v2; // rsi
  __int64 v3; // rdi
  int v4; // ebx
  __int64 v5; // r14

  v2 = (ExecutionModel::TerminalSetRevokeData *)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *(_QWORD *)v2 = v3;
  }
  else
  {
    v2 = 0LL;
  }
  if ( v2 )
  {
    if ( a1 )
      v5 = a1 + 8;
    else
      v5 = 0LL;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, ExecutionModel::TerminalSetRevokeData *))(**(_QWORD **)(a1 + 24)
                                                                                             + 40LL))(
           *(_QWORD *)(a1 + 24),
           v5,
           v2);
    if ( v4 >= 0 )
    {
      v2 = 0LL;
      v4 = 0;
    }
    if ( v2 )
      ExecutionModel::TerminalSetRevokeData::`scalar deleting destructor'(v2);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
