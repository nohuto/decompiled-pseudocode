/*
 * XREFs of IopLogEventIoMgrMountFailed @ 0x14012F3D0
 * Callers:
 *     IopMountVolume @ 0x1404DFC14 (IopMountVolume.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

BOOLEAN __fastcall IopLogEventIoMgrMountFailed(LPCGUID ActivityId, ULONGLONG a2, unsigned __int16 *a3, int a4)
{
  unsigned __int16 v4; // di
  REGHANDLE v6; // rsi
  BOOLEAN result; // al
  __int16 v10; // [rsp+30h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  __int16 *v12; // [rsp+50h] [rbp-9h]
  __int64 v13; // [rsp+58h] [rbp-1h]
  __int64 v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  int *v17; // [rsp+70h] [rbp+17h]
  __int64 v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+D8h] [rbp+7Fh] BYREF

  v19 = a4;
  v4 = *a3;
  v6 = IoMgrTraceHandle;
  v10 = *a3 >> 1;
  result = EtwEventEnabled(IoMgrTraceHandle, &IoMgr_MountFailed);
  if ( result )
  {
    v16 = 0;
    UserData.Ptr = a2;
    v12 = &v10;
    v14 = *((_QWORD *)a3 + 1);
    v15 = v4;
    v17 = &v19;
    *(_QWORD *)&UserData.Size = 16LL;
    v13 = 2LL;
    v18 = 4LL;
    return EtwWrite(v6, &IoMgr_MountFailed, ActivityId, 4u, &UserData);
  }
  return result;
}
