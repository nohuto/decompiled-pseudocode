/*
 * XREFs of ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x180046364
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002FEE0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180029AE8 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x1800466E4 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180047420 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 */

__int64 __fastcall CWindowList::DesktopCreate(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE *a2)
{
  bool v4; // r14
  CWindowList *v5; // rcx
  int RootVisualForDesktop; // eax
  unsigned int v7; // ebx
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  CContactManager *v9; // rcx
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-78h]
  __int64 Buffer; // [rsp+30h] [rbp-68h] BYREF
  struct CVisual *v14; // [rsp+38h] [rbp-60h]
  __int128 v15; // [rsp+40h] [rbp-58h]
  __int128 v16; // [rsp+50h] [rbp-48h]
  __int64 v17; // [rsp+60h] [rbp-38h]
  char v18; // [rsp+68h] [rbp-30h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+A0h] [rbp+8h] BYREF

  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v18 = 0;
  v15 = 0LL;
  v4 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)this + 8)) == 0;
  Buffer = *(_QWORD *)((char *)a2 + 4);
  v14 = 0LL;
  v17 = -1LL;
  v16 = 0LL;
  RootVisualForDesktop = CWindowList::CreateRootVisualForDesktop(
                           v5,
                           (struct CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY *)&Buffer);
  v7 = RootVisualForDesktop;
  if ( RootVisualForDesktop < 0 )
  {
    v12 = 6106;
LABEL_9:
    v11 = RootVisualForDesktop;
LABEL_11:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, v12);
    goto LABEL_6;
  }
  RootVisualForDesktop = VisualCollection::InsertRelative(
                           (VisualCollection *)(*((_QWORD *)this + 10) + 32LL),
                           v14,
                           0LL,
                           0,
                           1);
  v7 = RootVisualForDesktop;
  if ( RootVisualForDesktop < 0 )
  {
    v12 = 6107;
    goto LABEL_9;
  }
  if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer, 0x50u, 0LL) )
  {
    v7 = -2147024882;
    v12 = 6109;
    v11 = -2147024882;
    goto LABEL_11;
  }
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *(_QWORD *)((char *)a2 + 4));
  WindowListForDesktop->Blink = WindowListForDesktop;
  WindowListForDesktop->Flink = WindowListForDesktop;
  if ( v4 )
    CContactManager::ForceAtlasInitialize(v9, *(_QWORD *)((char *)a2 + 4));
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
  return v7;
}
