/*
 * XREFs of ?vLookupScript@@YAXKPEAGK@Z @ 0x1C001B578
 * Callers:
 *     cjCopyFontDataW @ 0x1C001BCD8 (cjCopyFontDataW.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C00D137C (vIFIMetricsToEnumLogFontExDvW.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C001B5E8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     InitializeScripts @ 0x1C0378000 (InitializeScripts.c)
 */

void __fastcall vLookupScript(int a1, unsigned __int16 *a2)
{
  int v4; // eax
  unsigned int v5; // r8d
  int v6; // ebx
  _DWORD *v7; // rax
  const unsigned __int16 *v8; // r8

  v4 = InitializeScripts();
  v5 = 0;
  if ( v4 )
  {
    v6 = a1 + 1000;
    v7 = &aScripts;
    do
    {
      if ( *v7 == v6 )
        break;
      ++v5;
      v7 += 4;
    }
    while ( v5 < 0x13 );
    if ( v5 >= 0x13 )
      v8 = (const unsigned __int16 *)qword_1C0323478;
    else
      v8 = (const unsigned __int16 *)*((_QWORD *)&aScripts + 2 * v5 + 1);
    StringCchCopyW(a2, 0x20uLL, v8);
  }
}
