/*
 * XREFs of ?EmitUpdateCommands@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B7A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CPrimitiveGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CPrimitiveGroupMarshaler *))(*(_QWORD *)this + 216LL))(this)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CPrimitiveGroupMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 224LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CPrimitiveGroupMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 232LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CPrimitiveGroupMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 240LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CPrimitiveGroupMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 208LL))(
         this,
         a2) )
  {
    return (*(unsigned __int8 (__fastcall **)(DirectComposition::CPrimitiveGroupMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 248LL))(
             this,
             a2) != 0;
  }
  return v4;
}
