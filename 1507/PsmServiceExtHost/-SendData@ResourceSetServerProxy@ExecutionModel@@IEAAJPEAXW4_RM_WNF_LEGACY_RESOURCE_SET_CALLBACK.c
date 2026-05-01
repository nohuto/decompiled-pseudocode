/*
 * XREFs of ?SendData@ResourceSetServerProxy@ExecutionModel@@IEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_RM_REVOKE_REASON@@@Z @ 0x180001D88
 * Callers:
 *     ?OnAcquired@ResourceSetServerProxy@ExecutionModel@@UEAAJPEAX@Z @ 0x180001D60 (-OnAcquired@ResourceSetServerProxy@ExecutionModel@@UEAAJPEAX@Z.c)
 *     ?OnCommitWarning@ResourceSetServerProxy@ExecutionModel@@UEAAJPEAX@Z @ 0x180047FA0 (-OnCommitWarning@ResourceSetServerProxy@ExecutionModel@@UEAAJPEAX@Z.c)
 *     ?OnOutOfMemory@ResourceSetServerProxy@ExecutionModel@@UEAAJPEAX@Z @ 0x180047FD0 (-OnOutOfMemory@ResourceSetServerProxy@ExecutionModel@@UEAAJPEAX@Z.c)
 *     ?OnRelease@ResourceSetServerProxy@ExecutionModel@@UEAAJPEAXW4_RM_REVOKE_REASON@@@Z @ 0x180048000 (-OnRelease@ResourceSetServerProxy@ExecutionModel@@UEAAJPEAXW4_RM_REVOKE_REASON@@@Z.c)
 * Callees:
 *     ?SendData@WnfStateRegistration@ExecutionModel@@QEAAJ_KPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_RM_REVOKE_REASON@@@Z @ 0x180001DC8 (-SendData@WnfStateRegistration@ExecutionModel@@QEAAJ_KPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetServerProxy::SendData(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 32) )
    return 2147500037LL;
  result = ExecutionModel::WnfStateRegistration::SendData(*(_QWORD *)(a1 + 32), a1, a2, a3, a4);
  if ( (_DWORD)result == -2147467260 )
    return 0LL;
  return result;
}
