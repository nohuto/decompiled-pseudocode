/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001E3D0
 * Callers:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001D318 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18001D478 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 * Callees:
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x180017048 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Remove@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z @ 0x180017FD8 (-Remove@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x18001E0EC (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18003CCD0 (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     EtwppTemplate_qqd @ 0x18008219C (EtwppTemplate_qqd.c)
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
    if ( dword_1800BB564
      && (unsigned __int8)(byte_1800BB568 - 1) > 2u
      && (qword_1800BB550 & 0x8000000000000001uLL) != 0
      && (qword_1800BB558 & 0x8000000000000001uLL) == qword_1800BB558 )
    {
      EtwppTemplate_qqd(a1, 1, (_DWORD)a2, *(_QWORD *)(a1 + 40), a3);
    }
    DynArray<CAnimationComponent *,0>::Remove((__int64 *)(a1 + 416), (__int64 *)&v10);
  }
  v7 = a3 - 1;
  if ( v7 )
  {
    if ( v7 == 2
      && !CWindowData::IsImmersiveWindow((CWindowData *)a1)
      && !(unsigned int)CBaseObject::Release(*(CBaseObject **)(a1 + 408)) )
    {
      CIconicBitmapRegistry::IconicRepresentationDestroyed(
        *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
        (struct CWindowData *)a1);
      *(_QWORD *)(a1 + 408) = 0LL;
    }
  }
  else
  {
    --*(_DWORD *)(a1 + 448);
    LODWORD(v8) = *(_DWORD *)(a1 + 552);
    while ( (_DWORD)v8 )
    {
      v8 = (unsigned int)(v8 - 1);
      v9 = *(char **)(*(_QWORD *)(a1 + 528) + 8 * v8);
      if ( v9[569] < 0 )
        CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(a2, (struct CWindowData *)v9, 0);
    }
    if ( !*(_DWORD *)(a1 + 448) )
      CWindowData::TrackOwnedWindows((CWindowData *)a1, 0);
  }
}
