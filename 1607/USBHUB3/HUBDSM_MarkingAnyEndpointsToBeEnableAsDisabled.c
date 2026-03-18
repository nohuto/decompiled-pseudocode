/*
 * XREFs of HUBDSM_MarkingAnyEndpointsToBeEnableAsDisabled @ 0x1C001AC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_MarkingAnyEndpointsToBeEnableAsDisabled(__int64 a1)
{
  __int64 *v1; // r9
  __int64 i; // rax
  unsigned int j; // ecx
  unsigned __int64 v4; // rdx
  __int64 v5; // rax

  v1 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 48LL) + 16LL);
  for ( i = *v1; ; i = *(_QWORD *)(v5 + 8) )
  {
    v5 = i - 8;
    if ( v1 == (__int64 *)(v5 + 8) )
      break;
    for ( j = 0; j < *(_DWORD *)(v5 + 24); ++j )
    {
      v4 = (unsigned __int64)j << 6;
      if ( *(_DWORD *)(v4 + v5 + 48) == 3 )
        *(_DWORD *)(v4 + v5 + 48) = 6;
    }
  }
  return 4077LL;
}
