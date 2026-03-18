/*
 * XREFs of ?SetBufferProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0044EC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetBufferProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx

  if ( a3 == 13 && a5 == 16 )
  {
    v6 = 0;
    (*(void (__fastcall **)(DirectComposition::CRectangleClipMarshaler *, struct DirectComposition::CApplicationChannel *, const void *, bool *))(*(_QWORD *)this + 232LL))(
      this,
      a2,
      a4,
      a6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
