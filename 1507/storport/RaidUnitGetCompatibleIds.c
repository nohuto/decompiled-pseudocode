/*
 * XREFs of RaidUnitGetCompatibleIds @ 0x1C000D66C
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C004D6C0 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0003BAC (RaidAllocatePool.c)
 *     RaidUnitGet1667DeviceRegistryValue @ 0x1C000A694 (RaidUnitGet1667DeviceRegistryValue.c)
 *     RtlStringCchPrintfExW @ 0x1C000DCA8 (RtlStringCchPrintfExW.c)
 *     RaFixupIds @ 0x1C004D900 (RaFixupIds.c)
 *     PortGetDeviceType @ 0x1C004FABC (PortGetDeviceType.c)
 */

__int64 __fastcall RaidUnitGetCompatibleIds(__int64 a1, wchar_t **a2)
{
  wchar_t *Pool; // rax
  __int64 v5; // r8
  wchar_t *v6; // rsi
  int v7; // ecx
  _QWORD *DeviceType; // rax
  size_t v9; // rdx
  NTSTATUS v10; // edi
  wchar_t *v11; // rcx
  size_t v12; // rdx
  size_t v13; // r15
  wchar_t *v14; // rbx
  __int64 v15; // rdx
  __int64 result; // rax
  NTSTATUS v17; // eax
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+80h] [rbp+40h] BYREF
  size_t pcchRemaining; // [rsp+88h] [rbp+48h] BYREF

  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x4CuLL, 0x49446152u, *(_QWORD *)(a1 + 8));
  v6 = Pool;
  if ( !Pool )
  {
    v10 = -1073741801;
    goto LABEL_8;
  }
  v7 = *(_DWORD *)(a1 + 1520);
  pcchRemaining = 38LL;
  ppszDestEnd = Pool;
  if ( (v7 & 1) != 0 )
  {
    v17 = RtlStringCchPrintfExW(Pool, 0x26uLL, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
LABEL_11:
    v10 = v17;
    v14 = ppszDestEnd + 1;
    goto LABEL_6;
  }
  DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 96) & 0x1F, 38LL, v5);
  v10 = RtlStringCchPrintfExW(v6, v9, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs", *DeviceType);
  v11 = ppszDestEnd + 1;
  v12 = pcchRemaining - 1;
  ++ppszDestEnd;
  --pcchRemaining;
  if ( v10 < 0 )
    goto LABEL_8;
  v10 = RtlStringCchPrintfExW(v11, v12, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\RAW");
  v13 = pcchRemaining;
  v14 = ++ppszDestEnd;
  if ( v10 < 0 )
    goto LABEL_8;
  RaidUnitGet1667DeviceRegistryValue(a1);
  if ( *(_BYTE *)(a1 + 120) )
  {
    v17 = RtlStringCchPrintfExW(v14, v13 - 1, &ppszDestEnd, &pcchRemaining, 0, L"%hs", "Disk1667");
    goto LABEL_11;
  }
LABEL_6:
  if ( v10 >= 0 )
  {
    LOBYTE(v15) = 1;
    *v14 = 0;
    RaFixupIds(v6, v15);
  }
LABEL_8:
  result = (unsigned int)v10;
  *a2 = v6;
  return result;
}
