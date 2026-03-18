/*
 * XREFs of ??$RunForAllScrollAnimations@V_lambda_37752b4d3a5cf957f6becd73f4bf70b3_@@@CInteractionTracker@@AEAAXAEBV_lambda_37752b4d3a5cf957f6becd73f4bf70b3_@@@Z @ 0x180149638
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18014BD80 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CInteractionTracker::RunForAllScrollAnimations<_lambda_37752b4d3a5cf957f6becd73f4bf70b3_>(
        __int64 a1,
        int **a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r10
  int v6; // r8d
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  int v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = (__int64 *)(a1 + 416);
  v4 = 3LL;
  do
  {
    v5 = *v3;
    if ( *v3 )
    {
      v6 = **a2;
      v7 = *(_DWORD *)(v5 + 536);
      v10 = v6;
      v8 = v7 + 1;
      if ( v7 + 1 < v7 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else if ( v8 > *(_DWORD *)(v5 + 532) )
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet(v5 + 512, 4u, 1, &v10);
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(v5 + 512) + 4LL * v7) = v6;
        *(_DWORD *)(v5 + 536) = v8;
      }
    }
    ++v3;
    --v4;
  }
  while ( v4 );
}
