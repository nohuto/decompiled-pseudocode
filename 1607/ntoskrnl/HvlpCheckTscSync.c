/*
 * XREFs of HvlpCheckTscSync @ 0x1401C09AC
 * Callers:
 *     HvlPhase2Initialize @ 0x14014CA18 (HvlPhase2Initialize.c)
 *     HvlpPowerStateCallback @ 0x1401BAD08 (HvlpPowerStateCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvlpWriteEventLog @ 0x1401C1144 (HvlpWriteEventLog.c)
 */

char HvlpCheckTscSync()
{
  _DWORD *v0; // rbx
  __int64 v1; // rax
  PHYSICAL_ADDRESS v2; // r8
  PHYSICAL_ADDRESS v3; // rdx
  __int64 v4; // rdi
  char result; // al
  PHYSICAL_ADDRESS v6[4]; // [rsp+20h] [rbp-E0h] BYREF
  PHYSICAL_ADDRESS v7[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v8; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v9; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v11; // [rsp+88h] [rbp-78h]
  __int64 v12; // [rsp+90h] [rbp-70h]
  _BYTE v13[16]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v14[2064]; // [rsp+A8h] [rbp-58h] BYREF

  v8 = 0uLL;
  v9 = 0LL;
  v0 = (_DWORD *)HvlpAcquireHypercallPage(v7, 1, (__int64)v13, 8LL);
  v1 = HvlpAcquireHypercallPage(v6, 2, (__int64)v14, 1032LL);
  v2 = v6[3];
  v3 = v7[3];
  v4 = v1;
  *v0 = 14;
  if ( !(unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
                            123LL,
                            (PHYSICAL_ADDRESS)v3.QuadPart,
                            (PHYSICAL_ADDRESS)v2.QuadPart) )
  {
    v8 = *(_OWORD *)v4;
    v9 = *(_QWORD *)(v4 + 16);
  }
  HvlpReleaseHypercallPage((__int64)v6);
  result = HvlpReleaseHypercallPage((__int64)v7);
  if ( BYTE1(v8) )
  {
    if ( (_BYTE)v8 )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v8 + 8;
      v12 = 8LL;
      v11 = &v9;
      return HvlpWriteEventLog(&HV_EVENTLOG_TSC_SYNC_FAILED, 2u, &UserData);
    }
  }
  return result;
}
