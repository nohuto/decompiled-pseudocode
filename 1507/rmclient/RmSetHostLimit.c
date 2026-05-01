/*
 * XREFs of RmSetHostLimit @ 0x18000E110
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientSetHostLimits @ 0x18000E5E0 (RmpClientSetHostLimits.c)
 */

__int64 __fastcall RmSetHostLimit(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)a3 || *(_QWORD *)(a3 + 8) || *(_DWORD *)(a3 + 24) || (*(_DWORD *)(a3 + 28) | 0x10) != 0x10 )
    return 3221225713LL;
  else
    return RmpClientSetHostLimits();
}
