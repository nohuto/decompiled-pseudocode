/*
 * XREFs of ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18017F510
 * Callers:
 *     <none>
 * Callees:
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x18001662C (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18008F978 (-RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18009BAEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180169220 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 *     Template_dddd @ 0x18017FC08 (Template_dddd.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::CopyLeftToRightBuffer(_QWORD *a1, float *a2, struct tagPOINT a3)
{
  HRGN v3; // r12
  struct _RGNDATA *v4; // rdi
  int v5; // ebx
  HRGN v6; // rsi
  char *p_rect; // r14
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
  LONG x; // edi
  _DWORD *v25; // r14
  __int64 v26; // r12
  struct CD3DSurface *v27; // r9
  struct CD3DSurface *v28; // rdx
  CD3DDeviceLevel1 *v29; // rcx
  int v30; // edx
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  unsigned int v35; // [rsp+20h] [rbp-50h]
  struct tagPOINT v36; // [rsp+30h] [rbp-40h] BYREF
  struct _RGNDATA *v37; // [rsp+38h] [rbp-38h] BYREF
  HRGN v38; // [rsp+40h] [rbp-30h]
  RECT rect; // [rsp+48h] [rbp-28h] BYREF
  RECT v40; // [rsp+58h] [rbp-18h] BYREF

  v3 = 0LL;
  v36 = a3;
  v4 = 0LL;
  v38 = 0LL;
  v5 = 0;
  v37 = 0LL;
  v6 = 0LL;
  p_rect = 0LL;
  nCount = 0;
  if ( !*((_BYTE *)a1 - 192) || !CHwDisplayRenderTarget::RectToSurfaceRect((__int64)(a1 - 48), a2, (__int64)&rect) )
    return (unsigned int)v5;
  if ( !CHwDisplayRenderTarget::RectToSurfaceRect(v10, *(float **)&v36, (__int64)&v40) )
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
  v38 = CreateRectRgnIndirect(&v40);
  v3 = v38;
  if ( v38 )
  {
    SetLastError(0);
    v20 = CombineRgn(v6, v6, v38, 4);
    if ( !v20 )
    {
      v22 = GetLastError();
      v5 = v22;
      if ( v22 > 0 )
        v5 = (unsigned __int16)v22 | 0x80070000;
      v35 = 228;
      if ( v5 >= 0 )
        v5 = -2003304445;
      goto LABEL_16;
    }
    if ( v20 != 1 )
    {
      v23 = HrgnToRgnData(v6, &v37, v21);
      v5 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xE8u);
        v4 = v37;
        goto LABEL_38;
      }
      v4 = v37;
      nCount = v37->rdh.nCount;
      p_rect = v37->Buffer;
    }
LABEL_28:
    v36.x = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_x(v11, &EVTDESC_ETWGUID_STEREO_COPYLEFTTORIGHTBUFFEREVENT_Start, a1[5]);
    if ( nCount )
    {
      x = v36.x;
      v25 = p_rect + 4;
      v26 = nCount;
      do
      {
        v27 = (struct CD3DSurface *)a1[3];
        v28 = (struct CD3DSurface *)a1[2];
        v29 = (CD3DDeviceLevel1 *)*(a1 - 25);
        v36 = *(struct tagPOINT *)(v25 - 1);
        CD3DDeviceLevel1::CopySurfaceRect(v29, v28, (const struct tagRECT *)(v25 - 1), v27, &v36);
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
      v3 = v38;
      v36.x = x;
      v4 = v37;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v11, &EVTDESC_ETWGUID_STEREO_COPYLEFTTORIGHTBUFFEREVENT_Stop, nCount, v36.x);
    goto LABEL_38;
  }
  v16 = GetLastError();
  v5 = v16;
  if ( v16 > 0 )
    v5 = (unsigned __int16)v16 | 0x80070000;
  if ( v5 >= 0 )
    v5 = CheckGUIHandleQuota(v18, v17, v19);
  v35 = 223;
LABEL_16:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v35);
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
