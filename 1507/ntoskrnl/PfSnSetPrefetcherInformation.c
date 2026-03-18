/*
 * XREFs of PfSnSetPrefetcherInformation @ 0x140454D9C
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PfSnBeginBootPhase @ 0x1403F6FE8 (PfSnBeginBootPhase.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140454FB0 (PfSnPrefetchCacheEntryUpdate.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     PfpProcessScenarioPhase @ 0x140582300 (PfpProcessScenarioPhase.c)
 *     PfSnAppLaunchScenarioControl @ 0x1406AFD38 (PfSnAppLaunchScenarioControl.c)
 *     PfSnOperationProcess @ 0x1406AFE3C (PfSnOperationProcess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfSnSetPrefetcherInformation(__int64 a1, __int128 *a2, int a3, KPROCESSOR_MODE a4)
{
  int v5; // eax
  int v6; // ebx
  unsigned int v8; // esi
  __int64 v9; // rdx
  bool v10; // sf
  int v11; // eax
  __int128 v12; // [rsp+20h] [rbp-D8h]
  __int128 v13; // [rsp+30h] [rbp-C8h]
  __int64 v14; // [rsp+40h] [rbp-B8h] BYREF
  int v15; // [rsp+48h] [rbp-B0h]
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
    v8 = *(_DWORD *)v13;
    if ( *(_DWORD *)v13 == 2 || !a4 )
    {
      v6 = PfSnBeginBootPhase(v8);
      if ( v8 == 2 )
      {
        memset(v16, 0, sizeof(v16));
        v16[0] = 4;
        v16[1] = 4;
        v16[2] = 1;
        LOBYTE(v9) = a4;
        PfpProcessScenarioPhase(v16, v9);
      }
      v10 = v6 < 0;
LABEL_25:
      if ( v10 )
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
      v11 = PfSnOperationProcess(&v14);
LABEL_38:
      v6 = v11;
      v10 = v11 < 0;
      goto LABEL_25;
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
    v11 = PfSnAppLaunchScenarioControl(&v17, a2);
    goto LABEL_38;
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
