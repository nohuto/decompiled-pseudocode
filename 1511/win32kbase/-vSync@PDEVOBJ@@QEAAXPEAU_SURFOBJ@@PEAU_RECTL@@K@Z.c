/*
 * XREFs of ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0037FA0
 * Callers:
 *     sub_1C0054204 @ 0x1C0054204 (sub_1C0054204.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0077EF0 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C007BBC0 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C007C590 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     HDXDrvEscape @ 0x1C0087E50 (HDXDrvEscape.c)
 * Callees:
 *     <none>
 */

void __fastcall PDEVOBJ::vSync(PDEVOBJ *this, struct _SURFOBJ *a2, struct _RECTL *a3, unsigned int a4)
{
  PVOID *p_pvScan0; // rax
  __int64 v5; // rcx
  void (__fastcall *v6)(struct _SURFOBJ *, struct _RECTL *, _QWORD); // rax
  void (__fastcall *v7)(DHPDEV, struct _RECTL *); // rax

  if ( a2 )
    p_pvScan0 = &a2[-1].pvScan0;
  else
    p_pvScan0 = 0LL;
  if ( ((_DWORD)p_pvScan0[14] & 0x1000) != 0 )
  {
    v5 = *(_QWORD *)this;
    if ( (*(_DWORD *)(v5 + 56) & 0x400) == 0 )
    {
      v6 = *(void (__fastcall **)(struct _SURFOBJ *, struct _RECTL *, _QWORD))(v5 + 1784);
      if ( v6 )
      {
        v6(a2, a3, a4);
      }
      else
      {
        v7 = *(void (__fastcall **)(DHPDEV, struct _RECTL *))(v5 + 1776);
        if ( v7 )
          v7(a2->dhpdev, a3);
      }
    }
  }
}
