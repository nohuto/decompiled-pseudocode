/*
 * XREFs of PnpDiagnosticTraceObjectWithStatus @ 0x1400B1388
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1400B12EC (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1403F1DC4 (PiDrvDbLoadNodeWorkerCallback.c)
 *     IopLoadDriver @ 0x14049E388 (IopLoadDriver.c)
 *     PiDrvDbLoadNode @ 0x1404FA308 (PiDrvDbLoadNode.c)
 *     PnpRebalance @ 0x1406303D0 (PnpRebalance.c)
 *     PiDevCfgProcessDevice @ 0x14063B128 (PiDevCfgProcessDevice.c)
 *     PnpInitializeBootStartDriver @ 0x14079BA3C (PnpInitializeBootStartDriver.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceObjectWithStatus(
        PCEVENT_DESCRIPTOR EventDescriptor,
        unsigned __int16 *a2,
        int a3)
{
  REGHANDLE v3; // rbx
  int v7; // r8d
  __int16 v8; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h]
  int v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+54h] [rbp-1Ch]
  int *v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+60h] [rbp-10h]
  int v15; // [rsp+64h] [rbp-Ch]
  int v16; // [rsp+A0h] [rbp+30h] BYREF

  v16 = a3;
  v3 = PnpEtwHandle;
  if ( !PnpEtwHandle || !EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return 0;
  v7 = *a2;
  UserData.Reserved = 0;
  v12 = 0;
  v15 = 0;
  v8 = (unsigned __int16)v7 >> 1;
  UserData.Ptr = (ULONGLONG)&v8;
  v10 = *((_QWORD *)a2 + 1);
  v13 = &v16;
  v11 = v7;
  UserData.Size = 2;
  v14 = 4;
  return EtwWrite(v3, EventDescriptor, 0LL, 3u, &UserData);
}
