/*
 * XREFs of ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0146BF8
 * Callers:
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C006DF2C (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C0123C10 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     ?VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C000438C (-VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_.c)
 *     ?VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C000442C (-VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REG.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0007A48 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0069EE4 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x1C0123DB0 (-IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z.c)
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C012D5A8 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C015DD44 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UpdateDodFrontBuffer(
        ADAPTER_RENDER **this,
        struct DXGALLOCATION *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128i v27; // xmm0
  __int128 v28; // xmm1
  D3DDDIFORMAT Format; // eax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  LONG v34; // eax
  _QWORD *v35; // rax
  struct _VIDMM_REGION *v36; // [rsp+30h] [rbp-D0h]
  struct _DXGKARG_DESCRIBEALLOCATION v37; // [rsp+40h] [rbp-C0h] BYREF
  struct _DXGKARG_PRESENT_DISPLAYONLY v38; // [rsp+70h] [rbp-90h] BYREF
  __m128i v39; // [rsp+B0h] [rbp-50h]
  __int128 v40; // [rsp+C0h] [rbp-40h]
  _DWORD v41[20]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v42; // [rsp+140h] [rbp+40h] BYREF

  v6 = *(unsigned int *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v6 & 0x10) != 0 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdEvent(this, v6, a3, a4);
    v7[3] = -1071775482LL;
    v7[4] = this;
    v7[5] = a2;
    WdLogEvent5_WdEvent(v7);
    return 3223191814LL;
  }
  if ( !DXGDEVICE::IsVSyncAvailable((DXGDEVICE *)this, ((unsigned int)v6 >> 6) & 0xF) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, v9, v11, v12);
    v13[3] = 0LL;
    v13[4] = this;
    v13[5] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdEvent(v13);
    return 0LL;
  }
  memset(v41, 0, sizeof(v41));
  DxgkpGetDodPrimaryInfo((struct DXGDEVICE *)this, a2, (struct _D3DKMT_KMDOD_ESCAPE *)v41);
  if ( !v41[8] )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v17 = -1073741811LL;
LABEL_7:
    v16[3] = v17;
    v16[4] = this;
    v16[5] = a2;
    v18 = *((unsigned int *)a2 + 4);
LABEL_8:
    v16[6] = v18;
LABEL_9:
    WdLogEvent5_WdError(v16);
    return (unsigned int)v17;
  }
  memset(&v37, 0, sizeof(v37));
  v19 = *((_QWORD *)a2 + 6);
  v37.Flags.Value |= 1u;
  v37.Rotation = -1;
  v37.hAllocation = *(HANDLE *)(v19 + 16);
  v20 = ADAPTER_RENDER::DdiDescribeAllocation(this[2], &v37, v15);
  v17 = v20;
  if ( v20 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v16[3] = v17;
    v16[4] = this;
    v16[5] = a2;
    v16[6] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    v16[7] = *((unsigned int *)a2 + 4);
    goto LABEL_9;
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *((DXGADAPTER ***)this[354] + 248),
                      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
  v27 = *(__m128i *)DisplayModeInfo;
  v28 = *((_OWORD *)DisplayModeInfo + 1);
  LODWORD(DisplayModeInfo) = _mm_cvtsi128_si32(*(__m128i *)DisplayModeInfo);
  v39 = v27;
  v40 = v28;
  if ( *(_QWORD *)&v37.Width == __PAIR64__(v27.m128i_u32[1], (unsigned int)DisplayModeInfo) )
  {
    v24 = 22LL;
    Format = D3DDDIFMT_X8R8G8B8;
    if ( v37.Format != D3DDDIFMT_A8R8G8B8 )
      Format = v37.Format;
    if ( v39.m128i_i32[2] != 21 )
      v24 = v39.m128i_u32[2];
    if ( Format == (_DWORD)v24 )
    {
      v38.VidPnSourceId = 0;
      memset(&v38.pSource, 0, 0x38uLL);
      v30 = VIDMM_EXPORT::VidMmBeginCPUAccess(
              *((VIDMM_EXPORT **)this[2] + 53),
              *((struct VIDMM_GLOBAL **)this[2] + 54),
              *((struct _VIDMM_MULTI_ALLOC **)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F,
              2u,
              0,
              v36,
              &v38.pSource);
      v17 = v30;
      if ( v30 < 0 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v31);
        goto LABEL_7;
      }
      v32 = *((_QWORD *)a2 + 6);
      v42 = 0LL;
      v33 = (*(_DWORD *)(v32 + 4) >> 6) & 0xF;
      v38.VidPnSourceId = (*(_DWORD *)(v32 + 4) >> 6) & 0xF;
      if ( (unsigned int)(v37.Format - 21) > 1 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v33);
        LODWORD(v17) = -1073741811;
        v16[3] = -1073741811LL;
        v16[4] = this;
        v16[5] = a2;
        v18 = v37.Format;
        goto LABEL_8;
      }
      v38.BytesPerPixel = 4;
      if ( HIDWORD(v40) != 1 )
      {
        if ( HIDWORD(v40) == 2 )
        {
LABEL_26:
          *((_QWORD *)&v42 + 1) = __PAIR64__(v37.Width, v37.Height);
          v34 = v41[9];
LABEL_28:
          v38.Pitch = v34;
          goto LABEL_29;
        }
        if ( HIDWORD(v40) != 3 )
        {
          if ( HIDWORD(v40) != 4 )
          {
LABEL_29:
            if ( HIDWORD(v40) != 1 )
              v38.Flags.Value |= 1u;
            v38.NumDirtyRects = 1;
            v38.pDirtyRect = (RECT *)&v42;
            LODWORD(v17) = ADAPTER_DISPLAY::PresentDisplayOnlyCdd(*((ADAPTER_DISPLAY **)this[354] + 248), &v38);
            VIDMM_EXPORT::VidMmEndCPUAccess(
              *((VIDMM_EXPORT **)this[2] + 53),
              *((struct VIDMM_GLOBAL **)this[2] + 54),
              *((struct _VIDMM_MULTI_ALLOC **)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F);
            return (unsigned int)v17;
          }
          goto LABEL_26;
        }
      }
      *((_QWORD *)&v42 + 1) = *(_QWORD *)&v37.Width;
      v34 = v41[8];
      goto LABEL_28;
    }
  }
  v35 = (_QWORD *)WdLogNewEntry5_WdEvent(v24, v23, v25, v26);
  v35[3] = -1071775482LL;
  v35[4] = this;
  v35[5] = a2;
  WdLogEvent5_WdEvent(v35);
  return 3223191557LL;
}
