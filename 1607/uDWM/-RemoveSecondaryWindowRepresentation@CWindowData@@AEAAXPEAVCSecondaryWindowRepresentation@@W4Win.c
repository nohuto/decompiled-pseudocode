/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001AF68
 * Callers:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001B658 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18001B7B8 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z @ 0x18000B3C8 (-Remove@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001A10C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x18001AC84 (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x180033954 (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034820 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     EtwppTemplate_qqd @ 0x1800829A0 (EtwppTemplate_qqd.c)
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
    if ( dword_1800B7044
      && (unsigned __int8)(byte_1800B7048 - 1) > 2u
      && (qword_1800B7030 & 0x8000000000000001uLL) != 0
      && (qword_1800B7038 & 0x8000000000000001uLL) == qword_1800B7038 )
    {
      EtwppTemplate_qqd(a1, 1, (_DWORD)a2, *(_QWORD *)(a1 + 40), a3);
    }
    DynArray<CAnimationComponent *,0>::Remove((__int64 *)(a1 + 424), (__int64 *)&v10);
  }
  v7 = a3 - 1;
  if ( v7 )
  {
    if ( v7 == 2
      && !CWindowData::IsImmersiveWindow((CWindowData *)a1)
      && !(unsigned int)CBaseObject::Release(*(CBaseObject **)(a1 + 416)) )
    {
      CIconicBitmapRegistry::IconicRepresentationDestroyed(
        *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 26),
        (struct CWindowData *)a1);
      *(_QWORD *)(a1 + 416) = 0LL;
    }
  }
  else
  {
    --*(_DWORD *)(a1 + 456);
    LODWORD(v8) = *(_DWORD *)(a1 + 560);
    while ( (_DWORD)v8 )
    {
      v8 = (unsigned int)(v8 - 1);
      v9 = *(char **)(*(_QWORD *)(a1 + 536) + 8 * v8);
      if ( v9[577] < 0 )
        CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(a2, (struct CWindowData *)v9, 0);
    }
    if ( !*(_DWORD *)(a1 + 456) )
      CWindowData::TrackOwnedWindows((CWindowData *)a1, 0);
  }
}
