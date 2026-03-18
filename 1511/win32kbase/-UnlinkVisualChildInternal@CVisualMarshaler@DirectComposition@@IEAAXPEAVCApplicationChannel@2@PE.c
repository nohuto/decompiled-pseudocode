/*
 * XREFs of ?UnlinkVisualChildInternal@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAV12@@Z @ 0x1C0017C50
 * Callers:
 *     ?RemoveChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z @ 0x1C00171D0 (-RemoveChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z.c)
 *     ?UnlinkVisualChild@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@PEAV12@@Z @ 0x1C00D7490 (-UnlinkVisualChild@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@PEAV12@@Z.c)
 * Callees:
 *     ?FindAndDequeue@CApplicationChannel@DirectComposition@@KAXPEAVCResourceMarshaler@2@PEAPEAV32@@Z @ 0x1C0018A70 (-FindAndDequeue@CApplicationChannel@DirectComposition@@KAXPEAVCResourceMarshaler@2@PEAPEAV32@@Z.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::UnlinkVisualChildInternal(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CResourceMarshaler **a2,
        struct DirectComposition::CVisualMarshaler *a3)
{
  DirectComposition::CVisualMarshaler *v3; // r9

  v3 = this;
  if ( (*((_DWORD *)a3 + 4) & 4) != 0 )
    DirectComposition::CApplicationChannel::FindAndDequeue(a3, a2 + 51);
  *((_DWORD *)a3 + 4) |= 0x10u;
  *((_QWORD *)a3 + 1) = *((_QWORD *)v3 + 20);
  *((_QWORD *)v3 + 20) = a3;
}
