/*
 * XREFs of ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C00600E8
 * Callers:
 *     NtGdiDdDDISetDisplayMode @ 0x1C005FF70 (NtGdiDdDDISetDisplayMode.c)
 * Callees:
 *     hdevEnumerate @ 0x1C0037B90 (hdevEnumerate.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0037DF4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0037E70 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C00614C4 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 */

void __fastcall DrvUpdatePDevForWDDMVidPnSource(struct _LUID *a1, int a2, __int64 a3)
{
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C i; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v6; // rax
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v7; // rbx
  struct _LUID *v8; // rax
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v9; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = v7 )
  {
    v6 = hdevEnumerate(i, a2, a3);
    v7 = v6;
    if ( !*(_QWORD *)&v6 )
      break;
    a3 = *(_DWORD *)(*(_QWORD *)&v6 + 56LL) & 0x20401;
    v9 = v6;
    if ( (_DWORD)a3 == 1 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v9) )
      {
        v8 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v9);
        if ( v8->LowPart == a1->LowPart
          && v8->HighPart == a1->HighPart
          && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v7 + 2600LL) + 272LL) == a2 )
        {
          ((void (__fastcall *)(_QWORD))DrvUpdatePDevForWDDMDevice)(v7);
        }
      }
    }
  }
}
