/*
 * XREFs of ?SetBufferProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C0026A90
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?SetBufferProperty@CBaseClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00D8D30 (-SetBufferProperty@CBaseClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KP.c)
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetBufferProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v7; // ebx

  if ( a3 == 12 )
  {
    if ( a5 == 16 )
    {
      v7 = (*(__int64 (__fastcall **)(DirectComposition::CRectangleClipMarshaler *, struct DirectComposition::CApplicationChannel *, void *, bool *))(*(_QWORD *)this + 208LL))(
             this,
             a2,
             a4,
             a6);
      if ( v7 >= 0 )
        Win32FreePool(a4);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)DirectComposition::CBaseClipMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
  }
  return (unsigned int)v7;
}
