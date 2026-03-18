/*
 * XREFs of ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x18006F084
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180087F0C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessSetDirtyRect(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_SETDIRTYRECT *a3,
        _DWORD *a4,
        unsigned int a5)
{
  _DWORD *v5; // r10
  unsigned int v6; // edx
  char v10; // si
  int v11; // r14d
  __m128 v12; // xmm0
  __m128 v13; // xmm3
  int v14; // ecx
  __m128 v15; // xmm1
  __m128 v16; // xmm0
  __int32 v17; // r12d
  int v18; // ecx
  __m128 v19; // xmm0
  int v20; // r9d
  signed __int32 v21; // r11d
  signed __int32 v22; // r9d
  signed __int32 v23; // r8d
  int v24; // eax
  unsigned __int32 v26; // [rsp+38h] [rbp-51h]
  _DWORD *v27; // [rsp+48h] [rbp-41h] BYREF
  _DWORD v28[18]; // [rsp+50h] [rbp-39h] BYREF

  v28[0] = 0;
  v5 = v28;
  v6 = *((_DWORD *)a3 + 2);
  v27 = v28;
  v10 = 1;
  if ( v6 && a5 == 16LL * v6 )
  {
    v11 = 0;
    while ( *(float *)&a4[4 * v11] >= -16777216.0
         && *(float *)&a4[4 * v11 + 1] >= -16777216.0
         && *(float *)&a4[4 * v11 + 2] <= 16777216.0
         && *(float *)&a4[4 * v11 + 3] <= 16777216.0 )
    {
      v12 = (__m128)(unsigned int)a4[4 * v11];
      v13 = 0LL;
      v14 = (int)v12.m128_f32[0];
      v15.m128_f32[0] = (float)(int)v12.m128_f32[0];
      v15.m128_f32[0] = _mm_cmplt_ss(v12, v15).m128_f32[0];
      v16 = (__m128)(unsigned int)a4[4 * v11 + 1];
      v17 = v14 + v15.m128_i32[0];
      v18 = (int)v16.m128_f32[0];
      v15.m128_f32[0] = (float)(int)v16.m128_f32[0];
      v15.m128_f32[0] = _mm_cmplt_ss(v16, v15).m128_f32[0];
      v19 = (__m128)(unsigned int)a4[4 * v11 + 2];
      v20 = (int)v19.m128_f32[0];
      v21 = v18 + v15.m128_i32[0];
      v19.m128_f32[0] = (float)(int)v19.m128_f32[0];
      v26 = _mm_cmplt_ss(v19, (__m128)(unsigned int)a4[4 * v11 + 2]).m128_u32[0];
      v19.m128_i32[0] = a4[4 * v11 + 3];
      v22 = v20 - v26;
      v13.m128_f32[0] = (float)(int)v19.m128_f32[0];
      v23 = (int)v19.m128_f32[0] - _mm_cmplt_ss(v13, v19).m128_u32[0];
      if ( v17 >= v22 || v21 >= v23 )
      {
        *v5 = 0;
      }
      else
      {
        *v5 = 2;
        v5[1] = v17;
        v5[2] = v22;
        v5[3] = v21;
        v5[4] = 16;
        v5[7] = v17;
        v5[8] = v22;
        v5[5] = v23;
        v5[6] = 16;
      }
      v24 = FastRegion::CRegion::Union((CPrimitiveGroup *)((char *)this + 432), (const struct CRegion *)&v27);
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x18Au);
        break;
      }
      if ( (unsigned int)++v11 >= *((_DWORD *)a3 + 2) )
      {
        CResource::NotifyOnChanged(this, 1u, this);
        v10 = 0;
        break;
      }
      v5 = v27;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x17Au);
  }
  **((_DWORD **)this + 54) = 0;
  if ( v10 )
    CResource::NotifyOnChanged(this, 0, 0LL);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v27);
  return 0LL;
}
