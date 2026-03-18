/*
 * XREFs of ?EmitSetProperties@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D7530
 * Callers:
 *     ?EmitUpdateCommands@CPropertyBagMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D78B0 (-EmitUpdateCommands@CPropertyBagMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitSetMatrix3x2Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D7390 (-EmitSetMatrix3x2Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPro.c)
 *     ?EmitSetMatrix4x4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D7440 (-EmitSetMatrix4x4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPro.c)
 *     ?EmitSetScalarProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D765C (-EmitSetScalarProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUProper.c)
 *     ?EmitSetVector2Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D76E0 (-EmitSetVector2Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPrope.c)
 *     ?EmitSetVector3Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D776C (-EmitSetVector3Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPrope.c)
 *     ?EmitSetVector4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D7800 (-EmitSetVector4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPrope.c)
 */

char __fastcall DirectComposition::CPropertyBagMarshaler::EmitSetProperties(
        DirectComposition::CPropertyBagMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // edx
  char v9; // al
  __m128i v11; // [rsp+20h] [rbp-18h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    v5 = *((_DWORD *)this + 30) - 1;
    v6 = v5;
    if ( v5 >= 0 )
    {
      while ( 1 )
      {
        if ( !v4 )
          goto LABEL_20;
        v7 = *((_QWORD *)this + 6);
        v11 = *(__m128i *)(v6 * *((_QWORD *)this + 14) + *((_QWORD *)this + 10));
        v8 = *(_DWORD *)((unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)) + v7);
        switch ( v8 )
        {
          case 17:
            v9 = DirectComposition::CPropertyBagMarshaler::EmitSetScalarProperty(
                   this,
                   a2,
                   (struct PropertyUpdate *)&v11);
            goto LABEL_16;
          case 34:
            v9 = DirectComposition::CPropertyBagMarshaler::EmitSetVector2Property(
                   this,
                   a2,
                   (struct PropertyUpdate *)&v11);
            goto LABEL_16;
          case 51:
            v9 = DirectComposition::CPropertyBagMarshaler::EmitSetVector3Property(
                   this,
                   a2,
                   (struct PropertyUpdate *)&v11);
            goto LABEL_16;
          case 68:
            v9 = DirectComposition::CPropertyBagMarshaler::EmitSetVector4Property(
                   this,
                   a2,
                   (struct PropertyUpdate *)&v11);
            goto LABEL_16;
        }
        if ( v8 == 101 )
          break;
        if ( v8 == 262 )
        {
          v9 = DirectComposition::CPropertyBagMarshaler::EmitSetMatrix4x4Property(
                 this,
                 (struct DirectComposition::CBatch ***)a2,
                 (struct PropertyUpdate *)&v11);
LABEL_16:
          v4 &= v9;
        }
        if ( v4 )
          --*((_QWORD *)this + 15);
        if ( --v6 < 0 )
          goto LABEL_20;
      }
      v9 = DirectComposition::CPropertyBagMarshaler::EmitSetMatrix3x2Property(
             this,
             (struct DirectComposition::CBatch ***)a2,
             (struct PropertyUpdate *)&v11);
      goto LABEL_16;
    }
LABEL_20:
    if ( !*((_QWORD *)this + 15) )
      *((_DWORD *)this + 4) &= ~0x40u;
  }
  return v4;
}
