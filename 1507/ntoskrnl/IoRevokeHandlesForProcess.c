/*
 * XREFs of IoRevokeHandlesForProcess @ 0x1401F7200
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IopGetDevicePDO @ 0x1400D0E98 (IopGetDevicePDO.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PnpDisableUserModeNotifications @ 0x1401FB4EC (PnpDisableUserModeNotifications.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     ExEnumHandleTable @ 0x140521D30 (ExEnumHandleTable.c)
 *     ObDereferenceProcessHandleTable @ 0x1406ABCBC (ObDereferenceProcessHandleTable.c)
 */

__int64 __fastcall IoRevokeHandlesForProcess(__int64 a1, struct _KPROCESS *a2)
{
  PACCESS_TOKEN v4; // rbx
  __int64 v6; // rsi
  unsigned int v7; // ebx
  _DWORD *DevicePDO; // rax
  void *v9; // rsi
  PVOID Object[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h]
  __int64 v13; // [rsp+60h] [rbp-A0h]
  int v14; // [rsp+68h] [rbp-98h]
  __int128 v15; // [rsp+70h] [rbp-90h]
  _QWORD v16[24]; // [rsp+80h] [rbp-80h] BYREF
  PVOID TokenInformation; // [rsp+170h] [rbp+70h] BYREF

  LODWORD(TokenInformation) = 0;
  v4 = PsReferencePrimaryToken(a2);
  SeQueryInformationToken(v4, TokenIsAppContainer, &TokenInformation);
  ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  if ( !(_DWORD)TokenInformation )
    return 0LL;
  v6 = ObReferenceProcessHandleTable(a2);
  if ( !v6 )
    return 3221225485LL;
  memset(v16, 0, 0xB8uLL);
  v12 = 0LL;
  v11 = 48;
  v14 = 576;
  v13 = a1;
  v15 = 0LL;
  LODWORD(v16[0]) = 12058632;
  LODWORD(v16[4]) = 1;
  v7 = ObOpenObjectByName(&v11, IoFileObjectType, 0LL, 0LL, 0, v16, &TokenInformation);
  if ( LODWORD(v16[4]) == -1096154543 )
  {
    v7 = v16[2];
    if ( SLODWORD(v16[2]) >= 0 )
    {
      Object[0] = (PVOID)v16[5];
      Object[1] = a2;
      ExEnumHandleTable(v6, IopCheckHandleForRevocation, Object, 0LL);
      DevicePDO = IopGetDevicePDO((__int64)Object[0]);
      v9 = DevicePDO;
      if ( DevicePDO )
      {
        PnpDisableUserModeNotifications(DevicePDO, a2);
        ObfDereferenceObjectWithTag(v9, 0x746C6644u);
      }
      ObfDereferenceObjectWithTag(Object[0], 0x746C6644u);
    }
  }
  ObDereferenceProcessHandleTable(a2);
  return v7;
}
