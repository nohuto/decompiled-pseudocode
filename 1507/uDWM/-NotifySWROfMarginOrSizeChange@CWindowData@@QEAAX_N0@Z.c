/*
 * XREFs of ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x180017A70
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001FD20 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003A270 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18003451C (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 */

void __fastcall CWindowData::NotifySWROfMarginOrSizeChange(CWindowData *this, char a2, char a3)
{
  __int64 i; // rbx
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h]

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 106); i = (unsigned int)(i + 1) )
  {
    v7 = *((_QWORD *)this + 50);
    v8 = *(_OWORD *)(*(_QWORD *)(v7 + 8 * i) + 64LL);
    if ( (CWindowData *)v8 == this && (a2 && DWORD2(v8) == 1 || a3 && DWORD2(v8) == 3) )
      CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(*(CSecondaryWindowRepresentation **)(v7 + 8 * i));
  }
}
