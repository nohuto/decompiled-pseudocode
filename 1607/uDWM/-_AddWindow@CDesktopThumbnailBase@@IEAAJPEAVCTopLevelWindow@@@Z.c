/*
 * XREFs of ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180097C9C
 * Callers:
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x18009805C (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180020E2C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopThumbnailBase::_AddWindow(
        CDesktopThumbnailBase *this,
        struct CTopLevelWindow *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  unsigned int v7; // edi
  CBaseObject *v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edx
  int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF
  CBaseObject *v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = 0LL;
  v6 = CTopLevelWindow::CloneVisualTreeForLivePreview(a2, 0, 0, a4, &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x71u);
    v8 = v15;
    goto LABEL_8;
  }
  v8 = v15;
  v9 = (_QWORD *)((char *)this + 264);
  v10 = *((unsigned int *)this + 72);
  *((_QWORD *)&v14 + 1) = v15;
  *(_QWORD *)&v14 = a2;
  v11 = v10 + 1;
  if ( (int)v10 + 1 < (unsigned int)v10 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_8;
  }
  if ( v11 <= *((_DWORD *)this + 71) )
  {
    *(_OWORD *)(*v9 + 16 * v10) = v14;
    *((_DWORD *)this + 72) = v11;
LABEL_7:
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
    v8 = v15;
    VisualCollection::InsertRelative((CDesktopThumbnailBase *)((char *)this + 32), v15, 0LL, 0, 1);
    goto LABEL_8;
  }
  v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v9, 0x10u, 1, &v14);
  if ( v13 >= 0 )
    goto LABEL_7;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0xC0u);
LABEL_8:
  if ( v8 )
    CBaseObject::Release(v8);
  return v7;
}
