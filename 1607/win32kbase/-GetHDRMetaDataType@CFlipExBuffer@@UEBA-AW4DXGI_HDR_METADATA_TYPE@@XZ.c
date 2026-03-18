/*
 * XREFs of ?GetHDRMetaDataType@CFlipExBuffer@@UEBA?AW4DXGI_HDR_METADATA_TYPE@@XZ @ 0x1C00F3F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CFlipExBuffer::GetHDRMetaDataType(__int64 a1)
{
  return *(_QWORD *)(a1 + 344) != 0LL;
}
