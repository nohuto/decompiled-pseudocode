/*
 * XREFs of ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0003100
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C003E0A0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C00031C8 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RedirectMouseToHwnd(
        DirectComposition::CApplicationChannel *this,
        int a2,
        HWND a3,
        const struct tagMsgRoutingInfo *a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v8; // rcx
  DirectComposition::CVisualMarshaler *v11; // rdi

  v6 = 0;
  v8 = (unsigned int)(a2 - 1);
  if ( a2 && v8 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v11 = *(DirectComposition::CVisualMarshaler **)(v8 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CVisualMarshaler *, __int64))(*(_QWORD *)v11 + 112LL))(
         v11,
         32LL)
    && ((a6 | a5) & 0xFFFFFFFC) == 0 )
  {
    if ( a5 )
      return (unsigned int)DirectComposition::CVisualMarshaler::RedirectMouseToHwnd(v11, this, a3, a4, a5, a6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
