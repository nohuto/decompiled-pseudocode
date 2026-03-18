/*
 * XREFs of ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C002AF70
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C0028D90 (NtGdiDeleteObjectApp.c)
 *     INC_SHARE_REF_CNT @ 0x1C00294C0 (INC_SHARE_REF_CNT.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029DA0 (DEC_SHARE_REF_CNT.c)
 *     ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1C002AA90 (-SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C002B164 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0035860 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     HmgSetOwner @ 0x1C0035D00 (HmgSetOwner.c)
 * Callees:
 *     <none>
 */

char __fastcall GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(
        GdiHandleEntryDirectory *this,
        unsigned int a2,
        struct GdiHandleEntryTable **a3,
        unsigned int *a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // r11d
  unsigned int v6; // eax

  v4 = a2;
  v5 = *((_DWORD *)this + 514);
  if ( a2 >= v5 + ((*((unsigned __int16 *)this + 1) - 1) << 16) )
    return 0;
  if ( a2 >= v5 )
  {
    v6 = ((a2 - v5) >> 16) + 1;
    if ( (a2 - v5) >> 16 != -2 )
      goto LABEL_5;
    return 0;
  }
  v6 = 0;
LABEL_5:
  *a3 = (struct GdiHandleEntryTable *)*((_QWORD *)this + (int)v6 + 1);
  if ( v6 )
    v4 = a2 - ((v6 - 1) << 16) - v5;
  *a4 = v4;
  return 1;
}
