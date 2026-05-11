/*
 * XREFs of TopologyProcessOutputTerminalUnit @ 0x1C0016D50
 * Callers:
 *     <none>
 * Callees:
 *     TopologyConvertTermTypeToNodeType @ 0x1C0016B88 (TopologyConvertTermTypeToNodeType.c)
 */

__int64 __fastcall TopologyProcessOutputTerminalUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v8; // rsi
  __int64 v9; // rbx
  GUID *v10; // r8
  int v11; // eax
  GUID *v12; // rdx
  unsigned int i; // edx
  __int64 v14; // rax
  int v15; // eax
  __int16 v16; // ax

  v8 = a3 + 152LL * (unsigned int)*a5;
  v9 = a4 + 16LL * (unsigned int)*a6;
  v10 = *(GUID **)(v8 + 16);
  *(_DWORD *)(v8 + 80) = *(_DWORD *)(a2 + 16);
  v11 = *(_DWORD *)(a2 + 64);
  v12 = *(GUID **)(v8 + 8);
  *(_DWORD *)(v8 + 84) = v11;
  *(_DWORD *)(v8 + 76) = TopologyConvertTermTypeToNodeType((_DWORD *)a2, v12, v10);
  for ( i = 0; i < *(_DWORD *)(a2 + 32); ++*a6 )
  {
    v14 = i++;
    *(_QWORD *)v9 = *(unsigned int *)(*(_QWORD *)(a2 + 56) + 12 * v14);
    *(_DWORD *)(v9 + 8) = (*a5)++;
    *(_DWORD *)(v9 + 12) = 1;
    v9 += 16LL;
  }
  *(_DWORD *)v9 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(v9 + 4) = 0;
  v15 = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(v9 + 8) = -1;
  *(_DWORD *)(v9 + 12) = v15;
  ++*a6;
  v16 = *(_WORD *)(a2 + 40);
  if ( v16 )
  {
    *(_WORD *)(v8 + 112) = v16;
    *(_WORD *)(v8 + 114) = *(_WORD *)(a2 + 40);
    *(_QWORD *)(v8 + 120) = *(_QWORD *)(a2 + 48);
  }
  return 0LL;
}
