/*
 * XREFs of ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C00E35D8
 * Callers:
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C00E0D54 (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     sub_1C00E350C @ 0x1C00E350C (sub_1C00E350C.c)
 * Callees:
 *     ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C000C4A0 (--$-OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z.c)
 */

__int64 __fastcall IsValidFrequencyRange(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *a1)
{
  D3DKMDT_FREQUENCY_RANGE *p_RangeLimits; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rcx
  D3DDDI_RATIONAL *p_MinHSyncFreq; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // [rsp+30h] [rbp+10h] BYREF
  int v16; // [rsp+34h] [rbp+14h]

  if ( !a1->RangeLimits.MinVSyncFreq.Denominator )
    return 3223192330LL;
  p_RangeLimits = &a1->RangeLimits;
  v15 = 500;
  v16 = 1;
  if ( operator><_D3DDDI_RATIONAL>((unsigned int *)&a1->RangeLimits.MinVSyncFreq, &v15) )
    return 3223192330LL;
  v6 = 5LL * p_RangeLimits->MinVSyncFreq.Denominator;
  if ( p_RangeLimits->MinVSyncFreq.Numerator < v6 )
  {
    if ( a1->Origin != D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE )
      return 3223192330LL;
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, v3, v4, v5);
    v13[3] = p_RangeLimits->MinVSyncFreq.Numerator;
    v13[4] = a1->RangeLimits.MinVSyncFreq.Denominator;
    v13[5] = 5LL;
    WdLogEvent5_WdWarning(v13);
  }
  if ( !a1->RangeLimits.MinHSyncFreq.Denominator )
    return 3223192330LL;
  p_MinHSyncFreq = &a1->RangeLimits.MinHSyncFreq;
  v15 = 1000000;
  v16 = 1;
  if ( operator><_D3DDDI_RATIONAL>((unsigned int *)&a1->RangeLimits.MinHSyncFreq, &v15) )
    return 3223192330LL;
  v11 = 1000LL * a1->RangeLimits.MinHSyncFreq.Denominator;
  if ( p_MinHSyncFreq->Numerator < v11 )
  {
    if ( a1->Origin == D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v8, v9, v10);
      v14[3] = p_MinHSyncFreq->Numerator;
      v14[4] = a1->RangeLimits.MinHSyncFreq.Denominator;
      v14[5] = 1000LL;
      WdLogEvent5_WdWarning(v14);
      goto LABEL_7;
    }
    return 3223192330LL;
  }
LABEL_7:
  if ( !a1->RangeLimits.MaxVSyncFreq.Denominator )
    return 3223192330LL;
  if ( a1->RangeLimits.MaxVSyncFreq.Numerator < 5 * (unsigned __int64)a1->RangeLimits.MaxVSyncFreq.Denominator )
    return 3223192330LL;
  v15 = 500;
  v16 = 1;
  if ( operator><_D3DDDI_RATIONAL>((unsigned int *)&a1->RangeLimits.MaxVSyncFreq, &v15) )
    return 3223192330LL;
  if ( !a1->RangeLimits.MaxHSyncFreq.Denominator )
    return 3223192330LL;
  if ( a1->RangeLimits.MaxHSyncFreq.Numerator < 1000 * (unsigned __int64)a1->RangeLimits.MaxHSyncFreq.Denominator )
    return 3223192330LL;
  v15 = 1000000;
  v16 = 1;
  if ( operator><_D3DDDI_RATIONAL>((unsigned int *)&a1->RangeLimits.MaxHSyncFreq, &v15) )
    return 3223192330LL;
  if ( a1->ConstraintType != D3DKMDT_MFRC_ACTIVESIZE )
  {
    if ( a1->ConstraintType != D3DKMDT_MFRC_MAXPIXELRATE )
      return 3223192408LL;
    if ( a1->Constraint.MaxPixelRate - 1 <= 0x2540BE3FFLL )
      return 0LL;
    return 3223192330LL;
  }
  if ( a1->Constraint.ActiveSize.cx >= 0x64 && a1->Constraint.ActiveSize.cy >= 0x64 )
    return 0LL;
  return 3223192331LL;
}
