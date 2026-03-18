/*
 * XREFs of IoRevokeHandlesForProcess @ 0x1401BBC4C
 * Callers:
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     PspGetServerSiloForSilo @ 0x140077710 (PspGetServerSiloForSilo.c)
 *     PspThreadSiloNoLock @ 0x1400797D4 (PspThreadSiloNoLock.c)
 *     IopGetDevicePDO @ 0x1400988E8 (IopGetDevicePDO.c)
 *     IopIsProcessAppContainer @ 0x1400EFD88 (IopIsProcessAppContainer.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PnpDisableUserModeNotifications @ 0x1401BF9A4 (PnpDisableUserModeNotifications.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     ObReferenceProcessHandleTable @ 0x14047D304 (ObReferenceProcessHandleTable.c)
 *     ExEnumHandleTable @ 0x140480DE0 (ExEnumHandleTable.c)
 *     ObDereferenceProcessHandleTable @ 0x14062DF18 (ObDereferenceProcessHandleTable.c)
 */

__int64 __fastcall IoRevokeHandlesForProcess(__int64 a1, struct _KPROCESS *a2)
{
  __int64 v5; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rax
  void *ServerSiloForSilo; // rax
  void *v9; // rdi
  unsigned int v10; // edi
  _DWORD *DevicePDO; // rax
  void *v12; // rsi
  PVOID v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h]
  __int64 v16; // [rsp+60h] [rbp-A0h]
  int v17; // [rsp+68h] [rbp-98h]
  __int128 v18; // [rsp+70h] [rbp-90h]
  _QWORD v19[24]; // [rsp+80h] [rbp-80h] BYREF
  char v20; // [rsp+170h] [rbp+70h] BYREF

  if ( !IopIsProcessAppContainer(a2) )
    return 0LL;
  v5 = ObReferenceProcessHandleTable(a2);
  if ( !v5 )
    return 3221225485LL;
  memset(v19, 0, sizeof(v19));
  v15 = 0LL;
  v16 = a1;
  v14 = 48;
  v17 = 576;
  v18 = 0LL;
  LODWORD(v19[0]) = 12582920;
  LODWORD(v19[4]) = 1;
  memset(&v19[19], 0, 0x28uLL);
  LOWORD(v19[19]) = 40;
  v19[23] = 1LL;
  CurrentThread = KeGetCurrentThread();
  v7 = PspThreadSiloNoLock((__int64)CurrentThread, (__int64)CurrentThread->Process);
  ServerSiloForSilo = (void *)PspGetServerSiloForSilo(v7);
  v9 = ServerSiloForSilo;
  if ( ServerSiloForSilo )
    ObfReferenceObjectWithTag(ServerSiloForSilo, 0x746C6644u);
  v19[23] = v9;
  v10 = ObOpenObjectByNameEx(&v14, IoFileObjectType, 0LL, 0LL, 0, v19, v9, &v20);
  if ( v19[23] )
    ObfDereferenceObjectWithTag((PVOID)v19[23], 0x746C6644u);
  if ( LODWORD(v19[4]) == -1096154543 )
  {
    v10 = v19[2];
    if ( SLODWORD(v19[2]) >= 0 )
    {
      v13[0] = (PVOID)v19[5];
      v13[1] = a2;
      ExEnumHandleTable(v5, IopCheckHandleForRevocation, v13, 0LL);
      DevicePDO = IopGetDevicePDO((__int64)v13[0]);
      v12 = DevicePDO;
      if ( DevicePDO )
      {
        PnpDisableUserModeNotifications(DevicePDO, a2);
        ObfDereferenceObjectWithTag(v12, 0x746C6644u);
      }
      ObfDereferenceObjectWithTag(v13[0], 0x746C6644u);
    }
  }
  ObDereferenceProcessHandleTable(a2);
  return v10;
}
