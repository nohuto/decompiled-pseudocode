/*
 * XREFs of ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00C70DC
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0007A48 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007D20 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007D6C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C009B154 (-IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z.c)
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C00C6DB4 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00C79C8 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C012CA58 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C012CF50 (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C014B044 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 */

__int64 __fastcall DXGPRESENT::CheckVisRgn(
        DXGPRESENT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        HDEV a4,
        const struct DXGDEVICE *a5,
        unsigned int a6,
        unsigned int a7,
        enum _D3DDDIFORMAT a8,
        int a9)
{
  unsigned int v13; // esi
  __int64 v14; // r15
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  int v22; // r14d
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // r14d
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // edx
  __int64 v42; // r14
  unsigned int v43; // r9d
  unsigned int v44; // ecx
  __int64 v45; // r8
  __int64 v46; // rdx
  char v47; // r14
  int IsWindowVisible; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // r10
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r14
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r8d
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  _QWORD *v69; // rcx
  int v70; // edx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v71; // eax
  unsigned int v72; // eax
  __int64 v73; // rcx
  SIZE_T v74; // r15
  __int64 v75; // rax
  void *v76; // rcx
  SIZE_T v77; // rdx
  PVOID PoolWithTag; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r9
  __int64 v82; // rax
  __int64 v83; // rcx
  unsigned int v84; // ebp
  __int64 v85; // rax
  _QWORD *v86; // rax
  _QWORD *v87; // rax
  int v88; // [rsp+30h] [rbp-58h] BYREF
  int v89; // [rsp+34h] [rbp-54h] BYREF
  __int64 v90; // [rsp+38h] [rbp-50h]
  struct tagRECT v91; // [rsp+40h] [rbp-48h] BYREF
  int v94; // [rsp+B0h] [rbp+28h]

  v13 = 0;
  v14 = *((_QWORD *)a5 + 354);
  v15 = *(_QWORD *)(*((_QWORD *)a5 + 5) + 80LL);
  if ( !(*(unsigned int (**)(void))(v15 + 208))() )
    goto LABEL_2;
  v94 = (*(__int64 (__fastcall **)(int *))(v15 + 224))(&v88);
  v22 = (*(__int64 (__fastcall **)(int *))(v15 + 312))(&v89);
  if ( !v94 || (v14 = 0LL, v88) )
  {
    v17 = 256LL;
    if ( (a2->Flags.Value & 0x100) != 0 && !v14 )
    {
LABEL_2:
      *((_DWORD *)this + 1) |= 3u;
      *((_QWORD *)this + 6) = a2->hWindow;
      v20 = WdLogNewEntry5_WdEvent(v17, v16, v18, v19);
      *(_QWORD *)(v20 + 24) = -1071775737LL;
      WdLogEvent5_WdEvent(v20);
      return 3223191559LL;
    }
    *((_DWORD *)this + 1) &= 0xFFFFFF7C;
    if ( a2->hWindow || (a2->Flags.Value & 0x100) == 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(HDC, char *))(v15 + 72))(a3, (char *)this + 24) )
      {
        v30 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
        *(_QWORD *)(v30 + 24) = this;
        *(_QWORD *)(v30 + 32) = a2->hWindow;
        WdLogEvent5_WdWarning(v30);
        return 3221225485LL;
      }
      if ( (*(unsigned int (__fastcall **)(HDC, char *))(v15 + 328))(a3, (char *)this + 40) )
        goto LABEL_18;
    }
    else
    {
      if ( !v14 || v14 != *((_QWORD *)a5 + 354) )
      {
        v23 = WdLogNewEntry5_WdAssertion(256LL);
        *(_QWORD *)(v23 + 24) = 7576LL;
        WdLogEvent5_WdAssertion(v23);
      }
      v24 = 1016LL * a2->VidPnSourceId;
      v25 = *(_QWORD *)(*(_QWORD *)(v14 + 1984) + 136LL);
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)(v24 + v25 + 628);
    }
    *((_QWORD *)this + 5) = 0LL;
LABEL_18:
    if ( *((_DWORD *)this + 6) >= *((_DWORD *)this + 8) || *((_DWORD *)this + 7) >= *((_DWORD *)this + 9) )
    {
      *((_DWORD *)this + 1) |= 3u;
      v87 = (_QWORD *)WdLogNewEntry5_WdEvent(v25, v24, v18, v19);
      v87[3] = -1071775738LL;
      v87[4] = this;
      v87[5] = a2->VidPnSourceId;
      WdLogEvent5_WdEvent(v87);
      return 3223191558LL;
    }
    *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 400LL)
                                                                           + 8LL)
                                                               + 440LL))(*(_QWORD *)(*((_QWORD *)a5 + 2) + 408LL));
    if ( (!v14 || !v22 && ADAPTER_DISPLAY::IsInVirtualMode(*(ADAPTER_DISPLAY **)(v14 + 1984), a2->VidPnSourceId))
      && (a2->Flags.Value & 0x10000) == 0 )
    {
      if ( v94 && v22 && !v89 )
        return 3223192386LL;
      *((_DWORD *)this + 1) |= 0x10u;
      *((_QWORD *)this + 6) = a2->hWindow;
      v35 = WdLogNewEntry5_WdEvent(v32, v31, v33, v34);
      *(_QWORD *)(v35 + 24) = a5;
      WdLogEvent5_WdEvent(v35);
      return 0LL;
    }
    if ( v14 )
    {
      v36 = *(_QWORD *)(v14 + 1984);
      v37 = 0;
      v90 = v36;
      if ( *(_DWORD *)(v36 + 104) )
      {
        do
        {
          v38 = *(_QWORD *)(v36 + 16);
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v38 + 144)
            && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v38 + 128)) )
          {
            v39 = WdLogNewEntry5_WdAssertion(v38);
            *(_QWORD *)(v39 + 24) = 4092LL;
            WdLogEvent5_WdAssertion(v39);
          }
          v36 = v90;
          if ( v37 >= *(_DWORD *)(v90 + 104) )
          {
            v40 = WdLogNewEntry5_WdAssertion(v38);
            *(_QWORD *)(v40 + 24) = 4093LL;
            WdLogEvent5_WdAssertion(v40);
            v36 = v90;
          }
          v41 = *(_DWORD *)(v36 + 104);
          if ( v37 < v41 )
          {
            if ( a5 == *(const struct DXGDEVICE **)(1016LL * v37 + *(_QWORD *)(v90 + 136) + 672) )
              goto LABEL_64;
            v36 = v90;
          }
          ++v37;
        }
        while ( v37 < v41 );
      }
      v42 = *(_QWORD *)(v14 + 1984);
      DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v42 + 16));
      v43 = *(_DWORD *)(v42 + 104);
      v44 = 0;
      if ( v43 )
      {
        v45 = *(_QWORD *)(v42 + 136);
        while ( 1 )
        {
          v46 = 1016LL * v44;
          if ( *(_QWORD *)(v46 + v45 + 672) )
          {
            if ( *(_DWORD *)(v46 + v45 + 680) == 1 )
              break;
          }
          if ( ++v44 >= v43 )
            goto LABEL_46;
        }
        v47 = 1;
      }
      else
      {
LABEL_46:
        v47 = 0;
      }
      v91.left = *((_DWORD *)this + 10) + *((_DWORD *)this + 6);
      v91.right = *((_DWORD *)this + 10) + *((_DWORD *)this + 8);
      v91.top = *((_DWORD *)this + 11) + *((_DWORD *)this + 7);
      v91.bottom = *((_DWORD *)this + 11) + *((_DWORD *)this + 9);
      IsWindowVisible = ADAPTER_DISPLAY::IsWindowVisible(*(DXGADAPTER ***)(v14 + 1984), &v91);
      if ( IsWindowVisible == -1073741823 )
      {
        if ( (*((_DWORD *)a5 + 70) || ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v14 + 1984)))
          && !DXGDEVICE::AllowLegacyPresent(a5, v49) )
        {
          *((_DWORD *)this + 1) |= 3u;
          *((_QWORD *)this + 6) = a2->hWindow;
          v53 = (_QWORD *)WdLogNewEntry5_WdEvent(v50, v49, v51, v52);
          v53[3] = -1071775738LL;
          v53[4] = this;
          v53[5] = a2->hSource;
          v53[6] = a2->Flags.Value;
          v53[7] = a2->VidPnSourceId;
          WdLogEvent5_WdEvent(v53);
          if ( !*((_DWORD *)a5 + 70) && v47 )
            *((_DWORD *)this + 1) |= 0x80u;
          return 3223191558LL;
        }
      }
      else if ( IsWindowVisible == 261 && (a2->Flags.Value & 0x100) == 0 && a9 )
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdEvent(v50, v49, v51, v52);
        v13 = 261;
        v54[3] = 261LL;
        v54[4] = this;
        v54[5] = a2->hSource;
        v54[6] = a2->Flags.Value;
        v54[7] = a2->VidPnSourceId;
        WdLogEvent5_WdEvent(v54);
        return v13;
      }
      if ( v47 )
      {
        if ( (a2->Flags.Value & 0x10000) != 0 )
          goto LABEL_70;
        if ( !v94 )
        {
          v55 = (_QWORD *)WdLogNewEntry5_WdEvent(v50, v49, v51, v52);
          v55[3] = -1071774910LL;
          v55[4] = this;
          v55[5] = a2->hSource;
          v55[6] = a2->Flags.Value;
          v55[7] = a2->VidPnSourceId;
          WdLogEvent5_WdEvent(v55);
          return 3223192386LL;
        }
      }
    }
LABEL_64:
    if ( (a2->Flags.Value & 0x10000) == 0 )
    {
      if ( !a2->hWindow )
      {
LABEL_71:
        if ( (a2->Flags.Value & 0x100) != 0 )
        {
          v56 = 1016LL * a2->VidPnSourceId;
          v57 = *(_QWORD *)(*(_QWORD *)(v14 + 1984) + 136LL);
          v62 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v15 + 80))(
                  *(unsigned int *)(v56 + v57 + 628),
                  *(unsigned int *)(v56 + v57 + 632),
                  *(unsigned int *)(v56 + v57 + 636),
                  *(unsigned int *)(v56 + v57 + 640));
          goto LABEL_73;
        }
LABEL_77:
        v64 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v15 + 80))(0LL, 0LL, 0LL, 0LL);
        v62 = v64;
        if ( !v64 )
        {
LABEL_115:
          v86 = (_QWORD *)WdLogNewEntry5_WdLowResource(v59, v58, v60, v61);
          v86[3] = this;
          v86[4] = a2->hWindow;
          v86[5] = a3;
          v86[6] = a4;
          v86[7] = a2->Flags.Value;
          v69 = v86;
          goto LABEL_80;
        }
        if ( (*(unsigned int (__fastcall **)(HDC, __int64, _QWORD))(v15 + 88))(a3, v64, BYTE2(a2->Flags.Value) & 1 | 4u) == -1 )
        {
          (*(void (__fastcall **)(__int64))(v15 + 128))(v62);
          v69 = (_QWORD *)WdLogNewEntry5_WdLowResource(v66, v65, v67, v68);
          v69[3] = this;
          v69[4] = a2->hWindow;
          v69[5] = a3;
          v69[6] = a4;
          v69[7] = a2->Flags.Value;
LABEL_80:
          WdLogEvent5_WdLowResource(v69);
          return 3221225495LL;
        }
LABEL_73:
        if ( v62 )
        {
          Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
          if ( (*(_DWORD *)&Value & 0x10000) != 0 )
          {
            if ( a2->hDestination )
              *((_DWORD *)this + 1) &= ~0x10u;
            else
              *((_DWORD *)this + 1) |= 0x10u;
          }
          else
          {
            v70 = *((_DWORD *)this + 1);
            if ( (v70 & 0x20) != 0
              || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 16LL) + 284LL) & 0x10) != 0
              && (*(_BYTE *)&Value & 3) != 0 )
            {
              *((_DWORD *)this + 1) = v70 | 0x10;
            }
            else
            {
              *((_DWORD *)this + 1) ^= (*((_DWORD *)this + 1) ^ (16
                                                               * (*(__int64 (__fastcall **)(__int64, HDEV, HWND, __int64))(v15 + 136))(
                                                                   v14,
                                                                   a4,
                                                                   a2->hWindow,
                                                                   v62))) & 0x10;
            }
          }
          if ( (*((_DWORD *)this + 1) & 0x10) != 0
            && (a2->Flags.Value & 0x100) != 0
            && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v14 + 1984), a5, a2->VidPnSourceId)
            && *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v14 + 1984), a2->VidPnSourceId) + 2) == 41 )
          {
            if ( (v71 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
                  (*(_BYTE *)&v71 & 1) != 0)
              && (a8 == D3DDDIFMT_P8 || a8 == D3DDDIFMT_A8)
              || (*(_BYTE *)&v71 & 2) != 0 && !a2->hWindow )
            {
              *((_DWORD *)this + 1) &= ~0x10u;
            }
          }
          if ( (*((_DWORD *)this + 1) & 0x10) == 0 )
          {
            v72 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v15 + 112))(v62, 0LL, 0LL);
            v74 = v72;
            if ( !v72 )
            {
              v75 = WdLogNewEntry5_WdError(v73);
              *(_QWORD *)(v75 + 24) = this;
              *(_QWORD *)(v75 + 32) = v62;
              WdLogEvent5_WdError(v75);
LABEL_101:
              (*(void (__fastcall **)(__int64))(v15 + 128))(v62);
              return 3221225495LL;
            }
            v76 = (void *)*((_QWORD *)this + 2);
            if ( v76 )
              ExFreePoolWithTag(v76, 0);
            v77 = v74;
            if ( !(_DWORD)v74 )
              v77 = 1LL;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v77, 0x4B677844u);
            *((_QWORD *)this + 2) = PoolWithTag;
            if ( !PoolWithTag )
            {
              v82 = WdLogNewEntry5_WdLowResource(v80, v79, 0LL, v81);
              *(_QWORD *)(v82 + 32) = v74;
              *(_QWORD *)(v82 + 24) = this;
              WdLogEvent5_WdLowResource(v82);
              goto LABEL_101;
            }
            v84 = (*(__int64 (__fastcall **)(__int64, _QWORD, PVOID))(v15 + 112))(v62, (unsigned int)v74, PoolWithTag);
            if ( v84 > (unsigned int)v74 )
            {
              v85 = WdLogNewEntry5_WdAssertion(v83);
              *(_QWORD *)(v85 + 24) = 7901LL;
              WdLogEvent5_WdAssertion(v85);
            }
            *((_DWORD *)this + 1) |= 2u;
            if ( v84 <= 0x20 )
            {
              if ( (unsigned int)DXGPRESENT::ComputeSrcDstRects(this, a2, a6, a7) )
                (*(void (__fastcall **)(HDC, char *))(v15 + 248))(a3, (char *)this + 128);
            }
            else
            {
              v13 = DXGPRESENT::CombineRectList(this, a2, a3, a5, a6, a7);
            }
          }
          (*(void (__fastcall **)(__int64))(v15 + 128))(v62);
          *((_QWORD *)this + 6) = a2->hWindow;
          return v13;
        }
        goto LABEL_115;
      }
      if ( (*(unsigned int (__fastcall **)(HDC))(v15 + 56))(a3)
        && (!v14 || !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v14 + 1984), a5)) )
      {
        *((_DWORD *)this + 1) |= 0x10u;
        *((_QWORD *)this + 6) = a2->hWindow;
        return 0LL;
      }
    }
LABEL_70:
    if ( a2->hWindow )
      goto LABEL_77;
    goto LABEL_71;
  }
  *((_DWORD *)this + 1) |= 3u;
  *((_QWORD *)this + 6) = a2->hWindow;
  return 3223191558LL;
}
