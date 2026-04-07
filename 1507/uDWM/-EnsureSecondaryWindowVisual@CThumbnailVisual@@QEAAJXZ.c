/*
 * XREFs of ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18001374C
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180013ED0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180010AD0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x18001305C (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x180013A34 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800150D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001CA80 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x18001CAE0 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001D0C8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180033F40 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800348C4 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18003D738 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x1800752C4 (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureSecondaryWindowVisual(CThumbnailVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int inserted; // eax
  int v7; // eax
  CThumbnailVisual *v8; // rcx
  int v9; // ecx
  int v11; // eax
  double v12; // xmm3_8
  double v13; // xmm7_8
  double v14; // xmm9_8
  double v15; // xmm6_8
  __int64 v16; // rcx
  LONG v17; // esi
  LONG v18; // r14d
  CVisual *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22; // xmm0
  struct CResource **v23; // rdi
  int RectangleGeometry; // eax
  int v25; // eax
  int v26; // eax
  double v27; // xmm2_8
  float v28; // xmm1_4
  double v29; // xmm2_8
  float v30; // xmm1_4
  struct tagPOINT v31; // [rsp+48h] [rbp-9h] BYREF
  int v32; // [rsp+50h] [rbp-1h]

  v2 = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x2FEu);
  }
  else if ( *((_BYTE *)this + 456) )
  {
    v4 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x302u);
    }
    else
    {
      v5 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(*((CSecondaryWindowRepresentation **)this + 45));
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x303u);
      }
      else
      {
        inserted = VisualCollection::InsertRelative(
                     (CThumbnailVisual *)((char *)this + 32),
                     *(struct CVisual **)(*((_QWORD *)this + 45) + 48LL),
                     0LL,
                     0,
                     1);
        v3 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x304u);
        }
        else
        {
          v7 = CSecondaryWindowRepresentation::Validate(*((CSecondaryWindowRepresentation **)this + 45));
          v3 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x305u);
          }
          else if ( (unsigned __int8)CThumbnailVisual::_HasBorder(this)
                 && (v26 = CThumbnailVisual::_AddBorderInstructions(v8), v3 = v26, v26 < 0) )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x308u);
          }
          else
          {
            *((_DWORD *)this + 20) &= ~0x80u;
            v9 = *((_DWORD *)this + 127);
            if ( v9 )
            {
              v11 = *((_DWORD *)this + 128);
              if ( v11 )
              {
                v12 = (double)*((int *)this + 123);
                v13 = v12 / (double)v9;
                v14 = (double)*((int *)this + 124);
                v15 = v14 / (double)v11;
                if ( (*(_DWORD *)(*((_QWORD *)this + 44) + 36LL) & 0x100000) != 0 && *((_BYTE *)this + 458) )
                {
                  v27 = *((double *)this + 58);
                  v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v27 - 0.0)) & _xmm);
                  if ( v28 > 0.0000011920929 )
                    v13 = v12 / v27;
                  else
                    v13 = 0.0;
                  v29 = *((double *)this + 59);
                  v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v29 - 0.0)) & _xmm);
                  if ( v30 > 0.0000011920929 )
                    v15 = v14 / v29;
                  else
                    v15 = 0.0;
                }
                CVisual::SetScale(*(CVisual **)(*((_QWORD *)this + 45) + 48LL), v13, v15);
                v16 = *((_QWORD *)this + 45);
                v17 = *((_DWORD *)this + 121);
                v18 = *((_DWORD *)this + 122);
                v31.x = v17;
                v19 = *(CVisual **)(v16 + 48);
                v31.y = v18;
                CVisual::SetOffset(v19, &v31);
                if ( !*(_BYTE *)(*((_QWORD *)this + 44) + 34LL) )
                {
                  if ( v13 == 1.0 && v15 == 1.0 )
                    CVisual::ClearInterpolationMode(this);
                  else
                    CVisual::SetInterpolationMode(this, 6LL);
                }
                if ( !*(_BYTE *)(*((_QWORD *)this + 44) + 34LL) )
                {
                  v31.y = 0;
                  v32 = 0;
                  v20 = *((_QWORD *)this + 45);
                  v31.x = 46;
                  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 48) + 16LL);
                  if ( v21 )
                    LODWORD(v21) = *(_DWORD *)(v21 + 24);
                  v31.y = v21;
                  if ( v15 != 0.0 && v13 != 0.0 )
                  {
                    v22 = *(__m128i *)((char *)this + 516);
                    v23 = (struct CResource **)((char *)this + 424);
                    RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                                          _mm_cvtsi128_si32(v22) - v17,
                                          v22.m128i_i32[1] - v18,
                                          (int)((double)v22.m128i_i32[2] / v13 + 0.5),
                                          (int)((double)v22.m128i_i32[3] / v15 + 0.5),
                                          v23);
                    v3 = RectangleGeometry;
                    if ( RectangleGeometry < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, RectangleGeometry, 0x335u);
                      return v3;
                    }
                    v32 = *((_DWORD *)*v23 + 6);
                  }
                  v25 = MilResource_SendCommand(
                          &v31,
                          0xCu,
                          *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
                  v3 = v25;
                  if ( v25 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0x338u);
                }
              }
            }
          }
        }
      }
    }
  }
  return v3;
}
