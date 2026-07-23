/*
 * XREFs of HvlpLogIommuEvent @ 0x1401C0DC8
 * Callers:
 *     HvlMapDeviceInterrupt @ 0x1401BD188 (HvlMapDeviceInterrupt.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpWriteEventLog @ 0x1401C1144 (HvlpWriteEventLog.c)
 */

__int64 __fastcall HvlpLogIommuEvent(__int64 a1)
{
  __int64 result; // rax
  const EVENT_DESCRIPTOR *v3; // rcx
  ULONG v4; // edx
  int *v5; // r10
  __int64 v6; // r11
  char *v7; // r9
  __int64 v8; // r8
  int v9; // eax
  int v10; // [rsp+20h] [rbp-58h] BYREF
  int v11; // [rsp+24h] [rbp-54h]
  int v12; // [rsp+28h] [rbp-50h]
  char v13; // [rsp+30h] [rbp-48h] BYREF
  char v14; // [rsp+3Ch] [rbp-3Ch] BYREF

  result = (unsigned int)HvlpRootFlags;
  if ( (HvlpRootFlags & 1) != 0 && *(_BYTE *)a1 )
  {
    switch ( *(_WORD *)(a1 + 2) )
    {
      case 1:
        v3 = &HV_EVENTLOG_IOMMU_WARNING_SCOPE_CONFLICT;
        break;
      case 2:
        v3 = (const EVENT_DESCRIPTOR *)&HV_EVENTLOG_IOMMU_FAILED_RID_CONFLICT;
        break;
      case 3:
        v3 = (const EVENT_DESCRIPTOR *)&HV_EVENTLOG_IOMMU_FAILED_NO_RESOURCES;
        break;
      case 4:
        v3 = (const EVENT_DESCRIPTOR *)&HV_EVENTLOG_IOMMU_FAILED_INVALID_IOAPIC;
        v4 = 1;
        v10 = 1;
        goto LABEL_16;
      case 5:
        v3 = (const EVENT_DESCRIPTOR *)&HV_EVENTLOG_IOMMU_FAILED_NO_DEVICE_ASSIGNMENT;
        v10 = 8;
        v4 = 3;
        v11 = 8;
        v12 = 8;
        goto LABEL_16;
      case 6:
        v3 = (const EVENT_DESCRIPTOR *)&HV_EVENTLOG_IOMMU_FAILED_RESERVED_DEVICE;
        break;
      default:
        return result;
    }
    v4 = 2;
    v10 = 8;
    v11 = 8;
LABEL_16:
    v5 = &v10;
    v6 = v4;
    v7 = &v14;
    v8 = a1 + 8;
    do
    {
      *(_DWORD *)v7 = 0;
      v9 = *v5++;
      *(_QWORD *)(v7 - 12) = v8;
      v8 += 8LL;
      *((_DWORD *)v7 - 1) = v9;
      v7 += 16;
      --v6;
    }
    while ( v6 );
    return HvlpWriteEventLog(v3, v4, (PEVENT_DATA_DESCRIPTOR)((unsigned __int64)&v13 & -(__int64)(v4 != 0)));
  }
  return result;
}
