/*
 * XREFs of KsepLoadShimProvider @ 0x1401CCE04
 * Callers:
 *     KsepResolveApplicableShimsForDriver @ 0x14061E1F0 (KsepResolveApplicableShimsForDriver.c)
 * Callees:
 *     ZwLoadDriver @ 0x140152500 (ZwLoadDriver.c)
 *     KsepStringConcatenate @ 0x1403B8750 (KsepStringConcatenate.c)
 *     KsepStringFree @ 0x1403B8B6C (KsepStringFree.c)
 */

__int64 __fastcall KsepLoadShimProvider(__int64 a1)
{
  __int64 v2; // r8
  NTSTATUS v3; // ebx
  UNICODE_STRING DriverServiceName; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DriverServiceName.Length = 0LL;
  DriverServiceName.Buffer = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( (*(_DWORD *)(a1 + 64) & 2) == 0 )
    return 3221225659LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 3221225473LL;
  v3 = ((__int64 (__fastcall *)(UNICODE_STRING *, const wchar_t *, __int64, _QWORD))KsepStringConcatenate)(
         &DriverServiceName,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\",
         v2,
         0LL);
  if ( v3 >= 0 )
    v3 = ZwLoadDriver(&DriverServiceName);
  KsepStringFree(&DriverServiceName);
  return (unsigned int)v3;
}
