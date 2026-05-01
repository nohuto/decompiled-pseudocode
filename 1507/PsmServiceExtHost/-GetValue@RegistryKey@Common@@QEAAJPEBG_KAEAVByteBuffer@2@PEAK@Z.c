/*
 * XREFs of ?GetValue@RegistryKey@Common@@QEAAJPEBG_KAEAVByteBuffer@2@PEAK@Z @ 0x180044C8C
 * Callers:
 *     ?DeserializeFromPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAUGameConfig@2@PEAI@Z @ 0x180043AD8 (-DeserializeFromPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAUGameC.c)
 *     ?GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@Z @ 0x1800442C0 (-GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@.c)
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x180045018 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 *     ?VerifyParentIdentifier@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBG1@Z @ 0x1800461BC (-VerifyParentIdentifier@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBG1@Z.c)
 * Callees:
 *     ?GetValue@RegistryKey@Common@@QEAAJPEBGPEAXPEAK2@Z @ 0x18001C3A4 (-GetValue@RegistryKey@Common@@QEAAJPEBGPEAXPEAK2@Z.c)
 *     ?SetCapacity@ByteBuffer@Common@@QEAAJK@Z @ 0x18004D9C0 (-SetCapacity@ByteBuffer@Common@@QEAAJK@Z.c)
 */

int __fastcall Common::RegistryKey::GetValue(
        HKEY *this,
        const unsigned __int16 *a2,
        __int64 a3,
        struct Common::ByteBuffer *a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // esi
  BYTE *v9; // r8
  int result; // eax
  bool v11; // zf
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  v4 = a3;
  while ( 1 )
  {
    v8 = *((_DWORD *)a4 + 4);
    v9 = (BYTE *)*((_QWORD *)a4 + 1);
    LODWORD(v12) = v8;
    result = Common::RegistryKey::GetValue(this, a2, v9, (unsigned int *)&v12, 0LL);
    if ( !result || result == 234 )
      v4 = v12;
    v11 = result == 0;
    if ( result > 0 )
    {
      result = (unsigned __int16)result | 0x80070000;
      v11 = result == 0;
    }
    if ( v11 && v4 <= v8 )
      break;
    if ( result != -2147024662 && (result || v4 <= v8) )
      return result;
    if ( v4 > 0x1000 )
      return -2147016669;
    result = Common::ByteBuffer::SetCapacity(a4, v4);
    if ( result < 0 )
      return result;
  }
  if ( v4 > 0x1000 )
    return -2147016669;
  if ( v4 <= *((_DWORD *)a4 + 4) || (result = Common::ByteBuffer::SetCapacity(a4, v4), result >= 0) )
  {
    *(_DWORD *)a4 = v4;
    return 0;
  }
  return result;
}
