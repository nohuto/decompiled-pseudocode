/*
 * XREFs of ?Normalize@Vector4@Animations@Components@@QEAAAEAV123@_N@Z @ 0x180158730
 * Callers:
 *     ?SphericalCombine@Interpolation@Animations@Components@@AEAAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180157BE8 (-SphericalCombine@Interpolation@Animations@Components@@AEAAXNW4Dwm__AnimationType@23@PEAVValue@2.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x180099BF6 (sqrtf_0.c)
 */

struct Components::Animations::Vector4 *__fastcall Components::Animations::Vector4::Normalize(
        Components::Animations::Vector4 *this)
{
  __int64 v2; // rbx
  float *v3; // rcx
  float v4; // xmm2_4
  float v5; // xmm1_4
  int v6; // edx
  float v7; // xmm0_4
  int v8; // edx
  signed __int64 v9; // r8
  Components::Animations::Vector4 *v10; // rcx
  float v11; // xmm0_4
  _BYTE v13[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v3 = (float *)v13;
  v4 = 0.0;
  v5 = 0.0;
  v6 = 0;
  do
  {
    ++v6;
    v7 = *(float *)((char *)v3 + this - (Components::Animations::Vector4 *)v13)
       * *(float *)((char *)v3 + this - (Components::Animations::Vector4 *)v13);
    *v3 = v7;
    v5 = v5 + v7;
    ++v3;
  }
  while ( (unsigned __int64)v6 < 4 );
  if ( v5 > 0.0000099999997 )
  {
    v8 = 0;
    v9 = v13 - (_BYTE *)this;
    v10 = this;
    do
    {
      if ( (float)(*(float *)((char *)v10 + v9) + v5) == v5 )
        *(_DWORD *)v10 = 0;
      else
        v4 = v4 + *(float *)((char *)v10 + v9);
      ++v8;
      v10 = (Components::Animations::Vector4 *)((char *)v10 + 4);
    }
    while ( (unsigned __int64)v8 < 4 );
    v11 = sqrtf_0(v4);
    do
    {
      *((float *)this + v2) = *((float *)this + v2) / v11;
      ++v2;
    }
    while ( v2 < 4 );
  }
  else
  {
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
  }
  return this;
}
