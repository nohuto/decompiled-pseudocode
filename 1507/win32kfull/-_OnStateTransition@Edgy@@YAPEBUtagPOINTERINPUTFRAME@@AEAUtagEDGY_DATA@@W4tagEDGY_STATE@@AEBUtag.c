/*
 * XREFs of ?_OnStateTransition@Edgy@@YAPEBUtagPOINTERINPUTFRAME@@AEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1C0229E54
 * Callers:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0229D94 (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     ?_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C0229C80 (-_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_OnEnterDisambiguation@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C0229CE0 (-_OnEnterDisambiguation@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_OnEnterIdle@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C0229D4C (-_OnEnterIdle@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_SqmEdgy@Edgy@@YAXAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@H@Z @ 0x1C0229F40 (-_SqmEdgy@Edgy@@YAXAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@H@Z.c)
 */

__int64 __fastcall Edgy::_OnStateTransition(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v5; // rbp
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 224);
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    EtwTraceEdgyDetectionStop(*(unsigned int *)(a3 + 8));
    if ( a2 != 2 )
      Edgy::_SqmEdgy((Edgy *)a1, (const struct tagEDGY_DATA *)a3, 0LL, a4);
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      Edgy::_OnEnterDisambiguation((Edgy *)a1, (struct tagEDGY_DATA *)a3, (const struct Edgy::tagARC_DATA *)a3);
    }
    else if ( a2 == 2 )
    {
      Edgy::_OnEnterActive((Edgy **)a1, (struct tagEDGY_DATA *)a3, (const struct Edgy::tagARC_DATA *)a3, a4);
    }
  }
  else
  {
    Edgy::_OnEnterIdle((Edgy *)a1, (struct tagEDGY_DATA **)a3, (const struct Edgy::tagARC_DATA *)a3);
  }
  result = v5;
  *(_DWORD *)(a1 + 16) = a2;
  return result;
}
