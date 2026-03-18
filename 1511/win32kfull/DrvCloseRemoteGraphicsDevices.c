/*
 * XREFs of DrvCloseRemoteGraphicsDevices @ 0x1C014ECB0
 * Callers:
 *     xxxRemoteReconnect @ 0x1C014DAC0 (xxxRemoteReconnect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 DrvCloseRemoteGraphicsDevices()
{
  __int64 result; // rax
  struct tagGRAPHICS_DEVICE *v1; // rcx
  struct tagGRAPHICS_DEVICE *v2; // rbx
  struct tagGRAPHICS_DEVICE *v3; // rdi
  struct tagGRAPHICS_DEVICE *v4; // rsi
  __int64 v5; // rax

  result = UserIsUserCritSecIn();
  if ( !(_DWORD)result )
  {
    v5 = WdLogNewEntry5_WdAssertion();
    result = WdLogEvent5_WdAssertion(v5);
  }
  v1 = gpRemoteGraphicsDeviceList;
  v2 = gpRemoteGraphicsDeviceList;
  if ( gpRemoteGraphicsDeviceList )
  {
    v3 = gpRemoteGraphicsDeviceList;
    do
    {
      v4 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v2 + 16);
      if ( (*((_DWORD *)v2 + 40) & 0x4000000) != 0 )
      {
        *((_QWORD *)v3 + 16) = v4;
        if ( v3 == v2 )
          v3 = v4;
        if ( *(struct tagGRAPHICS_DEVICE **)v1 == v2 )
          *(_QWORD *)v1 = v4;
        if ( gpRemoteGraphicsDeviceListLast == v2 )
          gpRemoteGraphicsDeviceListLast = v3;
        --gcRemoteNextGlobalPhysicalOutputNumber;
        if ( *((_QWORD *)v2 + 39) )
        {
          ((void (__fastcall *)(_QWORD, _QWORD))gDxgkInterface[124])(*((_QWORD *)v2 + 37), 0LL);
          *((_QWORD *)v2 + 37) = 0LL;
          *((_QWORD *)v2 + 38) = 0LL;
          *((_QWORD *)v2 + 39) = 0LL;
        }
        result = DrvCleanupOneGraphicsDevice(v2);
        v1 = gpRemoteGraphicsDeviceList;
      }
      else
      {
        v3 = v2;
      }
      v2 = v4;
    }
    while ( v4 );
  }
  return result;
}
