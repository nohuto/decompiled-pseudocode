/*
 * XREFs of ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x180080EDC
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032890 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001956C (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x18002CD44 (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::QueryThumbnailSourceSize(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE *a3)
{
  struct CThumbnailData *ThumbnailData; // rax
  struct CThumbnailData *v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // r8d
  int v13; // ecx
  int v15; // [rsp+34h] [rbp-24h]
  int v16; // [rsp+3Ch] [rbp-1Ch]
  struct CSecondaryWindowRepresentation *v17; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+78h] [rbp+20h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  v7 = ThumbnailData;
  if ( ThumbnailData && a2 == *((_DWORD *)a3 + 2) && !*((_BYTE *)ThumbnailData + 34) )
  {
    v8 = *(_QWORD *)ThumbnailData;
    v17 = 0LL;
    v9 = (*(__int64 (__fastcall **)(struct CThumbnailData *))(v8 + 8))(ThumbnailData);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(*((CThumbnailVisual **)v7 + 11), &v17);
      v10 = v11;
      if ( v11 >= 0 )
      {
        v15 = *((_DWORD *)v17 + 24);
        v16 = *((_DWORD *)v17 + 21) - *((_DWORD *)v17 + 25);
        v12 = *((_DWORD *)v17 + 20) - *((_DWORD *)v17 + 23) - *((_DWORD *)v17 + 22);
        if ( v12 < 0 )
          v12 = 0;
        v13 = *((_DWORD *)v17 + 21) - *((_DWORD *)v17 + 25) - v15;
        *((_DWORD *)a3 + 3) = v12;
        if ( v16 - v15 < 0 )
          v13 = 0;
        *((_DWORD *)a3 + 4) = v13;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0xDF8u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0xDF7u);
    }
  }
  else
  {
    v10 = -2147024809;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v10;
}
