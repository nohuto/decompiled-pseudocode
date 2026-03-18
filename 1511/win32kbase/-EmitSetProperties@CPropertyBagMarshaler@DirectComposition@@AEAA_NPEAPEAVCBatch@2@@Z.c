/*
 * XREFs of ?EmitSetProperties@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D95EC
 * Callers:
 *     ?EmitUpdateCommands@CPropertyBagMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D9A50 (-EmitUpdateCommands@CPropertyBagMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitSetColorProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D93A8 (-EmitSetColorProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropert.c)
 *     ?EmitSetMatrix3x2Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D944C (-EmitSetMatrix3x2Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPro.c)
 *     ?EmitSetMatrix4x4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D94FC (-EmitSetMatrix4x4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPro.c)
 *     ?EmitSetQuaternionProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D975C (-EmitSetQuaternionProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPr.c)
 *     ?EmitSetScalarProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D9800 (-EmitSetScalarProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUProper.c)
 *     ?EmitSetVector2Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D9884 (-EmitSetVector2Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPrope.c)
 *     ?EmitSetVector3Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D9910 (-EmitSetVector3Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPrope.c)
 *     ?EmitSetVector4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D99A4 (-EmitSetVector4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPrope.c)
 */

char __fastcall DirectComposition::CPropertyBagMarshaler::EmitSetProperties(
        DirectComposition::CPropertyBagMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  char v15; // al
  __m128i v17; // [rsp+20h] [rbp-18h] BYREF

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
          goto LABEL_24;
        v7 = *((_QWORD *)this + 6);
        v17 = *(__m128i *)(v6 * *((_QWORD *)this + 14) + *((_QWORD *)this + 10));
        v8 = *(_DWORD *)(v7 + (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v17, 8))) - 18;
        if ( !v8 )
        {
          v15 = DirectComposition::CPropertyBagMarshaler::EmitSetScalarProperty(this, a2, (struct PropertyUpdate *)&v17);
          goto LABEL_20;
        }
        v9 = v8 - 17;
        if ( !v9 )
        {
          v15 = DirectComposition::CPropertyBagMarshaler::EmitSetVector2Property(
                  this,
                  a2,
                  (struct PropertyUpdate *)&v17);
          goto LABEL_20;
        }
        v10 = v9 - 17;
        if ( !v10 )
        {
          v15 = DirectComposition::CPropertyBagMarshaler::EmitSetVector3Property(
                  this,
                  a2,
                  (struct PropertyUpdate *)&v17);
          goto LABEL_20;
        }
        v11 = v10 - 17;
        if ( !v11 )
        {
          v15 = DirectComposition::CPropertyBagMarshaler::EmitSetVector4Property(
                  this,
                  a2,
                  (struct PropertyUpdate *)&v17);
          goto LABEL_20;
        }
        v12 = v11 - 1;
        if ( !v12 )
        {
          v15 = DirectComposition::CPropertyBagMarshaler::EmitSetColorProperty(this, a2, (struct PropertyUpdate *)&v17);
          goto LABEL_20;
        }
        v13 = v12 - 1;
        if ( !v13 )
        {
          v15 = DirectComposition::CPropertyBagMarshaler::EmitSetQuaternionProperty(
                  this,
                  a2,
                  (struct PropertyUpdate *)&v17);
          goto LABEL_20;
        }
        v14 = v13 - 33;
        if ( !v14 )
          break;
        if ( v14 == 161 )
        {
          v15 = DirectComposition::CPropertyBagMarshaler::EmitSetMatrix4x4Property(
                  this,
                  a2,
                  (struct PropertyUpdate *)&v17);
LABEL_20:
          v4 &= v15;
        }
        if ( v4 )
          --*((_QWORD *)this + 15);
        if ( --v6 < 0 )
          goto LABEL_24;
      }
      v15 = DirectComposition::CPropertyBagMarshaler::EmitSetMatrix3x2Property(this, a2, (struct PropertyUpdate *)&v17);
      goto LABEL_20;
    }
LABEL_24:
    if ( !*((_QWORD *)this + 15) )
      *((_DWORD *)this + 4) &= ~0x40u;
  }
  return v4;
}
