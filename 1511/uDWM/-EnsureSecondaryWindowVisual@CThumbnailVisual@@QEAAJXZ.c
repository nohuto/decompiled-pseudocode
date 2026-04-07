/*
 * XREFs of ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180019280
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180019A20 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180016F68 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180017904 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180018AF8 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001956C (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18001A4F8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001FE50 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021ED8 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180021F38 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800224E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x180046B24 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18007D354 (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
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
  int v10; // eax
  double v11; // xmm3_8
  double v12; // xmm7_8
  double v13; // xmm9_8
  double v14; // xmm6_8
  __int64 v15; // rcx
  LONG v16; // esi
  LONG v17; // r14d
  CVisual *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm0
  struct CResource **v22; // rdi
  int RectangleGeometry; // eax
  int v24; // eax
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x2CBu);
  }
  else if ( *((_BYTE *)this + 456) )
  {
    v4 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x2CFu);
    }
    else
    {
      v5 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(*((CSecondaryWindowRepresentation **)this + 45));
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x2D0u);
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x2D1u);
        }
        else
        {
          v7 = CSecondaryWindowRepresentation::Validate(*((CSecondaryWindowRepresentation **)this + 45));
          v3 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x2D2u);
          }
          else if ( (unsigned __int8)CThumbnailVisual::_HasBorder(this)
                 && (v26 = CThumbnailVisual::_AddBorderInstructions(v8), v3 = v26, v26 < 0) )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x2D5u);
          }
          else
          {
            *((_DWORD *)this + 20) &= ~0x80u;
            v9 = *((_DWORD *)this + 127);
            if ( v9 )
            {
              v10 = *((_DWORD *)this + 128);
              if ( v10 )
              {
                v11 = (double)*((int *)this + 123);
                v12 = v11 / (double)v9;
                v13 = (double)*((int *)this + 124);
                v14 = v13 / (double)v10;
                if ( (*(_DWORD *)(*((_QWORD *)this + 44) + 36LL) & 0x100000) != 0 && *((_BYTE *)this + 458) )
                {
                  v27 = *((double *)this + 58);
                  v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v27 - 0.0)) & _xmm);
                  if ( v28 > 0.0000011920929 )
                    v12 = v11 / v27;
                  else
                    v12 = 0.0;
                  v29 = *((double *)this + 59);
                  v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v29 - 0.0)) & _xmm);
                  if ( v30 > 0.0000011920929 )
                    v14 = v13 / v29;
                  else
                    v14 = 0.0;
                }
                CVisual::SetScale(*(CVisual **)(*((_QWORD *)this + 45) + 48LL), v12, v14);
                v15 = *((_QWORD *)this + 45);
                v16 = *((_DWORD *)this + 121);
                v17 = *((_DWORD *)this + 122);
                v31.x = v16;
                v18 = *(CVisual **)(v15 + 48);
                v31.y = v17;
                CVisual::SetOffset(v18, &v31);
                if ( !*(_BYTE *)(*((_QWORD *)this + 44) + 34LL) )
                {
                  if ( v12 == 1.0 && v14 == 1.0 )
                    CVisual::ClearInterpolationMode(this);
                  else
                    CVisual::SetInterpolationMode(this, 6LL);
                }
                if ( !*(_BYTE *)(*((_QWORD *)this + 44) + 34LL) )
                {
                  v31.y = 0;
                  v32 = 0;
                  v19 = *((_QWORD *)this + 45);
                  v31.x = 49;
                  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 48) + 16LL);
                  if ( v20 )
                    LODWORD(v20) = *(_DWORD *)(v20 + 24);
                  v31.y = v20;
                  if ( v14 != 0.0 && v12 != 0.0 )
                  {
                    v21 = *(__m128i *)((char *)this + 516);
                    v22 = (struct CResource **)((char *)this + 424);
                    RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                                          _mm_cvtsi128_si32(v21) - v16,
                                          v21.m128i_i32[1] - v17,
                                          (int)((double)v21.m128i_i32[2] / v12 + 0.5),
                                          (int)((double)v21.m128i_i32[3] / v14 + 0.5),
                                          v22);
                    v3 = RectangleGeometry;
                    if ( RectangleGeometry < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, RectangleGeometry, 0x302u);
                      return v3;
                    }
                    v32 = *((_DWORD *)*v22 + 6);
                  }
                  v24 = MilResource_SendCommand(
                          &v31,
                          0xCu,
                          *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
                  v3 = v24;
                  if ( v24 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x305u);
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
