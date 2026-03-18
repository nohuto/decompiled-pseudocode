/*
 * XREFs of AcpiDiagTraceThermalZoneRundown @ 0x1C00349DC
 * Callers:
 *     AcpiDiagTraceControlCallback @ 0x1C0034190 (AcpiDiagTraceControlCallback.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C001A874 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     AcpiDiagEnumCoolingDevices @ 0x1C0033B9C (AcpiDiagEnumCoolingDevices.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0033C7C (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C0034968 (AcpiDiagTracePassiveCoolingConstraint.c)
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
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned int v27; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int16 v28; // [rsp+3Ch] [rbp-25h] BYREF
  __int16 v29; // [rsp+40h] [rbp-21h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-1Dh] BYREF
  int v31; // [rsp+48h] [rbp-19h] BYREF
  int v32; // [rsp+4Ch] [rbp-15h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v34[40]; // [rsp+60h] [rbp-1h] BYREF

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
      if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(__int64 **)(a1 + 704), (__int64)&DestinationString, 1) >= 0 )
      {
        v8 = *v3;
        v9 = 29;
        while ( v8 != v3 )
        {
          v8 = (_QWORD *)*v8;
          ++v9;
        }
        PoolWithTag = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v9, 0x54706341u);
        UserData = PoolWithTag;
        if ( PoolWithTag )
        {
          v28 = DestinationString.Length >> 1;
          PoolWithTag->Ptr = (unsigned __int64)&v28;
          *(_QWORD *)&PoolWithTag->Size = 2LL;
          v11 = 2 * v28;
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
          v27 = 12;
          v30 = v12 / 0x64;
          PoolWithTag[6].Ptr = (unsigned __int64)&v30;
          *(_QWORD *)&PoolWithTag[6].Size = 4LL;
          PoolWithTag[7].Ptr = v1 + 36;
          *(_QWORD *)&PoolWithTag[7].Size = 40LL;
          PoolWithTag[8].Ptr = v1 + 76;
          *(_QWORD *)&PoolWithTag[8].Size = 4LL;
          PoolWithTag[9].Ptr = v1 + 28;
          *(_QWORD *)&PoolWithTag[9].Size = 4LL;
          PoolWithTag[10].Ptr = v1 + 100;
          *(_QWORD *)&PoolWithTag[10].Size = 4LL;
          PoolWithTag[11].Ptr = (unsigned __int64)&v32;
          *(_QWORD *)&PoolWithTag[11].Size = 4LL;
          v32 = AcpiDiagEnumCoolingDevices(v1, 1, 1, (__int64)PoolWithTag, &v27);
          v13 = v27++;
          UserData[v13].Ptr = (unsigned __int64)&v31;
          *(_QWORD *)&UserData[v13].Size = 4LL;
          v15 = 0;
          v31 = AcpiDiagEnumCoolingDevices(v1, 1, 0, v14, &v27);
          v16 = v34;
          v17 = v34;
          do
          {
            v18 = &UserData[v27++];
            v18->Reserved = 0;
            v18->Ptr = (unsigned __int64)v17;
            v18->Size = 4;
            v19 = AcpiDiagEnumCoolingDevices(v1, 0, v15++, (__int64)UserData, &v27);
            *v16 = v19;
            v17 += 4;
            ++v16;
          }
          while ( v15 < 0xA );
          v20 = v27;
          v21 = v27 + 1;
          UserData[v20].Ptr = v1 + 80;
          *(_QWORD *)&UserData[v20].Size = 4LL;
          v22 = v21;
          UserData[v22].Ptr = v1 + 24;
          *(_QWORD *)&UserData[v22].Size = 4LL;
          v23 = v21 + 1;
          v21 += 2;
          v23 *= 2LL;
          v24 = 2LL * v21;
          *(&UserData->Ptr + v23) = v1 + 12;
          *((_QWORD *)&UserData->Size + v23) = 4LL;
          *(&UserData->Ptr + v24) = v1 + 84;
          *((_QWORD *)&UserData->Size + v24) = 4LL;
          v29 = *(_WORD *)(v1 + 304) >> 1;
          v25 = v21 + 1;
          v26 = v21 + 2;
          v25 *= 2LL;
          *(&UserData->Ptr + v25) = (unsigned __int64)&v29;
          *((_QWORD *)&UserData->Size + v25) = 2LL;
          LODWORD(v24) = *(unsigned __int16 *)(v1 + 304);
          UserData[v26].Ptr = *(_QWORD *)(v1 + 312);
          UserData[v26].Size = v24;
          UserData[v26].Reserved = 0;
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
