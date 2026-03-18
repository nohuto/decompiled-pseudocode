/*
 * XREFs of ?EmitUpdateCommands@CAnalogTextureTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007C1E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CAnalogTextureTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CAnalogTextureTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CAnalogTextureTargetMarshaler *))(*(_QWORD *)this + 232LL))(this) )
    return (*(unsigned __int8 (__fastcall **)(DirectComposition::CAnalogTextureTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 240LL))(
             this,
             a2) != 0;
  return v4;
}
