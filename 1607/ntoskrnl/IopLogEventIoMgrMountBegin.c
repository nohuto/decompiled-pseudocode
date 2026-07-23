/*
 * XREFs of IopLogEventIoMgrMountBegin @ 0x140135A58
 * Callers:
 *     IopMountVolume @ 0x1403ED8DC (IopMountVolume.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall IopLogEventIoMgrMountBegin(LPCGUID ActivityId, ULONGLONG a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // di
  __int16 v6; // ax
  REGHANDLE v8; // rsi
  __int16 v10; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int16 *v12; // [rsp+48h] [rbp-28h]
  int v13; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+54h] [rbp-1Ch]
  __int64 v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+60h] [rbp-10h]
  int v17; // [rsp+64h] [rbp-Ch]

  v3 = *a3;
  v6 = *a3 >> 1;
  v10 = v6;
  if ( (_BYTE)dword_1403A9160 )
  {
    v8 = IoMgrTraceHandle;
    LOBYTE(v6) = EtwEventEnabled(IoMgrTraceHandle, &IoMgr_MountBegin);
    if ( (_BYTE)v6 )
    {
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      v12 = &v10;
      v15 = *((_QWORD *)a3 + 1);
      v16 = v3;
      UserData.Ptr = a2;
      UserData.Size = 16;
      v13 = 2;
      LOBYTE(v6) = EtwWrite(v8, &IoMgr_MountBegin, ActivityId, 3u, &UserData);
    }
  }
  return v6;
}
