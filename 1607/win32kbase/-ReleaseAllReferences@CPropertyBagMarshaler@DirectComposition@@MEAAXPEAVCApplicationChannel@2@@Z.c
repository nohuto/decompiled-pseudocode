/*
 * XREFs of ?ReleaseAllReferences@CPropertyBagMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C003C7A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
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
