/*
 * XREFs of KsepGetModuleInfoByName @ 0x140653BE8
 * Callers:
 *     KsepResolveShimHooks @ 0x140653058 (KsepResolveShimHooks.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x140074D74 (RtlInitAnsiString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403F6230 (RtlUnicodeStringToAnsiString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlCompareString @ 0x1404A7A40 (RtlCompareString.c)
 */

__int64 __fastcall KsepGetModuleInfoByName(PCWSTR SourceString, _DWORD *a2, _QWORD *a3)
{
  NTSTATUS v5; // ebx
  int v6; // ebx
  __int64 v7; // rbp
  _STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING SourceStringa; // [rsp+30h] [rbp-18h] BYREF

  if ( !SourceString || !a3 || !a2 )
    return 3221225485LL;
  RtlInitUnicodeString(&SourceStringa, SourceString);
  v5 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceStringa, 1u);
  if ( v5 >= 0 )
  {
    v6 = 0;
    if ( *a2 )
    {
      while ( 1 )
      {
        v7 = (__int64)&a2[74 * v6 + 2];
        RtlInitAnsiString((PANSI_STRING)&SourceStringa, (PCSZ)(v7 + *(unsigned __int16 *)(v7 + 38) + 40LL));
        if ( !RtlCompareString((const STRING *)&SourceStringa, &DestinationString, 1u) )
          break;
        if ( (unsigned int)++v6 >= *a2 )
          goto LABEL_8;
      }
      v5 = 0;
      *a3 = *(_QWORD *)(v7 + 16);
    }
    else
    {
LABEL_8:
      v5 = -1073741275;
    }
  }
  if ( DestinationString.Buffer )
    RtlFreeAnsiString((PUNICODE_STRING)&DestinationString);
  return (unsigned int)v5;
}
