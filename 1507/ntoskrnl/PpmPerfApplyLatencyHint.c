/*
 * XREFs of PpmPerfApplyLatencyHint @ 0x140138764
 * Callers:
 *     PpmPerfApplyLatencyHints @ 0x1400E94D4 (PpmPerfApplyLatencyHints.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfApplyLatencyHint(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r10
  __int64 *v3; // r8
  __int64 result; // rax
  unsigned int v5; // r9d
  __int64 v6; // rdx

  v1 = *(_QWORD *)(a1 + 24184);
  v2 = *(_QWORD *)(a1 + 24176);
  v3 = &PpmCurrentProfile[174 * dword_14032E84C];
  result = (unsigned int)(*((_DWORD *)v3 + 22) - 1);
  if ( (result & 0xFFFFFFFD) != 0 )
  {
    if ( PpmPerfBoostAtGuaranteed )
      v5 = *(_DWORD *)(v1 + 24);
    else
      v5 = 100;
  }
  else
  {
    v5 = *(_DWORD *)(v2 + 296);
  }
  v6 = v5;
  if ( *((unsigned __int8 *)v3 + *(unsigned __int8 *)(a1 + 23858) + 105) < v5 )
    v6 = *((unsigned __int8 *)v3 + *(unsigned __int8 *)(a1 + 23858) + 105);
  if ( (unsigned int)v6 > *(_DWORD *)(v1 + 48) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v2 + 272))(
               *(_QWORD *)(v1 + 8),
               v6,
               *(unsigned int *)(v2 + 304));
    *(_DWORD *)(v1 + 48) = result;
  }
  return result;
}
