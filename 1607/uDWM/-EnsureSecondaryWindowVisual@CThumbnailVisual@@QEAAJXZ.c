/*
 * XREFs of ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180009394
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180016D00 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18000B468 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x1800160AC (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001684C (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001CBB0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001F154 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x18001F19C (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18001F21C (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001F7A4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180034740 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800350AC (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18007DF28 (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureSecondaryWindowVisual(CThumbnailVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
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
  LONG v17; // ebp
  CVisual *v18; // rcx
  int v20; // eax
  double v21; // xmm2_8
  float v22; // xmm1_4
  double v23; // xmm2_8
  float v24; // xmm1_4
  __int64 v25; // r8
  int RectangleGeometry; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  struct tagPOINT v30; // [rsp+80h] [rbp+8h] BYREF

  v2 = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x2D4u);
  }
  else if ( *((_BYTE *)this + 456) )
  {
    v4 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2D8u);
    }
    else
    {
      v5 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(*((CSecondaryWindowRepresentation **)this + 45));
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2D9u);
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x2DAu);
        }
        else
        {
          v7 = CSecondaryWindowRepresentation::Validate(*((CSecondaryWindowRepresentation **)this + 45));
          v3 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x2DBu);
          }
          else if ( CThumbnailVisual::_HasBorder(this)
                 && (v20 = CThumbnailVisual::_AddBorderInstructions(v8), v3 = v20, v20 < 0) )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x2DEu);
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
                  v21 = *((double *)this + 58);
                  v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v21 - 0.0)) & _xmm);
                  if ( v22 > 0.0000011920929 )
                    v12 = v11 / v21;
                  else
                    v12 = 0.0;
                  v23 = *((double *)this + 59);
                  v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v23 - 0.0)) & _xmm);
                  if ( v24 > 0.0000011920929 )
                    v14 = v13 / v23;
                  else
                    v14 = 0.0;
                }
                CVisual::SetScale(*(CVisual **)(*((_QWORD *)this + 45) + 48LL), v12, v14);
                v15 = *((_QWORD *)this + 45);
                v16 = *((_DWORD *)this + 121);
                v17 = *((_DWORD *)this + 122);
                v30.x = v16;
                v18 = *(CVisual **)(v15 + 48);
                v30.y = v17;
                CVisual::SetOffset(v18, &v30);
                if ( !*(_BYTE *)(*((_QWORD *)this + 44) + 34LL) )
                {
                  if ( v12 == 1.0 && v14 == 1.0 )
                    CVisual::ClearInterpolationMode(this);
                  else
                    CVisual::SetInterpolationMode(this, 6LL);
                }
                if ( !*(_BYTE *)(*((_QWORD *)this + 44) + 34LL) )
                {
                  v25 = 0LL;
                  if ( v14 != 0.0 && v12 != 0.0 )
                  {
                    RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                                          _mm_cvtsi128_si32(*(__m128i *)((char *)this + 516)) - v16,
                                          HIDWORD(*(_QWORD *)((char *)this + 516)) - v17,
                                          (int)((double)(int)*(_QWORD *)((char *)this + 524) / v12 + 0.5),
                                          (int)((double)(int)HIDWORD(*(_OWORD *)((char *)this + 516)) / v14 + 0.5),
                                          (struct CResource **)this + 53);
                    v3 = RectangleGeometry;
                    if ( RectangleGeometry < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, RectangleGeometry, 0x30Au);
                      return v3;
                    }
                    v25 = *(unsigned int *)(*((_QWORD *)this + 53) + 24LL);
                  }
                  v27 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 45) + 48LL) + 16LL);
                  if ( v27 )
                    v28 = *(unsigned int *)(v27 + 24);
                  else
                    v28 = 0LL;
                  v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 4)
                                                                            + 368LL))(
                          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
                          v28,
                          v25);
                  v3 = v29;
                  if ( v29 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x30Fu);
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
