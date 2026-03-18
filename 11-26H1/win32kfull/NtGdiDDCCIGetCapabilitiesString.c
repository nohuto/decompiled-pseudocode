/*
 * XREFs of NtGdiDDCCIGetCapabilitiesString @ 0x14028BA30
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z @ 0x14028BA90 (-DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z.c)
 */

__int64 __fastcall NtGdiDDCCIGetCapabilitiesString(void *a1, char *a2, unsigned int a3)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState((_DWORD)a1, a2);
  if ( a3 )
    return CMonitorAPI::DdcciGetCapabilitiesString(
             *(CMonitorAPI **)(*(_QWORD *)(SessionState + 96) + 128LL),
             a1,
             a2,
             a3);
  else
    return 3221225485LL;
}
