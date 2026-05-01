/*
 * XREFs of ?SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REVOKE_MESSAGE@@@Z @ 0x180029578
 * Callers:
 *     ?OnAcquired@ResourceSetCallback@@UEAAJPEAX@Z @ 0x180029470 (-OnAcquired@ResourceSetCallback@@UEAAJPEAX@Z.c)
 *     ?OnCommitWarning@ResourceSetCallback@@UEAAJPEAX@Z @ 0x180029490 (-OnCommitWarning@ResourceSetCallback@@UEAAJPEAX@Z.c)
 *     ?OnOutOfMemory@ResourceSetCallback@@UEAAJPEAX@Z @ 0x1800294B0 (-OnOutOfMemory@ResourceSetCallback@@UEAAJPEAX@Z.c)
 *     ?OnRelease@ResourceSetCallback@@UEAAJPEAXU_RM_REVOKE_MESSAGE@@@Z @ 0x1800294D0 (-OnRelease@ResourceSetCallback@@UEAAJPEAXU_RM_REVOKE_MESSAGE@@@Z.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpResourceSetTableFindById @ 0x18002E6E0 (RmpResourceSetTableFindById.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x1800385C4 (RmpWnfPublishMessageToClientStateName.c)
 */

__int64 __fastcall ResourceSetCallback::SendData(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  __int64 v6; // rcx
  int v8; // eax
  __int64 v9; // r8
  volatile signed __int32 *v10; // rdi
  int v11; // ebx
  __int64 v12; // r9
  PVOID P; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 16) + 1864LL;
  P = 0LL;
  v8 = RmpResourceSetTableFindById(v6, *(_QWORD *)(a1 + 8), &P);
  v10 = (volatile signed __int32 *)P;
  v11 = v8;
  if ( v8 >= 0 )
  {
    v12 = *((_QWORD *)P + 6);
    if ( v12 )
    {
      v16 = 0LL;
      v15 = *(_QWORD *)(a1 + 8);
      HIDWORD(v16) = a3;
      if ( a4 )
        LODWORD(v16) = *a4;
      v11 = RmpWnfPublishMessageToClientStateName(v12 + 36, &v15, v9, *(_QWORD *)(v12 + 48));
      if ( v11 >= 0 )
        v11 = 0;
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v10 )
    RmpObjectRelease(v10);
  return v11 | 0x10000000u;
}
