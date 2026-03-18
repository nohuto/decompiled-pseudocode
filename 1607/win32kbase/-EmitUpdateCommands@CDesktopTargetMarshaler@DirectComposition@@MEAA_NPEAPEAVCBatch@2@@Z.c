/*
 * XREFs of ?EmitUpdateCommands@CDesktopTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007BC90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CDesktopTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CDesktopTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CDesktopTargetMarshaler *))(*(_QWORD *)this + 232LL))(this)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CDesktopTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 240LL))(
         this,
         a2) )
  {
    return (*(unsigned __int8 (__fastcall **)(DirectComposition::CDesktopTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 248LL))(
             this,
             a2) != 0;
  }
  return v4;
}
