/*
 * XREFs of ?ReleaseAllReferences@CRenderTargetGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0079D60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001A534 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CRenderTargetGroupMarshaler::ReleaseAllReferences(
        DirectComposition::CRenderTargetGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 5) + 8 * i));
  if ( *((_QWORD *)this + 5) )
  {
    Win32FreePool();
    *((_QWORD *)this + 5) = 0LL;
    *((_DWORD *)this + 12) = 0;
  }
}
