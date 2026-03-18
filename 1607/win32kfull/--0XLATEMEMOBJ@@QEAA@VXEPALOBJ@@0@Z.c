/*
 * XREFs of ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C02B9D48
 * Callers:
 *     NtGdiUpdateColors @ 0x1C02B4B20 (NtGdiUpdateColors.c)
 * Callees:
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x1C01BF378 (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 *     ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x1C02BA2E4 (-pCreateXlate@@YAPEAVXLATE@@K@Z.c)
 */

XLATE **__fastcall XLATEMEMOBJ::XLATEMEMOBJ(XLATE **a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  struct XLATE *Xlate; // rax
  unsigned int v6; // ecx
  XLATE *i; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax

  v4 = 0;
  *a1 = 0LL;
  Xlate = pCreateXlate(*(_DWORD *)(a2 + 28));
  *a1 = Xlate;
  if ( Xlate )
  {
    *((_QWORD *)Xlate + 5) = a2;
    *((_QWORD *)*a1 + 6) = a2;
    *((_QWORD *)*a1 + 7) = a3;
    v6 = 0;
    for ( i = *a1; v6 < *((_DWORD *)*a1 + 3); ++v6 )
      *((_DWORD *)i + v6 + 20) = v6;
    v8 = *(_QWORD *)(a3 + 88);
    v9 = *(_QWORD *)(a3 + 80);
    if ( *(_DWORD *)(a3 + 28) )
    {
      do
      {
        v10 = v4++;
        *((_DWORD *)i + *(unsigned __int8 *)(v10 + v8 + 4) + 20) = *(unsigned __int8 *)(v10 + v9 + 4);
      }
      while ( v4 < *(_DWORD *)(a3 + 28) );
    }
    XLATE::vCheckForTrivial(*a1);
  }
  return a1;
}
