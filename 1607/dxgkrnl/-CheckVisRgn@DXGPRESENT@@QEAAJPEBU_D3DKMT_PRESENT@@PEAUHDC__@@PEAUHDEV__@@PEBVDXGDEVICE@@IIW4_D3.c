/*
 * XREFs of ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00DC1A0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00069EC (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006A38 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006BF4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C001CE68 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C008698C (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C0087BB8 (-IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z.c)
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C00DBD30 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00DC5B8 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C014805C (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C01703E0 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 */

__int64 __fastcall DXGPRESENT::CheckVisRgn(
        struct tagRECT *this,
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
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // edi
  LONG *p_right; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rsi
  unsigned int v26; // edi
  __int64 v27; // rcx
  unsigned int v28; // edx
  __int64 v29; // rdi
  __int64 v30; // rcx
  unsigned int v31; // r9d
  unsigned int v32; // r8d
  __int64 v33; // rdx
  __int64 v34; // rcx
  char v35; // di
  int IsWindowVisible; // eax
  unsigned int v37; // edx
  __int64 v38; // rcx
  HDC v39; // r12
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // r8
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // edx
  unsigned int v44; // eax
  __int64 v45; // rcx
  unsigned __int64 v46; // rsi
  void *v47; // rcx
  SIZE_T v48; // rdx
  PVOID PoolWithTag; // r8
  __int64 v50; // rcx
  unsigned int v51; // r14d
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  const struct tagRECT *ContentRect; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rax
  LONG top; // r8d
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v67; // ecx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  int v73; // [rsp+30h] [rbp-58h] BYREF
  int v74; // [rsp+34h] [rbp-54h] BYREF
  struct tagRECT v75; // [rsp+38h] [rbp-50h] BYREF
  int v78; // [rsp+B0h] [rbp+28h]

  v12 = 0;
  v13 = *((_QWORD *)a5 + 357);
  v14 = *(_QWORD *)(*((_QWORD *)a5 + 5) + 72LL);
  if ( !(*(unsigned int (**)(void))(v14 + 208))() )
  {
    this->top |= 3u;
    *(_QWORD *)&this[3].left = a2->hWindow;
    v53 = WdLogNewEntry5_WdEvent(v15);
    *(_QWORD *)(v53 + 24) = -1071775737LL;
    WdLogEvent5_WdEvent(v53);
    return 3223191559LL;
  }
  v78 = (*(__int64 (__fastcall **)(int *))(v14 + 224))(&v73);
  v17 = (*(__int64 (__fastcall **)(int *))(v14 + 312))(&v74);
  if ( !v78 || (v13 = 0LL, v73) )
  {
    if ( (a2->Flags.Value & 0x100) != 0 && !v13 )
    {
      this->top |= 3u;
      *(_QWORD *)&this[3].left = a2->hWindow;
      v54 = WdLogNewEntry5_WdEvent(v16);
      *(_QWORD *)(v54 + 24) = -1071775737LL;
      WdLogEvent5_WdEvent(v54);
      return 3223191559LL;
    }
    this->top &= 0xFFFFFF7C;
    if ( a2->hWindow || (a2->Flags.Value & 0x100) == 0 )
    {
      p_right = &this[1].right;
      if ( !(*(unsigned int (__fastcall **)(HDC, LONG *))(v14 + 72))(a3, &this[1].right) )
      {
        v56 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
        *(_QWORD *)(v56 + 24) = this;
        *(_QWORD *)(v56 + 32) = a2->hWindow;
        WdLogEvent5_WdWarning(v56);
        return 3221225485LL;
      }
      if ( (*(unsigned int (__fastcall **)(HDC, LONG *))(v14 + 328))(a3, &this[2].right) )
      {
LABEL_8:
        if ( *p_right >= this[2].left || this[1].bottom >= this[2].top )
        {
          this->top |= 3u;
          v72 = (_QWORD *)WdLogNewEntry5_WdEvent(v23);
          v72[3] = -1071775738LL;
          v72[4] = this;
          v72[5] = a2->VidPnSourceId;
          WdLogEvent5_WdEvent(v72);
          return 3223191558LL;
        }
        this[4].left = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 376LL) + 8LL)
                                                         + 440LL))(*(_QWORD *)(*((_QWORD *)a5 + 2) + 384LL));
        if ( (!v13 || !v17 && ADAPTER_DISPLAY::IsInVirtualMode(*(ADAPTER_DISPLAY **)(v13 + 2128), a2->VidPnSourceId))
          && (a2->Flags.Value & 0x10000) == 0 )
        {
          if ( !v78 || !v17 || v74 )
          {
            this->top |= 0x10u;
            *(_QWORD *)&this[3].left = a2->hWindow;
            v57 = WdLogNewEntry5_WdEvent(v24);
            *(_QWORD *)(v57 + 24) = a5;
            WdLogEvent5_WdEvent(v57);
            return 0LL;
          }
          return 3223192386LL;
        }
        if ( v13 )
        {
          v25 = *(_QWORD *)(v13 + 2128);
          v26 = 0;
          if ( *(_DWORD *)(v25 + 80) )
          {
            while ( 1 )
            {
              v27 = *(_QWORD *)(v25 + 16);
              if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v27 + 160)
                && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v27 + 144)) )
              {
                v58 = WdLogNewEntry5_WdAssertion(v27);
                *(_QWORD *)(v58 + 24) = 4248LL;
                WdLogEvent5_WdAssertion(v58);
              }
              if ( v26 >= *(_DWORD *)(v25 + 80) )
              {
                v59 = WdLogNewEntry5_WdAssertion(v27);
                *(_QWORD *)(v59 + 24) = 4249LL;
                WdLogEvent5_WdAssertion(v59);
              }
              v28 = *(_DWORD *)(v25 + 80);
              if ( v26 < v28 && a5 == *(const struct DXGDEVICE **)(1016LL * v26 + *(_QWORD *)(v25 + 112) + 672) )
                break;
              if ( ++v26 >= v28 )
                goto LABEL_22;
            }
            v12 = 0;
          }
          else
          {
LABEL_22:
            v29 = *(_QWORD *)(v13 + 2128);
            v30 = *(_QWORD *)(v29 + 16);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v30 + 160) )
              ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v30 + 144));
            v31 = *(_DWORD *)(v29 + 80);
            v12 = 0;
            v32 = 0;
            if ( v31 )
            {
              v33 = *(_QWORD *)(v29 + 112);
              while ( 1 )
              {
                v34 = 1016LL * v32;
                if ( *(_QWORD *)(v34 + v33 + 672) )
                {
                  if ( *(_DWORD *)(v34 + v33 + 680) == 1 )
                    break;
                }
                if ( ++v32 >= v31 )
                  goto LABEL_75;
              }
              v35 = 1;
            }
            else
            {
LABEL_75:
              v35 = 0;
            }
            v75.left = this[2].right + *p_right;
            v75.right = this[2].right + this[2].left;
            v75.top = this[2].bottom + this[1].bottom;
            v75.bottom = this[2].bottom + this[2].top;
            IsWindowVisible = ADAPTER_DISPLAY::IsWindowVisible(*(ADAPTER_DISPLAY **)(v13 + 2128), &v75);
            if ( IsWindowVisible == -1073741823 )
            {
              if ( (*((_DWORD *)a5 + 76) || ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v13 + 2128)))
                && !DXGDEVICE::AllowLegacyPresent(a5, v37) )
              {
                this->top |= 3u;
                *(_QWORD *)&this[3].left = a2->hWindow;
                v60 = (_QWORD *)WdLogNewEntry5_WdEvent(v38);
                v60[3] = -1071775738LL;
                v60[4] = this;
                v60[5] = a2->hSource;
                v60[6] = a2->Flags.Value;
                v60[7] = a2->VidPnSourceId;
                WdLogEvent5_WdEvent(v60);
                if ( !*((_DWORD *)a5 + 76) && v35 )
                  this->top |= 0x80u;
                return 3223191558LL;
              }
            }
            else if ( IsWindowVisible == 261 && (a2->Flags.Value & 0x100) == 0 && a9 )
            {
              v61 = (_QWORD *)WdLogNewEntry5_WdEvent(v38);
              v61[3] = 261LL;
              v61[4] = this;
              v61[5] = a2->hSource;
              v61[6] = a2->Flags.Value;
              v61[7] = a2->VidPnSourceId;
              WdLogEvent5_WdEvent(v61);
              return 261LL;
            }
            if ( v35 )
            {
              if ( (a2->Flags.Value & 0x10000) != 0 )
                goto LABEL_33;
              if ( !v78 )
              {
                v62 = (_QWORD *)WdLogNewEntry5_WdEvent(v38);
                v62[3] = -1071774910LL;
                v62[4] = this;
                v62[5] = a2->hSource;
                v62[6] = a2->Flags.Value;
                v62[7] = a2->VidPnSourceId;
                WdLogEvent5_WdEvent(v62);
                return 3223192386LL;
              }
            }
          }
        }
        if ( (a2->Flags.Value & 0x10000) == 0 )
        {
          v39 = a3;
          if ( !a2->hWindow )
          {
LABEL_95:
            if ( (a2->Flags.Value & 0x100) != 0 )
            {
              ContentRect = ADAPTER_DISPLAY::GetContentRect(*(DXGADAPTER ***)(v13 + 2128), a2->VidPnSourceId);
              v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v14 + 80))(
                      (unsigned int)ContentRect->left,
                      (unsigned int)ContentRect->top,
                      (unsigned int)ContentRect->right,
                      (unsigned int)ContentRect->bottom);
              goto LABEL_39;
            }
LABEL_35:
            v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v14 + 80))(0LL, 0LL, 0LL, 0LL);
            if ( !v41 )
              goto LABEL_123;
            if ( (a2->Flags.Value & 0x10000) != 0 )
              v42 = 5LL;
            else
              v42 = 4LL;
            if ( (*(unsigned int (__fastcall **)(HDC, __int64, __int64))(v14 + 88))(v39, v41, v42) == -1 )
            {
              (*(void (__fastcall **)(__int64))(v14 + 128))(v41);
              v65 = (_QWORD *)WdLogNewEntry5_WdLowResource(v64);
              v65[3] = this;
              v65[4] = a2->hWindow;
              v65[5] = v39;
              v65[6] = a4;
              v65[7] = a2->Flags.Value;
              WdLogEvent5_WdLowResource(v65);
              return 3221225495LL;
            }
LABEL_39:
            if ( v41 )
            {
              Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
              if ( (*(_DWORD *)&Value & 0x10000) != 0 )
              {
                if ( a2->hDestination )
                  this->top &= ~0x10u;
                else
                  this->top |= 0x10u;
              }
              else
              {
                top = this->top;
                if ( (top & 0x20) != 0 )
                {
                  this->top = top | 0x10;
                }
                else if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 16LL) + 300LL) & 0x10) != 0
                       && (*(_BYTE *)&Value & 3) != 0 )
                {
                  this->top = top | 0x10;
                }
                else
                {
                  this->top ^= (this->top ^ (16
                                           * (*(__int64 (__fastcall **)(__int64, HDEV, HWND, __int64))(v14 + 136))(
                                               v13,
                                               a4,
                                               a2->hWindow,
                                               v41))) & 0x10;
                }
              }
              if ( (((this->top & 0x10) != 0) & _bittest((const signed __int32 *)&a2->Flags, 8u)) != 0
                && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v13 + 2128), a5, a2->VidPnSourceId)
                && *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v13 + 2128), a2->VidPnSourceId) + 2) == 41 )
              {
                if ( (v67 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
                      (*(_BYTE *)&v67 & 1) != 0)
                  && (a8 == D3DDDIFMT_P8 || a8 == D3DDDIFMT_A8)
                  || (*(_BYTE *)&v67 & 2) != 0 && !a2->hWindow )
                {
                  this->top &= ~0x10u;
                }
              }
              if ( (this->top & 0x10) != 0 )
                goto LABEL_56;
              v44 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v14 + 112))(v41, 0LL, 0LL);
              v46 = v44;
              if ( !v44 )
              {
                v68 = WdLogNewEntry5_WdError(v45);
                *(_QWORD *)(v68 + 24) = this;
                *(_QWORD *)(v68 + 32) = v41;
                WdLogEvent5_WdError(v68);
LABEL_118:
                (*(void (__fastcall **)(__int64))(v14 + 128))(v41);
                return 3221225495LL;
              }
              v47 = *(void **)&this[1].left;
              if ( v47 )
                ExFreePoolWithTag(v47, 0);
              v48 = v46;
              if ( (_DWORD)v46 )
              {
                if ( v46 > 0x7FFFFFFF )
                {
                  PoolWithTag = 0LL;
                  goto LABEL_51;
                }
              }
              else
              {
                v48 = 1LL;
              }
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, v48, 0x4B677844u);
LABEL_51:
              *(_QWORD *)&this[1].left = PoolWithTag;
              if ( PoolWithTag )
              {
                v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v14 + 112))(v41, (unsigned int)v46);
                if ( v51 > (unsigned int)v46 )
                {
                  v70 = WdLogNewEntry5_WdAssertion(v50);
                  *(_QWORD *)(v70 + 24) = 8484LL;
                  WdLogEvent5_WdAssertion(v70);
                }
                this->top |= 2u;
                if ( v51 <= 0x20 )
                {
                  if ( (unsigned int)DXGPRESENT::ComputeSrcDstRects((DXGPRESENT *)this, a2, a6, a7) )
                    (*(void (__fastcall **)(HDC, struct tagRECT *))(v14 + 248))(v39, this + 8);
                  v12 = 0;
                }
                else
                {
                  v12 = DXGPRESENT::CombineRectList(this, a2, v39, a5, a6, a7);
                }
LABEL_56:
                (*(void (__fastcall **)(__int64))(v14 + 128))(v41);
                *(_QWORD *)&this[3].left = a2->hWindow;
                return v12;
              }
              v69 = WdLogNewEntry5_WdLowResource(v47);
              *(_QWORD *)(v69 + 24) = this;
              *(_QWORD *)(v69 + 32) = v46;
              WdLogEvent5_WdLowResource(v69);
              goto LABEL_118;
            }
LABEL_123:
            v71 = (_QWORD *)WdLogNewEntry5_WdLowResource(v40);
            v71[3] = this;
            v71[4] = a2->hWindow;
            v71[5] = v39;
            v71[6] = a4;
            v71[7] = a2->Flags.Value;
            WdLogEvent5_WdLowResource(v71);
            return 3221225495LL;
          }
          if ( (*(unsigned int (__fastcall **)(HDC))(v14 + 56))(a3)
            && (!v13 || !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v13 + 2128), a5)) )
          {
            this->top |= 0x10u;
            *(_QWORD *)&this[3].left = a2->hWindow;
            return 0LL;
          }
LABEL_34:
          if ( a2->hWindow )
            goto LABEL_35;
          goto LABEL_95;
        }
LABEL_33:
        v39 = a3;
        goto LABEL_34;
      }
    }
    else
    {
      if ( !v13 || v13 != *((_QWORD *)a5 + 357) )
      {
        v55 = WdLogNewEntry5_WdAssertion(v16);
        *(_QWORD *)(v55 + 24) = 8159LL;
        WdLogEvent5_WdAssertion(v55);
      }
      p_right = &this[1].right;
      *(struct tagRECT *)((char *)this + 24) = *ADAPTER_DISPLAY::GetContentRect(
                                                  *(DXGADAPTER ***)(v13 + 2128),
                                                  a2->VidPnSourceId);
    }
    *(_QWORD *)&this[2].right = 0LL;
    goto LABEL_8;
  }
  this->top |= 3u;
  *(_QWORD *)&this[3].left = a2->hWindow;
  return 3223191558LL;
}
