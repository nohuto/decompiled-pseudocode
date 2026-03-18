/*
 * XREFs of NtGdiDDCCISetVCPFeature @ 0x140346060
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciSetVCPFeature@CMonitorAPI@@QEAAJPEAXKK@Z @ 0x140345E08 (-DdcciSetVCPFeature@CMonitorAPI@@QEAAJPEAXKK@Z.c)
 */

__int64 __fastcall NtGdiDDCCISetVCPFeature(void *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  __int64 SessionState; // rax

  v4 = a2;
  SessionState = W32GetSessionState((_DWORD)a1, a2);
  return CMonitorAPI::DdcciSetVCPFeature(*(CMonitorAPI **)(*(_QWORD *)(SessionState + 96) + 128LL), a1, v4, a3);
}
