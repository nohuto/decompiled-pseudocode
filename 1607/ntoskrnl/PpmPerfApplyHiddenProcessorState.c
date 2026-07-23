/*
 * XREFs of PpmPerfApplyHiddenProcessorState @ 0x140204D3C
 * Callers:
 *     PpmPerfApplyProcessorStates @ 0x14012F730 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfApplyHiddenProcessorState(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  char v5; // cl
  bool v6; // [rsp+28h] [rbp-20h]
  char v7; // [rsp+30h] [rbp-18h]

  result = 0LL;
  if ( *(_BYTE *)(a1 + 336) != 0xFD && (v5 = 1, a3) || (v5 = 0, a3) )
  {
    v7 = v5;
    v6 = *(_BYTE *)(a1 + 405) == 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, bool, char, char))(a1 + 288))(
             *(_QWORD *)(a2 + 8),
             *(_QWORD *)(a2 + 80),
             *(unsigned int *)(a1 + 368),
             *(unsigned int *)(a1 + 364),
             *(_DWORD *)(a1 + 376),
             v6,
             v7,
             a3);
  }
  return result;
}
