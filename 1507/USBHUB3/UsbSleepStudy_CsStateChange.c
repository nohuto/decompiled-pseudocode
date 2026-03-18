/*
 * XREFs of UsbSleepStudy_CsStateChange @ 0x1C0032CE0
 * Callers:
 *     UsbSleepStudy_WnfPdcCallback @ 0x1C00331E0 (UsbSleepStudy_WnfPdcCallback.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1C000F284 (RtlUnicodeStringPrintf.c)
 *     Template_cjqzr2jx @ 0x1C003263C (Template_cjqzr2jx.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 */

ULONG __fastcall UsbSleepStudy_CsStateChange(const void *a1, unsigned __int8 a2, char a3)
{
  int v4; // esi
  __int64 *v6; // rdi
  KIRQL v7; // r14
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rbx
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v18[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v19[3]; // [rsp+78h] [rbp-88h] BYREF
  char v20; // [rsp+90h] [rbp-70h] BYREF

  v4 = a2;
  v6 = &gDevicesListHead;
  DbgPrint("UsbSleepStudy_CsStateChange: Enter\r\n");
  DbgPrint("UsbSleepStudy_CsStateChange: Context %#p\r\n", a1);
  DbgPrint("UsbSleepStudy_CsStateChange: PdcCsEntry %#010x\r\n", v4);
  v7 = KeAcquireSpinLockRaiseToDpc(&gDevicesListSpinLock);
  if ( gIsInConnectedStandby == (_BYTE)v4 )
  {
    DbgPrint("UsbSleepStudy_CsStateChange: No change in CS state\r\n");
  }
  else
  {
    gIsInConnectedStandby = v4;
    if ( &gDevicesListHead != (__int64 *)gDevicesListHead )
    {
      do
      {
        v6 = (__int64 *)*v6;
        if ( (_BYTE)v4 )
        {
          *((_BYTE *)v6 + 16) = a3;
          v6[4] = 0LL;
          v8 = MEMORY[0xFFFFF78000000008];
          v6[3] = MEMORY[0xFFFFF78000000008];
          DbgPrint("UsbSleepStudy_CsStateChange: Context %#p BlockerStartTime %llu\r\n", v6, v8);
          DbgPrint("UsbSleepStudy_CsStateChange: Context %#p BlockerTotalTime %llu\r\n", v6, v6[4]);
        }
        else
        {
          if ( gIsWithinLpe && *((_BYTE *)v6 + 17) )
          {
            v9 = MEMORY[0xFFFFF78000000008];
            v10 = v6[3];
            v11 = MEMORY[0xFFFFF78000000008] - v10;
            v6[4] += MEMORY[0xFFFFF78000000008] - v10;
            DbgPrint("UsbSleepStudy_CsStateChange: Context %#p currentTime %llu BlockerStartTime %llu\r\n", v6, v9, v10);
            DbgPrint(
              "UsbSleepStudy_CsStateChange: Context %#p timeSinceLastStateChange %llu BlockerTotalTime %llu\r\n",
              v6,
              v11,
              v6[4]);
          }
          v12 = v6[4];
          DbgPrint("UsbSleepStudy_CsStateChange: Context %#p blockerTotalTime %llu\r\n", v6, v12);
          if ( v12 )
          {
            *(_DWORD *)&DestinationString.Length = 0x2000000;
            DestinationString.Buffer = (unsigned __int16 *)&v20;
            DbgPrint("UsbSleepStudy_EventWriteSleepStudyBlocker: Enter\r\n");
            DbgPrint("UsbSleepStudy_EventWriteSleepStudyBlocker: Context %#p\r\n", v6);
            DbgPrint("UsbSleepStudy_EventWriteSleepStudyBlocker: BlockerTotalTime %llu\r\n", v12);
            v19[1] = 0LL;
            v18[1] = 0LL;
            v19[0] = v6[6];
            v18[0] = v6[5];
            v13 = RtlUnicodeStringPrintf(&DestinationString, L"%wZ (%wZ)", v6 + 7, v6 + 9);
            if ( v13 < 0 )
              DbgPrint("UsbSleepStudy_EventWriteSleepStudyBlocker: Failed RtlUnicodeStringPrintf %#010x\r\n", v13);
            if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
              Template_cjqzr2jx(
                DestinationString.Length,
                v14,
                v15,
                *((_BYTE *)v6 + 16),
                (__int64)v19,
                DestinationString.Length,
                (__int64)DestinationString.Buffer,
                (__int64)v18,
                v12);
            DbgPrint("UsbSleepStudy_EventWriteSleepStudyBlocker: Exit\r\n");
          }
        }
      }
      while ( &gDevicesListHead != (__int64 *)*v6 );
    }
  }
  KeReleaseSpinLock(&gDevicesListSpinLock, v7);
  return DbgPrint("UsbSleepStudy_CsStateChange: Exit\r\n");
}
