/*
 * XREFs of HvlpLogGuestStateScrubbingStatus @ 0x1401C0B14
 * Callers:
 *     HvlPhase2Initialize @ 0x14014CA18 (HvlPhase2Initialize.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvlpWriteEventLog @ 0x1401C1144 (HvlpWriteEventLog.c)
 *     HvcallInitiateHypercall @ 0x140231E94 (HvcallInitiateHypercall.c)
 */

char HvlpLogGuestStateScrubbingStatus()
{
  unsigned int v0; // edi
  _DWORD *v1; // rbx
  __int64 v2; // rax
  PHYSICAL_ADDRESS v3; // r8
  PHYSICAL_ADDRESS v4; // rdx
  unsigned int *v5; // rsi
  char result; // al
  int v7; // [rsp+28h] [rbp-E0h] BYREF
  int v8; // [rsp+2Ch] [rbp-DCh] BYREF
  int v9; // [rsp+30h] [rbp-D8h] BYREF
  int v10; // [rsp+34h] [rbp-D4h] BYREF
  int v11; // [rsp+38h] [rbp-D0h] BYREF
  int v12; // [rsp+3Ch] [rbp-CCh] BYREF
  int v13; // [rsp+40h] [rbp-C8h] BYREF
  int v14; // [rsp+44h] [rbp-C4h] BYREF
  PHYSICAL_ADDRESS v15[4]; // [rsp+48h] [rbp-C0h] BYREF
  PHYSICAL_ADDRESS v16[4]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  int *v18; // [rsp+98h] [rbp-70h]
  __int64 v19; // [rsp+A0h] [rbp-68h]
  int *v20; // [rsp+A8h] [rbp-60h]
  __int64 v21; // [rsp+B0h] [rbp-58h]
  int *v22; // [rsp+B8h] [rbp-50h]
  __int64 v23; // [rsp+C0h] [rbp-48h]
  int *v24; // [rsp+C8h] [rbp-40h]
  __int64 v25; // [rsp+D0h] [rbp-38h]
  int *v26; // [rsp+D8h] [rbp-30h]
  __int64 v27; // [rsp+E0h] [rbp-28h]
  int *v28; // [rsp+E8h] [rbp-20h]
  __int64 v29; // [rsp+F0h] [rbp-18h]
  int *v30; // [rsp+F8h] [rbp-10h]
  __int64 v31; // [rsp+100h] [rbp-8h]
  _BYTE v32[16]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v33[2064]; // [rsp+118h] [rbp+10h] BYREF

  v0 = 0;
  v1 = (_DWORD *)HvlpAcquireHypercallPage(v16, 1, (__int64)v32, 8LL);
  v2 = HvlpAcquireHypercallPage(v15, 2, (__int64)v33, 1032LL);
  v3 = v15[3];
  v4 = v16[3];
  v5 = (unsigned int *)v2;
  *v1 = 19;
  if ( !(unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallInitiateHypercall)(
                            123LL,
                            (PHYSICAL_ADDRESS)v4.QuadPart,
                            (PHYSICAL_ADDRESS)v3.QuadPart) )
    v0 = *v5;
  HvlpReleaseHypercallPage((__int64)v15);
  result = HvlpReleaseHypercallPage((__int64)v16);
  if ( v0 )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    v7 = v0 & 1;
    v19 = 4LL;
    UserData.Ptr = (ULONGLONG)&v7;
    v21 = 4LL;
    v8 = ((unsigned __int8)v0 >> 1) & 1;
    v18 = &v8;
    v23 = 4LL;
    v9 = ((unsigned __int8)v0 >> 2) & 1;
    v20 = &v9;
    v25 = 4LL;
    v10 = ((unsigned __int8)v0 >> 3) & 1;
    v22 = &v10;
    v27 = 4LL;
    v11 = ((unsigned __int8)v0 >> 4) & 1;
    v24 = &v11;
    v29 = 4LL;
    v12 = ((unsigned __int8)v0 >> 5) & 1;
    v26 = &v12;
    v13 = (unsigned __int8)v0 >> 7;
    v28 = &v13;
    v31 = 4LL;
    v14 = (v0 >> 8) & 1;
    v30 = &v14;
    result = HvlpWriteEventLog(&HV_EVENTLOG_GUEST_STATE_SCRUBBING, 8u, &UserData);
    if ( (v0 & 0x40) != 0 )
      return HvlpWriteEventLog(&HV_EVENTLOG_GUEST_STATE_SCRUBBING_DISABLED_CORE_SCHEDULER, 0, 0LL);
  }
  return result;
}
