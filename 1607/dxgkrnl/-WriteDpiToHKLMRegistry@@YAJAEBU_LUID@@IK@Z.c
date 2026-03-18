/*
 * XREFs of ?WriteDpiToHKLMRegistry@@YAJAEBU_LUID@@IK@Z @ 0x1C018CF98
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00C5BF0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C00B8CA0 (-WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00B9FF8 (-AllocateMonitorSetIdFromAdapterSource@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall WriteDpiToHKLMRegistry(const struct _LUID *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rbx
  const unsigned __int16 *v5; // r9
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  struct _UNICODE_STRING v10; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING v11; // [rsp+40h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF

  LODWORD(v4) = AllocateMonitorSetIdFromAdapterSource(a1, a2, &v10);
  if ( (int)v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v11, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    v6 = WriteDwordToParticularRegValue(&DestinationString, &v11, &v10, v5, a3);
    v4 = v6;
    if ( v6 < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v8 + 24) = v4;
      WdLogEvent5_WdError(v8);
    }
  }
  operator delete(v10.Buffer);
  return (unsigned int)v4;
}
