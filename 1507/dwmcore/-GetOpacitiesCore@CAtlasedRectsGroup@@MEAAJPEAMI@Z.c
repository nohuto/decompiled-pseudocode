/*
 * XREFs of ?GetOpacitiesCore@CAtlasedRectsGroup@@MEAAJPEAMI@Z @ 0x180016F40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetOpacitiesCore@CAtlasedRectsMesh@@MEAAJPEAMI@Z @ 0x18006F490 (-GetOpacitiesCore@CAtlasedRectsMesh@@MEAAJPEAMI@Z.c)
 *     ?GetRectangleCount@CAtlasedRectsMesh@@UEAAIXZ @ 0x18006F5F0 (-GetRectangleCount@CAtlasedRectsMesh@@UEAAIXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GetOpacitiesCore(CAtlasedRectsGroup *this, float *a2, unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int v7; // eax
  __int64 i; // rbp
  CAtlasedRectsMesh *v9; // rbx
  unsigned int (__fastcall *v10)(CAtlasedRectsMesh *__hidden); // rsi
  unsigned int RectangleCount; // eax
  unsigned int v12; // r14d
  __int64 (__fastcall *v13)(CAtlasedRectsMesh *__hidden, float *, unsigned int); // rsi
  int OpacitiesCore; // eax

  v3 = 0;
  v7 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v7;
  if ( (v7 & 6) == 2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 36); i = (unsigned int)(i + 1) )
    {
      v9 = *(CAtlasedRectsMesh **)(*((_QWORD *)this + 19) + 8 * i);
      if ( v9 )
      {
        v10 = *(unsigned int (__fastcall **)(CAtlasedRectsMesh *__hidden))(*(_QWORD *)v9 + 96LL);
        if ( v10 == CAtlasedRectsMesh::GetRectangleCount )
          RectangleCount = CAtlasedRectsMesh::GetRectangleCount(v9);
        else
          RectangleCount = v10(v9);
        v12 = RectangleCount;
        v13 = *(__int64 (__fastcall **)(CAtlasedRectsMesh *__hidden, float *, unsigned int))(*(_QWORD *)v9 + 128LL);
        if ( v13 == CAtlasedRectsMesh::GetOpacitiesCore )
          OpacitiesCore = CAtlasedRectsMesh::GetOpacitiesCore(v9, a2, a3);
        else
          OpacitiesCore = v13(v9, a2, a3);
        v3 = OpacitiesCore;
        if ( OpacitiesCore < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, OpacitiesCore, 0x146u);
          break;
        }
        a3 -= v12;
        a2 += v12;
      }
    }
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v3;
}
