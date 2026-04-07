/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180018B48
 * Callers:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180017AFC (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180017C5C (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180017DC4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x18001886C (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x180030D80 (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003401C (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Remove@?$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowRepresentation@@@Z @ 0x180034FBC (-Remove@-$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowReprese.c)
 *     EtwppTemplate_qqd @ 0x18007A6EC (EtwppTemplate_qqd.c)
 */

void __fastcall CWindowData::RemoveSecondaryWindowRepresentation(
        __int64 a1,
        CSecondaryWindowRepresentation *a2,
        int a3,
        char a4)
{
  int v7; // edi
  __int64 v8; // rdi
  char *v9; // rdx
  CSecondaryWindowRepresentation *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  if ( a4 )
  {
    if ( dword_1800B9564
      && (unsigned __int8)(byte_1800B9568 - 1) > 2u
      && (qword_1800B9550 & 0x8000000000000001uLL) != 0
      && (qword_1800B9558 & 0x8000000000000001uLL) == qword_1800B9558 )
    {
      EtwppTemplate_qqd(a1, 1, (_DWORD)a2, *(_QWORD *)(a1 + 40), a3);
    }
    DynArray<CSecondaryWindowRepresentation *,0>::Remove(a1 + 400, &v10);
  }
  v7 = a3 - 1;
  if ( v7 )
  {
    if ( v7 == 2
      && !CWindowData::IsImmersiveWindow((CWindowData *)a1)
      && !(unsigned int)CBaseObject::Release(*(CBaseObject **)(a1 + 392)) )
    {
      CIconicBitmapRegistry::IconicRepresentationDestroyed(
        *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
        (struct CWindowData *)a1);
      *(_QWORD *)(a1 + 392) = 0LL;
    }
  }
  else
  {
    --*(_DWORD *)(a1 + 432);
    LODWORD(v8) = *(_DWORD *)(a1 + 536);
    while ( (_DWORD)v8 )
    {
      v8 = (unsigned int)(v8 - 1);
      v9 = *(char **)(*(_QWORD *)(a1 + 512) + 8 * v8);
      if ( v9[553] < 0 )
        CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(a2, (struct CWindowData *)v9, 0);
    }
    if ( !*(_DWORD *)(a1 + 432) )
      CWindowData::TrackOwnedWindows((CWindowData *)a1, 0);
  }
}
