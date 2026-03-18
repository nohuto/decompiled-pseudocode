/*
 * XREFs of IoGetAffinityInterrupt @ 0x14016D0AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoGetAffinityInterrupt(PKINTERRUPT InterruptObject, PGROUP_AFFINITY GroupAffinity)
{
  __int64 Number; // rax
  unsigned __int16 v3; // r8
  unsigned int v5; // ecx

  Number = InterruptObject->Number;
  v3 = 0;
  if ( !(_DWORD)Number )
    goto LABEL_5;
  if ( (unsigned int)Number < 0x280 )
  {
    v5 = KiProcessorIndexToNumberMappingTable[Number];
    if ( v5 )
    {
      v3 = v5 >> 6;
LABEL_5:
      GroupAffinity->Mask = 0LL;
      *(_QWORD *)&GroupAffinity->Group = 0LL;
      GroupAffinity->Group = v3;
      GroupAffinity->Mask = (unsigned __int64)InterruptObject[-1].ConnectionData;
      return 0;
    }
  }
  return -1073741811;
}
