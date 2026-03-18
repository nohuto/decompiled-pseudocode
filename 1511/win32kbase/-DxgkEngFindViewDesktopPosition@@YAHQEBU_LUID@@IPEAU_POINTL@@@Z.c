/*
 * XREFs of ?DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z @ 0x1C00770F0
 * Callers:
 *     <none>
 * Callees:
 *     hdevEnumerate @ 0x1C0037B90 (hdevEnumerate.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0037DF4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0037E70 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 */

__int64 __fastcall DxgkEngFindViewDesktopPosition(const struct _LUID *const a1, int a2, struct _POINTL *a3)
{
  unsigned int v3; // edi
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C i; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v8; // rax
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v9; // rbx
  bool v10; // zf
  struct _LUID *v11; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  for ( i = 0LL; ; i = v9 )
  {
    v8 = hdevEnumerate(i, a2, (__int64)a3);
    v9 = v8;
    if ( !*(_QWORD *)&v8 )
      break;
    v10 = (*(_DWORD *)(*(_QWORD *)&v8 + 56LL) & 0x20400) == 0;
    v13 = v8;
    if ( v10 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v13) )
      {
        v11 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v13);
        if ( v11->LowPart == a1->LowPart
          && v11->HighPart == a1->HighPart
          && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v9 + 2600LL) + 272LL) == a2 )
        {
          v3 = 1;
          *a3 = *(struct _POINTL *)(*(_QWORD *)&v9 + 2608LL);
        }
      }
    }
  }
  return v3;
}
