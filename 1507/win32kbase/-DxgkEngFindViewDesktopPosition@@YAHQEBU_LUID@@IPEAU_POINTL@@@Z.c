/*
 * XREFs of ?DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z @ 0x1C0014680
 * Callers:
 *     <none>
 * Callees:
 *     hdevEnumerate @ 0x1C0034180 (hdevEnumerate.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00343E4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0034460 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 */

__int64 __fastcall DxgkEngFindViewDesktopPosition(const struct _LUID *const a1, int a2, struct _POINTL *a3)
{
  unsigned int v3; // edi
  __int64 i; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  bool v10; // zf
  struct _LUID *v11; // rcx
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  for ( i = 0LL; ; i = v9 )
  {
    v8 = hdevEnumerate(i);
    v9 = v8;
    if ( !v8 )
      break;
    v10 = (*(_DWORD *)(v8 + 56) & 0x20400) == 0;
    v13 = v8;
    if ( v10 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v13) )
      {
        v11 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v13);
        if ( v11->LowPart == a1->LowPart
          && v11->HighPart == a1->HighPart
          && *(_DWORD *)(*(_QWORD *)(v9 + 2600) + 272LL) == a2 )
        {
          v3 = 1;
          *a3 = *(struct _POINTL *)(v9 + 2608);
        }
      }
    }
  }
  return v3;
}
