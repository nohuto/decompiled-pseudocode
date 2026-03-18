/*
 * XREFs of ?MilShipAssert@@YAXKJ@Z @ 0x18014944C
 * Callers:
 *     ?FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z @ 0x1800E19E4 (-FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall MilShipAssert(__int64 a1, unsigned int a2)
{
  HMODULE LibraryW; // rax
  HMODULE v4; // rbx
  FARPROC ProcAddress; // rax

  LibraryW = LoadLibraryW(L"ntdll.dll");
  v4 = LibraryW;
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "ShipAssert");
    if ( ProcAddress )
      ((void (__fastcall *)(__int64, _QWORD))ProcAddress)(86017LL, a2);
    FreeLibrary(v4);
  }
}
