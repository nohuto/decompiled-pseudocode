/*
 * XREFs of ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0134428
 * Callers:
 *     ?ConvertToCheckMultiPlaneOverlaySupport@DXGDEVICE@@AEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAH@Z @ 0x1C01350C8 (-ConvertToCheckMultiPlaneOverlaySupport@DXGDEVICE@@AEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PL.c)
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C0137DA0 (DxgkCheckMultiPlaneOverlaySupport.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000682C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000B650 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00773DC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0077400 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CheckMultiPlaneOverlayInternal@DXGDEVICE@@QEAAJIIPEAU_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE@@HPEAH@Z @ 0x1C01339BC (-CheckMultiPlaneOverlayInternal@DXGDEVICE@@QEAAJIIPEAU_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLA.c)
 *     ?UpdateCheckPlaneWithIndependentFlip@DXGDEVICE@@QEAAJIIPEAU_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE@@@Z @ 0x1C0160028 (-UpdateCheckPlaneWithIndependentFlip@DXGDEVICE@@QEAAJIIPEAU_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPOR.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlaySupport(
        DXGDEVICE *this,
        __int64 a2,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *a3,
        __int64 a4,
        int *a5)
{
  unsigned int v5; // r12d
  __int64 v8; // r13
  __int64 v9; // rcx
  SIZE_T v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned int v17; // r15d
  int v18; // edi
  struct _DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *v19; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID *p_VidPnSourceId; // rsi
  RECT *p_SrcRect; // rbx
  unsigned int v22; // r15d
  unsigned int v23; // ecx
  __int64 v24; // r8
  int v25; // edx
  struct DXGRESOURCE *v26; // rdx
  ULONG_PTR i; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  LONG right; // eax
  int v35; // ecx
  __int64 v36; // rdx
  LONG v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r10
  __int64 v42; // rdx
  __int64 v43; // rax
  struct _DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  char v47; // [rsp+60h] [rbp-71h]
  struct _DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *v48; // [rsp+68h] [rbp-69h]
  struct _EX_RUNDOWN_REF *v49; // [rsp+70h] [rbp-61h] BYREF
  int v50; // [rsp+78h] [rbp-59h] BYREF
  unsigned int v51; // [rsp+7Ch] [rbp-55h]
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *v52; // [rsp+80h] [rbp-51h]
  unsigned int v53; // [rsp+88h] [rbp-49h] BYREF
  __int64 v54; // [rsp+90h] [rbp-41h] BYREF
  __int64 v55; // [rsp+98h] [rbp-39h] BYREF
  _BYTE v56[16]; // [rsp+A0h] [rbp-31h] BYREF
  struct _DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *v57; // [rsp+B0h] [rbp-21h]
  int *v58; // [rsp+B8h] [rbp-19h]
  char v59[8]; // [rsp+C0h] [rbp-11h] BYREF
  char v60[32]; // [rsp+C8h] [rbp-9h] BYREF

  v5 = 0;
  v58 = a5;
  v47 = a4;
  v52 = a3;
  *a5 = 0;
  v8 = (unsigned int)a2;
  v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_BYTE *)(v9 + 1852) && *(_QWORD *)(v9 + 760) )
  {
    v10 = 104LL * (unsigned int)a2;
    if ( !is_mul_ok((unsigned int)a2, 0x68uLL) )
      v10 = -1LL;
    v48 = (struct _DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)operator new[](v10, 0x4B677844u, PagedPool);
    if ( !v48 )
    {
      v15 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v15 + 24) = v8;
      *(_QWORD *)(v15 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v15);
      return 3221225495LL;
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v56, *((struct ADAPTER_RENDER **)this + 2));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v56);
    v17 = v8 + 1;
    v18 = 0;
    v51 = v8 + 1;
    if ( (_DWORD)v8 )
    {
      v19 = v48;
      p_VidPnSourceId = &a3->VidPnSourceId;
      p_SrcRect = &v48->PlaneAttributes.SrcRect;
      while ( 2 )
      {
        if ( v18 >= 0 )
        {
          v57 = &v19[v5];
          memset(v57, 0, sizeof(struct _DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE));
          v22 = *(p_VidPnSourceId - 3);
          v55 = *((_QWORD *)this + 5);
          v54 = v55 + 192;
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v55 + 192));
          v23 = (v22 >> 6) & 0xFFFFFF;
          if ( v23 < *(_DWORD *)(v55 + 232)
            && (v24 = *(_QWORD *)(v55 + 216),
                v25 = *(_DWORD *)(v24 + 16LL * v23 + 8),
                ((v22 >> 26) & 0x30) == (*(_BYTE *)(v24 + 16LL * v23 + 8) & 0x30))
            && (v25 & 0x1000) == 0
            && (v25 & 0xF) != 0
            && (*(_BYTE *)(v24 + 16LL * v23 + 8) & 0xF) == 4 )
          {
            v26 = *(struct DXGRESOURCE **)(v24 + 16LL * v23);
          }
          else
          {
            v26 = 0LL;
          }
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v49, v26);
          ExReleasePushLockSharedEx(v54, 0LL);
          KeLeaveCriticalRegion();
          if ( v49 )
          {
            for ( i = v49[3].Count; ; i = *(_QWORD *)(i + 64) )
            {
              if ( !i )
                goto LABEL_22;
              v31 = *(_QWORD *)(i + 48);
              if ( (*(_DWORD *)(v31 + 4) & 0x200B) != 0 )
                break;
            }
            v17 = v51;
            v28 = *(_QWORD *)(i + 48);
            if ( (*(_DWORD *)(v31 + 4) & 0x2008) == 0 )
              v17 = v5;
            v51 = v17;
            if ( !v28 )
              goto LABEL_22;
            *(_QWORD *)&p_SrcRect[-1].left = *(_QWORD *)(v28 + 16);
            v33 = *p_VidPnSourceId;
            if ( (_DWORD)v33 == ((*(_DWORD *)(v28 + 4) >> 6) & 0xF) && (unsigned int)v33 < *((_DWORD *)this + 4678) )
            {
              if ( v47
                && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 2338) + 1976LL), this, v33) )
              {
                v43 = WdLogNewEntry5_WdWarning(v28, i, v33, v30);
                v18 = -1073741790;
                *(_QWORD *)(v43 + 24) = -1073741790LL;
                WdLogEvent5_WdWarning(v43);
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
                v32 = WdLogNewEntry5_WdWarning(v28, i, v33, v30);
                *(_QWORD *)(v32 + 24) = -1073741811LL;
                goto LABEL_60;
              }
              v35 = p_SrcRect[-1].bottom ^ (p_VidPnSourceId[1] & 1 ^ p_SrcRect[-1].bottom) & 1;
              p_SrcRect[-1].bottom = v35;
              p_SrcRect[-1].bottom = v35 ^ ((unsigned __int8)v35 ^ (unsigned __int8)(2 * ((p_VidPnSourceId[1] & 2) != 0))) & 2;
              p_SrcRect[3].top ^= (p_SrcRect[3].top ^ p_VidPnSourceId[15] & 1) & 1;
              v36 = p_SrcRect[3].bottom ^ (p_SrcRect[3].bottom ^ p_VidPnSourceId[20] & 1) & 1;
              p_SrcRect[3].bottom = v36;
              v37 = v36 ^ ((unsigned __int8)v36 ^ (unsigned __int8)(2 * ((p_VidPnSourceId[20] & 2) != 0))) & 2;
              p_SrcRect[3].bottom = v37;
              p_SrcRect[3].bottom = v37 ^ ((unsigned __int8)v37 ^ (unsigned __int8)(4 * ((p_VidPnSourceId[20] & 4) != 0))) & 4;
              v38 = p_VidPnSourceId[14];
              if ( (_DWORD)v38 )
              {
                if ( (unsigned int)(v38 - 1) > 3 )
                {
                  v39 = WdLogNewEntry5_WdWarning(v38, v36, 1LL, v30);
                  v18 = -1073741811;
                  *(_QWORD *)(v39 + 24) = (int)p_VidPnSourceId[14];
                  *(_QWORD *)(v39 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v39);
                }
                else
                {
                  p_SrcRect[3].left = v38;
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
                v40 = WdLogNewEntry5_WdWarning(p_VidPnSourceId[25] - 1, v36, 1LL, v30);
                v18 = -1073741811;
                *(_QWORD *)(v40 + 24) = -1073741811LL;
                WdLogEvent5_WdWarning(v40);
              }
              if ( !*(p_VidPnSourceId - 2) && !*(p_VidPnSourceId - 1)
                || (v41 = *((_QWORD *)this + 2),
                    v42 = (unsigned int)p_SrcRect[-1].right,
                    v50 = 0,
                    LODWORD(v55) = 0,
                    LODWORD(v54) = 0,
                    (*(void (__fastcall **)(_QWORD, __int64, LUID *, __int64, char *, int *, __int64 *, unsigned int *, char *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v41 + 376) + 8LL) + 320LL))(
                      *(_QWORD *)(v41 + 384),
                      v42,
                      &v52[v5].CompSurfaceLuid,
                      -1LL,
                      v60,
                      &v50,
                      &v55,
                      &v53,
                      v59,
                      &v54),
                    !v50)
                || v18 < 0
                || (v18 = DXGDEVICE::UpdateCheckPlaneWithIndependentFlip(this, p_SrcRect[-1].right, v53, v57), v18 >= 0) )
              {
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v49);
                ++v5;
                p_VidPnSourceId += 30;
                p_SrcRect = (RECT *)((char *)p_SrcRect + 104);
                if ( v5 < (unsigned int)v8 )
                {
                  v19 = v48;
                  continue;
                }
LABEL_63:
                if ( v18 < 0 )
                  break;
                goto LABEL_64;
              }
            }
            else
            {
              v45 = WdLogNewEntry5_WdWarning(v28, i, v33, v30);
              *(_QWORD *)(v45 + 24) = v52[v5].VidPnSourceId;
              *(_QWORD *)(v45 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v45);
              v18 = -1073741811;
            }
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v49);
            goto LABEL_63;
          }
LABEL_22:
          v32 = WdLogNewEntry5_WdWarning(v28, i, v29, v30);
          *(_QWORD *)(v32 + 24) = v52[v5].hResource;
          *(_QWORD *)(v32 + 32) = -1073741811LL;
LABEL_60:
          WdLogEvent5_WdWarning(v32);
          v18 = -1073741811;
LABEL_54:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v49);
        }
        break;
      }
      v44 = v48;
    }
    else
    {
LABEL_64:
      v44 = v48;
      v18 = DXGDEVICE::CheckMultiPlaneOverlayInternal(this, v17, (unsigned int)v8, v48, 0, v58);
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v56);
    operator delete(v44);
    if ( v56[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v56);
    return (unsigned int)v18;
  }
  else
  {
    v46 = WdLogNewEntry5_WdWarning(v9, a2, a3, a4);
    *(_QWORD *)(v46 + 24) = 0LL;
    WdLogEvent5_WdWarning(v46);
    return 0LL;
  }
}
