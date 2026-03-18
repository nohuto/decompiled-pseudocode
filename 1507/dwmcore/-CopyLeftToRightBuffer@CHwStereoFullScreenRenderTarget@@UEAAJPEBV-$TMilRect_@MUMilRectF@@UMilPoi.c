/*
 * XREFs of ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18013F960
 * Callers:
 *     <none>
 * Callees:
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1800190F8 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180044294 (-RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180087A10 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 *     Template_x @ 0x18010D3A4 (Template_x.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180128B0C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 *     Template_dddd @ 0x180140058 (Template_dddd.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::CopyLeftToRightBuffer(_QWORD *a1, float *a2, struct tagPOINT a3)
{
  HRGN v3; // r12
  struct _RGNDATA *v4; // r14
  int v5; // esi
  HRGN v6; // rbx
  char *p_rect; // rdi
  DWORD nCount; // r15d
  __int64 v10; // r11
  __int64 v11; // rcx
  signed int LastError; // eax
  DWORD v13; // edx
  unsigned int v14; // ecx
  DWORD v15; // r8d
  signed int v16; // eax
  DWORD v17; // edx
  unsigned int v18; // ecx
  DWORD v19; // r8d
  int v20; // eax
  unsigned int *v21; // r8
  signed int v22; // eax
  int v23; // eax
  LONG x; // r14d
  _DWORD *v25; // rdi
  __int64 v26; // r12
  struct CD3DSurface *v27; // r9
  struct CD3DSurface *v28; // rdx
  CD3DDeviceLevel1 *v29; // rcx
  int v30; // edx
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  struct tagPOINT v35; // [rsp+30h] [rbp-40h] BYREF
  struct _RGNDATA *v36; // [rsp+38h] [rbp-38h] BYREF
  HRGN v37; // [rsp+40h] [rbp-30h]
  RECT rect; // [rsp+48h] [rbp-28h] BYREF
  RECT v39; // [rsp+58h] [rbp-18h] BYREF

  v3 = 0LL;
  v35 = a3;
  v4 = 0LL;
  v37 = 0LL;
  v5 = 0;
  v36 = 0LL;
  v6 = 0LL;
  p_rect = 0LL;
  nCount = 0;
  if ( !*((_BYTE *)a1 - 184) || !CHwDisplayRenderTarget::RectToSurfaceRect((__int64)(a1 - 46), a2, (__int64)&rect) )
    return (unsigned int)v5;
  if ( !CHwDisplayRenderTarget::RectToSurfaceRect(v10, *(float **)&v35, (__int64)&v39) )
  {
    p_rect = (char *)&rect;
    nCount = 1;
    goto LABEL_28;
  }
  SetLastError(0);
  v6 = CreateRectRgnIndirect(&rect);
  if ( !v6 )
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    if ( v5 >= 0 )
      v5 = CheckGUIHandleQuota(v14, v13, v15);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xDEu);
    return (unsigned int)v5;
  }
  SetLastError(0);
  v37 = CreateRectRgnIndirect(&v39);
  v3 = v37;
  if ( !v37 )
  {
    v16 = GetLastError();
    v5 = v16;
    if ( v16 > 0 )
      v5 = (unsigned __int16)v16 | 0x80070000;
    if ( v5 >= 0 )
      v5 = CheckGUIHandleQuota(v18, v17, v19);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xDFu);
    goto LABEL_38;
  }
  SetLastError(0);
  v20 = CombineRgn(v6, v6, v37, 4);
  if ( !v20 )
  {
    v22 = GetLastError();
    v5 = v22;
    if ( v22 > 0 )
      v5 = (unsigned __int16)v22 | 0x80070000;
    if ( v5 >= 0 )
      v5 = -2003304445;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xE4u);
    goto LABEL_38;
  }
  if ( v20 == 1 )
  {
LABEL_28:
    v35.x = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_x(v11, &EVTDESC_ETWGUID_STEREO_COPYLEFTTORIGHTBUFFEREVENT_Start, a1[5]);
    if ( nCount )
    {
      x = v35.x;
      v25 = p_rect + 4;
      v26 = nCount;
      do
      {
        v27 = (struct CD3DSurface *)a1[3];
        v28 = (struct CD3DSurface *)a1[2];
        v29 = (CD3DDeviceLevel1 *)*(a1 - 26);
        v35 = *(struct tagPOINT *)(v25 - 1);
        CD3DDeviceLevel1::CopySurfaceRect(v29, v28, (const struct tagRECT *)(v25 - 1), v27, &v35);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          Template_dddd(v31, v30, *(v25 - 1), *v25, v25[1], v25[2]);
        v32 = v25[2] - *v25;
        v33 = v25[1] - *(v25 - 1);
        v25 += 4;
        v11 = (unsigned int)(v33 * v32);
        x += v11;
        --v26;
      }
      while ( v26 );
      v3 = v37;
      v35.x = x;
      v4 = v36;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v11, &EVTDESC_ETWGUID_STEREO_COPYLEFTTORIGHTBUFFEREVENT_Stop, nCount, v35.x);
    goto LABEL_38;
  }
  v23 = HrgnToRgnData(v6, &v36, v21);
  v5 = v23;
  if ( v23 >= 0 )
  {
    v4 = v36;
    nCount = v36->rdh.nCount;
    p_rect = v36->Buffer;
    goto LABEL_28;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xE8u);
  v4 = v36;
LABEL_38:
  if ( v6 )
    DeleteObject(v6);
  if ( v3 )
    DeleteObject(v3);
  if ( v4 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v4);
  return (unsigned int)v5;
}
