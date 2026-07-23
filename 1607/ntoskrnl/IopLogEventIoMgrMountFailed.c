/*
 * XREFs of IopLogEventIoMgrMountFailed @ 0x1401C514C
 * Callers:
 *     IopMountVolume @ 0x1403ED8DC (IopMountVolume.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall IopLogEventIoMgrMountFailed(LPCGUID ActivityId, ULONGLONG a2, unsigned __int16 *a3, int a4)
{
  unsigned __int16 v4; // si
  __int16 v7; // ax
  REGHANDLE v9; // rbx
  __int16 v11; // [rsp+30h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  __int16 *v13; // [rsp+50h] [rbp-9h]
  int v14; // [rsp+58h] [rbp-1h]
  int v15; // [rsp+5Ch] [rbp+3h]
  __int64 v16; // [rsp+60h] [rbp+7h]
  int v17; // [rsp+68h] [rbp+Fh]
  int v18; // [rsp+6Ch] [rbp+13h]
  int *v19; // [rsp+70h] [rbp+17h]
  int v20; // [rsp+78h] [rbp+1Fh]
  int v21; // [rsp+7Ch] [rbp+23h]
  int v22; // [rsp+D8h] [rbp+7Fh] BYREF

  v22 = a4;
  v4 = *a3;
  v7 = *a3 >> 1;
  v11 = v7;
  if ( (_BYTE)dword_1403A9160 )
  {
    v9 = IoMgrTraceHandle;
    LOBYTE(v7) = EtwEventEnabled(IoMgrTraceHandle, &IoMgr_MountFailed);
    if ( (_BYTE)v7 )
    {
      UserData.Reserved = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v13 = &v11;
      v16 = *((_QWORD *)a3 + 1);
      v17 = v4;
      v19 = &v22;
      UserData.Ptr = a2;
      UserData.Size = 16;
      v14 = 2;
      v20 = 4;
      LOBYTE(v7) = EtwWrite(v9, &IoMgr_MountFailed, ActivityId, 4u, &UserData);
    }
  }
  return v7;
}
