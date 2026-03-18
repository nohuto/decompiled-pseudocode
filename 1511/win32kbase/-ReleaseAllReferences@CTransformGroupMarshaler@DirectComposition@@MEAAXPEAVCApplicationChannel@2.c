/*
 * XREFs of ?ReleaseAllReferences@CTransformGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00162C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001A534 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CTransformGroupMarshaler::ReleaseAllReferences(
        DirectComposition::CTransformGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 i; // rdi
  __int64 v5; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 7) + 8 * i));
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 7) = 0LL;
    *((_DWORD *)this + 16) = 0;
  }
}
