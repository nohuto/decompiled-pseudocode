/*
 * XREFs of ?ExcludeFromVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800BB714
 * Callers:
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x180054998 (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@00PEA_N@Z @ 0x1800BB3C8 (-SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@Coordin.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180169220 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CMoveRenderPassInfo::ExcludeFromVisibleRegion(__int64 a1, float *a2, double a3)
{
  signed int v5; // ebx
  float v6; // xmm0_4
  int v7; // r9d
  signed int LastError; // eax
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // r8d
  HRGN RectRgn; // rsi
  signed int v14; // eax
  int v15; // edx
  unsigned int v16; // ecx
  int v17; // r8d
  HRGN v18; // rax
  signed int v19; // eax
  int v20; // edx
  unsigned int v21; // ecx
  int v22; // r8d
  int LocalToWorldTransform; // eax
  float v24; // xmm0_4
  int v25; // r8d
  float v26; // xmm0_4
  int v27; // edx
  float v28; // xmm0_4
  unsigned __int32 v29; // ecx
  unsigned int v30; // [rsp+20h] [rbp-30h]
  float v31; // [rsp+30h] [rbp-20h]
  float v32; // [rsp+30h] [rbp-20h]
  float v33; // [rsp+30h] [rbp-20h]
  float v34; // [rsp+30h] [rbp-20h]
  struct tagRECT rc; // [rsp+38h] [rbp-18h] BYREF

  v5 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 224LL))(*(_QWORD *)(a1 + 72)) )
    return (unsigned int)v5;
  SetLastError(0);
  v6 = a2[3];
  if ( (LODWORD(v6) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v6 - v6;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v7 = (int)v6 - LODWORD(a3);
  }
  else
  {
    v31 = v6 + 6291456.25;
    v7 = (int)(LODWORD(v31) << 10) >> 11;
  }
  v24 = a2[2];
  if ( (LODWORD(v24) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v24 - v24;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v25 = (int)v24 - LODWORD(a3);
  }
  else
  {
    v32 = v24 + 6291456.25;
    v25 = (int)(LODWORD(v32) << 10) >> 11;
  }
  v26 = a2[1];
  if ( (LODWORD(v26) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v26 - v26;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v27 = (int)v26 - LODWORD(a3);
  }
  else
  {
    v33 = v26 + 6291456.25;
    v27 = (int)(LODWORD(v33) << 10) >> 11;
  }
  v28 = *a2;
  if ( (*(_DWORD *)a2 & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v28 - v28;
    v29 = (int)v28 - _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v34 = v28 + 6291456.25;
    v29 = (int)(LODWORD(v34) << 10) >> 11;
  }
  RectRgn = CreateRectRgn(v29, v27, v25, v7);
  if ( RectRgn )
  {
    if ( *(_QWORD *)(a1 + 8) || (SetLastError(0), v18 = CreateRectRgn(0, 0, 0, 0), (*(_QWORD *)(a1 + 8) = v18) != 0LL) )
    {
      SetLastError(0);
      if ( CombineRgn(*(HRGN *)(a1 + 8), *(HRGN *)(a1 + 8), RectRgn, 4) )
      {
        if ( GetRgnBox(*(HRGN *)(a1 + 8), &rc) == 1 )
        {
          LocalToWorldTransform = CMoveRenderPassInfo::SetLastLocalToWorldTransform(a1, 0LL, 0LL, 0LL, 0LL);
          v5 = LocalToWorldTransform;
          if ( LocalToWorldTransform < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, LocalToWorldTransform, 0xDAu);
        }
        goto LABEL_11;
      }
      LastError = GetLastError();
      v5 = LastError;
      if ( LastError > 0 )
        v5 = (unsigned __int16)LastError | 0x80070000;
      if ( v5 >= 0 )
        v5 = CheckGUIHandleQuota(v10, v9, v11);
      v30 = 206;
    }
    else
    {
      v19 = GetLastError();
      v5 = v19;
      if ( v19 > 0 )
        v5 = (unsigned __int16)v19 | 0x80070000;
      if ( v5 >= 0 )
        v5 = CheckGUIHandleQuota(v21, v20, v22);
      v30 = 200;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v30);
LABEL_11:
    DeleteObject(RectRgn);
    return (unsigned int)v5;
  }
  v14 = GetLastError();
  v5 = v14;
  if ( v14 > 0 )
    v5 = (unsigned __int16)v14 | 0x80070000;
  if ( v5 >= 0 )
    v5 = CheckGUIHandleQuota(v16, v15, v17);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC4u);
  return (unsigned int)v5;
}
