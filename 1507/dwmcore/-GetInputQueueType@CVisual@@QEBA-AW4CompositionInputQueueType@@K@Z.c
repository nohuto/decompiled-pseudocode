/*
 * XREFs of ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x18000B9D4
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x18000B398 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetInputQueueType(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned int *v4; // rcx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx

  v2 = *(_QWORD *)(a1 + 416);
  result = 0LL;
  if ( v2 )
  {
    v4 = *(unsigned int **)(v2 + 72);
    if ( v4 )
    {
      v5 = a2 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( !v7 )
            return v4[10];
          v8 = v7 - 1;
          if ( !v8 )
            return v4[7];
          if ( v8 != 1 )
            return result;
        }
        return v4[9];
      }
    }
  }
  return result;
}
