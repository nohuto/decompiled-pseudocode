/*
 * XREFs of KiIntSteerInit @ 0x1407E6CE4
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     xHalSetSystemInformation @ 0x1405C733C (xHalSetSystemInformation.c)
 */

__int64 KiIntSteerInit()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // rcx

  KiIntTrackRootCount = 0;
  KiIntTrackSpinlock = 0LL;
  dword_1403328C4 = 0;
  qword_140332898 = (__int64)&KiIntTrackRootList;
  KiIntTrackRootList = (ULONG_PTR)&KiIntTrackRootList;
  KiIntSteerMask = 1310721;
  memset(qword_1403328C8, 0, sizeof(qword_1403328C8));
  v0 = (unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6;
  if ( (_DWORD)v0 )
    LOWORD(KiIntSteerMask) = v0 + 1;
  dword_140332984 = 0;
  v1 = (unsigned int)v0;
  v2 = qword_1403328C8[v0] | (1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F));
  KiIntSteerAffinitizedInterrupts = 1310721;
  qword_1403328C8[v1] = v2;
  memset(qword_140332988, 0, sizeof(qword_140332988));
  off_140321B18();
  return 0LL;
}
