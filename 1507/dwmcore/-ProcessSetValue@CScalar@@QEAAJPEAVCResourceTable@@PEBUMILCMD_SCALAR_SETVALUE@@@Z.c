/*
 * XREFs of ?ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALAR_SETVALUE@@@Z @ 0x180107BA8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x18005CD14 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CScalar::ProcessSetValue(
        CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_SCALAR_SETVALUE *a3)
{
  unsigned int v3; // ebx
  float v4; // xmm6_4
  int v6; // eax

  v3 = 0;
  v4 = *((float *)a3 + 2);
  if ( v4 != *((float *)this + 22) )
  {
    v6 = CBaseAnimation::RegisterAnimateResource(this);
    v3 = v6;
    if ( v6 >= 0 )
      *((float *)this + 22) = v4;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x21u);
  }
  return v3;
}
