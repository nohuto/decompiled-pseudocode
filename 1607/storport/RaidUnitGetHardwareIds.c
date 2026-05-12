/*
 * XREFs of RaidUnitGetHardwareIds @ 0x1C0013C64
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C0059078 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     RtlStringCchPrintfExW @ 0x1C0013EE0 (RtlStringCchPrintfExW.c)
 *     RaFixupIds @ 0x1C00592C8 (RaFixupIds.c)
 *     PortGetDeviceType @ 0x1C005A758 (PortGetDeviceType.c)
 */

__int64 __fastcall RaidUnitGetHardwareIds(__int64 a1, wchar_t **a2)
{
  wchar_t *Pool; // rax
  __int64 v5; // r8
  wchar_t *v6; // rdi
  int v7; // ecx
  _BYTE *v8; // r9
  _QWORD *DeviceType; // rax
  __int64 v10; // r9
  __int64 v11; // r12
  _QWORD *v12; // r14
  __int64 v13; // r15
  __int64 v14; // rsi
  unsigned int v15; // r10d
  ULONG dwFlags; // edx
  NTSTATUS v17; // ebx
  NTSTRSAFE_PWSTR v18; // rcx
  size_t v19; // rdx
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  __int64 result; // rax
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+90h] [rbp+40h] BYREF
  size_t pcchRemaining; // [rsp+98h] [rbp+48h] BYREF

  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x1BAuLL, 0x49446152u, *(_QWORD *)(a1 + 8));
  pcchRemaining = 221LL;
  v6 = Pool;
  if ( !Pool )
  {
    v17 = -1073741801;
    goto LABEL_11;
  }
  v7 = *(_DWORD *)(a1 + 1536);
  v8 = *(_BYTE **)(a1 + 96);
  ppszDestEnd = Pool;
  if ( (v7 & 1) != 0 )
  {
    v17 = RtlStringCchPrintfExW(
            Pool,
            0xDDuLL,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"SCSI\\VMLUN%8.8hs%16.16hs%4.4hs",
            v8 + 8,
            v8 + 16,
            v8 + 32);
    v18 = ppszDestEnd + 1;
    v19 = pcchRemaining - 1;
    ++ppszDestEnd;
    if ( v17 < 0 )
      goto LABEL_10;
    v21 = RtlStringCchPrintfExW(v18, v19, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
  }
  else
  {
    DeviceType = (_QWORD *)PortGetDeviceType(*v8 & 0x1F, 0LL, v5);
    v11 = v10 + 32;
    v12 = DeviceType;
    v13 = v10 + 16;
    v14 = v10 + 8;
    v17 = RtlStringCchPrintfExW(
            v6,
            v15,
            &ppszDestEnd,
            &pcchRemaining,
            dwFlags,
            L"SCSI\\%hs%8.8hs%16.16hs%4.4hs",
            *DeviceType,
            v10 + 8,
            v10 + 16,
            v10 + 32);
    v18 = ppszDestEnd + 1;
    v19 = pcchRemaining - 1;
    ++ppszDestEnd;
    --pcchRemaining;
    if ( v17 < 0 )
      goto LABEL_10;
    v17 = RtlStringCchPrintfExW(v18, v19, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs%8.8hs%16.16hs", *v12, v14, v13);
    v18 = ppszDestEnd + 1;
    v19 = pcchRemaining - 1;
    ++ppszDestEnd;
    --pcchRemaining;
    if ( v17 < 0 )
      goto LABEL_10;
    v20 = RtlStringCchPrintfExW(v18, v19, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs%8.8hs", *v12, v14);
    v18 = ppszDestEnd;
    v17 = v20;
    if ( v20 < 0 )
      goto LABEL_10;
    ++ppszDestEnd;
    --pcchRemaining;
    v17 = RtlStringCchPrintfExW(
            v18 + 1,
            pcchRemaining,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"SCSI\\%8.8hs%16.16hs%1.1hs",
            v14,
            v13,
            v11);
    v18 = ppszDestEnd + 1;
    v19 = pcchRemaining - 1;
    ++ppszDestEnd;
    --pcchRemaining;
    if ( v17 < 0 )
      goto LABEL_10;
    v17 = RtlStringCchPrintfExW(v18, v19, &ppszDestEnd, &pcchRemaining, 0, L"%8.8hs%16.16hs%1.1hs", v14, v13, v11);
    v18 = ppszDestEnd + 1;
    v19 = pcchRemaining - 1;
    ++ppszDestEnd;
    if ( v17 < 0 )
      goto LABEL_10;
    v21 = RtlStringCchPrintfExW(v18, v19, &ppszDestEnd, &pcchRemaining, 0, L"%hs", v12[1]);
  }
  v17 = v21;
  v18 = ppszDestEnd + 1;
LABEL_10:
  *v18 = 0;
  LOBYTE(v19) = 1;
  RaFixupIds(v6, v19);
LABEL_11:
  result = (unsigned int)v17;
  *a2 = v6;
  return result;
}
