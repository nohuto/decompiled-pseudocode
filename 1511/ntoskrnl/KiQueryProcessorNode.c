/*
 * XREFs of KiQueryProcessorNode @ 0x1401369B8
 * Callers:
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 * Callees:
 *     KiFindFirstAvailableNode @ 0x140143118 (KiFindFirstAvailableNode.c)
 *     KiIsNodeFull @ 0x140143174 (KiIsNodeFull.c)
 *     sub_1401AF240 @ 0x1401AF240 (sub_1401AF240.c)
 *     sub_1401AF268 @ 0x1401AF268 (sub_1401AF268.c)
 */

__int64 __fastcall KiQueryProcessorNode(unsigned int a1, _DWORD *a2, unsigned __int16 *a3)
{
  unsigned __int16 v6; // bp
  unsigned int ProcessorNode; // eax
  __int64 FirstAvailableNode; // r9
  __int64 v10; // rax
  __int64 v11; // rax

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
LABEL_5:
          if ( (*(_BYTE *)(KeNodeBlock[*a3] + 173) & 2) == 0 )
            FirstAvailableNode = 3221226021LL;
          if ( *a2 == -1 )
          {
            *a2 = -1;
            if ( (HvlpFlags & 4) != 0 )
            {
              v10 = sub_1401AF268(a1, a2, a3, FirstAvailableNode);
              if ( v10 )
                *a2 = *(_DWORD *)(v10 + 8);
            }
          }
          if ( (HvlpFlags & 4) == 0 )
            return (unsigned int)FirstAvailableNode;
          v11 = sub_1401AF240((unsigned int)*a2, a2, a3, FirstAvailableNode);
          if ( v11 )
          {
            if ( *(_DWORD *)(v11 + 40) )
              return (unsigned int)FirstAvailableNode;
          }
          goto LABEL_26;
        }
        FirstAvailableNode = (unsigned int)KiFindFirstAvailableNode(a3, a2, a3, ProcessorNode);
LABEL_11:
        if ( (_DWORD)FirstAvailableNode )
          return (unsigned int)FirstAvailableNode;
        goto LABEL_5;
      }
      if ( ProcessorNode != -1073741275 )
        goto LABEL_11;
      if ( v6 == 0xFFFF || (unsigned __int8)KiIsNodeFull(KeNodeBlock[v6], a2, a3, ProcessorNode) )
        return (unsigned int)FirstAvailableNode;
      *a3 = v6;
    }
    else
    {
      if ( a1 >= KiMaximumGroupSize )
      {
LABEL_26:
        LODWORD(FirstAvailableNode) = -1073741275;
        return (unsigned int)FirstAvailableNode;
      }
      *a3 = 0;
    }
    FirstAvailableNode = 0LL;
    goto LABEL_11;
  }
  _mm_lfence();
  *a3 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[a1] + 1600) + 146LL);
  return 0LL;
}
