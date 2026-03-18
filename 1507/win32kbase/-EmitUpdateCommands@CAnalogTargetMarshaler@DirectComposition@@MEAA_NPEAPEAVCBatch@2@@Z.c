/*
 * XREFs of ?EmitUpdateCommands@CAnalogTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DB7F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CAnalogTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CAnalogTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CAnalogTargetMarshaler *))(*(_QWORD *)this + 208LL))(this)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CAnalogTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 216LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CAnalogTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 224LL))(
         this,
         a2) )
  {
    return (*(unsigned __int8 (__fastcall **)(DirectComposition::CAnalogTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 232LL))(
             this,
             a2) != 0;
  }
  return v4;
}
