/*
 * XREFs of UsbhFdoReturnHubName @ 0x1C003EFE8
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0018D90 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhGetHubPdoName @ 0x1C003C380 (UsbhGetHubPdoName.c)
 */

__int64 __fastcall UsbhFdoReturnHubName(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int HubPdoName; // eax
  __int64 v11; // r8
  __int64 v12; // r9

  v6 = a1;
  FdoExt(a1, a2, a3, a4);
  PdoExt(a2, v7, v8, v9);
  Log(v6, 8, 1919446590, a3, 0LL);
  HubPdoName = UsbhGetHubPdoName(
                 v6,
                 a2,
                 *(_WORD **)(a3 + 24),
                 *(unsigned int *)(*(_QWORD *)(a3 + 184) + 8LL),
                 (_DWORD *)(a3 + 56));
  *(_DWORD *)(a3 + 48) = HubPdoName;
  LODWORD(v6) = HubPdoName;
  IofCompleteRequest((PIRP)a3, 0);
  UsbhDecPdoIoCount(a2, a3, v11, v12);
  return (unsigned int)v6;
}
