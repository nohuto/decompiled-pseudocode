/*
 * XREFs of ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C016A770
 * Callers:
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C009656C (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C0143A3C (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006BF4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C0007044 (-VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_.c)
 *     ?VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C00070E4 (-VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REG.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0093988 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x1C0143CC0 (-IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z.c)
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C0148244 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C0183674 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UpdateDodFrontBuffer(ADAPTER_RENDER **this, struct DXGALLOCATION *a2)
{
  unsigned int v4; // edx
  _QWORD *v5; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v18; // rcx
  __m128i v19; // xmm0
  __int128 v20; // xmm1
  D3DDDIFORMAT Format; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  LONG v26; // eax
  _QWORD *v27; // rax
  struct _VIDMM_REGION *v28; // [rsp+30h] [rbp-D0h]
  struct _DXGKARG_DESCRIBEALLOCATION v29; // [rsp+40h] [rbp-C0h] BYREF
  struct _DXGKARG_PRESENT_DISPLAYONLY v30; // [rsp+70h] [rbp-90h] BYREF
  __m128i v31; // [rsp+B0h] [rbp-50h]
  __int128 v32; // [rsp+C0h] [rbp-40h]
  _DWORD v33[20]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v34; // [rsp+140h] [rbp+40h] BYREF

  v4 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v4 & 0x10) != 0 )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdEvent(this);
    v5[3] = -1071775482LL;
    v5[4] = this;
    v5[5] = a2;
    WdLogEvent5_WdEvent(v5);
    return 3223191814LL;
  }
  if ( !DXGDEVICE::IsVSyncAvailable((DXGDEVICE *)this, (v4 >> 6) & 0xF) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdEvent(v7);
    v8[3] = 0LL;
    v8[4] = this;
    v8[5] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdEvent(v8);
    return 0LL;
  }
  memset(v33, 0, sizeof(v33));
  DxgkpGetDodPrimaryInfo((struct DXGDEVICE *)this, a2, (struct _D3DKMT_KMDOD_ESCAPE *)v33);
  if ( !v33[8] )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v11 = -1073741811LL;
LABEL_7:
    v10[3] = v11;
    v10[4] = this;
    v10[5] = a2;
    v12 = *((unsigned int *)a2 + 4);
LABEL_8:
    v10[6] = v12;
LABEL_9:
    WdLogEvent5_WdError(v10);
    return (unsigned int)v11;
  }
  memset(&v29, 0, sizeof(v29));
  v13 = *((_QWORD *)a2 + 6);
  v29.Flags.Value |= 1u;
  v29.Rotation = -1;
  v29.hAllocation = *(HANDLE *)(v13 + 16);
  v15 = ADAPTER_RENDER::DdiDescribeAllocation(this[2], &v29, v14);
  v11 = v15;
  if ( v15 < 0 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v10[3] = v11;
    v10[4] = this;
    v10[5] = a2;
    v10[6] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    v10[7] = *((unsigned int *)a2 + 4);
    goto LABEL_9;
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *((DXGADAPTER ***)this[357] + 266),
                      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
  v19 = *(__m128i *)DisplayModeInfo;
  v20 = *((_OWORD *)DisplayModeInfo + 1);
  LODWORD(DisplayModeInfo) = _mm_cvtsi128_si32(*(__m128i *)DisplayModeInfo);
  v31 = v19;
  v32 = v20;
  if ( *(_QWORD *)&v29.Width == __PAIR64__(v19.m128i_u32[1], (unsigned int)DisplayModeInfo) )
  {
    v18 = 22LL;
    Format = D3DDDIFMT_X8R8G8B8;
    if ( v29.Format != D3DDDIFMT_A8R8G8B8 )
      Format = v29.Format;
    if ( v31.m128i_i32[2] != 21 )
      v18 = v31.m128i_u32[2];
    if ( Format == (_DWORD)v18 )
    {
      v30.VidPnSourceId = 0;
      memset(&v30.pSource, 0, 0x38uLL);
      v22 = VIDMM_EXPORT::VidMmBeginCPUAccess(
              *((VIDMM_EXPORT **)this[2] + 50),
              *((struct VIDMM_GLOBAL **)this[2] + 51),
              *((struct _VIDMM_MULTI_ALLOC **)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F,
              2u,
              0,
              v28,
              &v30.pSource);
      v11 = v22;
      if ( v22 < 0 )
      {
        v10 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        goto LABEL_7;
      }
      v24 = *((_QWORD *)a2 + 6);
      v34 = 0LL;
      v25 = (*(_DWORD *)(v24 + 4) >> 6) & 0xF;
      v30.VidPnSourceId = (*(_DWORD *)(v24 + 4) >> 6) & 0xF;
      if ( (unsigned int)(v29.Format - 21) > 1 )
      {
        v10 = (_QWORD *)WdLogNewEntry5_WdError(v25);
        LODWORD(v11) = -1073741811;
        v10[3] = -1073741811LL;
        v10[4] = this;
        v10[5] = a2;
        v12 = v29.Format;
        goto LABEL_8;
      }
      v30.BytesPerPixel = 4;
      if ( HIDWORD(v32) != 1 )
      {
        if ( HIDWORD(v32) == 2 )
        {
LABEL_26:
          *((_QWORD *)&v34 + 1) = __PAIR64__(v29.Width, v29.Height);
          v26 = v33[9];
LABEL_28:
          v30.Pitch = v26;
          goto LABEL_29;
        }
        if ( HIDWORD(v32) != 3 )
        {
          if ( HIDWORD(v32) != 4 )
          {
LABEL_29:
            if ( HIDWORD(v32) != 1 )
              v30.Flags.Value |= 1u;
            v30.NumDirtyRects = 1;
            v30.pDirtyRect = (RECT *)&v34;
            LODWORD(v11) = ADAPTER_DISPLAY::PresentDisplayOnlyCdd(*((ADAPTER_DISPLAY **)this[357] + 266), &v30);
            VIDMM_EXPORT::VidMmEndCPUAccess(
              *((VIDMM_EXPORT **)this[2] + 50),
              *((struct VIDMM_GLOBAL **)this[2] + 51),
              *((struct _VIDMM_MULTI_ALLOC **)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F);
            return (unsigned int)v11;
          }
          goto LABEL_26;
        }
      }
      *((_QWORD *)&v34 + 1) = *(_QWORD *)&v29.Width;
      v26 = v33[8];
      goto LABEL_28;
    }
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdEvent(v18);
  v27[3] = -1071775482LL;
  v27[4] = this;
  v27[5] = a2;
  WdLogEvent5_WdEvent(v27);
  return 3223191557LL;
}
