/*
 * XREFs of ndisTraceRundownReference @ 0x1C00AD344
 * Callers:
 *     ndisTraceRundownDeviceControl @ 0x1C00AD174 (ndisTraceRundownDeviceControl.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     ndisTraceRundownSafeInterlockedIncrement @ 0x1C00B390C (ndisTraceRundownSafeInterlockedIncrement.c)
 */

__int64 ndisTraceRundownReference()
{
  unsigned int v0; // ebx
  int v1; // eax
  NTSTATUS v3; // eax
  unsigned int v4; // esi
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // cx
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  ExAcquirePushLockSharedEx(&qword_1C00859C8, 0LL);
  if ( (dword_1C0100000 & 4) != 0 )
  {
    ExReleasePushLockSharedEx(&qword_1C00859C8);
    if ( (unsigned __int8)byte_1C0085322 < 2u )
      return 3221225653LL;
    v5 = 17;
LABEL_25:
    WPP_SF_(v5, &WPP_98be5e8eac0fef6790683cac5c76438b_Traceguids);
    return 3221225653LL;
  }
  v0 = 0;
  if ( dword_1C0100004 <= 0 || (dword_1C0100000 & 2) != 0 )
  {
    if ( (dword_1C0100000 & 2) != 0 && (unsigned __int8)byte_1C0085322 >= 5u )
      WPP_SF_(0x12u, &WPP_98be5e8eac0fef6790683cac5c76438b_Traceguids);
    ExReleasePushLockSharedEx(&qword_1C00859C8);
    while ( 1 )
    {
      Timeout.QuadPart = -1200000000LL;
      v3 = KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout);
      v4 = v3;
      if ( v3 < 0 )
      {
        if ( (unsigned __int8)byte_1C0085322 >= 2u )
          WPP_SF_d(0x13u, &WPP_98be5e8eac0fef6790683cac5c76438b_Traceguids, v3);
        return v4;
      }
      ExAcquirePushLockExclusiveEx(&qword_1C00859C8, 0LL);
      if ( (dword_1C0100000 & 4) != 0 )
        break;
      if ( dword_1C0100004 > 0 && (dword_1C0100000 & 2) == 0 )
      {
        v0 = ndisTraceRundownSafeInterlockedIncrement();
        goto LABEL_16;
      }
      if ( (dword_1C0100000 & 2) == 0 )
      {
        if ( (dword_1C0100000 & 1) == 0 )
        {
          _InterlockedIncrement(&dword_1C0100004);
          dword_1C0100000 |= 2u;
          KeResetEvent(&Event);
          v0 = (dword_1C0100000 & 8) != 0 ? -1072037851 : -1072037859;
          if ( (unsigned __int8)byte_1C0085322 >= 5u )
            WPP_SF_d(0x18u, &WPP_98be5e8eac0fef6790683cac5c76438b_Traceguids, v0);
          goto LABEL_16;
        }
        KeCancelTimer(&Timer);
        dword_1C0100000 &= ~1u;
        _InterlockedIncrement(&dword_1C0100004);
        KeSetEvent(&Event, 0, 0);
        if ( (unsigned __int8)byte_1C0085322 < 5u )
        {
LABEL_16:
          ExReleasePushLockExclusiveEx(&qword_1C00859C8, 0LL);
          return v0;
        }
        v6 = 23;
LABEL_34:
        WPP_SF_(v6, &WPP_98be5e8eac0fef6790683cac5c76438b_Traceguids);
        goto LABEL_16;
      }
      if ( v4 )
      {
        dword_1C0100000 |= 4u;
        KeSetEvent(&Event, 0, 0);
        v0 = -1073741643;
        if ( (unsigned __int8)byte_1C0085322 < 2u )
          goto LABEL_16;
        v6 = 22;
        goto LABEL_34;
      }
      ExReleasePushLockExclusiveEx(&qword_1C00859C8, 0LL);
      if ( (unsigned __int8)byte_1C0085322 >= 5u )
        WPP_SF_(0x15u, &WPP_98be5e8eac0fef6790683cac5c76438b_Traceguids);
    }
    ExReleasePushLockExclusiveEx(&qword_1C00859C8, 0LL);
    if ( (unsigned __int8)byte_1C0085322 < 2u )
      return 3221225653LL;
    v5 = 20;
    goto LABEL_25;
  }
  while ( 1 )
  {
    v1 = dword_1C0100004;
    if ( dword_1C0100004 == 0x7FFFFFFF )
      break;
    if ( v1 == _InterlockedCompareExchange(&dword_1C0100004, dword_1C0100004 + 1, dword_1C0100004) )
      goto LABEL_6;
  }
  v0 = -1073741675;
LABEL_6:
  ExReleasePushLockSharedEx(&qword_1C00859C8);
  return v0;
}
