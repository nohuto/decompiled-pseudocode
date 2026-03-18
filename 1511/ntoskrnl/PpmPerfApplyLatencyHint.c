/*
 * XREFs of PpmPerfApplyLatencyHint @ 0x14010585C
 * Callers:
 *     PpmPerfApplyLatencyHints @ 0x1400756BC (PpmPerfApplyLatencyHints.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfApplyLatencyHint(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rbx
  __int64 v3; // r10
  __int64 *v4; // r8
  int v5; // ecx
  unsigned int v6; // r11d
  __int64 result; // rax
  unsigned int v8; // r9d
  __int64 v9; // rdx

  v1 = *(unsigned __int8 *)(a1 + 23858);
  v2 = *(_QWORD *)(a1 + 24184);
  v3 = *(_QWORD *)(a1 + 24176);
  v4 = &PpmCurrentProfile[174 * dword_1402DE28C];
  v5 = *((_DWORD *)v4 + 22);
  v6 = *((unsigned __int8 *)v4 + v1 + 105);
  result = (unsigned int)(v5 - 1);
  if ( (result & 0xFFFFFFFD) != 0 )
  {
    result = (unsigned int)(v5 - 5);
    if ( (unsigned int)result <= 1 || PpmPerfBoostAtGuaranteed )
      v8 = *(_DWORD *)(v2 + 24);
    else
      v8 = 100;
  }
  else
  {
    v8 = *(_DWORD *)(v3 + 296);
  }
  v9 = v8;
  if ( v6 < v8 )
    v9 = v6;
  if ( (unsigned int)v9 > *(_DWORD *)(v2 + 48) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 272))(
               *(_QWORD *)(v2 + 8),
               v9,
               *(unsigned int *)(v3 + 304));
    *(_DWORD *)(v2 + 48) = result;
  }
  return result;
}
