/*
 * XREFs of ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z @ 0x180073A60
 * Callers:
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800735A4 (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180073960 (-IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18000D558 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180073730 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800782D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CScopedClipStack::GetTopCpuClipInScope(CScopedClipStack *this, struct CShape **a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v7; // r10
  unsigned int i; // esi
  __int64 v9; // rcx
  __int64 v10; // r14
  int v11; // eax
  int v12; // eax

  v4 = 0;
  if ( CScopedClipStack::HasCpuClipsInScope(this) )
  {
    if ( !*(_QWORD *)(104LL * (unsigned int)(*(_DWORD *)(v5 + 816) - 1) + *((_QWORD *)this + 99) + 72) )
    {
      v7 = 0LL;
      for ( i = *((_DWORD *)this + 204)
              - *(_DWORD *)(76LL * (unsigned int)(*((_DWORD *)this + 6) - 1) + *(_QWORD *)this + 8);
            i < *((_DWORD *)this + 204);
            v7 = *(_QWORD *)(*((_QWORD *)this + 99) + v10 + 72) )
      {
        v9 = *((_QWORD *)this + 99);
        v10 = 104LL * i;
        if ( !*(_QWORD *)(v9 + v10 + 72) )
        {
          if ( v7 )
          {
            v12 = CShape::Combine(v7, 0LL, *(_QWORD *)(v10 + v9), v10 + v9 + 8, 1, (_QWORD *)(v10 + v9 + 72));
            v4 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC9u);
              return v4;
            }
          }
          else
          {
            v11 = CShape::CopyShape(
                    *(CShape **)(v10 + v9),
                    (const struct CMILMatrix *)(v10 + v9 + 8),
                    (struct CShape **)(v10 + v9 + 72));
            v4 = v11;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xBDu);
              return v4;
            }
          }
        }
        ++i;
      }
    }
    *a2 = *(struct CShape **)(104LL * (unsigned int)(*((_DWORD *)this + 204) - 1) + *((_QWORD *)this + 99) + 72);
  }
  else
  {
    *a2 = 0LL;
  }
  return v4;
}
