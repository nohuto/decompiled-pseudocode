/*
 * XREFs of ?DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z @ 0x1C007AA00
 * Callers:
 *     <none>
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0031A08 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0031A80 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     hdevEnumerate @ 0x1C0034350 (hdevEnumerate.c)
 */

__int64 __fastcall DxgkEngFindViewDesktopPosition(const struct _LUID *const a1, int a2, struct _POINTL *a3)
{
  unsigned int v3; // edi
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *v8; // rax
  struct _LIST_ENTRY *v9; // rbx
  bool v10; // zf
  struct _LUID *v11; // rcx
  struct _LIST_ENTRY *v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  for ( i = 0LL; ; i = v9 )
  {
    v8 = hdevEnumerate(i, a2, (int)a3);
    v9 = v8;
    if ( !v8 )
      break;
    v10 = ((__int64)v8[3].Blink & 0x20400) == 0;
    v13 = v8;
    if ( v10 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v13) )
      {
        v11 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v13);
        if ( v11->LowPart == a1->LowPart && v11->HighPart == a1->HighPart && LODWORD(v9[162].Blink[17].Flink) == a2 )
        {
          v3 = 1;
          *a3 = (struct _POINTL)v9[163].Flink;
        }
      }
    }
  }
  return v3;
}
