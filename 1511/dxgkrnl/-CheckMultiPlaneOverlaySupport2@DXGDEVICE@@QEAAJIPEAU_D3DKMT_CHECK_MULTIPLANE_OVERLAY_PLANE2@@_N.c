/*
 * XREFs of ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0138A7C
 * Callers:
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C013CB50 (DxgkCheckMultiPlaneOverlaySupport2.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007D6C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000CFA8 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0065F40 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CheckMultiPlaneOverlayInternal2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE@@HPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01380EC (-CheckMultiPlaneOverlayInternal2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURC.c)
 *     ?ConvertToCheckMultiPlaneOverlaySupport@DXGDEVICE@@AEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAH@Z @ 0x1C0139CC4 (-ConvertToCheckMultiPlaneOverlaySupport@DXGDEVICE@@AEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PL.c)
 *     ?UpdateCheckPlaneWithIndependentFlip2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE@@@Z @ 0x1C01641BC (-UpdateCheckPlaneWithIndependentFlip2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlaySupport2(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *a3,
        _BOOL8 a4,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  unsigned int v6; // r13d
  __int64 v7; // rsi
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  SIZE_T v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned int v21; // r12d
  struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *v22; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID *p_VidPnSourceId; // r14
  RECT *p_SrcRect; // rbx
  unsigned int v25; // r12d
  unsigned int v26; // ecx
  __int64 v27; // r8
  int v28; // edx
  struct DXGRESOURCE *v29; // rdx
  ULONG_PTR i; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  LONG right; // eax
  int v38; // ecx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r10
  __int64 v44; // rax
  struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *v45; // rbx
  __int64 v46; // rax
  bool v47; // [rsp+60h] [rbp-A0h]
  struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *v48; // [rsp+68h] [rbp-98h]
  struct _EX_RUNDOWN_REF *v49; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v50; // [rsp+78h] [rbp-88h]
  unsigned int v51; // [rsp+7Ch] [rbp-84h]
  int v52; // [rsp+80h] [rbp-80h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *v53; // [rsp+88h] [rbp-78h]
  __int64 v54; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v55; // [rsp+98h] [rbp-68h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v57[16]; // [rsp+A8h] [rbp-58h] BYREF
  struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *v58; // [rsp+B8h] [rbp-48h]
  int *v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h]
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v61; // [rsp+D0h] [rbp-30h]
  char v62[8]; // [rsp+D8h] [rbp-28h] BYREF
  char v63[32]; // [rsp+E0h] [rbp-20h] BYREF

  v6 = 0;
  v7 = a2;
  v61 = a6;
  v10 = 0;
  v47 = a4;
  v53 = a3;
  *a5 = 0;
  a6->Value = 0;
  v11 = *((_QWORD *)this + 2);
  v51 = a2;
  v59 = a5;
  v12 = *(_QWORD *)(v11 + 16);
  if ( *(_QWORD *)(v12 + 848) )
  {
    if ( !*(_BYTE *)(v12 + 1860) )
    {
      v13 = WdLogNewEntry5_WdWarning(v12, a5, a3, a4);
      *(_QWORD *)(v13 + 24) = 0LL;
      WdLogEvent5_WdWarning(v13);
      return -1073741811LL;
    }
    v15 = 112LL * a2;
    if ( !is_mul_ok(a2, 0x70uLL) )
      v15 = -1LL;
    v48 = (struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)operator new[](v15, 0x4B677844u, PagedPool);
    if ( !v48 )
    {
      v20 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v20 + 24) = v7;
      *(_QWORD *)(v20 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v20);
      return 3221225495LL;
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v57, *((struct ADAPTER_RENDER **)this + 2));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v57);
    v21 = v7 + 1;
    v50 = v7 + 1;
    if ( (_DWORD)v7 )
    {
      v22 = v48;
      p_VidPnSourceId = &a3->VidPnSourceId;
      p_SrcRect = &v48->PlaneAttributes.SrcRect;
      while ( 2 )
      {
        if ( v10 >= 0 )
        {
          v60 = v6;
          v58 = &v22[v6];
          memset(v58, 0, sizeof(struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE));
          v25 = *(p_VidPnSourceId - 3);
          v54 = *((_QWORD *)this + 5);
          v56 = v54 + 192;
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v54 + 192));
          v26 = (v25 >> 6) & 0xFFFFFF;
          if ( v26 < *(_DWORD *)(v54 + 232)
            && (v27 = *(_QWORD *)(v54 + 216),
                v28 = *(_DWORD *)(v27 + 16LL * v26 + 8),
                ((v25 >> 26) & 0x30) == (*(_BYTE *)(v27 + 16LL * v26 + 8) & 0x30))
            && (v28 & 0x1000) == 0
            && (v28 & 0xF) != 0
            && (*(_BYTE *)(v27 + 16LL * v26 + 8) & 0xF) == 4 )
          {
            v29 = *(struct DXGRESOURCE **)(v27 + 16LL * v26);
          }
          else
          {
            v29 = 0LL;
          }
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v49, v29);
          ExReleasePushLockSharedEx(v56, 0LL);
          KeLeaveCriticalRegion();
          if ( v49 )
          {
            for ( i = v49[3].Count; ; i = *(_QWORD *)(i + 64) )
            {
              if ( !i )
                goto LABEL_23;
              v34 = *(_QWORD *)(i + 48);
              if ( (*(_DWORD *)(v34 + 4) & 0x200B) != 0 )
                break;
            }
            v21 = v50;
            v31 = *(_QWORD *)(i + 48);
            if ( (*(_DWORD *)(v34 + 4) & 0x2008) == 0 )
              v21 = v6;
            v50 = v21;
            if ( !v31 )
              goto LABEL_23;
            *(_QWORD *)&p_SrcRect[-2].bottom = *(_QWORD *)(v31 + 16);
            v36 = *p_VidPnSourceId;
            if ( (_DWORD)v36 == ((*(_DWORD *)(v31 + 4) >> 6) & 0xF) && (unsigned int)v36 < *((_DWORD *)this + 710) )
            {
              if ( v47
                && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 354) + 1984LL), this, v36) )
              {
                v44 = WdLogNewEntry5_WdWarning(v31, i, v36, v33);
                v10 = -1073741790;
                *(_QWORD *)(v44 + 24) = -1073741790LL;
                WdLogEvent5_WdWarning(v44);
                goto LABEL_54;
              }
              p_SrcRect[-1].top = *p_VidPnSourceId;
              *p_SrcRect = *(RECT *)(p_VidPnSourceId + 3);
              right = p_SrcRect->right;
              p_SrcRect[1] = *(RECT *)(p_VidPnSourceId + 7);
              p_SrcRect[2] = *(RECT *)(p_VidPnSourceId + 11);
              if ( p_SrcRect->left >= right
                || p_SrcRect->top >= p_SrcRect->bottom
                || p_SrcRect[1].left >= p_SrcRect[1].right
                || p_SrcRect[1].top >= p_SrcRect[1].bottom
                || p_SrcRect[2].left >= p_SrcRect[2].right
                || p_SrcRect[2].top >= p_SrcRect[2].bottom )
              {
                v35 = WdLogNewEntry5_WdWarning(v31, i, v36, v33);
                *(_QWORD *)(v35 + 24) = -1073741811LL;
                goto LABEL_59;
              }
              v38 = p_SrcRect[-1].bottom ^ (p_SrcRect[-1].bottom ^ p_VidPnSourceId[2] & 1) & 1;
              p_SrcRect[-1].bottom = v38;
              p_SrcRect[-1].bottom = v38 ^ ((unsigned __int8)v38 ^ (unsigned __int8)(2 * ((p_VidPnSourceId[2] & 2) != 0))) & 2;
              p_SrcRect[3].top ^= (p_VidPnSourceId[16] & 1 ^ p_SrcRect[3].top) & 1;
              v39 = p_VidPnSourceId[21];
              p_SrcRect[5].top = 0;
              p_SrcRect[3].bottom = v39;
              v40 = p_VidPnSourceId[15];
              if ( (_DWORD)v40 )
              {
                if ( (unsigned int)(v40 - 1) > 3 )
                {
                  v41 = WdLogNewEntry5_WdWarning(v40, 1LL, v36, v33);
                  *(_QWORD *)(v41 + 24) = (int)p_VidPnSourceId[15];
                  *(_QWORD *)(v41 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v41);
                  v10 = -1073741811;
                }
                else
                {
                  p_SrcRect[3].left = v40;
                }
              }
              else
              {
                p_SrcRect[3].left = 1;
              }
              if ( p_VidPnSourceId[26] == 1 )
              {
                p_SrcRect[5].left = 1;
              }
              else if ( p_VidPnSourceId[26] == 2 )
              {
                p_SrcRect[5].left = 2;
              }
              else
              {
                v42 = WdLogNewEntry5_WdWarning(p_VidPnSourceId[26] - 1, 1LL, v36, v33);
                *(_QWORD *)(v42 + 24) = -1073741811LL;
                WdLogEvent5_WdWarning(v42);
                v10 = -1073741811;
              }
              if ( !*(p_VidPnSourceId - 2) && !*(p_VidPnSourceId - 1)
                || (v43 = *((_QWORD *)this + 2),
                    v52 = 0,
                    LODWORD(v54) = 0,
                    LODWORD(v56) = 0,
                    (*(void (__fastcall **)(_QWORD, _QWORD, LUID *, __int64, char *, int *, __int64 *, unsigned int *, char *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v43 + 400) + 8LL) + 320LL))(
                      *(_QWORD *)(v43 + 408),
                      (unsigned int)p_SrcRect[-1].top,
                      &v53[v60].CompSurfaceLuid,
                      -1LL,
                      v63,
                      &v52,
                      &v54,
                      &v55,
                      v62,
                      &v56),
                    !v52)
                || (v10 = DXGDEVICE::UpdateCheckPlaneWithIndependentFlip2(this, p_SrcRect[-1].top, v55, v58), v10 >= 0) )
              {
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v49);
                ++v6;
                p_VidPnSourceId += 32;
                p_SrcRect += 7;
                if ( v6 < v51 )
                {
                  v22 = v48;
                  continue;
                }
                goto LABEL_62;
              }
            }
            else
            {
              v46 = WdLogNewEntry5_WdWarning(v31, i, v36, v33);
              *(_QWORD *)(v46 + 24) = v53[(unsigned __int64)v6].VidPnSourceId;
              *(_QWORD *)(v46 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v46);
              v10 = -1073741811;
            }
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v49);
LABEL_62:
            if ( v10 < 0 )
              break;
            LODWORD(v7) = v51;
            goto LABEL_64;
          }
LABEL_23:
          v35 = WdLogNewEntry5_WdWarning(v31, i, v32, v33);
          *(_QWORD *)(v35 + 24) = v53[(unsigned __int64)v6].hResource;
          *(_QWORD *)(v35 + 32) = -1073741811LL;
LABEL_59:
          WdLogEvent5_WdWarning(v35);
          v10 = -1073741811;
LABEL_54:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v49);
        }
        break;
      }
      v45 = v48;
    }
    else
    {
LABEL_64:
      v45 = v48;
      v10 = DXGDEVICE::CheckMultiPlaneOverlayInternal2(this, v21, (unsigned int)v7, v48, 0, v59, v61);
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v57);
    operator delete(v45);
    if ( v57[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v57);
  }
  else
  {
    return (unsigned int)DXGDEVICE::ConvertToCheckMultiPlaneOverlaySupport(this, a2, a3, a4, a5);
  }
  return (unsigned int)v10;
}
