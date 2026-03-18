/*
 * XREFs of Interrupter_DetermineSecondaryInterrupterCount @ 0x1C00538FC
 * Callers:
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C004BE50 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0008558 (WPP_RECORDER_SF_DDD.c)
 */

__int64 __fastcall Interrupter_DetermineSecondaryInterrupterCount(__int64 a1, int a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  ULONG v7; // r10d
  unsigned int v8; // eax
  __int64 result; // rax
  ULONG v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]
  unsigned int v12; // [rsp+38h] [rbp-10h]

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  v7 = ActiveProcessorCount;
  if ( (*(_QWORD *)(v5 + 232) & 0x1000LL) == 0 )
  {
    v8 = a2 - 1;
    if ( a2 != 1 )
    {
      v6 = v7;
      if ( v8 > 0x10 )
        v8 = 16;
      if ( v7 > v8 )
      {
        do
          v6 >>= 1;
        while ( v6 > v8 );
      }
    }
  }
  v12 = v6;
  v11 = a2;
  v10 = v7;
  result = WPP_RECORDER_SF_DDD(
             *(_QWORD *)(v5 + 64),
             4u,
             8u,
             0x2Eu,
             (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
             v10,
             v11,
             v12);
  *(_DWORD *)(a1 + 20) = v6;
  return result;
}
