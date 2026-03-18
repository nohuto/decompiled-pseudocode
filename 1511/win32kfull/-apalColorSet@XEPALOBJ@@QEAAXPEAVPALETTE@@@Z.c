/*
 * XREFs of ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C0262540
 * Callers:
 *     GreCreateDIBitmapReal @ 0x1C004B598 (GreCreateDIBitmapReal.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C02625F4 (DxEngSyncPaletteTableWithDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::apalColorSet(XEPALOBJ *this, struct PALETTE *a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)this;
  v5 = *(_QWORD *)(*(_QWORD *)this + 136LL);
  if ( v5 != v2 )
    DEC_SHARE_REF_CNT(v5);
  INC_SHARE_REF_CNT(a2);
  *(_DWORD *)(*(_QWORD *)this + 28LL) = *((_DWORD *)a2 + 7);
  *(_QWORD *)(*(_QWORD *)this + 128LL) = *((_QWORD *)a2 + 16);
  *(_QWORD *)(*(_QWORD *)this + 136LL) = a2;
}
