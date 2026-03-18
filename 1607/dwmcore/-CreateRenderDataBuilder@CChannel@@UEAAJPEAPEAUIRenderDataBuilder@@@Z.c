/*
 * XREFs of ?CreateRenderDataBuilder@CChannel@@UEAAJPEAPEAUIRenderDataBuilder@@@Z @ 0x18004A360
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CRenderDataBuilder@@SAJPEAPEAV1@@Z @ 0x1800AF9D4 (-Create@CRenderDataBuilder@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CChannel::CreateRenderDataBuilder(CChannel *this, struct IRenderDataBuilder **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 result; // rax
  struct CRenderDataBuilder *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v3 = CRenderDataBuilder::Create(&v6);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x32Du);
  result = v4;
  *a2 = v6;
  return result;
}
