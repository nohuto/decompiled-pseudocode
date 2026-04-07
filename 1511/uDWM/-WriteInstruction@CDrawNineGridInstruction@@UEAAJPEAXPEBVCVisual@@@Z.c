/*
 * XREFs of ?WriteInstruction@CDrawNineGridInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180013A20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLayout@@@Z @ 0x180013E00 (-GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLay.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawNineGridInstruction::WriteInstruction(
        struct _MARGINS *this,
        float *a2,
        const struct CVisual *a3)
{
  int v3; // r9d
  unsigned int v5; // ebx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // ecx
  int v11; // r9d
  struct _MARGINS *v12; // r11
  __int64 v13; // rdi
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // eax
  float v19; // xmm2_4
  __m128i v20; // xmm0
  _DWORD v21[2]; // [rsp+20h] [rbp-58h] BYREF
  int v22; // [rsp+28h] [rbp-50h]
  int v23; // [rsp+2Ch] [rbp-4Ch]
  struct _MARGINS v24; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v25[8]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *((_DWORD *)a3 + 29);
  v5 = 0;
  v7 = this[2].cxRightWidth + *((_DWORD *)a3 + 28);
  v8 = -this[2].cyTopHeight;
  v9 = this[2].cyBottomHeight + v3;
  v10 = v7 + this[2].cxLeftWidth;
  v21[0] = -this[2].cxLeftWidth;
  v21[1] = v8;
  if ( v10 < 0 )
    v22 = 0;
  else
    v22 = v10;
  v11 = v9 - v8;
  if ( v11 < 0 )
    v23 = 0;
  else
    v23 = v11;
  v24 = this[1];
  CDrawNineGridInstruction::GetNineGridLayout(&v24, (const struct MilPointAndSizeL *)v21, (struct NineGridLayout *)v25);
  v12 = this + 3;
  do
  {
    v13 = *(_QWORD *)&v12->cxLeftWidth;
    if ( *(_QWORD *)&v12->cxLeftWidth )
    {
      *(_DWORD *)a2 = 32;
      *((_DWORD *)a2 + 1) = 215;
      v15 = v5 / 3;
      v16 = v5 % 3;
      v17 = v25[v16];
      v18 = v25[(unsigned int)(v15 + 1) + 4] - v25[v15 + 4];
      v19 = (float)(int)v25[v15 + 4];
      v20 = _mm_cvtsi32_si128(v25[(unsigned int)(v16 + 1)] - v17);
      a2[3] = v19;
      a2[2] = (float)v17;
      a2[4] = _mm_cvtepi32_ps(v20).m128_f32[0] + (float)v17;
      a2[5] = (float)v18 + v19;
      a2[6] = *(float *)(v13 + 24);
      a2 += 8;
    }
    ++v5;
    v12 = (struct _MARGINS *)((char *)v12 + 8);
  }
  while ( v5 < 9 );
  return 0LL;
}
