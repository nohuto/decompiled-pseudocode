/*
 * XREFs of ?EmitUpdateCommands@CDesktopTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0017B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CDesktopTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CDesktopTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CDesktopTargetMarshaler *))(*(_QWORD *)this + 208LL))(this)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CDesktopTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 216LL))(
         this,
         a2) )
  {
    return (*(unsigned __int8 (__fastcall **)(DirectComposition::CDesktopTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 224LL))(
             this,
             a2) != 0;
  }
  return v4;
}
