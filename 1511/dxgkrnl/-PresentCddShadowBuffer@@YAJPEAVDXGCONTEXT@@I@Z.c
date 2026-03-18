/*
 * XREFs of ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C00CCDE4
 * Callers:
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00CCD20 (-DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003638 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C00075F8 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0007878 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000AC74 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000ACDC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006DBF8 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C006DF2C (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C008593C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0099E74 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C009B854 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C00B11E0 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C012D5A8 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall PresentCddShadowBuffer(struct DXGCONTEXT *a1, unsigned int a2)
{
  unsigned int v2; // r12d
  struct DXGCONTEXT *v3; // r13
  int v4; // r15d
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  unsigned int Width; // esi
  unsigned int Height; // r14d
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct DXGGLOBAL *Global; // rax
  LONG *v22; // rbx
  __int64 v23; // r15
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // r9d
  LONG v25; // edx
  LONG v26; // r8d
  int v27; // r9d
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  int v31; // ebx
  __int64 v32; // rcx
  __int64 v34; // rcx
  ADAPTER_DISPLAY *v35; // rcx
  int v36; // ecx
  LONG v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // r10d
  unsigned int v40; // r9d
  unsigned int v41; // r11d
  int v42; // r15d
  unsigned __int8 *v43; // rsi
  unsigned int v44; // r9d
  unsigned int v45; // r15d
  int v46; // r13d
  unsigned int v47; // edi
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v54; // [rsp+20h] [rbp-E0h]
  int CddShadowPitch; // [rsp+50h] [rbp-B0h]
  unsigned int v56; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v57; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 *v58; // [rsp+60h] [rbp-A0h]
  __int64 v59; // [rsp+68h] [rbp-98h]
  unsigned int v60; // [rsp+70h] [rbp-90h]
  unsigned int v61; // [rsp+74h] [rbp-8Ch]
  unsigned int v62; // [rsp+78h] [rbp-88h]
  struct DXGCONTEXT *v63; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v64; // [rsp+88h] [rbp-78h] BYREF
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // [rsp+98h] [rbp-68h]
  _BYTE v66[16]; // [rsp+A0h] [rbp-60h] BYREF
  _DXGKARG_PRESENT_DISPLAYONLY v67; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v68[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct _D3DKMT_LOCK v69; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v70[80]; // [rsp+130h] [rbp+30h] BYREF
  struct _D3DKMT_PRESENT v71; // [rsp+180h] [rbp+80h] BYREF
  struct tagRECT v72; // [rsp+760h] [rbp+660h] BYREF
  struct tagRECT DstRect; // [rsp+770h] [rbp+670h] BYREF

  v57 = 0;
  v2 = a2;
  v56 = 0;
  v3 = a1;
  v61 = a2;
  *(_QWORD *)&v72.left = a1;
  v63 = a1;
  v4 = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 270);
  if ( !v4 )
    return 0LL;
  *(_QWORD *)&v64.left = *((_QWORD *)v3 + 2);
  v5 = *(_QWORD *)&v64.left;
  v6 = *(_QWORD *)(*(_QWORD *)&v64.left + 2832LL);
  v59 = v6;
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v68,
    *(struct DXGDEVICE **)&v64.left);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v66,
    *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v3 + 2) + 16LL) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v70, *(__int64 *)&v64.left, 1, v7, 0);
  v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v70);
  v13 = v8;
  if ( v8 < 0 )
    goto LABEL_45;
  ADAPTER_DISPLAY::GetCddAllocationHandles(*(DXGADAPTER ***)(v6 + 1984), v2, &v57, &v56);
  CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v6 + 1984), v2);
  CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(*(DXGADAPTER ***)(v6 + 1984), v2);
  Width = CddDisplayMode->Width;
  Height = CddDisplayMode->Height;
  memset(&v69, 0, sizeof(v69));
  v60 = Width;
  v62 = Height;
  v69.hAllocation = v56;
  v69.hDevice = *(_DWORD *)(v5 + 284);
  LODWORD(v13) = DXGDEVICE::Lock((DXGDEVICE *)v5, &v69, (struct COREDEVICEACCESS *)v70, v16);
  if ( (int)v13 < 0 || !v69.pData )
  {
    v53 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v53 + 24) = 4708LL;
    WdLogEvent5_WdError(v53);
    goto LABEL_19;
  }
  if ( v4 != 1 || !*((_QWORD *)DXGGLOBAL::GetGlobal(v17) + 136) )
    goto LABEL_18;
  v58 = (unsigned __int8 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v19) + 136);
  Global = DXGGLOBAL::GetGlobal(v20);
  v22 = (LONG *)((char *)Global + 1096);
  if ( *((_DWORD *)Global + 277) == 22 )
  {
    v23 = v59;
    DstRect = 0LL;
    CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(*(_QWORD *)(v59 + 1984), v2, 1);
    if ( ((CurrentOrientation - 2) & 0xFFFFFFFD) == 0 )
    {
      v36 = 2;
      Width = CddDisplayMode->Height;
      Height = CddDisplayMode->Width;
      if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE90 )
        v36 = 4;
      CurrentOrientation = v36;
    }
    v25 = *v22;
    v26 = v22[1];
    *(_QWORD *)&v64.left = 0LL;
    *(_QWORD *)&v72.left = 0LL;
    v54 = CurrentOrientation;
    v27 = v22[2];
    v64.right = Width;
    v64.bottom = Height;
    v72.right = v25;
    v72.bottom = v26;
    v28 = DxgkpBlitA8R8R8G8(v58, v25, v26, v27, v54, (unsigned __int8 *)v69.pData, CddShadowPitch, &v64, &v72, &DstRect);
  }
  else
  {
    v37 = *v22;
    if ( *v22 <= Width )
    {
      v38 = *((_DWORD *)Global + 275);
      if ( v38 <= Height )
      {
        v39 = 0;
        v40 = 0;
        if ( v37 != Width )
          v39 = (Width - v37) >> 1;
        if ( v38 != Height )
          v40 = (Height - v38) >> 1;
        v41 = 0;
        if ( v38 )
        {
          v42 = CddShadowPitch;
          v43 = v58;
          v44 = CddShadowPitch * v40;
          do
          {
            LODWORD(v58) = 0;
            if ( v37 )
            {
              v45 = (unsigned int)v58;
              v46 = 0;
              v47 = 4 * v39;
              do
              {
                ++v45;
                v48 = v46 + v22[2] * v41;
                v46 += 3;
                v49 = v44 + (unsigned __int64)v47;
                v47 += 4;
                *(_DWORD *)((char *)v69.pData + v49) = v43[v48] | ((v43[(unsigned int)(v48 + 1)] | (v43[(unsigned int)(v48 + 2)] << 8)) << 8);
                v37 = *v22;
              }
              while ( v45 < *v22 );
              v42 = CddShadowPitch;
            }
            ++v41;
            v44 += v42;
          }
          while ( v41 < v22[1] );
          v5 = *(_QWORD *)&v64.left;
          Width = v60;
          Height = v62;
          v2 = v61;
          v3 = *(struct DXGCONTEXT **)&v72.left;
        }
        v23 = v59;
        goto LABEL_11;
      }
    }
    v23 = v59;
    v28 = -1073741637;
  }
  if ( v28 >= 0 )
  {
LABEL_11:
    if ( *(_QWORD *)(v5 + 2832) != *(_QWORD *)(*(_QWORD *)(v5 + 16) + 16LL) )
    {
      memset(&v67, 0, sizeof(v67));
      v34 = *(_QWORD *)(v23 + 1984);
      *(_QWORD *)&v72.left = 0LL;
      v72.bottom = Height;
      v72.right = Width;
      ADAPTER_DISPLAY::GetCurrentOrientation(v34, v2, 1);
      v67.Flags.Value = 0;
      v67.NumMoves = 0;
      v67.pMoves = 0LL;
      v35 = *(ADAPTER_DISPLAY **)(v23 + 1984);
      v67.pSource = v69.pData;
      v67.BytesPerPixel = 4;
      v67.Pitch = CddShadowPitch;
      v67.pDirtyRect = &v72;
      v67.VidPnSourceId = v2;
      v67.NumDirtyRects = 1;
      v31 = ADAPTER_DISPLAY::PresentDisplayOnlyCdd(v35, &v67);
      goto LABEL_16;
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v70);
    v29 = COREDEVICEACCESS::AcquireExclusive((__int64)v70);
    v13 = v29;
    if ( v29 >= 0 )
    {
      memset(&v71.hWindow, 0, 0x5D0uLL);
      v71.hDevice = *((_DWORD *)v3 + 6);
      v71.Flags.Value |= 1u;
      v71.pSrcSubRects = &DstRect;
      v71.hSource = v56;
      v71.SubRectCnt = 1;
      v71.DstRect.bottom = Height;
      v71.DstRect.right = Width;
      v71.hDestination = v57;
      v71.SrcRect = v71.DstRect;
      DstRect = v71.DstRect;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)&v67,
        &v63,
        1u);
      if ( *(_QWORD *)&v67.VidPnSourceId )
      {
        v31 = DXGCONTEXT::PresentFromCdd(
                v63,
                &v71,
                v2,
                (struct COREDEVICEACCESS *)v70,
                (struct DXGADAPTERSTOPRESETLOCKSHARED *)v66,
                &v63);
      }
      else
      {
        v51 = WdLogNewEntry5_WdError(v30);
        *(_QWORD *)(v51 + 24) = 4607LL;
        WdLogEvent5_WdError(v51);
        v31 = -1073741801;
      }
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)&v67);
LABEL_16:
      if ( v31 < 0 )
      {
        v52 = WdLogNewEntry5_WdError(v32);
        *(_QWORD *)(v52 + 24) = v31;
        WdLogEvent5_WdError(v52);
      }
      goto LABEL_18;
    }
LABEL_45:
    v50 = WdLogNewEntry5_WdEvent(v10, v9, v11, v12);
    *(_QWORD *)(v50 + 24) = v13;
    *(_QWORD *)(v50 + 32) = v5;
    WdLogEvent5_WdEvent(v50);
    goto LABEL_19;
  }
LABEL_18:
  v72.left = *(_DWORD *)(v5 + 284);
  v72.top = 1;
  *(_QWORD *)&v72.right = &v56;
  LODWORD(v13) = DXGDEVICE::Unlock((DXGDEVICE *)v5, (const struct _D3DKMT_UNLOCK *)&v72, 0LL, v18);
LABEL_19:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
  if ( v66[8] )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
  if ( v68[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v68);
  return (unsigned int)v13;
}
