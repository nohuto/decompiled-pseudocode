/*
 * XREFs of SmQueryStoreInformation @ 0x140583E10
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     SmcProcessListRequest @ 0x14056B980 (SmcProcessListRequest.c)
 *     SmProcessRegistrationRequest @ 0x1405BCFBC (SmProcessRegistrationRequest.c)
 *     SmProcessGlobalCacheStatsRequest @ 0x1406D9604 (SmProcessGlobalCacheStatsRequest.c)
 *     SmProcessListRequest @ 0x1406D97B8 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1406D9CFC (SmProcessStatsRequest.c)
 *     SmcProcessStatsRequest @ 0x1406DA95C (SmcProcessStatsRequest.c)
 */

__int64 __fastcall SmQueryStoreInformation(__int64 a1, __int64 a2, int a3, __int64 a4, _DWORD *a5)
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
      return SmProcessStatsRequest(0, v8[2], v9[0], (int)a5, PreviousMode);
    case 5:
      return SmProcessListRequest(SmGlobals, *(_QWORD *)&v8[2], (unsigned int)v9[0], a5, PreviousMode);
    case 8:
      return SmcProcessListRequest((__int64)&unk_140352D68, *(ULONG64 *)&v8[2], v9[0], a5, PreviousMode);
    case 13:
      return SmcProcessStatsRequest((unsigned int)&unk_140352D68, v8[2], v9[0], (_DWORD)a5, PreviousMode);
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
