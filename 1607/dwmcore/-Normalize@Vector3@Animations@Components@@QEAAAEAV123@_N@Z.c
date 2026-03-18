/*
 * XREFs of ?Normalize@Vector3@Animations@Components@@QEAAAEAV123@_N@Z @ 0x180194498
 * Callers:
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180194CD0 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800BF6B6 (sqrtf_0.c)
 */

struct Components::Animations::Vector3 *__fastcall Components::Animations::Vector3::Normalize(
        Components::Animations::Vector3 *this)
{
  float *v2; // rcx
  float v3; // xmm2_4
  float v4; // xmm1_4
  int v5; // edx
  float v6; // xmm0_4
  int v7; // edx
  signed __int64 v8; // r8
  Components::Animations::Vector3 *v9; // rcx
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  _BYTE v14[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (float *)v14;
  v3 = 0.0;
  v4 = 0.0;
  v5 = 0;
  do
  {
    ++v5;
    v6 = *(float *)((char *)v2 + this - (Components::Animations::Vector3 *)v14)
       * *(float *)((char *)v2 + this - (Components::Animations::Vector3 *)v14);
    *v2 = v6;
    v4 = v4 + v6;
    ++v2;
  }
  while ( (unsigned __int64)v5 < 3 );
  if ( v4 > 0.0000099999997 )
  {
    v7 = 0;
    v8 = v14 - (_BYTE *)this;
    v9 = this;
    do
    {
      if ( (float)(*(float *)((char *)v9 + v8) + v4) == v4 )
        *(_DWORD *)v9 = 0;
      else
        v3 = v3 + *(float *)((char *)v9 + v8);
      ++v7;
      v9 = (Components::Animations::Vector3 *)((char *)v9 + 4);
    }
    while ( (unsigned __int64)v7 < 3 );
    v10 = sqrtf_0(v3);
    v11 = *((float *)this + 1) / v10;
    *(float *)this = *(float *)this / v10;
    v12 = *((float *)this + 2) / v10;
    *((float *)this + 1) = v11;
    *((float *)this + 2) = v12;
  }
  else
  {
    *(_QWORD *)this = 0LL;
    *((_DWORD *)this + 2) = 0;
  }
  return this;
}
