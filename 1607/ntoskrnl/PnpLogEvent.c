/*
 * XREFs of PnpLogEvent @ 0x14062DB4C
 * Callers:
 *     PnpQueryID @ 0x140511600 (PnpQueryID.c)
 *     PnpFixupID @ 0x140511778 (PnpFixupID.c)
 *     PiIsDriverBlocked @ 0x140515678 (PiIsDriverBlocked.c)
 *     PiLookupInDDB @ 0x1405158D4 (PiLookupInDDB.c)
 *     PpCheckInDriverDatabase @ 0x140515BB0 (PpCheckInDriverDatabase.c)
 *     PnpLogDuplicateDevice @ 0x140649D1C (PnpLogDuplicateDevice.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x14079DA0C (PpInitializeBootDDB.c)
 * Callees:
 *     IoWriteErrorLogEntry @ 0x140131668 (IoWriteErrorLogEntry.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     IoAllocateGenericErrorLogEntry @ 0x1401C8874 (IoAllocateGenericErrorLogEntry.c)
 */

void __fastcall PnpLogEvent(const void **a1, const void **a2, int a3, const void *a4, unsigned int Size)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  _WORD *GenericErrorLogEntry; // rax
  _WORD *v13; // rbx
  char *v14; // rdi
  char *v15; // rdi

  v9 = 0LL;
  v10 = 0LL;
  if ( a1 )
    v10 = *(unsigned __int16 *)a1 + 2LL;
  if ( a2 )
    v9 = *(unsigned __int16 *)a2 + 2LL;
  v11 = (Size + 40 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v10 + v11 + v9 <= 0xF0 )
  {
    GenericErrorLogEntry = IoAllocateGenericErrorLogEntry((unsigned __int8)v10 + (unsigned __int8)v11
                                                                               + (unsigned __int8)v9);
    v13 = GenericErrorLogEntry;
    if ( GenericErrorLogEntry )
    {
      GenericErrorLogEntry[3] = v11;
      v14 = (char *)GenericErrorLogEntry + v11;
      *((_DWORD *)GenericErrorLogEntry + 3) = a3;
      *((_DWORD *)GenericErrorLogEntry + 5) = a3;
      GenericErrorLogEntry[1] = Size;
      if ( Size )
        memmove(GenericErrorLogEntry + 20, a4, Size);
      if ( a1 )
      {
        v13[2] = 1;
        memmove(v14, a1[1], *(unsigned __int16 *)a1);
        v15 = &v14[*(unsigned __int16 *)a1];
        *(_WORD *)v15 = 0;
        v14 = v15 + 2;
      }
      if ( a2 )
      {
        ++v13[2];
        memmove(v14, a2[1], *(unsigned __int16 *)a2);
        *(_WORD *)&v14[*(unsigned __int16 *)a2] = 0;
      }
      IoWriteErrorLogEntry(v13);
    }
  }
}
