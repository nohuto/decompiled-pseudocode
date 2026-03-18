/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport1DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015AFB8
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXHPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015B788 (-CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT@@@Z @ 0x1C014A8B0 (-DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPO.c)
 */

__int64 __fastcall DXGDEVICE::CallCheckMultiPlaneOverlaySupport1DDI(
        unsigned __int64 this,
        unsigned __int64 a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **p_SrcRect,
        DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *PoolWithTag,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v6; // rbx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v7; // rsi
  DXGDEVICE *v8; // r15
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rcx
  signed __int64 v13; // rsi
  unsigned __int64 v14; // r11
  __int64 v15; // r10
  int v16; // ecx
  int v17; // edx
  __int64 v18; // rax
  int v19; // eax
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT v21; // [rsp+20h] [rbp-E0h] BYREF
  DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *v22; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v23[312]; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+180h] [rbp+80h]

  v6 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PoolWithTag;
  v7 = p_SrcRect;
  v22 = 0LL;
  v8 = (DXGDEVICE *)this;
  v24 = 0;
  *a5 = 0;
  a6->Value = 0;
  v9 = (unsigned int)a2;
  if ( (unsigned int)a2 <= 3 )
  {
    PoolWithTag = (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)v23;
    v22 = (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)v23;
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)a2;
    this = (unsigned int)v9;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 0x68 )
    {
LABEL_7:
      v10 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, p_SrcRect, PoolWithTag);
      v10[3] = v9;
      v11 = -1073741801;
      v10[4] = -1073741801LL;
      v10[5] = PsGetCurrentProcess(v12);
      WdLogEvent5_WdWarning(v10);
      goto LABEL_23;
    }
    PoolWithTag = (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)ExAllocatePoolWithTag(
                                                                   PagedPool,
                                                                   104LL * (unsigned int)v9,
                                                                   0x4B677844u);
    v22 = PoolWithTag;
  }
  v24 = v9;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 104 * v9);
  PoolWithTag = v22;
  if ( !v22 )
    goto LABEL_7;
  if ( (_DWORD)v9 )
  {
    p_SrcRect = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)&v22->PlaneAttributes.SrcRect;
    v13 = (char *)v7 - (char *)v6;
    v14 = v9;
    do
    {
      v15 = *(__int64 *)((char *)v6 + v13);
      *(p_SrcRect - 2) = *v6;
      *((_DWORD *)p_SrcRect - 2) = *(_DWORD *)(v15 + 16);
      *(_OWORD *)p_SrcRect = *(_OWORD *)(*(_QWORD *)(v15 + 24) + 4LL);
      *((_OWORD *)p_SrcRect + 1) = *(_OWORD *)(*(_QWORD *)(v15 + 24) + 20LL);
      *((_OWORD *)p_SrcRect + 2) = *(_OWORD *)(*(_QWORD *)(v15 + 24) + 36LL);
      *((_DWORD *)p_SrcRect + 12) = *(_DWORD *)(*(_QWORD *)(v15 + 24) + 52LL);
      v16 = *(_DWORD *)(*(_QWORD *)(v15 + 24) + 72LL);
      if ( v16 == 6 || v16 == 8 )
        *((_DWORD *)p_SrcRect + 15) |= 1u;
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v15 + 24) + 72LL) - 8) <= 1 )
        *((_DWORD *)p_SrcRect + 15) |= 2u;
      v17 = *((_DWORD *)p_SrcRect - 1) ^ (**(_BYTE **)(v15 + 24) & 1 ^ (unsigned __int8)*((_DWORD *)p_SrcRect - 1)) & 1;
      *((_DWORD *)p_SrcRect - 1) = v17;
      *((_DWORD *)p_SrcRect - 1) = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(2
                                                                                 * ((**(_BYTE **)(v15 + 24) & 2) != 0))) & 2;
      *((_DWORD *)p_SrcRect + 13) ^= (*(_BYTE *)(*(_QWORD *)(v15 + 24) + 56LL) & 1 ^ (unsigned __int8)*((_DWORD *)p_SrcRect + 13)) & 1;
      if ( *(_DWORD *)(*(_QWORD *)(v15 + 24) + 76LL) == 1 )
      {
        *((_DWORD *)p_SrcRect + 20) = 1;
      }
      else if ( *(_DWORD *)(*(_QWORD *)(v15 + 24) + 76LL) == 2 )
      {
        *((_DWORD *)p_SrcRect + 20) = 2;
      }
      ++v6;
      p_SrcRect += 13;
      --v14;
    }
    while ( v14 );
  }
  v21.PlaneCount = v9;
  *(_QWORD *)&v21.Supported = 0LL;
  v18 = *((_QWORD *)v8 + 357);
  v21.pPlanes = PoolWithTag;
  v19 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport(*(ADAPTER_DISPLAY **)(v18 + 2128), &v21, (__int64)p_SrcRect);
  if ( v19 >= 0 )
    *a5 = v21.Supported;
  v11 = v19;
LABEL_23:
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v22);
  return v11;
}
