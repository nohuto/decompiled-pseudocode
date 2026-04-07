/*
 * XREFs of ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180080430
 * Callers:
 *     <none>
 * Callees:
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180006C68 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180033490 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18007FBB8 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x180097050 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800970C8 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x180097664 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x18009782C (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800978B8 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::DesktopThumbnailChange(
        CWindowList *this,
        struct IDwmWindow *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  unsigned int v10; // ebx
  volatile signed __int32 *v11; // rdi
  int SyncedWindowData; // eax
  struct CWindowData *v13; // rsi
  CTopLevelWindow *v14; // r15
  int DesktopThumbnail; // eax
  CBaseObject *v16; // r14
  CBaseObject *v17; // rcx
  int updated; // eax
  int PerMonitorDesktopThumbnail; // eax
  __int64 v20; // rax
  CBaseObject *v21; // rcx
  int v22; // eax
  struct CDesktopThumbnailCVI *v23; // rdx
  CDesktopThumbnailCVIVisual *v24; // rcx
  int v25; // eax
  int v26; // eax
  CBaseObject *v28; // [rsp+30h] [rbp-48h] BYREF
  CDesktopThumbnailCVIVisual *v29; // [rsp+38h] [rbp-40h] BYREF
  CBaseObject *v30; // [rsp+40h] [rbp-38h] BYREF
  struct CWindowData *v31; // [rsp+48h] [rbp-30h] BYREF
  struct tagRECT *v32; // [rsp+50h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+58h] [rbp-20h] BYREF
  struct tagRECT v34; // [rsp+60h] [rbp-18h] BYREF

  v32 = a3;
  v33 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v28 = 0LL;
  v10 = 0;
  v30 = 0LL;
  v11 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  if ( !a2 )
    goto LABEL_35;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v31);
  v10 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0xDBFu);
    goto LABEL_35;
  }
  v13 = v31;
  if ( !v31 )
    goto LABEL_35;
  v14 = (CTopLevelWindow *)*((_QWORD *)v31 + 48);
  if ( !v14 || *((_DWORD *)v31 + 28) == 1 )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0xDC9u);
    goto LABEL_35;
  }
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v28);
  v10 = DesktopThumbnail;
  if ( DesktopThumbnail < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, DesktopThumbnail, 0xDCDu);
LABEL_27:
    v16 = v28;
    goto LABEL_28;
  }
  v16 = v28;
  v17 = v28;
  *((_QWORD *)v28 + 37) = *((_QWORD *)v13 + 15);
  updated = CDesktopThumbnailBase::UpdateWindowClones(v17);
  v10 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xDCEu);
    goto LABEL_28;
  }
  v34 = *a4;
  PerMonitorDesktopThumbnail = CDesktopThumbnail::GetPerMonitorDesktopThumbnail(v16, &v34, &v30);
  v10 = PerMonitorDesktopThumbnail;
  if ( PerMonitorDesktopThumbnail >= 0 )
  {
    v20 = *((_QWORD *)v13 + 71);
    if ( v20 )
    {
      if ( (a6 & 0x200000) != 0 )
      {
        VisualCollection::Remove((VisualCollection *)(*(_QWORD *)(v20 + 24) + 32LL), *((struct CVisual **)v13 + 71));
        v21 = (CBaseObject *)*((_QWORD *)v13 + 71);
        if ( v21 )
        {
          CBaseObject::Release(v21);
          *((_QWORD *)v13 + 71) = 0LL;
        }
      }
      else
      {
        *(_DWORD *)(v20 + 324) = a6;
        CDesktopThumbnailCVIVisual::Update(*((CDesktopThumbnailCVIVisual **)v13 + 71), a3, (double)a5 / 255.0);
      }
      goto LABEL_28;
    }
    if ( (a6 & 0x200000) == 0 )
    {
      v22 = CDesktopThumbnailCVIVisual::Create(
              *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
              &v29);
      v10 = v22;
      if ( v22 >= 0 )
      {
        v11 = (volatile signed __int32 *)v29;
        v23 = v30;
        v24 = v29;
        *((_QWORD *)v29 + 37) = v13;
        *((_DWORD *)v24 + 81) = a6;
        *((_BYTE *)v24 + 321) = 0;
        v25 = CDesktopThumbnailCVIVisual::SetVisual(v24, v23, a4);
        v10 = v25;
        if ( v25 >= 0 )
        {
          CDesktopThumbnailCVIVisual::Update((CDesktopThumbnailCVIVisual *)v11, v32, (double)a5 / 255.0);
          v26 = CTopLevelWindow::OnThumbnailAdded(v14, (struct CVisual *)v11);
          v10 = v26;
          if ( v26 >= 0 )
          {
            *((_QWORD *)v13 + 71) = v11;
            _InterlockedIncrement(v11 + 2);
            v11 = (volatile signed __int32 *)v29;
            goto LABEL_27;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0xDEFu);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0xDECu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0xDE6u);
        v11 = (volatile signed __int32 *)v29;
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, PerMonitorDesktopThumbnail, 0xDCFu);
  }
LABEL_28:
  if ( v16 )
    CBaseObject::Release(v16);
  if ( v30 )
    CBaseObject::Release(v30);
  if ( v11 )
    CBaseObject::Release((CBaseObject *)v11);
LABEL_35:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v33);
  return v10;
}
