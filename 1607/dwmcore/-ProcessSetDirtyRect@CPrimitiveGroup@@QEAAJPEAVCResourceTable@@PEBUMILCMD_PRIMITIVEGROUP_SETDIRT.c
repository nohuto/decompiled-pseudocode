/*
 * XREFs of ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x18004D1B4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18009AA50 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18009AC74 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessSetDirtyRect(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_SETDIRTYRECT *a3,
        _DWORD *a4,
        unsigned int a5)
{
  unsigned int v5; // edx
  char v9; // r14
  int v10; // esi
  __m128 v11; // xmm0
  __m128 v12; // xmm3
  int v13; // ecx
  __m128 v14; // xmm1
  __m128 v15; // xmm0
  int v16; // edx
  int v17; // ecx
  __m128 v18; // xmm0
  int v19; // r9d
  int v20; // eax
  unsigned __int32 v22; // [rsp+38h] [rbp-51h]
  int *v23; // [rsp+48h] [rbp-41h] BYREF
  int v24; // [rsp+50h] [rbp-39h] BYREF

  v24 = 0;
  v5 = *((_DWORD *)a3 + 2);
  v23 = &v24;
  v9 = 1;
  if ( v5 && a5 == 16LL * v5 )
  {
    v10 = 0;
    while ( *(float *)&a4[4 * v10] >= -16777216.0
         && *(float *)&a4[4 * v10 + 1] >= -16777216.0
         && *(float *)&a4[4 * v10 + 2] <= 16777216.0
         && *(float *)&a4[4 * v10 + 3] <= 16777216.0 )
    {
      v11 = (__m128)(unsigned int)a4[4 * v10];
      v12 = 0LL;
      v13 = (int)v11.m128_f32[0];
      v14.m128_f32[0] = (float)(int)v11.m128_f32[0];
      v14.m128_f32[0] = _mm_cmplt_ss(v11, v14).m128_f32[0];
      v15 = (__m128)(unsigned int)a4[4 * v10 + 1];
      v16 = v13 + v14.m128_i32[0];
      v17 = (int)v15.m128_f32[0];
      v14.m128_f32[0] = (float)(int)v15.m128_f32[0];
      v14.m128_f32[0] = _mm_cmplt_ss(v15, v14).m128_f32[0];
      v18 = (__m128)(unsigned int)a4[4 * v10 + 2];
      v19 = (int)v18.m128_f32[0];
      v18.m128_f32[0] = (float)(int)v18.m128_f32[0];
      v22 = _mm_cmplt_ss(v18, (__m128)(unsigned int)a4[4 * v10 + 2]).m128_u32[0];
      v18.m128_i32[0] = a4[4 * v10 + 3];
      v12.m128_f32[0] = (float)(int)v18.m128_f32[0];
      FastRegion::CRegion::SetRectangle(
        (FastRegion::CRegion *)&v23,
        v16,
        v17 + v14.m128_i32[0],
        v19 - v22,
        (int)v18.m128_f32[0] - _mm_cmplt_ss(v12, v18).m128_u32[0]);
      v20 = FastRegion::CRegion::Union((CPrimitiveGroup *)((char *)this + 512), (const struct CRegion *)&v23);
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x1AAu);
        break;
      }
      if ( (unsigned int)++v10 >= *((_DWORD *)a3 + 2) )
      {
        CResource::NotifyOnChanged(this, 1LL, this);
        v9 = 0;
        break;
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x19Au);
  }
  **((_DWORD **)this + 64) = 0;
  if ( v9 )
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v23);
  return 0LL;
}
