/*
 * XREFs of ?AddToVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800FC718
 * Callers:
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18010380C (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180128B0C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CMoveRenderPassInfo::AddToVisibleRegion(__int64 a1, float *a2)
{
  signed int v4; // esi
  float v5; // xmm0_4
  float v6; // r9d
  float v7; // xmm0_4
  int v8; // r8d
  float v9; // xmm0_4
  HRGN RectRgn; // rbx
  signed int v11; // eax
  int v12; // edx
  unsigned int v13; // ecx
  int v14; // r8d
  HRGN v15; // rax
  signed int v16; // eax
  int v17; // edx
  unsigned int v18; // ecx
  int v19; // r8d
  signed int LastError; // eax
  int v21; // edx
  unsigned int v22; // ecx
  int v23; // r8d
  float v25; // [rsp+30h] [rbp-38h]

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 216LL))(*(_QWORD *)(a1 + 72)) )
  {
    SetLastError(0);
    v5 = a2[3] + 6291456.25;
    v6 = v5;
    v7 = a2[2] + 6291456.25;
    v8 = (int)(LODWORD(v7) << 10) >> 11;
    v9 = a2[1] + 6291456.25;
    v25 = *a2 + 6291456.25;
    RectRgn = CreateRectRgn(
                (int)(LODWORD(v25) << 10) >> 11,
                (int)(LODWORD(v9) << 10) >> 11,
                v8,
                (int)(LODWORD(v6) << 10) >> 11);
    if ( RectRgn )
    {
      if ( *(_QWORD *)(a1 + 8) || (SetLastError(0), v15 = CreateRectRgn(0, 0, 0, 0), (*(_QWORD *)(a1 + 8) = v15) != 0LL) )
      {
        SetLastError(0);
        if ( !CombineRgn(*(HRGN *)(a1 + 8), *(HRGN *)(a1 + 8), RectRgn, 2) )
        {
          LastError = GetLastError();
          v4 = LastError;
          if ( LastError > 0 )
            v4 = (unsigned __int16)LastError | 0x80070000;
          if ( v4 >= 0 )
            v4 = CheckGUIHandleQuota(v22, v21, v23);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x9Eu);
        }
      }
      else
      {
        v16 = GetLastError();
        v4 = v16;
        if ( v16 > 0 )
          v4 = (unsigned __int16)v16 | 0x80070000;
        if ( v4 >= 0 )
          v4 = CheckGUIHandleQuota(v18, v17, v19);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x98u);
      }
      DeleteObject(RectRgn);
    }
    else
    {
      v11 = GetLastError();
      v4 = v11;
      if ( v11 > 0 )
        v4 = (unsigned __int16)v11 | 0x80070000;
      if ( v4 >= 0 )
        v4 = CheckGUIHandleQuota(v13, v12, v14);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x94u);
    }
  }
  return (unsigned int)v4;
}
