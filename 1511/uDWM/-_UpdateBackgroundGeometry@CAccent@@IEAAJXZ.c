/*
 * XREFs of ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180010D18
 * Callers:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180010A88 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x180010B8C (-EndTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18001452C (-_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CAccent::_UpdateBackgroundGeometry(CAccent *this)
{
  unsigned int v2; // ebx
  int v3; // ecx
  __int64 v4; // rdx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  int updated; // eax
  _DWORD v10[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = *((_DWORD *)this + 145) - *((_DWORD *)this + 143);
  v4 = *((_QWORD *)this + 38);
  if ( v3 < 0 )
    v3 = 0;
  v5 = *((_DWORD *)this + 144) - *((_DWORD *)this + 142);
  if ( v5 < 0 )
    v5 = 0;
  v10[0] = 0;
  v10[1] = 0;
  *(float *)&v10[3] = (float)v3 + 0.0;
  *(float *)&v10[2] = (float)v5 + 0.0;
  if ( v4
    && (v6 = CAccent::_UpdateSolidFill(this, v4, *((unsigned int *)this + 68), v10, LODWORD(FLOAT_1_0)), v2 = v6, v6 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x2BAu);
  }
  else
  {
    v7 = *((_QWORD *)this + 39);
    if ( v7 )
    {
      updated = CAccent::_UpdateSolidFill(this, v7, *((unsigned int *)this + 72), v10, *((_DWORD *)this + 86));
      v2 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x2BFu);
    }
  }
  return v2;
}
