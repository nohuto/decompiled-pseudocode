/*
 * XREFs of KeGetExecuteOptions @ 0x1404BF3F8
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetExecuteOptions(__int64 a1, _DWORD *a2)
{
  char v2; // al
  int v3; // r8d

  if ( !*(_QWORD *)(a1 + 1064) )
    return 3221225485LL;
  v2 = *(_BYTE *)(a1 + 447);
  v3 = (v2 & 1) != 0;
  if ( (v2 & 2) != 0 )
    v3 |= 2u;
  if ( (v2 & 4) != 0 )
    v3 |= 4u;
  if ( (v2 & 8) != 0 )
    v3 |= 8u;
  if ( (v2 & 0x10) != 0 )
    v3 |= 0x10u;
  if ( (v2 & 0x20) != 0 )
    v3 |= 0x20u;
  if ( (v2 & 0x40) != 0 )
    v3 |= 0x40u;
  *a2 = v3;
  return 0LL;
}
