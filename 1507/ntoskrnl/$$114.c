/*
 * XREFs of $$114 @ 0x140286DD8
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140277000 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall __114(__int64 a1, int a2, unsigned __int64 a3)
{
  int v3; // r10d
  int v4; // r9d
  int v6; // edx
  unsigned __int64 v7; // r8

  v3 = 0;
  v4 = a2 - 1;
  if ( a2 - 1 < 0 )
    return 0LL;
  while ( 1 )
  {
    v6 = (v4 + v3) >> 1;
    v7 = *(_QWORD *)(a1 + 8LL * v6);
    if ( a3 < v7 )
    {
      if ( !v6 )
        return 0LL;
      v4 = v6 - 1;
      goto LABEL_7;
    }
    if ( a3 <= v7 )
      break;
    v3 = v6 + 1;
LABEL_7:
    if ( v4 < v3 )
      return 0LL;
  }
  return v4 >= v3;
}
