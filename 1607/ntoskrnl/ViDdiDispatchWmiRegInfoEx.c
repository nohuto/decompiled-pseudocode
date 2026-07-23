/*
 * XREFs of ViDdiDispatchWmiRegInfoEx @ 0x14070475C
 * Callers:
 *     ViDdiDispatchWmi @ 0x140704578 (ViDdiDispatchWmi.c)
 * Callees:
 *     ViDdiBuildWmiRegInfoData @ 0x140704490 (ViDdiBuildWmiRegInfoData.c)
 */

__int64 __fastcall ViDdiDispatchWmiRegInfoEx(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned int *v5; // r14
  unsigned int v6; // ebp
  unsigned int v7; // eax
  __int64 v8; // rsi

  v2 = *(_QWORD *)(a2 + 184);
  if ( *(_QWORD *)(v2 + 8) != a1 )
    return 3221225659LL;
  v5 = *(unsigned int **)(v2 + 32);
  v6 = *(_DWORD *)(v2 + 24);
  v7 = ViDdiBuildWmiRegInfoData(*(_DWORD *)(v2 + 16), 0LL);
  v8 = v7;
  if ( v7 <= v6 )
  {
    ViDdiBuildWmiRegInfoData(*(_DWORD *)(v2 + 16), (__int64)v5);
    result = 0LL;
    *(_QWORD *)(a2 + 56) = v8;
  }
  else
  {
    if ( v6 < 4 )
      return 3221225659LL;
    *v5 = v7;
    result = 3221225507LL;
    *(_QWORD *)(a2 + 56) = 4LL;
  }
  return result;
}
