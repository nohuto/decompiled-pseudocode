/*
 * XREFs of ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C00F8030
 * Callers:
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00F7E80 (-DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001250 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C00012B8 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C00062B0 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0006520 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C0070A70 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0086898 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00883AC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C008846C (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0096238 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C009656C (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00967F4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00B0FB0 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C0148244 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?LoadAndExtractBitmapFile@@YAJPEAU_UNICODE_STRING@@PEAPEAXPEAUtagSIZE@@PEAK@Z @ 0x1C015622C (-LoadAndExtractBitmapFile@@YAJPEAU_UNICODE_STRING@@PEAPEAXPEAUtagSIZE@@PEAK@Z.c)
 */

__int64 __fastcall PresentCddShadowBuffer(struct DXGCONTEXT *a1, unsigned int a2)
{
  unsigned int cx; // r13d
  int v5; // ebx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // r12
  tagSIZE Height; // rsi
  unsigned int Width; // r15d
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int8 *v19; // r13
  struct DXGGLOBAL *Global; // rax
  int *v21; // rbx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v23; // edi
  int v24; // edx
  int v25; // r8d
  int v26; // r9d
  int v27; // eax
  LONG v28; // r12d
  __int64 v29; // rcx
  unsigned int v30; // esi
  int v31; // edi
  __int64 v32; // r15
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rbx
  __int64 v34; // rcx
  _QWORD *v35; // rsi
  __int64 v36; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // ecx
  int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // r9d
  unsigned int v45; // r8d
  unsigned int v46; // r10d
  unsigned int v47; // r8d
  unsigned int v48; // r11d
  unsigned int v49; // r14d
  int v50; // r12d
  __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  __int64 cy; // r12
  int v54; // ecx
  tagSIZE v55; // rax
  unsigned __int64 v56; // rbx
  unsigned int v57; // r11d
  unsigned __int64 v58; // r10
  _DWORD *v59; // r8
  int v60; // edi
  PVOID v61; // r8
  unsigned int v62; // ecx
  size_t v63; // r14
  char *v64; // r15
  unsigned int v65; // ebx
  int v66; // r13d
  __int64 v67; // rax
  __int64 v68; // rbx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v69; // edi
  __int64 v70; // rcx
  ADAPTER_DISPLAY *v71; // rcx
  __int64 v72; // rax
  int CddShadowPitch; // [rsp+50h] [rbp-B0h]
  unsigned int v74; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v75; // [rsp+58h] [rbp-A8h] BYREF
  tagSIZE v76; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v77; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v78; // [rsp+6Ch] [rbp-94h]
  unsigned int v79; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v80; // [rsp+74h] [rbp-8Ch] BYREF
  UINT v81; // [rsp+78h] [rbp-88h]
  unsigned int v82; // [rsp+7Ch] [rbp-84h]
  unsigned int v83; // [rsp+80h] [rbp-80h] BYREF
  struct DXGCONTEXT *v84; // [rsp+88h] [rbp-78h] BYREF
  struct tagRECT v85; // [rsp+90h] [rbp-70h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-58h]
  struct DXGCONTEXT *v87; // [rsp+B0h] [rbp-50h]
  struct _DXGKARG_PRESENT_DISPLAYONLY v88; // [rsp+C0h] [rbp-40h] BYREF
  struct _D3DKMT_LOCK v89; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v90[2]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v91[32]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v92[96]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v93[2112]; // [rsp+1C0h] [rbp+C0h] BYREF
  PVOID v94[2]; // [rsp+A00h] [rbp+900h] BYREF
  PVOID P[2]; // [rsp+A10h] [rbp+910h] BYREF
  __int64 v96; // [rsp+A20h] [rbp+920h] BYREF
  int v97; // [rsp+A28h] [rbp+928h]
  const wchar_t *v98; // [rsp+A30h] [rbp+930h]
  PVOID *v99; // [rsp+A38h] [rbp+938h]
  int v100; // [rsp+A40h] [rbp+940h]
  __int64 v101; // [rsp+A48h] [rbp+948h]
  int v102; // [rsp+A50h] [rbp+950h]
  __int64 v103; // [rsp+A58h] [rbp+958h]
  int v104; // [rsp+A60h] [rbp+960h]
  const wchar_t *v105; // [rsp+A68h] [rbp+968h]
  unsigned int *v106; // [rsp+A70h] [rbp+970h]
  int v107; // [rsp+A78h] [rbp+978h]
  __int64 v108; // [rsp+A80h] [rbp+980h]
  int v109; // [rsp+A88h] [rbp+988h]
  __int64 v110; // [rsp+A90h] [rbp+990h]
  int v111; // [rsp+A98h] [rbp+998h]
  const wchar_t *v112; // [rsp+AA0h] [rbp+9A0h]
  unsigned int *v113; // [rsp+AA8h] [rbp+9A8h]
  int v114; // [rsp+AB0h] [rbp+9B0h]
  __int64 v115; // [rsp+AB8h] [rbp+9B8h]
  int v116; // [rsp+AC0h] [rbp+9C0h]
  __int64 v117; // [rsp+AC8h] [rbp+9C8h]
  int v118; // [rsp+AD0h] [rbp+9D0h]
  const wchar_t *v119; // [rsp+AD8h] [rbp+9D8h]
  unsigned int *v120; // [rsp+AE0h] [rbp+9E0h]
  int v121; // [rsp+AE8h] [rbp+9E8h]
  __int64 v122; // [rsp+AF0h] [rbp+9F0h]
  int v123; // [rsp+AF8h] [rbp+9F8h]
  __int64 v124; // [rsp+B00h] [rbp+A00h]
  int v125; // [rsp+B08h] [rbp+A08h]
  _BYTE v126[40]; // [rsp+B10h] [rbp+A10h] BYREF

  cx = 0;
  v78 = a2;
  v83 = 0;
  v75 = 0;
  v87 = a1;
  v84 = a1;
  v5 = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 224);
  if ( !v5 )
    return 0LL;
  *(_QWORD *)&v85.left = *((_QWORD *)a1 + 2);
  v6 = *(_QWORD *)&v85.left;
  v7 = *(_QWORD *)(*(_QWORD *)&v85.left + 2856LL);
  v86 = v7;
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v90,
    *(struct DXGDEVICE **)&v85.left);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v91,
    *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v92, *(__int64 *)&v85.left, 1, v8, 0);
  v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v92);
  v11 = v9;
  if ( v9 < 0 )
  {
    v38 = WdLogNewEntry5_WdEvent(v10);
    *(_QWORD *)(v38 + 24) = v11;
    *(_QWORD *)(v38 + 32) = v6;
    WdLogEvent5_WdEvent(v38);
    goto LABEL_22;
  }
  ADAPTER_DISPLAY::GetCddAllocationHandles(*(DXGADAPTER ***)(v7 + 2128), a2, &v83, &v75);
  CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v7 + 2128), a2);
  CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(*(DXGADAPTER ***)(v7 + 2128), a2);
  Height = (tagSIZE)CddDisplayMode->Height;
  Width = CddDisplayMode->Width;
  v81 = CddDisplayMode->Height;
  v82 = Width;
  memset(&v89, 0, sizeof(v89));
  v89.hAllocation = v75;
  v89.hDevice = *(_DWORD *)(v6 + 308);
  LODWORD(v11) = DXGDEVICE::Lock((DXGDEVICE *)v6, &v89, (struct COREDEVICEACCESS *)v92, v15);
  if ( (int)v11 < 0 )
  {
    v39 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v39 + 24) = 4399LL;
    WdLogEvent5_WdError(v39);
    goto LABEL_22;
  }
  if ( !v89.pData )
  {
    v40 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v40 + 24) = 4405LL;
    WdLogEvent5_WdError(v40);
    LODWORD(v11) = -1073741823;
    goto LABEL_22;
  }
  if ( v5 == 1 )
  {
    v19 = (unsigned __int8 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v16) + 113);
    if ( !v19 )
      goto LABEL_21;
    Global = DXGGLOBAL::GetGlobal(v18);
    v21 = (int *)((char *)Global + 912);
    if ( *((_DWORD *)Global + 231) == 22 )
    {
      *(_OWORD *)P = 0LL;
      CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(*(_QWORD *)(v86 + 2128), v78, 1);
      v23 = CurrentOrientation;
      if ( ((CurrentOrientation - 2) & 0xFFFFFFFD) == 0 )
      {
        Width = CddDisplayMode->Height;
        v41 = 2;
        Height.cx = CddDisplayMode->Width;
        if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE90 )
          v41 = 4;
        v23 = v41;
      }
      v24 = *v21;
      v25 = v21[1];
      v26 = v21[2];
      *(_QWORD *)&v85.left = 0LL;
      v94[0] = 0LL;
      v85.right = Width;
      v85.bottom = Height.cx;
      v94[1] = (PVOID)__PAIR64__(v25, v24);
      v27 = DxgkpBlitA8R8R8G8(
              v19,
              v24,
              v25,
              v26,
              v23,
              (unsigned __int8 *)v89.pData,
              CddShadowPitch,
              &v85,
              (struct tagRECT *)v94,
              (struct tagRECT *)P);
    }
    else
    {
      v42 = *v21;
      if ( *v21 <= Width )
      {
        v43 = *((_DWORD *)Global + 229);
        if ( v43 <= Height.cx )
        {
          v44 = 0;
          v45 = 0;
          if ( v42 != Width )
            v44 = (Width - v42) >> 1;
          if ( v43 != Height.cx )
            v45 = (Height.cx - v43) >> 1;
          v28 = CddShadowPitch;
          v46 = 0;
          if ( v43 )
          {
            v47 = CddShadowPitch * v45;
            do
            {
              v48 = 0;
              if ( v42 )
              {
                v49 = 4 * v44;
                v50 = 0;
                do
                {
                  ++v48;
                  v51 = v50 + v21[2] * v46;
                  v50 += 3;
                  v52 = v47 + (unsigned __int64)v49;
                  v49 += 4;
                  *(_DWORD *)((char *)v89.pData + v52) = v19[v51] | ((v19[(unsigned int)(v51 + 1)] | (v19[(unsigned int)(v51 + 2)] << 8)) << 8);
                  v42 = *v21;
                }
                while ( v48 < *v21 );
                v28 = CddShadowPitch;
              }
              ++v46;
              v47 += v28;
            }
            while ( v46 < v21[1] );
            Height.cx = v81;
            v6 = *(_QWORD *)&v85.left;
            Width = v82;
          }
LABEL_12:
          if ( *(_QWORD *)(v6 + 2856) == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) )
          {
            memset(&v93[8], 0, 0x5D0uLL);
            *(_DWORD *)&v93[44] = Height.cx;
            *(_DWORD *)&v93[88] |= 1u;
            *(_DWORD *)&v93[40] = Width;
            *(_DWORD *)v93 = *((_DWORD *)v87 + 6);
            *(_QWORD *)&v93[72] = v94;
            *(_DWORD *)&v93[20] = v75;
            *(_DWORD *)&v93[24] = v83;
            *(_OWORD *)&v93[48] = *(_OWORD *)&v93[32];
            *(_DWORD *)&v93[64] = 1;
            *(_OWORD *)v94 = *(_OWORD *)&v93[32];
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
              (__int64)&v88,
              &v84,
              1u);
            if ( *(_QWORD *)&v88.VidPnSourceId )
            {
              v30 = v78;
              v31 = DXGCONTEXT::PresentFromCdd(
                      v84,
                      (struct _D3DKMT_PRESENT *)v93,
                      v78,
                      (struct COREDEVICEACCESS *)v92,
                      (struct DXGADAPTERSTOPRESETLOCKSHARED *)v91,
                      &v84);
              if ( v31 >= 0 )
              {
                DXGDEVICE::FlushScheduler(*((_QWORD **)v84 + 2), 1);
                v32 = v86;
                DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                               *(DXGADAPTER ***)(v86 + 2128),
                                               v30);
                if ( DisplayedPrimaryAllocation )
                {
                  memset(v93, 0, sizeof(v93));
                  v34 = *((_QWORD *)DisplayedPrimaryAllocation + 2);
                  *(_DWORD *)v93 = v30;
                  v35 = *(_QWORD **)(v32 + 2136);
                  *(_QWORD *)&v93[16] = v34;
                  (*(void (__fastcall **)(_QWORD, _QWORD, _BYTE *, _BYTE *))(*(_QWORD *)(v35[50] + 8LL) + 216LL))(
                    v35[51],
                    *((_QWORD *)DisplayedPrimaryAllocation + 1),
                    &v93[4],
                    &v93[8]);
                  if ( (*(_DWORD *)(v32 + 3708) & 0x10) != 0 )
                    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v35[47] + 8LL) + 712LL))(
                      *(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL),
                      v93);
                }
              }
            }
            else
            {
              v67 = WdLogNewEntry5_WdError(v29);
              *(_QWORD *)(v67 + 24) = 4658LL;
              WdLogEvent5_WdError(v67);
              v31 = -1073741801;
            }
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)&v88);
          }
          else
          {
            memset(&v88, 0, sizeof(v88));
            v68 = v86;
            v69 = v78;
            v94[1] = 0LL;
            v94[0] = 0LL;
            v70 = *(_QWORD *)(v86 + 2128);
            v94[1] = (PVOID)__PAIR64__(Height.cx, Width);
            ADAPTER_DISPLAY::GetCurrentOrientation(v70, v78, 1);
            v71 = *(ADAPTER_DISPLAY **)(v68 + 2128);
            v88.pSource = v89.pData;
            v88.BytesPerPixel = 4;
            *(_QWORD *)&v88.Flags.0 = 0LL;
            v88.pMoves = 0LL;
            v88.pDirtyRect = (RECT *)v94;
            v88.VidPnSourceId = v69;
            v88.Pitch = v28;
            v88.NumDirtyRects = 1;
            v31 = ADAPTER_DISPLAY::PresentDisplayOnlyCdd(v71, &v88);
          }
          if ( v31 < 0 )
          {
            v72 = WdLogNewEntry5_WdError(v36);
            *(_QWORD *)(v72 + 24) = v31;
            WdLogEvent5_WdError(v72);
          }
          goto LABEL_21;
        }
      }
      v27 = -1073741637;
    }
    if ( v27 >= 0 )
      goto LABEL_11;
    goto LABEL_21;
  }
  if ( v5 != 2 )
    goto LABEL_21;
  v100 = 16777217;
  cy = 0LL;
  v97 = 292;
  v104 = 292;
  v98 = L"CddBootImageFile";
  v107 = 67108868;
  v99 = v94;
  v111 = 292;
  v105 = L"CddBootImageBackgroundColor";
  v106 = &v74;
  v112 = L"CddBootImageOffsetX";
  v113 = &v77;
  v119 = L"CddBootImageOffsetY";
  v114 = 67108868;
  v118 = 292;
  v121 = 67108868;
  v120 = &v79;
  v74 = 0;
  v77 = 0;
  v79 = 0;
  LODWORD(v94[0]) = 0;
  v94[1] = 0LL;
  P[0] = 0LL;
  v76.cx = 0;
  v76.cy = 0;
  v80 = 0;
  v96 = 0LL;
  v101 = 0LL;
  v102 = 0;
  v103 = 0LL;
  v108 = 0LL;
  v109 = 0;
  v110 = 0LL;
  v115 = 0LL;
  v116 = 0;
  v117 = 0LL;
  v122 = 0LL;
  v123 = 0;
  v124 = 0LL;
  v125 = 0;
  memset(v126, 0, sizeof(v126));
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\CddBootImageData",
              &v96,
              0LL,
              0LL) >= 0
    && v94[1] )
  {
    LoadAndExtractBitmapFile((struct _UNICODE_STRING *)v94, P, &v76, &v80);
    cy = (unsigned int)v76.cy;
    cx = v76.cx;
  }
  v17 = v74;
  if ( !v74 )
  {
    v60 = 0;
    goto LABEL_68;
  }
  if ( !Height.cx )
    goto LABEL_66;
  v54 = CddShadowPitch;
  v55 = Height;
  v56 = (unsigned __int64)(4 * Width) >> 2;
  v57 = 0;
  v76 = Height;
  do
  {
    v58 = (unsigned __int64)(4 * Width) >> 2;
    v59 = (char *)v89.pData + v57;
    if ( !v56 )
      goto LABEL_64;
    if ( ((unsigned __int8)v59 & 4) == 0 )
      goto LABEL_61;
    *v59 = v17;
    v58 = v56 - 1;
    if ( v56 != 1 )
    {
      ++v59;
LABEL_61:
      memset64(v59, (unsigned int)v17 | ((unsigned __int64)(unsigned int)v17 << 32), v58 >> 1);
      v55 = v76;
      if ( (v58 & 1) != 0 )
        v59[v58 - 1] = v17;
    }
    v54 = CddShadowPitch;
    v17 = v74;
LABEL_64:
    v57 += v54;
    v76 = (tagSIZE)--*(_QWORD *)&v55;
  }
  while ( v55 );
  v6 = *(_QWORD *)&v85.left;
LABEL_66:
  v60 = 1;
LABEL_68:
  v61 = P[0];
  if ( P[0] )
  {
    if ( cx )
    {
      if ( cx <= Width )
      {
        v62 = v77;
        if ( v77 < Width
          && v77 + cx <= Width
          && (_DWORD)cy
          && (unsigned int)cy <= Height.cx
          && v79 < Height.cx
          && (unsigned int)cy + v79 <= Height.cx )
        {
          v63 = 4 * cx;
          v64 = (char *)P[0];
          v65 = CddShadowPitch * v79;
          v66 = 0;
          while ( 1 )
          {
            memmove((char *)v89.pData + 4 * v62 + v65, &v64[v66], v63);
            v66 += v80;
            v65 += CddShadowPitch;
            if ( !--cy )
              break;
            v62 = v77;
          }
          Height.cx = v81;
          v6 = *(_QWORD *)&v85.left;
          Width = v82;
          v61 = P[0];
          v60 = 1;
        }
      }
    }
    ExFreePoolWithTag(v61, 0x4B677844u);
  }
  if ( v94[1] )
    ExFreePoolWithTag(v94[1], 0);
  if ( v60 )
  {
LABEL_11:
    v28 = CddShadowPitch;
    goto LABEL_12;
  }
LABEL_21:
  *(PVOID *)((char *)v94 + 4) = 0LL;
  LODWORD(v94[0]) = *(_DWORD *)(v6 + 308);
  v94[1] = &v75;
  HIDWORD(v94[0]) = 1;
  LODWORD(v11) = DXGDEVICE::Unlock((DXGDEVICE *)v6, (const struct _D3DKMT_UNLOCK *)v94, 0LL, v17);
LABEL_22:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v92);
  if ( v91[16] )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
  if ( v90[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v90);
  return (unsigned int)v11;
}
