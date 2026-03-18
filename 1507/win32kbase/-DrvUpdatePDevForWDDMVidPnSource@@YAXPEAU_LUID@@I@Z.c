/*
 * XREFs of ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C008243C
 * Callers:
 *     NtGdiDdDDISetDisplayMode @ 0x1C0082220 (NtGdiDdDDISetDisplayMode.c)
 * Callees:
 *     hdevEnumerate @ 0x1C0034180 (hdevEnumerate.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00343E4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0034460 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C00662A4 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 */

void __fastcall DrvUpdatePDevForWDDMVidPnSource(struct _LUID *a1, int a2, __int64 a3)
{
  struct PDEV *i; // rcx
  struct PDEV *v6; // rax
  __int64 v7; // rbx
  struct _LUID *v8; // rax
  struct PDEV *v9; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = (struct PDEV *)v7 )
  {
    v6 = hdevEnumerate(i, a2, a3);
    v7 = (__int64)v6;
    if ( !v6 )
      break;
    a3 = *((_DWORD *)v6 + 14) & 0x20401;
    v9 = v6;
    if ( (_DWORD)a3 == 1 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v9) )
      {
        v8 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v9);
        if ( v8->LowPart == a1->LowPart
          && v8->HighPart == a1->HighPart
          && *(_DWORD *)(*(_QWORD *)(v7 + 2600) + 272LL) == a2 )
        {
          DrvUpdatePDevForWDDMDevice(v7);
        }
      }
    }
  }
}
