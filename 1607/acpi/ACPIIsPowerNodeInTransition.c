/*
 * XREFs of ACPIIsPowerNodeInTransition @ 0x1C004AFC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqss @ 0x1C00437B8 (WPP_RECORDER_SF_qqqss.c)
 */

__int64 __fastcall ACPIIsPowerNodeInTransition(__int64 a1, int a2, __int64 a3)
{
  const char *v3; // rdx
  __int64 v4; // r9
  __int64 v5; // rax
  const char *v6; // r10
  __int64 v7; // r9

  if ( (*(_DWORD *)(a3 + 104) == a2 || *(_DWORD *)(*(_QWORD *)(a3 + 40) + 336LL) == a2)
    && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), 1, 1) == 4 )
  {
    *(_DWORD *)(a3 + 56) |= 0x8000000u;
    v3 = (const char *)qword_1C002C340;
    v4 = *(_QWORD *)(a3 + 40);
    LOBYTE(v5) = 0;
    v6 = (const char *)qword_1C002C340;
    if ( v4 )
    {
      v5 = *(_QWORD *)(a3 + 40);
      v7 = *(_QWORD *)(v4 + 8);
      if ( (v7 & 0x200000000000LL) != 0 )
      {
        v3 = *(const char **)(v5 + 560);
        if ( (v7 & 0x400000000000LL) != 0 )
          v6 = *(const char **)(v5 + 568);
      }
    }
    WPP_RECORDER_SF_qqqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x31u,
      (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
      a3,
      a1,
      v5,
      v3,
      v6);
  }
  return 0LL;
}
