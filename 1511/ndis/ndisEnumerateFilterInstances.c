/*
 * XREFs of ndisEnumerateFilterInstances @ 0x1C00A0E40
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001E29C (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     ?reserve@?$KArray@E@Rtl@@QEAA_N_K@Z @ 0x1C00A6D84 (-reserve@-$KArray@E@Rtl@@QEAA_N_K@Z.c)
 */

char __fastcall ndisEnumerateFilterInstances(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rbx
  __int64 v6; // rax
  _WORD *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 2048);
  v3 = 0LL;
  if ( !v2 )
    return 1;
  do
  {
    v6 = *(_QWORD *)(v2 + 40);
    v2 = *(_QWORD *)(v2 + 120);
    v3 += *(unsigned __int16 *)(v6 + 8) + 2LL;
  }
  while ( v2 );
  if ( !v3 )
    return 1;
  if ( (unsigned __int8)Rtl::KArray<unsigned char>::reserve(a2, v3) )
  {
    *(_DWORD *)(a2 + 8) = v3;
    if ( !(_DWORD)v3 )
      __fastfail(0xBAD0FFu);
    v7 = *(_WORD **)(a2 + 16);
    v8 = *(_QWORD *)(a1 + 2048);
    while ( v8 )
    {
      *v7 = *(_WORD *)(*(_QWORD *)(v8 + 40) + 8LL);
      memmove(v7 + 1, *(const void **)(*(_QWORD *)(v8 + 40) + 16LL), *(unsigned __int16 *)(*(_QWORD *)(v8 + 40) + 8LL));
      v9 = *(_QWORD *)(v8 + 40);
      v8 = *(_QWORD *)(v8 + 120);
      v7 = (_WORD *)((char *)v7 + *(unsigned __int16 *)(v9 + 8) + 2);
    }
    return 1;
  }
  return 0;
}
