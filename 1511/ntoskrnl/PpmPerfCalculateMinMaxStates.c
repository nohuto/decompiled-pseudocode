/*
 * XREFs of PpmPerfCalculateMinMaxStates @ 0x140139450
 * Callers:
 *     PpmRegisterPerfStates @ 0x140536740 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x140537218 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfCalculateMinMaxStates(__int64 a1)
{
  __int64 v1; // r9
  __int64 result; // rax
  __int64 *v3; // r10
  unsigned int v4; // r8d
  unsigned int v5; // edx

  v1 = *(unsigned __int8 *)(a1 + 196);
  result = 1LL;
  v3 = &PpmCurrentProfile[174 * dword_1402DE28C];
  v4 = *((unsigned __int8 *)v3 + v1 + 66);
  *(_DWORD *)(a1 + 352) = v4;
  v5 = *((unsigned __int8 *)v3 + v1 + 68);
  *(_DWORD *)(a1 + 360) = v4;
  if ( v5 < v4 )
    v5 = v4;
  *(_DWORD *)(a1 + 348) = v5;
  if ( v5 > 1 )
    result = v5;
  *(_DWORD *)(a1 + 356) = result;
  return result;
}
