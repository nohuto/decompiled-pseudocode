/*
 * XREFs of ?SetReferenceProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0003D90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetInput@CEffectInputSet@DirectComposition@@QEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@@Z @ 0x1C0003F20 (-SetInput@CEffectInputSet@DirectComposition@@QEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarsha.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CFilterEffectMarshaler::SetReferenceProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // ebx

  v5 = 0;
  *a5 = 0;
  if ( (a3 & 0xC0000000) != 0x40000000 )
    v5 = -1073741811;
  if ( a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
          a4,
          9LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
          a4,
          87LL) )
  {
    v5 = -1073741811;
  }
  if ( v5 >= 0 )
  {
    v5 = DirectComposition::CEffectInputSet::SetInput(
           (DirectComposition::CFilterEffectMarshaler *)((char *)this + 48),
           a2,
           a3 & 0x3FFFFFFF,
           a4);
    if ( v5 >= 0 )
      *a5 = 1;
  }
  return (unsigned int)v5;
}
