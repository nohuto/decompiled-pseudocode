/*
 * XREFs of ndisEnumerateFilterInstances @ 0x1C00A3A64
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001532C (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     ?reserve@?$KArray@E@Rtl@@QEAA_N_K@Z @ 0x1C00A1AC8 (-reserve@-$KArray@E@Rtl@@QEAA_N_K@Z.c)
 */

char __fastcall ndisEnumerateFilterInstances(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // rbx
  __int64 v7; // rax
  _WORD *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 2048);
  v3 = 0LL;
  if ( !v2 )
    return 1;
  do
  {
    v7 = *(_QWORD *)(v2 + 40);
    v2 = *(_QWORD *)(v2 + 120);
    v3 += *(unsigned __int16 *)(v7 + 8) + 2LL;
  }
  while ( v2 );
  if ( !v3 )
    return 1;
  if ( Rtl::KArray<unsigned char>::reserve(a2, v3) )
  {
    *(_DWORD *)(a2 + 8) = v3;
    if ( !(_DWORD)v3 )
      __fastfail(0xBAD0FFu);
    v8 = *(_WORD **)(a2 + 16);
    v9 = *(_QWORD *)(a1 + 2048);
    while ( v9 )
    {
      *v8 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 8LL);
      memmove(v8 + 1, *(const void **)(*(_QWORD *)(v9 + 40) + 16LL), *(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 8LL));
      v10 = *(_QWORD *)(v9 + 40);
      v9 = *(_QWORD *)(v9 + 120);
      v8 = (_WORD *)((char *)v8 + *(unsigned __int16 *)(v10 + 8) + 2);
    }
    return 1;
  }
  return 0;
}
