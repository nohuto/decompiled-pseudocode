/*
 * XREFs of SmQueryStoreInformation @ 0x140545A48
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     SmProcessRegistrationRequest @ 0x140545B20 (SmProcessRegistrationRequest.c)
 *     SmcProcessListRequest @ 0x14054D4F8 (SmcProcessListRequest.c)
 *     SmProcessGlobalCacheStatsRequest @ 0x140657330 (SmProcessGlobalCacheStatsRequest.c)
 *     SmProcessListRequest @ 0x1406574E4 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1406579D0 (SmProcessStatsRequest.c)
 *     SmcProcessStatsRequest @ 0x140658530 (SmcProcessStatsRequest.c)
 */

__int64 __fastcall SmQueryStoreInformation(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  KPROCESSOR_MODE PreviousMode; // bl
  int v6; // ecx
  int v8[4]; // [rsp+30h] [rbp-28h]
  int v9[2]; // [rsp+40h] [rbp-18h]

  PreviousMode = a4;
  if ( a3 != 24 )
    return 3221225476LL;
  *(_OWORD *)v8 = *(_OWORD *)a2;
  *(_QWORD *)v9 = *(_QWORD *)(a2 + 16);
  if ( (unsigned int)*(_OWORD *)a2 != 1 )
    return 3221225485LL;
  if ( v8[1] > 0x10u || (v6 = 74020, !_bittest(&v6, v8[1])) )
  {
    if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
      return 3221225506LL;
  }
  switch ( v8[1] )
  {
    case 2:
      return SmProcessStatsRequest(0, v8[2], v9[0], a5, PreviousMode);
    case 5:
      return SmProcessListRequest(&SmGlobals, *(_QWORD *)&v8[2], (unsigned int)v9[0], a5, PreviousMode);
    case 8:
      return SmcProcessListRequest((unsigned int)&unk_140304FF8, v8[2], v9[0], a5, PreviousMode);
    case 13:
      return SmcProcessStatsRequest((unsigned int)&unk_140304FF8, v8[2], v9[0], a5, PreviousMode);
    case 15:
      LOBYTE(a4) = PreviousMode;
      return SmProcessRegistrationRequest(*(_QWORD *)&v8[2], (unsigned int)v9[0], a5, a4);
    case 16:
      LOBYTE(a4) = PreviousMode;
      return SmProcessGlobalCacheStatsRequest(*(_QWORD *)&v8[2], (unsigned int)v9[0], a5, a4);
    default:
      return 3221225475LL;
  }
}
