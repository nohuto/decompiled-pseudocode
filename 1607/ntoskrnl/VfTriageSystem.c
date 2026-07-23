/*
 * XREFs of VfTriageSystem @ 0x1407B9FB0
 * Callers:
 *     ViInitSystemPhase0 @ 0x1407B9E64 (ViInitSystemPhase0.c)
 * Callees:
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     MmTriageActiveInLastCrash @ 0x1407D0FCC (MmTriageActiveInLastCrash.c)
 *     ViFindTriageDriverTargets @ 0x1407D17A8 (ViFindTriageDriverTargets.c)
 *     ViFindTriageRule @ 0x1407D1820 (ViFindTriageRule.c)
 *     ViMakeVerifierSettings @ 0x1407D18BC (ViMakeVerifierSettings.c)
 *     ViTriageSameDriversFromDump @ 0x1407D19A8 (ViTriageSameDriversFromDump.c)
 *     ViValidateTriageRules @ 0x1407D1A58 (ViValidateTriageRules.c)
 *     TriageGetBugcheckData @ 0x1407D3CA8 (TriageGetBugcheckData.c)
 */

__int64 __fastcall VfTriageSystem(__int64 a1)
{
  unsigned int v1; // ebx
  int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // ebx
  int v8; // r13d
  int v9; // r14d
  int v10; // r15d
  int v11; // r12d
  __int64 TriageDriverTargets; // rsi
  __int64 v13; // rcx
  _DWORD *TriageRule; // rbx
  __int128 v15; // [rsp+40h] [rbp-30h] BYREF
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+38h]

  v1 = 0;
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: verifier triage global/registry settings %X \n", ViVerifyTriage);
  if ( MmVerifyDriverLevel != -1 || ViVerifyAllDrivers )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: driver verifier settings present.\n");
    return 0LL;
  }
  if ( ViVerifyTriage == -1 )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage skipped because it is not enabled by default.\n");
    return 0LL;
  }
  if ( !ViVerifyTriage )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage skipped because it is disabled explicitely.\n");
    return 0LL;
  }
  if ( ViVerifyTriage < 0 )
  {
    v1 = (unsigned __int16)ViVerifyTriage;
    v4 = (unsigned __int16)ViVerifyTriage;
    ViVerifyTriage = 1;
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: simulated crash code %X.\n", v4);
  }
  v5 = *(_QWORD *)(a1 + 240);
  if ( !v5 )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: null loader extension.\n");
    return 0LL;
  }
  if ( *(_DWORD *)v5 < 0xA40u )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: unexpected loader extension size.\n");
    return 0LL;
  }
  v18 = *(_QWORD *)(v5 + 40);
  if ( (int)TriageGetBugcheckData(
              v18,
              (unsigned int)&v15,
              (unsigned int)&v15 + 8,
              (unsigned int)&v16,
              (__int64)&v16 + 8,
              (__int64)&v17) >= 0 )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: a real crash happened.\n");
    v11 = v17;
    v8 = 1;
    v10 = DWORD2(v16);
    v9 = v16;
    v7 = DWORD2(v15);
    LODWORD(v6) = v15;
  }
  else
  {
    if ( !v1 )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: standard retail exit point.\n");
      return 0LL;
    }
    v6 = v1;
    v7 = -1;
    *(_QWORD *)&v15 = v6;
    v8 = 0;
    *((_QWORD *)&v15 + 1) = -1LL;
    v9 = -1;
    *(_QWORD *)&v16 = -1LL;
    v10 = -1;
    *((_QWORD *)&v16 + 1) = -1LL;
    v17 = -1LL;
    v11 = -1;
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: a fake crash will be simulated.\n");
  }
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: previous crash was %Ix %Ix %Ix %Ix %Ix.\n", v6, v7, v9, v10, v11);
  ViTriageCrashData = v15;
  qword_140300A60 = v17;
  xmmword_140300A50 = v16;
  if ( v8 )
  {
    if ( (unsigned int)MmTriageActiveInLastCrash(a1) == 1 )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage skipped because it was active in previous crash or server system.\n");
      return 0LL;
    }
    if ( !(unsigned int)ViTriageSameDriversFromDump(a1, v18) )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: some drivers changed from previous crash.\n");
      return 0LL;
    }
  }
  if ( !(unsigned int)ViValidateTriageRules(&ViVerifyTriageRules, (unsigned int)ViVerifyTriageRulesSize) )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage disabled due to invalid registry rules.\n");
    return 0LL;
  }
  if ( !(unsigned int)ViValidateTriageRules(&ViInternalTriageRules, 64LL) )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage disabled due to invalid internal rules!\n");
    return 0LL;
  }
  TriageDriverTargets = 0LL;
  TriageRule = (_DWORD *)ViFindTriageRule(&ViVerifyTriageRules, (unsigned int)ViVerifyTriageRulesSize, (unsigned int)v6);
  if ( !TriageRule )
  {
    TriageRule = (_DWORD *)ViFindTriageRule(&ViInternalTriageRules, 64LL, (unsigned int)v6);
    if ( !TriageRule )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: crash code %Ix will not be triaged.\n", v6);
      return 0LL;
    }
  }
  if ( (*TriageRule & 0xFFF80000) == 0 )
  {
    TriageDriverTargets = ViFindTriageDriverTargets(v13, (unsigned int)ViVerifyTriageRulesSize);
    if ( TriageDriverTargets )
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: no `targets' rule found.\n");
  }
  if ( !TriageRule[1] )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage disabled due to rule with null features.\n");
    return 0LL;
  }
  ViMakeVerifierSettings(TriageRule, TriageDriverTargets);
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage enabled!\n");
  return 1LL;
}
