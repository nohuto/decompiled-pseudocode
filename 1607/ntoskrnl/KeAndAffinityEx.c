/*
 * XREFs of KeAndAffinityEx @ 0x14007DAF0
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x14007D310 (KeQueryLogicalProcessorRelationship.c)
 *     KiGetDeepIdleProcessors @ 0x1400823D8 (KiGetDeepIdleProcessors.c)
 *     PpmParkReportParkedCores @ 0x1400D30F0 (PpmParkReportParkedCores.c)
 *     KeIsSubsetAffinityEx @ 0x1401D3D04 (KeIsSubsetAffinityEx.c)
 *     PspSetEffectiveJobLimits @ 0x1404D53D0 (PspSetEffectiveJobLimits.c)
 *     KeInitializeProfile @ 0x14064FD7C (KeInitializeProfile.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall KeAndAffinityEx(__int16 *a1, __int16 *a2, _BYTE *a3)
{
  _BYTE *v3; // r9
  __int16 v5; // ax
  unsigned int v6; // ebx
  unsigned __int16 i; // cx
  __int64 v8; // r8
  bool v9; // zf
  __int64 v10; // rdx
  _BYTE v12[176]; // [rsp+0h] [rbp-C8h] BYREF

  v3 = a3;
  if ( !a3 )
    v3 = v12;
  v5 = *a2;
  v6 = 0;
  if ( (unsigned __int16)*a1 < (unsigned __int16)*a2 )
    v5 = *a1;
  *(_WORD *)v3 = v5;
  for ( i = 0; i < *(_WORD *)v3; ++i )
  {
    v8 = 4LL * i;
    v9 = (*(_QWORD *)&a2[v8 + 4] & *(_QWORD *)&a1[v8 + 4]) == 0LL;
    *(_QWORD *)&v3[v8 * 2 + 8] = *(_QWORD *)&a2[v8 + 4] & *(_QWORD *)&a1[v8 + 4];
    if ( !v9 )
      v6 = 1;
  }
  if ( v3 != v12 )
  {
    *((_DWORD *)v3 + 1) = 0;
    *((_WORD *)v3 + 1) = 20;
    if ( i < 0x14u )
    {
      do
      {
        v10 = i++;
        *(_QWORD *)&v3[8 * v10 + 8] = 0LL;
      }
      while ( i < *((_WORD *)v3 + 1) );
    }
  }
  return v6;
}
