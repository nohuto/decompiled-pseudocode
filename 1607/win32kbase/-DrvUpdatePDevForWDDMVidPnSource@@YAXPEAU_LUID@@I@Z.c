/*
 * XREFs of ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C005DA28
 * Callers:
 *     NtGdiDdDDISetDisplayMode @ 0x1C005D930 (NtGdiDdDDISetDisplayMode.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0031A08 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0031A80 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     hdevEnumerate @ 0x1C0034350 (hdevEnumerate.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C005F344 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 */

void __fastcall DrvUpdatePDevForWDDMVidPnSource(struct _LUID *a1, int a2, int a3)
{
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // rbx
  struct _LUID *v8; // rax
  struct _LIST_ENTRY *v9; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = v7 )
  {
    v6 = hdevEnumerate(i, a2, a3);
    v7 = v6;
    if ( !v6 )
      break;
    a3 = (__int64)v6[3].Blink & 0x20401;
    v9 = v6;
    if ( a3 == 1 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v9) )
      {
        v8 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v9);
        if ( v8->LowPart == a1->LowPart && v8->HighPart == a1->HighPart && LODWORD(v7[162].Blink[17].Flink) == a2 )
          DrvUpdatePDevForWDDMDevice(v7);
      }
    }
  }
}
