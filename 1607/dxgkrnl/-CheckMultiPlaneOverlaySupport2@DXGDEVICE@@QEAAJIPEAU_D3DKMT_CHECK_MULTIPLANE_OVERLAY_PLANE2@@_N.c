/*
 * XREFs of ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015BB1C
 * Callers:
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C01605F0 (DxgkCheckMultiPlaneOverlaySupport2.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006A38 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000D7DC (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C009326C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00A5A60 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?CheckMultiPlaneOverlayInternal2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE@@HPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015B728 (-CheckMultiPlaneOverlayInternal2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURC.c)
 *     ?ConvertToCheckMultiPlaneOverlaySupport@DXGDEVICE@@AEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAH@Z @ 0x1C015D11C (-ConvertToCheckMultiPlaneOverlaySupport@DXGDEVICE@@AEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PL.c)
 *     ?UpdateCheckPlaneWithIndependentFlip2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE@@@Z @ 0x1C018B7B0 (-UpdateCheckPlaneWithIndependentFlip2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlaySupport2(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *a3,
        bool a4,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  unsigned __int64 v6; // rsi
  int v9; // edi
  ADAPTER_RENDER *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  SIZE_T v17; // rax
  char v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *v26; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID *p_VidPnSourceId; // r14
  RECT *p_SrcRect; // rbx
  unsigned int v29; // r13d
  unsigned int v30; // ecx
  __int64 v31; // r8
  int v32; // edx
  struct DXGRESOURCE *v33; // rdx
  ULONG_PTR i; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r8
  LONG right; // eax
  int v42; // ecx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r10
  __int64 v47; // rax
  struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *v48; // rbx
  __int64 v49; // rax
  int *v50; // [rsp+20h] [rbp-C9h]
  unsigned int v52; // [rsp+64h] [rbp-85h]
  struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *v53; // [rsp+68h] [rbp-81h]
  struct _EX_RUNDOWN_REF *v54; // [rsp+70h] [rbp-79h] BYREF
  int v55; // [rsp+78h] [rbp-71h]
  unsigned int v56; // [rsp+7Ch] [rbp-6Dh]
  __int64 v57; // [rsp+80h] [rbp-69h]
  __int64 v58; // [rsp+88h] [rbp-61h]
  unsigned int v59; // [rsp+90h] [rbp-59h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *v60; // [rsp+98h] [rbp-51h]
  _BYTE v61[16]; // [rsp+A0h] [rbp-49h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-39h]
  struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *v63; // [rsp+B8h] [rbp-31h]
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v64; // [rsp+C0h] [rbp-29h]
  int *v65; // [rsp+C8h] [rbp-21h]
  char v66; // [rsp+D8h] [rbp-11h] BYREF

  v6 = a2;
  v64 = a6;
  v9 = 0;
  v60 = a3;
  *a5 = 0;
  a6->Value = 0;
  v10 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v56 = a2;
  v65 = a5;
  if ( *(_QWORD *)(*((_QWORD *)v10 + 2) + 864LL) )
  {
    if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v10) )
    {
      v15 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v15 + 24) = 0LL;
      WdLogEvent5_WdWarning(v15);
      return -1073741811LL;
    }
    v17 = 112 * v6;
    v18 = 1;
    if ( !is_mul_ok(v6, 0x70uLL) )
      v17 = -1LL;
    v53 = (struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)operator new(v17, 0x4B677844u, PagedPool);
    if ( !v53 )
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      *(_QWORD *)(v23 + 24) = v6;
      *(_QWORD *)(v23 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v23);
      return 3221225495LL;
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v61, *((struct ADAPTER_RENDER **)this + 2));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v61);
    v25 = 0LL;
    v52 = 0;
    if ( (_DWORD)v6 )
    {
      v26 = v53;
      p_VidPnSourceId = &a3->VidPnSourceId;
      p_SrcRect = &v53->PlaneAttributes.SrcRect;
      while ( 2 )
      {
        if ( v9 >= 0 )
        {
          v62 = v25;
          v63 = &v26[v25];
          memset(v63, 0, sizeof(struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE));
          v29 = *(p_VidPnSourceId - 3);
          v58 = *((_QWORD *)this + 5);
          v57 = v58 + 184;
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v58 + 184));
          v30 = (v29 >> 6) & 0xFFFFFF;
          if ( v30 < *(_DWORD *)(v58 + 224)
            && (v31 = *(_QWORD *)(v58 + 208),
                v32 = *(_DWORD *)(v31 + 16LL * v30 + 8),
                ((v29 >> 26) & 0x30) == (*(_BYTE *)(v31 + 16LL * v30 + 8) & 0x30))
            && (v32 & 0x1000) == 0
            && (v32 & 0xF) != 0
            && (*(_BYTE *)(v31 + 16LL * v30 + 8) & 0xF) == 4 )
          {
            v33 = *(struct DXGRESOURCE **)(v31 + 16LL * v30);
          }
          else
          {
            v33 = 0LL;
          }
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v54, v33);
          ExReleasePushLockSharedEx(v57, 0LL);
          KeLeaveCriticalRegion();
          if ( v54 )
          {
            for ( i = v54[3].Count; ; i = *(_QWORD *)(i + 64) )
            {
              if ( !i )
                goto LABEL_23;
              v38 = *(_QWORD *)(i + 48);
              if ( (*(_DWORD *)(v38 + 4) & 0x200B) != 0 )
                break;
            }
            v35 = *(_QWORD *)(i + 48);
            if ( !v38 )
              goto LABEL_23;
            *(_QWORD *)&p_SrcRect[-2].bottom = *(_QWORD *)(v38 + 16);
            v40 = *p_VidPnSourceId;
            if ( (_DWORD)v40 == ((*(_DWORD *)(v38 + 4) >> 6) & 0xF) && (unsigned int)v40 < *((_DWORD *)this + 716) )
            {
              if ( a4
                && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 357) + 2128LL), this, v40) )
              {
                v47 = WdLogNewEntry5_WdWarning(v35, i, v40, v37);
                v9 = -1073741790;
                *(_QWORD *)(v47 + 24) = -1073741790LL;
                WdLogEvent5_WdWarning(v47);
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
                v39 = WdLogNewEntry5_WdWarning(v35, i, v40, v37);
                *(_QWORD *)(v39 + 24) = -1073741811LL;
                goto LABEL_60;
              }
              v42 = p_SrcRect[-1].bottom ^ (p_SrcRect[-1].bottom ^ p_VidPnSourceId[2] & 1) & 1;
              p_SrcRect[-1].bottom = v42;
              p_SrcRect[-1].bottom = v42 ^ ((unsigned __int8)v42 ^ (unsigned __int8)(2 * ((p_VidPnSourceId[2] & 2) != 0))) & 2;
              p_SrcRect[3].top ^= (p_SrcRect[3].top ^ p_VidPnSourceId[16] & 1) & 1;
              p_SrcRect[3].bottom = p_VidPnSourceId[21];
              p_SrcRect[5].top = 0;
              v43 = p_VidPnSourceId[15];
              if ( (_DWORD)v43 )
              {
                if ( (unsigned int)(v43 - 1) > 3 )
                {
                  v44 = WdLogNewEntry5_WdWarning(v43, i, v40, v37);
                  *(_QWORD *)(v44 + 24) = (int)p_VidPnSourceId[15];
                  *(_QWORD *)(v44 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v44);
                  v9 = -1073741811;
                }
                else
                {
                  p_SrcRect[3].left = v43;
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
                v45 = WdLogNewEntry5_WdWarning(p_VidPnSourceId[26] - 1, i, v40, v37);
                *(_QWORD *)(v45 + 24) = -1073741811LL;
                WdLogEvent5_WdWarning(v45);
                v9 = -1073741811;
              }
              if ( !*(p_VidPnSourceId - 2) && !*(p_VidPnSourceId - 1)
                || (v46 = *((_QWORD *)this + 2),
                    v55 = 0,
                    LODWORD(v58) = 0,
                    LODWORD(v57) = 0,
                    v50 = (int *)&v66,
                    (*(void (__fastcall **)(_QWORD, _QWORD, LUID *, __int64))(*(_QWORD *)(*(_QWORD *)(v46 + 376) + 8LL)
                                                                            + 320LL))(
                      *(_QWORD *)(v46 + 384),
                      (unsigned int)p_SrcRect[-1].top,
                      &v60[v62].CompSurfaceLuid,
                      -1LL),
                    !v55)
                || (v9 = DXGDEVICE::UpdateCheckPlaneWithIndependentFlip2(this, p_SrcRect[-1].top, v59, v63), v9 >= 0) )
              {
                if ( (p_SrcRect[-1].bottom & 3u) - 1 > 1
                  || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 192LL)
                                                       + 64LL)
                                           + 40LL)
                               + 28LL) > 0x5023u )
                {
                  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v54);
                  p_VidPnSourceId += 32;
                  v25 = v52 + 1;
                  p_SrcRect += 7;
                  v52 = v25;
                  if ( (unsigned int)v25 < v56 )
                  {
                    v26 = v53;
                    continue;
                  }
LABEL_63:
                  if ( v9 >= 0 && v18 )
                  {
                    LODWORD(v6) = v56;
                    goto LABEL_66;
                  }
                  break;
                }
                v18 = 0;
              }
            }
            else
            {
              v49 = WdLogNewEntry5_WdWarning(v35, i, v40, v37);
              *(_QWORD *)(v49 + 24) = v60[(unsigned __int64)v52].VidPnSourceId;
              *(_QWORD *)(v49 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v49);
              v9 = -1073741811;
            }
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v54);
            goto LABEL_63;
          }
LABEL_23:
          v39 = WdLogNewEntry5_WdWarning(v35, i, v36, v37);
          *(_QWORD *)(v39 + 24) = v60[(unsigned __int64)v52].hResource;
          *(_QWORD *)(v39 + 32) = -1073741811LL;
LABEL_60:
          WdLogEvent5_WdWarning(v39);
          v9 = -1073741811;
LABEL_54:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v54);
        }
        break;
      }
      v48 = v53;
    }
    else
    {
LABEL_66:
      v48 = v53;
      v9 = DXGDEVICE::CheckMultiPlaneOverlayInternal2(this, v24, (unsigned int)v6, v53, (int)v50, v65, v64);
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v61);
    operator delete(v48);
    if ( v61[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v61);
  }
  else
  {
    return (unsigned int)DXGDEVICE::ConvertToCheckMultiPlaneOverlaySupport(this, a2, a3, a4, a5);
  }
  return (unsigned int)v9;
}
