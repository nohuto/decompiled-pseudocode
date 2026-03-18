/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x140209394
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExSystemExceptionFilter @ 0x14040A5E8 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(_DWORD *a1)
{
  unsigned __int16 i; // dx
  __int64 v3; // rcx
  unsigned int v4; // r10d
  __int64 v5; // rdx
  __int64 v6; // rcx

  *a1 = KiIntSteerAffinitizedInterrupts;
  a1[1] = 0;
  for ( i = 0; i < (unsigned __int16)KiIntSteerAffinitizedInterrupts; ++i )
    *(_QWORD *)&a1[2 * i + 2] = qword_140332988[i];
  v3 = (unsigned int)KiProcessorIndexToNumberMappingTable[KiClockTimerOwner] >> 6;
  v4 = KiProcessorIndexToNumberMappingTable[KiClockTimerOwner] & 0x3F;
  if ( *(unsigned __int16 *)a1 <= (unsigned int)v3 )
    *(_WORD *)a1 = v3 + 1;
  v5 = (unsigned int)v3;
  v6 = *(_QWORD *)&a1[2 * v3 + 2];
  _bittestandset64(&v6, v4);
  *(_QWORD *)&a1[2 * v5 + 2] = v6;
  return 0LL;
}
