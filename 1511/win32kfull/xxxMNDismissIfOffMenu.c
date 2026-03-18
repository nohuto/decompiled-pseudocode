/*
 * XREFs of xxxMNDismissIfOffMenu @ 0x1C02169BC
 * Callers:
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01FACF0 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0138088 (xxxMNFindWindowFromPoint.c)
 *     IsModalMenuStarted @ 0x1C01FBE08 (IsModalMenuStarted.c)
 */

__int64 __fastcall xxxMNDismissIfOffMenu(__int64 a1)
{
  int v2; // edx
  __int64 v3; // r8
  int *v4; // rcx
  __int64 v5; // rax
  __int64 **v6; // r10
  __int64 *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+50h] [rbp+8h] BYREF

  if ( *(char *)(a1 + 44) < 0 || *(char *)(a1 + 43) < 0 || !(unsigned int)IsModalMenuStarted(*(_QWORD *)(a1 + 16)) )
    return 0LL;
  v4 = *(int **)(v3 + 528);
  if ( v4 )
    v4 = *(int **)v4;
  if ( !v4 )
    return 0LL;
  if ( !*((_QWORD *)v4 + 1) )
    return 0LL;
  v5 = xxxMNFindWindowFromPoint(v4, &v12, v2);
  if ( ((*(_BYTE *)(a1 + 44) | *(_BYTE *)(a1 + 43)) & 0x80u) != 0 || v5 )
    return 0LL;
  v6 = *(__int64 ***)(*(_QWORD *)(a1 + 16) + 528LL);
  if ( v6 )
    v6 = (__int64 **)*v6;
  if ( !v6 )
    return 0LL;
  v7 = v6[1];
  if ( !v7 )
    return 0LL;
  v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v11;
  v11[1] = v7;
  ++*((_DWORD *)v7 + 2);
  xxxSendMessage((struct tagWND *)v6[1], 0x1Fu, 0LL, 0LL);
  ThreadUnlock1(v9, v8);
  return 1LL;
}
