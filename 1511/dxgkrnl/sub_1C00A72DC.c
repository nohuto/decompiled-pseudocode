/*
 * XREFs of sub_1C00A72DC @ 0x1C00A72DC
 * Callers:
 *     sub_1C00A7420 @ 0x1C00A7420 (sub_1C00A7420.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00A6FF4 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 */

__int64 __fastcall sub_1C00A72DC(__int64 a1, int a2, void *a3)
{
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  const struct DMMVIDPNPRESENTPATH *v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rbx
  __int64 v16; // rax

  LODWORD(v6) = -1073741823;
  memset(a3, 0, 0xF4uLL);
  v7 = (_QWORD *)(a1 + 120);
  if ( (_QWORD *)*v7 != v7 )
  {
    v8 = (const struct DMMVIDPNPRESENTPATH *)(*v7 - 8LL);
    if ( v8 )
    {
      while ( *(_DWORD *)(*((_QWORD *)v8 + 11) + 24LL) != a2 )
      {
        v15 = *((_QWORD *)v8 + 1);
        if ( v15 == a1 + 120 )
          v8 = 0LL;
        else
          v8 = (const struct DMMVIDPNPRESENTPATH *)(v15 - 8);
        if ( !v8 )
          return (unsigned int)v6;
      }
      v9 = VIDPN_MGR::PopulateGdiDisplayModeFromPath(v8, (struct _CDD_DEVMODE *)a3);
      v6 = v9;
      if ( v9 < 0 )
      {
        v16 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
        *(_QWORD *)(v16 + 24) = v8;
        *(_QWORD *)(v16 + 32) = v6;
        WdLogEvent5_WdWarning(v16);
      }
    }
  }
  return (unsigned int)v6;
}
