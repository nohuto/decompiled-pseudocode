/*
 * XREFs of AcpiDiagTraceThermalZoneRundown @ 0x1C0033C4C
 * Callers:
 *     AcpiDiagTraceControlCallback @ 0x1C0033400 (AcpiDiagTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     AcpiDiagEnumCoolingDevices @ 0x1C0032D3C (AcpiDiagEnumCoolingDevices.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0032EEC (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C0033BD8 (AcpiDiagTracePassiveCoolingConstraint.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C00344DC (ACPIAmliBuildObjectPathnameUnicode.c)
 */

void __fastcall AcpiDiagTraceThermalZoneRundown(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD **v3; // rdi
  _QWORD *i; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  _QWORD *v8; // rax
  ULONG v9; // r14d
  struct _EVENT_DATA_DESCRIPTOR *PoolWithTag; // rax
  int v11; // ecx
  unsigned int v12; // kr00_4
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned int v15; // edi
  _DWORD *v16; // r15
  _BYTE *v17; // r12
  struct _EVENT_DATA_DESCRIPTOR *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int16 v26; // [rsp+3Ch] [rbp-25h] BYREF
  int v27; // [rsp+40h] [rbp-21h] BYREF
  int v28; // [rsp+44h] [rbp-1Dh] BYREF
  unsigned int v29; // [rsp+48h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v31[40]; // [rsp+60h] [rbp-1h] BYREF

  v1 = *(_QWORD *)(a1 + 192);
  v3 = (_QWORD **)(v1 + 176);
  for ( i = *(_QWORD **)(v1 + 176); i != v3; i = (_QWORD *)*i )
  {
    v5 = i[5];
    if ( v5 )
    {
      v6 = i[4];
      if ( *((_BYTE *)i + 52) )
        AcpiDiagTracePassiveCoolingConstraint(v6, v5, 1, *((_BYTE *)i + 53));
      else
        AcpiDiagTraceActiveCoolingConstraint(v6, v5, 1, *((_BYTE *)i + 55));
    }
  }
  RtlInitUnicodeString(&DestinationString, 0LL);
  UserData = 0LL;
  if ( AcpiDiagHandle )
  {
    if ( EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_THERMAL_ZONE_RUNDOWN) )
    {
      if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 704), &DestinationString, 1LL) >= 0 )
      {
        v8 = *v3;
        v9 = 27;
        while ( v8 != v3 )
        {
          v8 = (_QWORD *)*v8;
          ++v9;
        }
        PoolWithTag = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v9, 0x54706341u);
        UserData = PoolWithTag;
        if ( PoolWithTag )
        {
          v26 = DestinationString.Length >> 1;
          PoolWithTag->Ptr = (unsigned __int64)&v26;
          *(_QWORD *)&PoolWithTag->Size = 2LL;
          v11 = 2 * v26;
          PoolWithTag[1].Ptr = (unsigned __int64)DestinationString.Buffer;
          PoolWithTag[1].Size = v11;
          PoolWithTag[1].Reserved = 0;
          PoolWithTag[2].Ptr = v1 + 16;
          *(_QWORD *)&PoolWithTag[2].Size = 4LL;
          PoolWithTag[3].Ptr = v1 + 20;
          *(_QWORD *)&PoolWithTag[3].Size = 4LL;
          PoolWithTag[4].Ptr = v1 + 4;
          *(_QWORD *)&PoolWithTag[4].Size = 4LL;
          PoolWithTag[5].Ptr = v1 + 8;
          *(_QWORD *)&PoolWithTag[5].Size = 4LL;
          v12 = *(_DWORD *)(v1 + 12);
          v25 = 12;
          v29 = v12 / 0x64;
          PoolWithTag[6].Ptr = (unsigned __int64)&v29;
          *(_QWORD *)&PoolWithTag[6].Size = 4LL;
          PoolWithTag[7].Ptr = v1 + 36;
          *(_QWORD *)&PoolWithTag[7].Size = 40LL;
          PoolWithTag[8].Ptr = v1 + 76;
          *(_QWORD *)&PoolWithTag[8].Size = 4LL;
          PoolWithTag[9].Ptr = v1 + 28;
          *(_QWORD *)&PoolWithTag[9].Size = 4LL;
          PoolWithTag[10].Ptr = v1 + 100;
          *(_QWORD *)&PoolWithTag[10].Size = 4LL;
          PoolWithTag[11].Ptr = (unsigned __int64)&v27;
          *(_QWORD *)&PoolWithTag[11].Size = 4LL;
          v27 = AcpiDiagEnumCoolingDevices(v1, 1, 1, (__int64)PoolWithTag, &v25);
          v13 = v25++;
          UserData[v13].Ptr = (unsigned __int64)&v28;
          *(_QWORD *)&UserData[v13].Size = 4LL;
          v15 = 0;
          v28 = AcpiDiagEnumCoolingDevices(v1, 1, 0, v14, &v25);
          v16 = v31;
          v17 = v31;
          do
          {
            v18 = &UserData[v25++];
            v18->Reserved = 0;
            v18->Ptr = (unsigned __int64)v17;
            v18->Size = 4;
            v19 = AcpiDiagEnumCoolingDevices(v1, 0, v15++, (__int64)UserData, &v25);
            *v16 = v19;
            v17 += 4;
            ++v16;
          }
          while ( v15 < 0xA );
          v20 = v25;
          v21 = v25 + 1;
          UserData[v20].Ptr = v1 + 80;
          *(_QWORD *)&UserData[v20].Size = 4LL;
          v22 = v21++;
          v22 *= 2LL;
          *(&UserData->Ptr + v22) = v1 + 24;
          *((_QWORD *)&UserData->Size + v22) = 4LL;
          v23 = v21 + 1;
          v24 = v21;
          UserData[v24].Ptr = v1 + 12;
          *(_QWORD *)&UserData[v24].Size = 4LL;
          UserData[v23].Ptr = v1 + 84;
          *(_QWORD *)&UserData[v23].Size = 4LL;
          EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_THERMAL_ZONE_RUNDOWN, 0LL, v9, UserData);
        }
      }
    }
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( UserData )
    ExFreePoolWithTag(UserData, 0x54706341u);
}
