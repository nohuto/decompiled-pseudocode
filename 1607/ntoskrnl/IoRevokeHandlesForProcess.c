/*
 * XREFs of IoRevokeHandlesForProcess @ 0x1401C9960
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IopIsProcessAppContainer @ 0x1400B06B4 (IopIsProcessAppContainer.c)
 *     IopGetDevicePDO @ 0x1400F9440 (IopGetDevicePDO.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PnpDisableUserModeNotifications @ 0x1401CDD78 (PnpDisableUserModeNotifications.c)
 *     PsGetCurrentSilo @ 0x140405240 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 *     ExEnumHandleTable @ 0x14045D3A0 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x1404F00E0 (ObReferenceProcessHandleTable.c)
 *     ObDereferenceProcessHandleTable @ 0x1406660D4 (ObDereferenceProcessHandleTable.c)
 */

__int64 __fastcall IoRevokeHandlesForProcess(__int64 a1, struct _KPROCESS *a2)
{
  __int64 v5; // rdi
  unsigned int v6; // esi
  _DWORD *DevicePDO; // rax
  void *v8; // rdi
  PVOID Object[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h]
  __int64 v12; // [rsp+60h] [rbp-A0h]
  int v13; // [rsp+68h] [rbp-98h]
  __int128 v14; // [rsp+70h] [rbp-90h]
  _QWORD v15[24]; // [rsp+80h] [rbp-80h] BYREF
  char v16; // [rsp+170h] [rbp+70h] BYREF

  if ( !IopIsProcessAppContainer(a2) )
    return 0LL;
  v5 = ObReferenceProcessHandleTable(a2);
  if ( !v5 )
    return 3221225485LL;
  memset(v15, 0, sizeof(v15));
  v11 = 0LL;
  v12 = a1;
  v10 = 48;
  v13 = 576;
  v14 = 0LL;
  LODWORD(v15[0]) = 12582920;
  LODWORD(v15[4]) = 1;
  memset(&v15[19], 0, 0x28uLL);
  LOWORD(v15[19]) = 40;
  v15[23] = 1LL;
  v15[23] = PsGetCurrentSilo();
  v6 = ObOpenObjectByNameEx((unsigned int)&v10, (_DWORD)IoFileObjectType, 0, 0, 0, (__int64)v15, v15[23], (__int64)&v16);
  if ( LODWORD(v15[4]) == -1096154543 )
  {
    v6 = v15[2];
    if ( SLODWORD(v15[2]) >= 0 )
    {
      Object[0] = (PVOID)v15[5];
      Object[1] = a2;
      ExEnumHandleTable(v5, IopCheckHandleForRevocation, Object, 0LL);
      DevicePDO = IopGetDevicePDO((__int64)Object[0]);
      v8 = DevicePDO;
      if ( DevicePDO )
      {
        PnpDisableUserModeNotifications(DevicePDO, a2);
        ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      }
      ObfDereferenceObjectWithTag(Object[0], 0x746C6644u);
    }
  }
  ObDereferenceProcessHandleTable(a2);
  return v6;
}
