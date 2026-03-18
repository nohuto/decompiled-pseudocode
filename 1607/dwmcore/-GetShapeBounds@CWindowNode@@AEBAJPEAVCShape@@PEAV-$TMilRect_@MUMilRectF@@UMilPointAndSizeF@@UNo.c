/*
 * XREFs of ?GetShapeBounds@CWindowNode@@AEBAJPEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180140288
 * Callers:
 *     ?UpdateSpriteClipShape@CWindowNode@@AEAAJXZ @ 0x1800267DC (-UpdateSpriteClipShape@CWindowNode@@AEAAJXZ.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18002C2EC (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::GetShapeBounds(__int64 a1, CShape *a2, _DWORD *a3, char *a4)
{
  unsigned int v4; // edi
  char v5; // bl
  int v8; // eax

  v4 = 0;
  v5 = 0;
  if ( !a2 )
  {
    a3[3] = 0;
    a3[2] = 0;
    a3[1] = 0;
    *a3 = 0;
LABEL_7:
    v5 = 1;
    goto LABEL_8;
  }
  v8 = (*(__int64 (__fastcall **)(CShape *, _DWORD *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, a3, 0LL);
  v4 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1366u);
    return v4;
  }
  if ( CShape::IsAxisAlignedRectangle(a2) )
    goto LABEL_7;
LABEL_8:
  if ( a4 )
    *a4 = v5;
  return v4;
}
