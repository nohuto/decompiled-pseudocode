/*
 * XREFs of KiQueryProcessorNode @ 0x140139A1C
 * Callers:
 *     KiStartDynamicProcessor @ 0x14064F124 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 * Callees:
 *     KiFindFirstAvailableNode @ 0x140139AF4 (KiFindFirstAvailableNode.c)
 *     KiIsNodeFull @ 0x140139B50 (KiIsNodeFull.c)
 *     HvlpGetLpcbByApicId @ 0x1401BB84C (HvlpGetLpcbByApicId.c)
 *     HvlpGetLpcbByLpIndex @ 0x1401BB874 (HvlpGetLpcbByLpIndex.c)
 */

__int64 __fastcall KiQueryProcessorNode(unsigned int a1, _DWORD *a2, unsigned __int16 *a3)
{
  unsigned __int16 v6; // bp
  unsigned int ProcessorNode; // eax
  __int64 FirstAvailableNode; // r9
  char v9; // r10
  __int64 LpcbByLpIndex; // rax
  __int64 LpcbByApicId; // rax

  if ( a1 >= (unsigned int)KeNumberProcessors_0 )
  {
    v6 = *a3;
    if ( KiNumaQueryProcessorNode )
    {
      ProcessorNode = KiNumaQueryProcessorNode(a1);
      FirstAvailableNode = ProcessorNode;
      if ( !ProcessorNode )
      {
        if ( *a3 != 0xFFFF )
        {
LABEL_7:
          v9 = 2;
          if ( (*(_BYTE *)(KeNodeBlock[*a3] + 173) & 2) == 0 )
            FirstAvailableNode = 3221226021LL;
          if ( *a2 == -1 )
          {
            *a2 = -1;
            if ( (HvlpFlags & 2) != 0 )
            {
              LpcbByLpIndex = HvlpGetLpcbByLpIndex(a1, a2, a3, FirstAvailableNode);
              if ( LpcbByLpIndex )
                *a2 = *(_DWORD *)(LpcbByLpIndex + 8);
            }
          }
          if ( ((unsigned __int8)HvlpFlags & (unsigned __int8)v9) == 0 )
            return (unsigned int)FirstAvailableNode;
          LpcbByApicId = HvlpGetLpcbByApicId((unsigned int)*a2, a2, a3, FirstAvailableNode);
          if ( LpcbByApicId )
          {
            if ( *(_DWORD *)(LpcbByApicId + 40) )
              return (unsigned int)FirstAvailableNode;
          }
          goto LABEL_25;
        }
        FirstAvailableNode = (unsigned int)KiFindFirstAvailableNode(a3, a2, a3, ProcessorNode);
LABEL_6:
        if ( (_DWORD)FirstAvailableNode )
          return (unsigned int)FirstAvailableNode;
        goto LABEL_7;
      }
      if ( ProcessorNode != -1073741275 )
        goto LABEL_6;
      if ( v6 == 0xFFFF || (unsigned __int8)KiIsNodeFull(KeNodeBlock[v6], a2, a3, ProcessorNode) )
        return (unsigned int)FirstAvailableNode;
      *a3 = v6;
    }
    else
    {
      if ( a1 >= KiMaximumGroupSize )
      {
LABEL_25:
        LODWORD(FirstAvailableNode) = -1073741275;
        return (unsigned int)FirstAvailableNode;
      }
      *a3 = 0;
    }
    FirstAvailableNode = 0LL;
    goto LABEL_6;
  }
  _mm_lfence();
  *a3 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[a1] + 1600) + 146LL);
  return 0LL;
}
