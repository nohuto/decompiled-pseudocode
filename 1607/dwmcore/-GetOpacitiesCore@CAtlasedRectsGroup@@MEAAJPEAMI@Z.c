/*
 * XREFs of ?GetOpacitiesCore@CAtlasedRectsGroup@@MEAAJPEAMI@Z @ 0x18009D290
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetOpacitiesCore@CAtlasedRectsMesh@@MEAAJPEAMI@Z @ 0x18009CB30 (-GetOpacitiesCore@CAtlasedRectsMesh@@MEAAJPEAMI@Z.c)
 *     ?GetRectangleCount@CAtlasedRectsMesh@@UEAAIXZ @ 0x18009CC90 (-GetRectangleCount@CAtlasedRectsMesh@@UEAAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GetOpacitiesCore(CAtlasedRectsGroup *this, float *a2, unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int v7; // eax
  __int64 i; // rbp
  CAtlasedRectsMesh *v9; // rbx
  __int64 (__fastcall *v10)(CAtlasedRectsMesh *); // rax
  unsigned int RectangleCount; // eax
  unsigned int v12; // r14d
  __int64 (__fastcall *v13)(CAtlasedRectsMesh *, float *, unsigned int); // rax
  int OpacitiesCore; // eax

  v3 = 0;
  v7 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v7;
  if ( (v7 & 6) == 2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 54); i = (unsigned int)(i + 1) )
    {
      v9 = *(CAtlasedRectsMesh **)(*((_QWORD *)this + 28) + 8 * i);
      if ( v9 )
      {
        v10 = *(__int64 (__fastcall **)(CAtlasedRectsMesh *))(*(_QWORD *)v9 + 112LL);
        if ( v10 == CAtlasedRectsMesh::GetRectangleCount )
          RectangleCount = CAtlasedRectsMesh::GetRectangleCount(v9);
        else
          RectangleCount = v10(v9);
        v12 = RectangleCount;
        v13 = *(__int64 (__fastcall **)(CAtlasedRectsMesh *, float *, unsigned int))(*(_QWORD *)v9 + 144LL);
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
