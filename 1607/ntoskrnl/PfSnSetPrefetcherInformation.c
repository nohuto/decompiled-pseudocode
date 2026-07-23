/*
 * XREFs of PfSnSetPrefetcherInformation @ 0x1403EC51C
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PfSnBeginBootPhase @ 0x1403D3020 (PfSnBeginBootPhase.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1403EB1DC (PfSnPrefetchCacheEntryUpdate.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     PfSnOperationProcess @ 0x1404D2240 (PfSnOperationProcess.c)
 *     PfpProcessScenarioPhase @ 0x140545928 (PfpProcessScenarioPhase.c)
 *     PfSnAppLaunchScenarioControl @ 0x140669CAC (PfSnAppLaunchScenarioControl.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfSnSetPrefetcherInformation(__int64 a1, __int128 *a2, int a3, KPROCESSOR_MODE a4)
{
  int v5; // eax
  int v6; // ebx
  int v8; // eax
  bool v9; // sf
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int128 v12; // [rsp+20h] [rbp-D8h]
  __int128 v13; // [rsp+30h] [rbp-C8h]
  __int64 v14; // [rsp+48h] [rbp-B0h] BYREF
  int v15; // [rsp+50h] [rbp-A8h]
  _DWORD v16[8]; // [rsp+58h] [rbp-A0h] BYREF
  __int128 v17; // [rsp+78h] [rbp-80h] BYREF
  _OWORD v18[4]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v19; // [rsp+D0h] [rbp-28h]
  int v20; // [rsp+D8h] [rbp-20h]

  if ( a3 != 32 )
    return (unsigned int)-1073741820;
  v12 = *a2;
  v13 = a2[1];
  if ( *(_QWORD *)a2 != 0x6B75684300000001LL )
    return (unsigned int)-1073741811;
  if ( DWORD2(v12) > 8 || (v5 = 296, !_bittest(&v5, DWORD2(v12))) )
  {
    if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
      return (unsigned int)-1073741790;
  }
  if ( DWORD2(v12) == 3 )
  {
    if ( DWORD2(v13) != 4 )
      return (unsigned int)-1073741811;
    if ( a4 && (v13 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = *(_DWORD *)v13;
    if ( *(_DWORD *)v13 == 2 || !a4 )
    {
      v6 = PfSnBeginBootPhase(v10);
      if ( v10 == 2 )
      {
        memset(v16, 0, sizeof(v16));
        v16[0] = 4;
        v16[1] = 4;
        v16[2] = 1;
        LOBYTE(v11) = a4;
        PfpProcessScenarioPhase(v16, v11);
      }
      v9 = v6 < 0;
LABEL_23:
      if ( v9 )
        return (unsigned int)v6;
      return 0;
    }
    return (unsigned int)-1073741790;
  }
  if ( DWORD2(v12) == 5 )
  {
    if ( DWORD2(v13) == 12 )
    {
      if ( a4 && (v13 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = *(_QWORD *)v13;
      v15 = *(_DWORD *)(v13 + 8);
      v8 = PfSnOperationProcess(&v14);
LABEL_22:
      v6 = v8;
      v9 = v8 < 0;
      goto LABEL_23;
    }
    return (unsigned int)-1073741811;
  }
  if ( DWORD2(v12) != 6 )
  {
    if ( DWORD2(v12) != 8 )
      return (unsigned int)-1073741821;
    if ( DWORD2(v13) != 16 )
      return (unsigned int)-1073741306;
    if ( a4 && (v13 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = *(_OWORD *)v13;
    LOBYTE(a2) = a4;
    v8 = PfSnAppLaunchScenarioControl(&v17, a2);
    goto LABEL_22;
  }
  if ( DWORD2(v13) != 76 )
    return (unsigned int)-1073741306;
  if ( a4 && (v13 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v18[0] = *(_OWORD *)v13;
  v18[1] = *(_OWORD *)(v13 + 16);
  v18[2] = *(_OWORD *)(v13 + 32);
  v18[3] = *(_OWORD *)(v13 + 48);
  v19 = *(_QWORD *)(v13 + 64);
  v20 = *(_DWORD *)(v13 + 72);
  if ( LODWORD(v18[0]) != 1 )
    return (unsigned int)-1073741811;
  PfSnPrefetchCacheEntryUpdate(v18);
  return 0;
}
