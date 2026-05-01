/*
 * XREFs of ?SendData@ResourceSetServerProxy@@IEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_RM_REVOKE_REASON@@@Z @ 0x180033494
 * Callers:
 *     ?OnAcquired@ResourceSetServerProxy@@UEAAJPEAX@Z @ 0x180033370 (-OnAcquired@ResourceSetServerProxy@@UEAAJPEAX@Z.c)
 *     ?OnCommitWarning@ResourceSetServerProxy@@UEAAJPEAX@Z @ 0x180033390 (-OnCommitWarning@ResourceSetServerProxy@@UEAAJPEAX@Z.c)
 *     ?OnOutOfMemory@ResourceSetServerProxy@@UEAAJPEAX@Z @ 0x1800333B0 (-OnOutOfMemory@ResourceSetServerProxy@@UEAAJPEAX@Z.c)
 *     ?OnRelease@ResourceSetServerProxy@@UEAAJPEAXW4_RM_REVOKE_REASON@@@Z @ 0x1800333D0 (-OnRelease@ResourceSetServerProxy@@UEAAJPEAXW4_RM_REVOKE_REASON@@@Z.c)
 * Callees:
 *     RmpWnfPublishMessageToClientStateName @ 0x180001E90 (RmpWnfPublishMessageToClientStateName.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

int __fastcall ResourceSetServerProxy::SendData(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // r9
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  int v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+44h] [rbp-24h]

  v5 = *(_QWORD *)(a1 + 16);
  if ( !v5 )
    return 0;
  LODWORD(v8) = 2;
  *((_QWORD *)&v8 + 1) = 0LL;
  v10 = a2;
  v9 = (unsigned int)a1;
  DWORD1(v8) = a3;
  v12 = a3;
  v11 = a4;
  v6 = RmpWnfPublishMessageToClientStateName((_QWORD *)(v5 + 36), &v8, a3, *(_QWORD *)(v5 + 48));
  if ( v6 < 0 )
    return v6 | 0x10000000;
  else
    return 0;
}
