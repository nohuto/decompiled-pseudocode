/*
 * XREFs of IopLogEventIoMgrMountSucceeded @ 0x14012DCE4
 * Callers:
 *     IopMountVolume @ 0x1404DFC14 (IopMountVolume.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

BOOLEAN __fastcall IopLogEventIoMgrMountSucceeded(LPCGUID ActivityId, ULONGLONG a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // di
  REGHANDLE v5; // rsi
  BOOLEAN result; // al
  __int16 v9; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int16 *v11; // [rsp+48h] [rbp-28h]
  __int64 v12; // [rsp+50h] [rbp-20h]
  __int64 v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+60h] [rbp-10h]
  int v15; // [rsp+64h] [rbp-Ch]

  v3 = *a3;
  v5 = IoMgrTraceHandle;
  v9 = *a3 >> 1;
  result = EtwEventEnabled(IoMgrTraceHandle, &IoMgr_MountSucceeded);
  if ( result )
  {
    v15 = 0;
    v11 = &v9;
    v13 = *((_QWORD *)a3 + 1);
    v14 = v3;
    UserData.Ptr = a2;
    *(_QWORD *)&UserData.Size = 16LL;
    v12 = 2LL;
    return EtwWrite(v5, &IoMgr_MountSucceeded, ActivityId, 3u, &UserData);
  }
  return result;
}
