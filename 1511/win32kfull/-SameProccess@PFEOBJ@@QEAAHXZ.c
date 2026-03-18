/*
 * XREFs of ?SameProccess@PFEOBJ@@QEAAHXZ @ 0x1C0267D30
 * Callers:
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C0268A2C (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C029A6BC (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFEOBJ::SameProccess(PFEOBJ *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)this + 100LL)
    || *(_DWORD *)(*(_QWORD *)this + 100LL) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    return 1;
  }
  return v1;
}
