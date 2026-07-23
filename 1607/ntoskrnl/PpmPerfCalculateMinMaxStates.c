/*
 * XREFs of PpmPerfCalculateMinMaxStates @ 0x14014471C
 * Callers:
 *     PpmRegisterPerfStates @ 0x140569AC8 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x14056A4D0 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PpmGetHeterogeneousClass @ 0x1400D1E68 (PpmGetHeterogeneousClass.c)
 */

_BOOL8 __fastcall PpmPerfCalculateMinMaxStates(__int64 a1)
{
  __int64 v1; // r9
  _BOOL8 result; // rax
  __int64 *v3; // r10
  unsigned int v4; // edx
  unsigned int v5; // ecx

  v1 = a1;
  result = 0LL;
  v3 = &PpmCurrentProfile[174 * dword_140303D4C];
  if ( !*(_BYTE *)(a1 + 199) )
    result = PpmGetHeterogeneousClass(*(_QWORD *)(a1 + 16));
  v4 = *((unsigned __int8 *)v3 + result + 66);
  *(_DWORD *)(v1 + 360) = v4;
  v5 = *((unsigned __int8 *)v3 + result + 68);
  if ( v5 < v4 )
    v5 = v4;
  *(_DWORD *)(v1 + 356) = v5;
  return result;
}
