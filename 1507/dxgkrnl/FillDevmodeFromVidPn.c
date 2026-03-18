/*
 * XREFs of FillDevmodeFromVidPn @ 0x1C009BF3C
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C009B86C (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C009BD9C (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 */

__int64 __fastcall FillDevmodeFromVidPn(__int64 a1, int a2, void *a3)
{
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rbx
  const struct DMMVIDPNPRESENTPATH *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rbx
  __int64 v18; // rax

  LODWORD(v6) = -1073741823;
  memset(a3, 0, 0xF4uLL);
  v9 = (_QWORD *)(a1 + 120);
  if ( (_QWORD *)*v9 != v9 )
  {
    v10 = (const struct DMMVIDPNPRESENTPATH *)(*v9 - 8LL);
    if ( v10 )
    {
      while ( *(_DWORD *)(*((_QWORD *)v10 + 11) + 24LL) != a2 )
      {
        v17 = *((_QWORD *)v10 + 1);
        if ( v17 == a1 + 120 )
          v10 = 0LL;
        else
          v10 = (const struct DMMVIDPNPRESENTPATH *)(v17 - 8);
        if ( !v10 )
          return (unsigned int)v6;
      }
      v11 = VIDPN_MGR::PopulateGdiDisplayModeFromPath(v10, (struct _CDD_DEVMODE *)a3, v7, v8);
      v6 = v11;
      if ( v11 < 0 )
      {
        v18 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
        *(_QWORD *)(v18 + 24) = v10;
        *(_QWORD *)(v18 + 32) = v6;
        WdLogEvent5_WdWarning(v18);
      }
    }
  }
  return (unsigned int)v6;
}
