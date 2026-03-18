/*
 * XREFs of ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C015C6D4
 * Callers:
 *     ?ConvertToCheckMultiPlaneOverlaySupport@DXGDEVICE@@AEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAH@Z @ 0x1C015D11C (-ConvertToCheckMultiPlaneOverlaySupport@DXGDEVICE@@AEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PL.c)
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C0160130 (DxgkCheckMultiPlaneOverlaySupport.c)
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
 *     ?DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT@@@Z @ 0x1C014A8B0 (-DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPO.c)
 *     ?UpdateCheckPlaneWithIndependentFlip@DXGDEVICE@@QEAAJIIPEAU_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE@@@Z @ 0x1C018B9F8 (-UpdateCheckPlaneWithIndependentFlip@DXGDEVICE@@QEAAJIIPEAU_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPOR.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlaySupport(
        DXGDEVICE *this,
        unsigned int a2,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *a3,
        char a4,
        int *a5)
{
  unsigned __int64 v6; // rsi
  unsigned int v7; // r13d
  ADAPTER_RENDER *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  SIZE_T v14; // rax
  char v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v22; // r8
  int v23; // edi
  DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *v24; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID *p_VidPnSourceId; // rsi
  RECT *p_SrcRect; // rbx
  unsigned int v27; // r12d
  unsigned int v28; // ecx
  __int64 v29; // r8
  int v30; // edx
  struct DXGRESOURCE *v31; // rdx
  ULONG_PTR i; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r8
  LONG right; // eax
  LONG bottom; // edx
  int v41; // ecx
  __int64 v42; // rdx
  LONG v43; // ecx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *v48; // rbx
  __int64 v49; // rax
  int *v50; // rdi
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rax
  DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *v55; // [rsp+68h] [rbp-69h]
  struct _EX_RUNDOWN_REF *v56; // [rsp+70h] [rbp-61h] BYREF
  int v57; // [rsp+78h] [rbp-59h] BYREF
  unsigned int v58; // [rsp+7Ch] [rbp-55h]
  __int64 v59; // [rsp+80h] [rbp-51h] BYREF
  __int64 v60; // [rsp+88h] [rbp-49h] BYREF
  unsigned int v61; // [rsp+90h] [rbp-41h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *v62; // [rsp+98h] [rbp-39h]
  _BYTE v63[16]; // [rsp+A0h] [rbp-31h] BYREF
  struct _DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *v64; // [rsp+B0h] [rbp-21h]
  int *v65; // [rsp+B8h] [rbp-19h]
  char v66[8]; // [rsp+C0h] [rbp-11h] BYREF
  struct _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT v67; // [rsp+C8h] [rbp-9h] BYREF

  v6 = a2;
  v7 = 0;
  v62 = a3;
  *a5 = 0;
  v9 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v58 = a2;
  v65 = a5;
  if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v9)
    && (v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), *(_QWORD *)(v11 + 776)) )
  {
    v14 = 104 * v6;
    v15 = 1;
    if ( !is_mul_ok(v6, 0x68uLL) )
      v14 = -1LL;
    v55 = (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)operator new(v14, 0x4B677844u, PagedPool);
    if ( !v55 )
    {
      v20 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v20 + 24) = v6;
      *(_QWORD *)(v20 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v20);
      return 3221225495LL;
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v63, *((struct ADAPTER_RENDER **)this + 2));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v63);
    v23 = 0;
    if ( (_DWORD)v6 )
    {
      v24 = v55;
      p_VidPnSourceId = &a3->VidPnSourceId;
      p_SrcRect = &v55->PlaneAttributes.SrcRect;
      while ( 2 )
      {
        if ( v23 >= 0 )
        {
          v64 = &v24[v7];
          memset(v64, 0, sizeof(struct _DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE));
          v27 = *(p_VidPnSourceId - 3);
          v60 = *((_QWORD *)this + 5);
          v59 = v60 + 184;
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v60 + 184));
          v28 = (v27 >> 6) & 0xFFFFFF;
          if ( v28 < *(_DWORD *)(v60 + 224)
            && (v29 = *(_QWORD *)(v60 + 208),
                v30 = *(_DWORD *)(v29 + 16LL * v28 + 8),
                ((v27 >> 26) & 0x30) == (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0x30))
            && (v30 & 0x1000) == 0
            && (v30 & 0xF) != 0
            && (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0xF) == 4 )
          {
            v31 = *(struct DXGRESOURCE **)(v29 + 16LL * v28);
          }
          else
          {
            v31 = 0LL;
          }
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v56, v31);
          ExReleasePushLockSharedEx(v59, 0LL);
          KeLeaveCriticalRegion();
          if ( v56 )
          {
            for ( i = v56[3].Count; ; i = *(_QWORD *)(i + 64) )
            {
              if ( !i )
                goto LABEL_22;
              v36 = *(_QWORD *)(i + 48);
              if ( (*(_DWORD *)(v36 + 4) & 0x200B) != 0 )
                break;
            }
            v33 = *(_QWORD *)(i + 48);
            if ( !v36 )
              goto LABEL_22;
            *(_QWORD *)&p_SrcRect[-1].left = *(_QWORD *)(v36 + 16);
            v38 = *p_VidPnSourceId;
            if ( (_DWORD)v38 == ((*(_DWORD *)(v36 + 4) >> 6) & 0xF) && (unsigned int)v38 < *((_DWORD *)this + 716) )
            {
              if ( a4
                && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 357) + 2128LL), this, v38) )
              {
                v47 = WdLogNewEntry5_WdWarning(v33, i, v38, v35);
                v23 = -1073741790;
                *(_QWORD *)(v47 + 24) = -1073741790LL;
                WdLogEvent5_WdWarning(v47);
                goto LABEL_54;
              }
              p_SrcRect[-1].right = *p_VidPnSourceId;
              *p_SrcRect = *(RECT *)(p_VidPnSourceId + 2);
              right = p_SrcRect->right;
              p_SrcRect[1] = *(RECT *)(p_VidPnSourceId + 6);
              p_SrcRect[2] = *(RECT *)(p_VidPnSourceId + 10);
              if ( p_SrcRect->left >= right
                || p_SrcRect->top >= p_SrcRect->bottom
                || p_SrcRect[1].left >= p_SrcRect[1].right
                || p_SrcRect[1].top >= p_SrcRect[1].bottom
                || p_SrcRect[2].left >= p_SrcRect[2].right
                || p_SrcRect[2].top >= p_SrcRect[2].bottom )
              {
                v37 = WdLogNewEntry5_WdWarning(v33, i, v38, v35);
                *(_QWORD *)(v37 + 24) = -1073741811LL;
                goto LABEL_61;
              }
              bottom = p_SrcRect[3].bottom;
              v41 = p_SrcRect[-1].bottom ^ (p_VidPnSourceId[1] & 1 ^ p_SrcRect[-1].bottom) & 1;
              p_SrcRect[-1].bottom = v41;
              p_SrcRect[-1].bottom = v41 ^ ((unsigned __int8)v41 ^ (unsigned __int8)(2 * ((p_VidPnSourceId[1] & 2) != 0))) & 2;
              p_SrcRect[3].top ^= (p_SrcRect[3].top ^ p_VidPnSourceId[15] & 1) & 1;
              v42 = p_SrcRect[3].bottom ^ (p_VidPnSourceId[20] & 1 ^ bottom) & 1;
              p_SrcRect[3].bottom = v42;
              v43 = v42 ^ ((unsigned __int8)v42 ^ (unsigned __int8)(2 * ((p_VidPnSourceId[20] & 2) != 0))) & 2;
              p_SrcRect[3].bottom = v43;
              p_SrcRect[3].bottom = v43 ^ ((unsigned __int8)v43 ^ (unsigned __int8)(4 * ((p_VidPnSourceId[20] & 4) != 0))) & 4;
              v44 = p_VidPnSourceId[14];
              if ( (_DWORD)v44 )
              {
                if ( (unsigned int)(v44 - 1) > 3 )
                {
                  v45 = WdLogNewEntry5_WdWarning(v44, v42, v38, v35);
                  *(_QWORD *)(v45 + 24) = (int)p_VidPnSourceId[14];
                  *(_QWORD *)(v45 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v45);
                  v23 = -1073741811;
                }
                else
                {
                  p_SrcRect[3].left = v44;
                }
              }
              else
              {
                p_SrcRect[3].left = 1;
              }
              if ( p_VidPnSourceId[25] == 1 )
              {
                p_SrcRect[5].left = 1;
              }
              else if ( p_VidPnSourceId[25] == 2 )
              {
                p_SrcRect[5].left = 2;
              }
              else
              {
                v46 = WdLogNewEntry5_WdWarning(p_VidPnSourceId[25] - 1, v42, v38, v35);
                *(_QWORD *)(v46 + 24) = -1073741811LL;
                WdLogEvent5_WdWarning(v46);
                v23 = -1073741811;
              }
              if ( !*(p_VidPnSourceId - 2) && !*(p_VidPnSourceId - 1)
                || (v57 = 0,
                    LODWORD(v60) = 0,
                    LODWORD(v59) = 0,
                    (*(void (__fastcall **)(_QWORD, _QWORD, LUID *, __int64, struct _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT *, int *, __int64 *, unsigned int *, char *, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 376LL) + 8LL) + 320LL))(
                      *(_QWORD *)(*((_QWORD *)this + 2) + 384LL),
                      (unsigned int)p_SrcRect[-1].right,
                      &v62[v7].CompSurfaceLuid,
                      -1LL,
                      &v67,
                      &v57,
                      &v60,
                      &v61,
                      v66,
                      &v59),
                    !v57)
                || v23 < 0
                || (v23 = DXGDEVICE::UpdateCheckPlaneWithIndependentFlip(this, p_SrcRect[-1].right, v61, v64), v23 >= 0) )
              {
                if ( (p_SrcRect[-1].bottom & 3u) - 1 > 1
                  || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 192LL)
                                                       + 64LL)
                                           + 40LL)
                               + 28LL) > 0x5023u )
                {
                  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v56);
                  ++v7;
                  p_VidPnSourceId += 30;
                  p_SrcRect = (RECT *)((char *)p_SrcRect + 104);
                  if ( v7 < v58 )
                  {
                    v24 = v55;
                    continue;
                  }
LABEL_64:
                  if ( v23 >= 0 && v15 )
                  {
                    LODWORD(v6) = v58;
                    goto LABEL_67;
                  }
                  break;
                }
                v15 = 0;
              }
            }
            else
            {
              v49 = WdLogNewEntry5_WdWarning(v33, i, v38, v35);
              *(_QWORD *)(v49 + 24) = v62[v7].VidPnSourceId;
              *(_QWORD *)(v49 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v49);
              v23 = -1073741811;
            }
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v56);
            goto LABEL_64;
          }
LABEL_22:
          v37 = WdLogNewEntry5_WdWarning(v33, i, v34, v35);
          *(_QWORD *)(v37 + 24) = v62[v7].hResource;
          *(_QWORD *)(v37 + 32) = -1073741811LL;
LABEL_61:
          WdLogEvent5_WdWarning(v37);
          v23 = -1073741811;
LABEL_54:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v56);
        }
        break;
      }
      v48 = v55;
    }
    else
    {
LABEL_67:
      v50 = v65;
      v48 = v55;
      *(_QWORD *)&v67.Supported = 0LL;
      v67.PlaneCount = v6;
      *v65 = 0;
      v51 = *((_QWORD *)this + 357);
      v67.pPlanes = v55;
      v52 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport(*(ADAPTER_DISPLAY **)(v51 + 2128), &v67, v22);
      if ( v52 >= 0 )
        *v50 = v67.Supported;
      v23 = v52;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v63);
    operator delete(v48);
    if ( v63[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v63);
    return (unsigned int)v23;
  }
  else
  {
    v53 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v53 + 24) = 0LL;
    WdLogEvent5_WdWarning(v53);
    return 0LL;
  }
}
