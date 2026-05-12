/*
 * XREFs of RaidStandardSecondaryDumpCallback @ 0x1C0042B00
 * Callers:
 *     <none>
 * Callees:
 *     FillBufferWithDriverTelemetryDump @ 0x1C0042840 (FillBufferWithDriverTelemetryDump.c)
 */

void __fastcall RaidStandardSecondaryDumpCallback(
        __int64 Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        GUID *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 v5; // rax
  int v6; // eax
  _DWORD *v7; // rdx
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  if ( BootDriveExtension && *(_DWORD *)(*(_QWORD *)(BootDriveExtension + 24) + 5060LL) )
  {
    v5 = *(_QWORD *)&ReasonSpecificData[2].Data1;
    if ( v5 )
    {
      v7 = *(_DWORD **)&ReasonSpecificData->Data1;
      if ( *(_QWORD *)&ReasonSpecificData->Data1 == v5 )
      {
        v8 = *(_DWORD *)ReasonSpecificData->Data4;
        v6 = FillBufferWithDriverTelemetryDump(Reason, v7, &v8);
      }
      else
      {
        v6 = -1073741306;
      }
    }
    else
    {
      v8 = 0;
      v6 = FillBufferWithDriverTelemetryDump(Reason, 0LL, &v8);
      if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741789 )
        v6 = 0;
    }
    if ( v6 >= 0 )
    {
      *(_DWORD *)ReasonSpecificData[2].Data4 = v8;
      ReasonSpecificData[1] = GUID_DEVICEDUMP_DRIVER_STORAGE_PORT;
    }
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[2].Data4 = 0;
  }
}
