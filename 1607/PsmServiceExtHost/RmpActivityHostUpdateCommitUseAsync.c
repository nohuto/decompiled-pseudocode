/*
 * XREFs of RmpActivityHostUpdateCommitUseAsync @ 0x18002F7EC
 * Callers:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000D650 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z @ 0x18002CB60 (-OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z.c)
 * Callees:
 *     RmpObjectAddRef @ 0x180006058 (RmpObjectAddRef.c)
 */

__int64 __fastcall RmpActivityHostUpdateCommitUseAsync(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(result + 3340) & 2) == 0 && (*(_BYTE *)(a1 + 1124) & 1) == 0 )
  {
    RmpObjectAddRef(a1);
    v3 = *(_QWORD *)(a1 + 1000);
    *(_DWORD *)(a1 + 1124) |= 1u;
    return TpPostWork(v3);
  }
  return result;
}
