/*
 * XREFs of ?GetSize@CSecondaryD2DBitmap@@UEBAXPEAI0@Z @ 0x1800125E0
 * Callers:
 *     ?GetSize@CSecondaryD2DBitmap@@W7EBAXPEAI0@Z @ 0x1800C0110 (-GetSize@CSecondaryD2DBitmap@@W7EBAXPEAI0@Z.c)
 *     ?GetSize@CSecondaryD2DBitmap@@WKA@EBAXPEAI0@Z @ 0x1800C0120 (-GetSize@CSecondaryD2DBitmap@@WKA@EBAXPEAI0@Z.c)
 * Callees:
 *     ?HasPrefilterScale@CSecondaryD2DBitmap@@IEBA_NXZ @ 0x18001236C (-HasPrefilterScale@CSecondaryD2DBitmap@@IEBA_NXZ.c)
 */

void __fastcall CSecondaryD2DBitmap::GetSize(CSecondaryD2DBitmap *this, unsigned int *a2, unsigned int *a3)
{
  int *v3; // rdx
  int *v4; // r8
  __int64 v5; // r9
  int v6; // r10d
  float v7; // xmm3_4
  float v8; // xmm0_4
  float v9; // [rsp+30h] [rbp+8h]

  *a2 = *((_DWORD *)this + 16);
  *a3 = *((_DWORD *)this + 17);
  if ( CSecondaryD2DBitmap::HasPrefilterScale((CSecondaryD2DBitmap *)((char *)this - 104)) )
  {
    v7 = (float)v6 / (float)(*(float *)(v5 + 124) / 96.0);
    v8 = (float)((float)*v3 / (float)(*(float *)(v5 + 120) / 96.0)) + 6291456.25;
    *v3 = (int)(LODWORD(v8) << 10) >> 11;
    v9 = v7 + 6291456.25;
    *v4 = (int)(LODWORD(v9) << 10) >> 11;
  }
}
