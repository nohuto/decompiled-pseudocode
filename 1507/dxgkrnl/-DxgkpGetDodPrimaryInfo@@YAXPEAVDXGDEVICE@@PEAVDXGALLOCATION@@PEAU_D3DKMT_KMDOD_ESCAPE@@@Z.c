/*
 * XREFs of ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C0159A24
 * Callers:
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0140A40 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C015AE68 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C011E6E0 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 */

void __fastcall DxgkpGetDodPrimaryInfo(struct DXGDEVICE *a1, struct DXGALLOCATION *a2, struct _D3DKMT_KMDOD_ESCAPE *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _DXGKARG_ESCAPE v8; // [rsp+20h] [rbp-38h] BYREF

  memset(&v8, 0, 40);
  memset(a3, 0, 0x50uLL);
  *(_DWORD *)a3 = -791674879;
  *((_QWORD *)a3 + 1) = *(_QWORD *)(*((_QWORD *)a2 + 6) + 16LL);
  v6 = *((_QWORD *)a1 + 2);
  v8.hDevice = (HANDLE)*((_QWORD *)a1 + 45);
  v8.pPrivateDriverData = a3;
  v8.PrivateDriverDataSize = 80;
  v8.Flags.Value = *(_BYTE *)&v8.Flags.0 & 7 | 8;
  DXGADAPTER::DdiEscape(*(DXGADAPTER **)(v6 + 16), &v8, v7);
}
