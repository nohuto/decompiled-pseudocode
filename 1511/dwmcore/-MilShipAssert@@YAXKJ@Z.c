/*
 * XREFs of ?MilShipAssert@@YAXKJ@Z @ 0x1801572CC
 * Callers:
 *     ?FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z @ 0x180100094 (-FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
