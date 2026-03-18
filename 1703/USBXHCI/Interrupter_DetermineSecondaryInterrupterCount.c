/*
 * XREFs of Interrupter_DetermineSecondaryInterrupterCount @ 0x1C0055480
 * Callers:
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C004DE30 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0008D60 (WPP_RECORDER_SF_DDD.c)
 */

__int64 __fastcall Interrupter_DetermineSecondaryInterrupterCount(__int64 a1, int a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 result; // rax
  ULONG v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]
  unsigned int v10; // [rsp+38h] [rbp-10h]

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  if ( (*(_QWORD *)(v5 + 232) & 0x1000LL) == 0 && a2 != 1 )
  {
    v6 = a2 - 1;
    if ( (unsigned int)(a2 - 1) > 0x10 )
      v6 = 16;
    if ( ActiveProcessorCount <= v6 )
      v6 = ActiveProcessorCount;
  }
  v10 = v6;
  v9 = a2;
  v8 = ActiveProcessorCount;
  result = WPP_RECORDER_SF_DDD(
             *(_QWORD *)(v5 + 64),
             4u,
             8u,
             0x2Eu,
             (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
             v8,
             v9,
             v10);
  *(_DWORD *)(a1 + 20) = v6;
  return result;
}
