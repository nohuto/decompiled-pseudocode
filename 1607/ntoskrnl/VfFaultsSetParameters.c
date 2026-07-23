/*
 * XREFs of VfFaultsSetParameters @ 0x140710F7C
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x140575E80 (PsSetCreateProcessNotifyRoutine.c)
 *     ViFaultsAddAllApps @ 0x140711110 (ViFaultsAddAllApps.c)
 *     ViFaultsAddAllTags @ 0x1407111BC (ViFaultsAddAllTags.c)
 *     ViFaultsRemoveAllApps @ 0x1407116C0 (ViFaultsRemoveAllApps.c)
 *     ViFaultsRemoveAllTags @ 0x140711730 (ViFaultsRemoveAllTags.c)
 *     VfSetVerifierInformation @ 0x140721060 (VfSetVerifierInformation.c)
 */

__int64 __fastcall VfFaultsSetParameters(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // ax
  int v8; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a3) = 1;
  v8 = MmVerifierData | 4;
  v4 = VfSetVerifierInformation(&v8, 4LL, a3);
  if ( v4 >= 0 )
  {
    PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)ViCreateProcessCallback, 0);
    if ( *(_DWORD *)(a1 + 4) )
      VfFaultInjectionMaxProbability = *(_DWORD *)(a1 + 4);
    if ( *(_DWORD *)a1 )
    {
      VfFaultInjectionProbability = *(_DWORD *)a1;
    }
    else
    {
      VfFaultInjectionMaxProbability = 10000;
      VfFaultInjectionProbability = 600;
    }
    ViFaultsRemoveAllTags();
    ViFaultsRemoveAllApps();
    v5 = *(_WORD *)(a1 + 24);
    if ( v5 )
      v4 = ViFaultsAddAllApps(*(_QWORD *)(a1 + 32), v5 >> 1);
    if ( v4 >= 0 )
    {
      v6 = *(_WORD *)(a1 + 8);
      if ( v6 )
        return (unsigned int)ViFaultsAddAllTags(*(_QWORD *)(a1 + 16), v6 >> 1);
    }
  }
  return (unsigned int)v4;
}
