/*
 * XREFs of ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00B1D80
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006758 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00067E0 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000682C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C00B19EC (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00B218C (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C00B62C8 (-IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01268B0 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0126D78 (-IsInVirtualMode@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C01472B0 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
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
  unsigned int v12; // esi
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // r8
  __int64 v23; // r9
  _DWORD *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rsi
  unsigned int v36; // edi
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rcx
  unsigned int v40; // r9d
  unsigned int v41; // r8d
  __int64 v42; // rdx
  __int64 v43; // rcx
  char v44; // di
  int IsWindowVisible; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  HDC v50; // r12
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // r8
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // edx
  unsigned int v55; // eax
  __int64 v56; // rcx
  SIZE_T v57; // rsi
  void *v58; // rcx
  SIZE_T v59; // rdx
  PVOID PoolWithTag; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned int v66; // r14d
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  unsigned int *v78; // r10
  __int64 v79; // rcx
  _QWORD *v80; // rax
  int v81; // r8d
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v82; // ecx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rax
  _QWORD *v87; // rax
  int v88; // [rsp+30h] [rbp-58h] BYREF
  int v89; // [rsp+34h] [rbp-54h] BYREF
  struct tagRECT v90; // [rsp+38h] [rbp-50h] BYREF
  int v93; // [rsp+B0h] [rbp+28h]

  v12 = 0;
  v13 = *((_QWORD *)a5 + 2338);
  v14 = *(_QWORD *)(*((_QWORD *)a5 + 5) + 80LL);
  if ( !(*(unsigned int (**)(void))(v14 + 208))() )
  {
    *((_DWORD *)this + 1) |= 3u;
    *((_QWORD *)this + 6) = a2->hWindow;
    v68 = WdLogNewEntry5_WdEvent(v16, v15, v17, v18);
    *(_QWORD *)(v68 + 24) = -1071775737LL;
    WdLogEvent5_WdEvent(v68);
    return 3223191559LL;
  }
  v93 = (*(__int64 (__fastcall **)(int *))(v14 + 224))(&v88);
  v21 = (*(__int64 (__fastcall **)(int *))(v14 + 312))(&v89);
  if ( !v93 || (v13 = 0LL, v88) )
  {
    if ( (a2->Flags.Value & 0x100) != 0 && !v13 )
    {
      *((_DWORD *)this + 1) |= 3u;
      *((_QWORD *)this + 6) = a2->hWindow;
      v69 = WdLogNewEntry5_WdEvent(v20, v19, v22, v23);
      *(_QWORD *)(v69 + 24) = -1071775737LL;
      WdLogEvent5_WdEvent(v69);
      return 3223191559LL;
    }
    *((_DWORD *)this + 1) &= 0xFFFFFF7C;
    if ( a2->hWindow || (a2->Flags.Value & 0x100) == 0 )
    {
      v24 = (_DWORD *)((char *)this + 24);
      if ( !(*(unsigned int (__fastcall **)(HDC, char *))(v14 + 72))(a3, (char *)this + 24) )
      {
        v71 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
        *(_QWORD *)(v71 + 24) = this;
        *(_QWORD *)(v71 + 32) = a2->hWindow;
        WdLogEvent5_WdWarning(v71);
        return 3221225485LL;
      }
      if ( (*(unsigned int (__fastcall **)(HDC, char *))(v14 + 328))(a3, (char *)this + 40) )
      {
LABEL_8:
        if ( *v24 >= *((_DWORD *)this + 8) || *((_DWORD *)this + 7) >= *((_DWORD *)this + 9) )
        {
          *((_DWORD *)this + 1) |= 3u;
          v87 = (_QWORD *)WdLogNewEntry5_WdEvent(v30, v29, v22, v23);
          v87[3] = -1071775738LL;
          v87[4] = this;
          v87[5] = a2->VidPnSourceId;
          WdLogEvent5_WdEvent(v87);
          return 3223191558LL;
        }
        *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 376LL)
                                                                               + 8LL)
                                                                   + 440LL))(*(_QWORD *)(*((_QWORD *)a5 + 2) + 384LL));
        if ( (!v13 || !v21 && ADAPTER_DISPLAY::IsInVirtualMode(*(ADAPTER_DISPLAY **)(v13 + 1976), a2->VidPnSourceId))
          && (a2->Flags.Value & 0x10000) == 0 )
        {
          if ( !v93 || !v21 || v89 )
          {
            *((_DWORD *)this + 1) |= 0x10u;
            *((_QWORD *)this + 6) = a2->hWindow;
            v72 = WdLogNewEntry5_WdEvent(v32, v31, v33, v34);
            *(_QWORD *)(v72 + 24) = a5;
            WdLogEvent5_WdEvent(v72);
            return 0LL;
          }
          return 3223192386LL;
        }
        if ( v13 )
        {
          v35 = *(_QWORD *)(v13 + 1976);
          v36 = 0;
          if ( *(_DWORD *)(v35 + 80) )
          {
            while ( 1 )
            {
              v37 = *(_QWORD *)(v35 + 16);
              if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v37 + 144)
                && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v37 + 128)) )
              {
                v73 = WdLogNewEntry5_WdAssertion(v37, v31, v33, v34);
                *(_QWORD *)(v73 + 24) = 3953LL;
                WdLogEvent5_WdAssertion(v73);
              }
              if ( v36 >= *(_DWORD *)(v35 + 80) )
              {
                v74 = WdLogNewEntry5_WdAssertion(v37, v31, v33, v34);
                *(_QWORD *)(v74 + 24) = 3954LL;
                WdLogEvent5_WdAssertion(v74);
              }
              v31 = *(unsigned int *)(v35 + 80);
              if ( v36 < (unsigned int)v31
                && a5 == *(const struct DXGDEVICE **)(1008LL * v36 + *(_QWORD *)(v35 + 112) + 672) )
              {
                break;
              }
              if ( ++v36 >= (unsigned int)v31 )
                goto LABEL_22;
            }
            v12 = 0;
          }
          else
          {
LABEL_22:
            v38 = *(_QWORD *)(v13 + 1976);
            v39 = *(_QWORD *)(v38 + 16);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v39 + 144) )
              ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v39 + 128));
            v40 = *(_DWORD *)(v38 + 80);
            v12 = 0;
            v41 = 0;
            if ( v40 )
            {
              v42 = *(_QWORD *)(v38 + 112);
              while ( 1 )
              {
                v43 = 1008LL * v41;
                if ( *(_QWORD *)(v43 + v42 + 672) )
                {
                  if ( *(_DWORD *)(v43 + v42 + 680) == 1 )
                    break;
                }
                if ( ++v41 >= v40 )
                  goto LABEL_74;
              }
              v44 = 1;
            }
            else
            {
LABEL_74:
              v44 = 0;
            }
            v90.left = *((_DWORD *)this + 10) + *v24;
            v90.right = *((_DWORD *)this + 10) + *((_DWORD *)this + 8);
            v90.top = *((_DWORD *)this + 11) + *((_DWORD *)this + 7);
            v90.bottom = *((_DWORD *)this + 11) + *((_DWORD *)this + 9);
            IsWindowVisible = ADAPTER_DISPLAY::IsWindowVisible(*(ADAPTER_DISPLAY **)(v13 + 1976), &v90);
            if ( IsWindowVisible == -1073741823 )
            {
              if ( (*((_DWORD *)a5 + 70) || ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v13 + 1976)))
                && !DXGDEVICE::AllowLegacyPresent(a5, v46) )
              {
                *((_DWORD *)this + 1) |= 3u;
                *((_QWORD *)this + 6) = a2->hWindow;
                v75 = (_QWORD *)WdLogNewEntry5_WdEvent(v47, v46, v48, v49);
                v75[3] = -1071775738LL;
                v75[4] = this;
                v75[5] = a2->hSource;
                v75[6] = a2->Flags.Value;
                v75[7] = a2->VidPnSourceId;
                WdLogEvent5_WdEvent(v75);
                if ( !*((_DWORD *)a5 + 70) && v44 )
                  *((_DWORD *)this + 1) |= 0x80u;
                return 3223191558LL;
              }
            }
            else if ( IsWindowVisible == 261 && (a2->Flags.Value & 0x100) == 0 && a9 )
            {
              v76 = (_QWORD *)WdLogNewEntry5_WdEvent(v47, v46, v48, v49);
              v76[3] = 261LL;
              v76[4] = this;
              v76[5] = a2->hSource;
              v76[6] = a2->Flags.Value;
              v76[7] = a2->VidPnSourceId;
              WdLogEvent5_WdEvent(v76);
              return 261LL;
            }
            if ( v44 )
            {
              if ( (a2->Flags.Value & 0x10000) != 0 )
                goto LABEL_33;
              if ( !v93 )
              {
                v77 = (_QWORD *)WdLogNewEntry5_WdEvent(v47, v46, v48, v49);
                v77[3] = -1071774910LL;
                v77[4] = this;
                v77[5] = a2->hSource;
                v77[6] = a2->Flags.Value;
                v77[7] = a2->VidPnSourceId;
                WdLogEvent5_WdEvent(v77);
                return 3223192386LL;
              }
            }
          }
        }
        if ( (a2->Flags.Value & 0x10000) == 0 )
        {
          v50 = a3;
          if ( !a2->hWindow )
          {
LABEL_94:
            if ( (a2->Flags.Value & 0x100) != 0 )
            {
              v78 = (unsigned int *)(*(_QWORD *)(*(_QWORD *)(v13 + 1976) + 112LL) + 1008LL * a2->VidPnSourceId);
              v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v14 + 80))(
                      v78[157],
                      v78[158],
                      v78[159],
                      v78[160]);
              goto LABEL_39;
            }
LABEL_35:
            v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v14 + 80))(0LL, 0LL, 0LL, 0LL);
            if ( !v52 )
              goto LABEL_120;
            if ( (a2->Flags.Value & 0x10000) != 0 )
              v53 = 5LL;
            else
              v53 = 4LL;
            if ( (*(unsigned int (__fastcall **)(HDC, __int64, __int64))(v14 + 88))(v50, v52, v53) == -1 )
            {
              (*(void (__fastcall **)(__int64))(v14 + 128))(v52);
              v80 = (_QWORD *)WdLogNewEntry5_WdLowResource(v79);
              v80[3] = this;
              v80[4] = a2->hWindow;
              v80[5] = v50;
              v80[6] = a4;
              v80[7] = a2->Flags.Value;
              WdLogEvent5_WdLowResource(v80);
              return 3221225495LL;
            }
LABEL_39:
            if ( v52 )
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
                v81 = *((_DWORD *)this + 1);
                if ( (v81 & 0x20) != 0 )
                {
                  *((_DWORD *)this + 1) = v81 | 0x10;
                }
                else if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 16LL) + 284LL) & 8) != 0
                       && (*(_BYTE *)&Value & 3) != 0 )
                {
                  *((_DWORD *)this + 1) = v81 | 0x10;
                }
                else
                {
                  *((_DWORD *)this + 1) ^= (*((_DWORD *)this + 1) ^ (16
                                                                   * (*(__int64 (__fastcall **)(__int64, HDEV, HWND, __int64))(v14 + 136))(
                                                                       v13,
                                                                       a4,
                                                                       a2->hWindow,
                                                                       v52))) & 0x10;
                }
              }
              if ( (((*((_DWORD *)this + 1) & 0x10) != 0) & _bittest((const signed __int32 *)&a2->Flags, 8u)) != 0
                && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v13 + 1976), a5, a2->VidPnSourceId)
                && *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v13 + 1976), a2->VidPnSourceId) + 2) == 41 )
              {
                if ( (v82 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
                      (*(_BYTE *)&v82 & 1) != 0)
                  && (a8 == D3DDDIFMT_P8 || a8 == D3DDDIFMT_A8)
                  || (*(_BYTE *)&v82 & 2) != 0 && !a2->hWindow )
                {
                  *((_DWORD *)this + 1) &= ~0x10u;
                }
              }
              if ( (*((_DWORD *)this + 1) & 0x10) != 0 )
                goto LABEL_55;
              v55 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v14 + 112))(v52, 0LL, 0LL);
              v57 = v55;
              if ( v55 )
              {
                v58 = (void *)*((_QWORD *)this + 2);
                if ( v58 )
                  ExFreePoolWithTag(v58, 0);
                v59 = v57;
                if ( !(_DWORD)v57 )
                  v59 = 1LL;
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, v59, 0x4B677844u);
                *((_QWORD *)this + 2) = PoolWithTag;
                if ( PoolWithTag )
                {
                  v66 = (*(__int64 (__fastcall **)(__int64, _QWORD, PVOID))(v14 + 112))(
                          v52,
                          (unsigned int)v57,
                          PoolWithTag);
                  if ( v66 > (unsigned int)v57 )
                  {
                    v85 = WdLogNewEntry5_WdAssertion(v63, v62, v64, v65);
                    *(_QWORD *)(v85 + 24) = 7955LL;
                    WdLogEvent5_WdAssertion(v85);
                  }
                  *((_DWORD *)this + 1) |= 2u;
                  if ( v66 <= 0x20 )
                  {
                    if ( (unsigned int)DXGPRESENT::ComputeSrcDstRects(this, a2, a6, a7) )
                      (*(void (__fastcall **)(HDC, char *))(v14 + 248))(v50, (char *)this + 128);
                    v12 = 0;
                  }
                  else
                  {
                    v12 = DXGPRESENT::CombineRectList(this, a2, v50, a5, a6, a7);
                  }
LABEL_55:
                  (*(void (__fastcall **)(__int64))(v14 + 128))(v52);
                  *((_QWORD *)this + 6) = a2->hWindow;
                  return v12;
                }
                v84 = WdLogNewEntry5_WdLowResource(v61);
                *(_QWORD *)(v84 + 24) = this;
                *(_QWORD *)(v84 + 32) = v57;
                WdLogEvent5_WdLowResource(v84);
              }
              else
              {
                v83 = WdLogNewEntry5_WdError(v56);
                *(_QWORD *)(v83 + 24) = this;
                *(_QWORD *)(v83 + 32) = v52;
                WdLogEvent5_WdError(v83);
              }
              (*(void (__fastcall **)(__int64))(v14 + 128))(v52);
              return 3221225495LL;
            }
LABEL_120:
            v86 = (_QWORD *)WdLogNewEntry5_WdLowResource(v51);
            v86[3] = this;
            v86[4] = a2->hWindow;
            v86[5] = v50;
            v86[6] = a4;
            v86[7] = a2->Flags.Value;
            WdLogEvent5_WdLowResource(v86);
            return 3221225495LL;
          }
          if ( (*(unsigned int (__fastcall **)(HDC))(v14 + 56))(a3)
            && (!v13 || !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v13 + 1976), a5)) )
          {
            *((_DWORD *)this + 1) |= 0x10u;
            *((_QWORD *)this + 6) = a2->hWindow;
            return 0LL;
          }
LABEL_34:
          if ( a2->hWindow )
            goto LABEL_35;
          goto LABEL_94;
        }
LABEL_33:
        v50 = a3;
        goto LABEL_34;
      }
    }
    else
    {
      if ( !v13 || v13 != *((_QWORD *)a5 + 2338) )
      {
        v70 = WdLogNewEntry5_WdAssertion(v20, v19, v22, v23);
        *(_QWORD *)(v70 + 24) = 7630LL;
        WdLogEvent5_WdAssertion(v70);
      }
      v24 = (_DWORD *)((char *)this + 24);
      v29 = 1008LL * a2->VidPnSourceId;
      v30 = *(_QWORD *)(*(_QWORD *)(v13 + 1976) + 112LL);
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)(v29 + v30 + 628);
    }
    *((_QWORD *)this + 5) = 0LL;
    goto LABEL_8;
  }
  *((_DWORD *)this + 1) |= 3u;
  *((_QWORD *)this + 6) = a2->hWindow;
  return 3223191558LL;
}
