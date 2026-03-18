/*
 * XREFs of ?MilShipAssert@@YAXKJ@Z @ 0x1801875EC
 * Callers:
 *     ?FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z @ 0x180113F8C (-FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
