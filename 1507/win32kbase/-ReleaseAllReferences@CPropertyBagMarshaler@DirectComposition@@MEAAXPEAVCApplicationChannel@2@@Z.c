/*
 * XREFs of ?ReleaseAllReferences@CPropertyBagMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00D7950
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CPropertyBagMarshaler::ReleaseAllReferences(
        DirectComposition::CPropertyBagMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  if ( *((_QWORD *)this + 6) )
  {
    Win32FreePool();
    *((_QWORD *)this + 6) = 0LL;
  }
}
