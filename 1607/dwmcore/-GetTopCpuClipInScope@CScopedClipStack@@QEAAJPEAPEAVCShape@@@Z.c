/*
 * XREFs of ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z @ 0x1800982D4
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x180069A20 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800986DC (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180111FC8 (-IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 * Callees:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800017D4 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18002C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180095374 (-TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CScopedClipStack::GetTopCpuClipInScope(CScopedClipStack *this, struct CShape **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v6; // r8d
  CRegionShape *v8; // r14
  unsigned int i; // esi
  __int64 v10; // rbp
  __int64 v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // r13
  int v14; // eax
  int v15; // eax
  int v16; // eax
  CRegionShape *v17; // [rsp+60h] [rbp+8h]

  v2 = *((_DWORD *)this + 6);
  v3 = 0;
  if ( v2 && (v6 = *(_DWORD *)(*(_QWORD *)this + 80LL * (unsigned int)(v2 - 1) + 8)) != 0 )
  {
    if ( !*(_QWORD *)(120LL * (unsigned int)(*((_DWORD *)this + 214) - 1) + *((_QWORD *)this + 104) + 88) )
    {
      v8 = 0LL;
      for ( i = *((_DWORD *)this + 214) - v6;
            i < *((_DWORD *)this + 214);
            v8 = *(CRegionShape **)(*((_QWORD *)this + 104) + v10 + 88) )
      {
        v10 = 120LL * i;
        v11 = *((_QWORD *)this + 104);
        v12 = (_QWORD *)(v10 + v11 + 88);
        if ( !*v12 )
        {
          if ( v8 )
          {
            v13 = v11 + v10;
            v17 = *(CRegionShape **)(v11 + 120LL * i);
            v14 = CShape::TryOptimizedPaths(
                    v8,
                    (__int64)a2,
                    v17,
                    (const struct CMILMatrix *)(v11 + v10 + 16),
                    1,
                    (struct CShape **)(v10 + v11 + 88));
            v3 = v14;
            if ( v14 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x170u);
            }
            else if ( !*v12 )
            {
              v16 = CShape::D2DCombine(v8, (__int64)a2, v17, (_DWORD *)(v13 + 16), 1, v12);
              v3 = v16;
              if ( v16 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x17Fu);
            }
            if ( (v3 & 0x80000000) != 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xD3u);
              return v3;
            }
          }
          else
          {
            v15 = CShape::CopyShape(
                    *(struct ID2D1RegionGeometry ***)(v11 + 120LL * i),
                    (const struct CMILMatrix *)(120LL * i + v11 + 16),
                    (struct CShape **)(120LL * i + v11 + 88));
            v3 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC7u);
              return v3;
            }
          }
        }
        ++i;
      }
    }
    *a2 = *(struct CShape **)(120LL * (unsigned int)(*((_DWORD *)this + 214) - 1) + *((_QWORD *)this + 104) + 88);
  }
  else
  {
    *a2 = 0LL;
  }
  return v3;
}
