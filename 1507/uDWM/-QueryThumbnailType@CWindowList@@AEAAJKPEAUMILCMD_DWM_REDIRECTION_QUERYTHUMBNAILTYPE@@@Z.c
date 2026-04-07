/*
 * XREFs of ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x1800793F8
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F800 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x180013A34 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x180029BB4 (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?GetThumbnailType@CSecondaryWindowRepresentation@@QEBA?AW4THUMBNAIL_TYPE@@XZ @ 0x180033580 (-GetThumbnailType@CSecondaryWindowRepresentation@@QEBA-AW4THUMBNAIL_TYPE@@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::QueryThumbnailType(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE *a3)
{
  struct CThumbnailData *ThumbnailData; // rax
  struct CThumbnailData *v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  struct CSecondaryWindowRepresentation *v13; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  v7 = ThumbnailData;
  if ( ThumbnailData && a2 == *((_DWORD *)a3 + 2) && !*((_BYTE *)ThumbnailData + 34) )
  {
    v8 = *(_QWORD *)ThumbnailData;
    v13 = 0LL;
    v9 = (*(__int64 (__fastcall **)(struct CThumbnailData *))(v8 + 8))(ThumbnailData);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(*((CThumbnailVisual **)v7 + 11), &v13);
      v10 = v11;
      if ( v11 >= 0 )
        *((_DWORD *)a3 + 3) = CSecondaryWindowRepresentation::GetThumbnailType((__int64)v13);
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0xE50u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0xE4Fu);
    }
  }
  else
  {
    v10 = -2147024809;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v10;
}
