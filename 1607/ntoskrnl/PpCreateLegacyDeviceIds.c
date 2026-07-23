/*
 * XREFs of PpCreateLegacyDeviceIds @ 0x14062A964
 * Callers:
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmSetDeviceRegProp @ 0x1405121B4 (_CmSetDeviceRegProp.c)
 */

__int64 __fastcall PpCreateLegacyDeviceIds(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  wchar_t *v4; // rdi
  __int64 v5; // rsi
  int v6; // ecx
  __int64 v7; // r15
  __int64 v8; // rcx
  unsigned int v9; // r14d
  wchar_t *PoolWithTag; // rax
  int v11; // ebx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+90h] [rbp+8h] BYREF
  size_t pcchRemaining; // [rsp+A8h] [rbp+20h] BYREF

  ppszDestEnd = 0LL;
  v4 = 0LL;
  pcchRemaining = 0LL;
  if ( a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  if ( v5 && *(_QWORD *)(v5 + 48) )
  {
    if ( a3 )
    {
      v6 = *(_DWORD *)(a3 + 4);
      if ( (unsigned int)(v6 + 1) > 0x13 )
        v6 = 18;
    }
    else
    {
      v6 = 0;
    }
    v7 = v6 + 1;
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(*((_QWORD *)&off_14025D0A0 + v7) + 2 * v8) );
    v9 = 2 * (*a2 + (_DWORD)v8) + 42;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x6F697050u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, v9);
    v11 = RtlStringCchPrintfExW(
            v4,
            (unsigned __int64)v9 >> 1,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"%ws%ws\\%wZ",
            L"DETECTED",
            *((_QWORD *)&off_14025D0A0 + v7),
            a2);
    if ( v11 >= 0 )
    {
      v11 = RtlStringCchPrintfW(ppszDestEnd + 1, pcchRemaining - 1, L"%ws\\%wZ", L"DETECTED", a2);
      if ( v11 >= 0 )
        v11 = CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v5 + 48), 0LL, 3u, 7u, (__int64)v4, v9, 0);
    }
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v11;
}
