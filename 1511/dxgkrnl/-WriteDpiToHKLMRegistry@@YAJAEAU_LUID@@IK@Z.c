/*
 * XREFs of ?WriteDpiToHKLMRegistry@@YAJAEAU_LUID@@IK@Z @ 0x1C0165104
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00AD640 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005D684 (-AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C0165318 (-WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 */

__int64 __fastcall WriteDpiToHKLMRegistry(struct _LUID *a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _UNICODE_STRING v9; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING v10; // [rsp+40h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF

  LODWORD(v4) = AllocateMonitorSetIdFromAdapterSource(a1, a2, &v9);
  if ( (int)v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v10, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    v5 = WriteDwordToParticularRegValue(&DestinationString, &v10, &v9, L"DpiValue", a3);
    v4 = v5;
    if ( v5 < 0 )
    {
      v7 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v7 + 24) = v4;
      WdLogEvent5_WdError(v7);
    }
  }
  operator delete(v9.Buffer);
  return (unsigned int)v4;
}
