/*
 * XREFs of NtGdiDdDDICreateOutputDupl @ 0x1C00C3DE0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     UserScreenAccessCheck @ 0x1C0074110 (UserScreenAccessCheck.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     GreIsInLowBox @ 0x1C00C0FF0 (GreIsInLowBox.c)
 *     GreEnterCriticalRegionAndAcquirePushLockExclusive @ 0x1C00CAE80 (GreEnterCriticalRegionAndAcquirePushLockExclusive.c)
 *     GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C00CAF50 (GreLeaveCriticalRegionAndReleasePushLockExclusive.c)
 */

__int64 __fastcall NtGdiDdDDICreateOutputDupl(unsigned __int64 a1)
{
  char v2; // al
  BOOL IsCurrentProcessDwm; // r8d
  int v4; // eax
  char v5; // dl
  ULONGLONG v7; // rcx
  int v8; // ebx
  _DWORD *v9; // rcx
  unsigned int v10; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v11[4]; // [rsp+24h] [rbp-64h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-60h] BYREF
  _OWORD v13[3]; // [rsp+38h] [rbp-50h] BYREF
  int v14; // [rsp+68h] [rbp-20h]

  v2 = gOutputDuplicationTestControl;
  if ( (gOutputDuplicationTestControl & 2) != 0 )
  {
    IsCurrentProcessDwm = 1;
  }
  else
  {
    IsCurrentProcessDwm = UserIsCurrentProcessDwm(a1);
    v2 = gOutputDuplicationTestControl;
  }
  v10 = ((unsigned __int8)(8 * (v2 & 1)) ^ (unsigned __int8)(4 * IsCurrentProcessDwm)) & 4 ^ (8 * (v2 & 1));
  if ( !UserIsCurrentProcessDwm(v10) && (unsigned int)GreIsInLowBox() )
  {
    v10 |= 2u;
    RtlInitUnicodeString(&DestinationString, L"screenDuplication");
    v4 = RtlCapabilityCheck(0LL, &DestinationString, v11);
    v5 = 0;
    if ( v4 >= 0 )
      v5 = v11[0];
    if ( !v5 )
    {
      if ( !gbOSTestSigningEnabled || (gOutputDuplicationTestControl & 1) == 0 )
        return 3221225506LL;
      v10 |= 8u;
    }
  }
  v7 = a1;
  if ( a1 >= W32UserProbeAddress )
    v7 = W32UserProbeAddress;
  v13[0] = *(_OWORD *)v7;
  v13[1] = *(_OWORD *)(v7 + 16);
  v13[2] = *(_OWORD *)(v7 + 32);
  v14 = *(_DWORD *)(v7 + 48);
  GreEnterCriticalRegionAndAcquirePushLockExclusive(&gOutputDuplPushLock);
  v8 = ((__int64 (__fastcall *)(_OWORD *, unsigned int *))qword_1C011B540)(v13, &v10);
  if ( v8 >= 0 )
  {
    if ( !(unsigned int)UserScreenAccessCheck() )
    {
      v8 = -1073741790;
LABEL_19:
      *(_QWORD *)&DestinationString.Length = *(_QWORD *)&v13[0];
      LODWORD(DestinationString.Buffer) = 0;
      ((void (__fastcall *)(struct _UNICODE_STRING *, __int64))qword_1C011B548)(&DestinationString, 1LL);
      goto LABEL_20;
    }
    v10 |= 1u;
    v8 = ((__int64 (__fastcall *)(_OWORD *, unsigned int *))qword_1C011B540)(v13, &v10);
    if ( v8 < 0 )
      goto LABEL_19;
  }
LABEL_20:
  GreLeaveCriticalRegionAndReleasePushLockExclusive(&gOutputDuplPushLock);
  if ( v8 >= 0 )
  {
    v9 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= W32UserProbeAddress )
      v9 = (_DWORD *)W32UserProbeAddress;
    *v9 = HIDWORD(v13[0]);
  }
  return (unsigned int)v8;
}
