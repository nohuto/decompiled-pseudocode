/*
 * XREFs of ?ReleaseAllReferences@CDuplicatedVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0013DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0013040 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?SeverCrossChannelLink@CDuplicatedVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0013F98 (-SeverCrossChannelLink@CDuplicatedVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChanne.c)
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0017CB0 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CDuplicatedVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CDuplicatedVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  PVOID v4; // rax
  int Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  DirectComposition::CVisualMarshaler::ReleaseAllReferences(this, a2);
  if ( (*((_DWORD *)this + 4) & 0x2000000) != 0 )
    DirectComposition::CDuplicatedVisualMarshaler::SeverCrossChannelLink(this, a2);
  if ( *((_DWORD *)this + 56) )
  {
    Buffer = *((_DWORD *)this + 56);
    v6 = 0LL;
    v4 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)a2 + 192), &Buffer);
    if ( v4 )
      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)a2 + 192), v4);
    DirectComposition::CConnection::ReleaseSystemResource(
      *((DirectComposition::CConnection **)a2 + 5),
      *((_DWORD *)this + 56));
    *((_DWORD *)this + 56) = 0;
  }
}
