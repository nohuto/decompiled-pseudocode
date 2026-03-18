/*
 * XREFs of GrepSecureVirtualMemory @ 0x1C00CB050
 * Callers:
 *     GdiProcessCallout @ 0x1C0059660 (GdiProcessCallout.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C005BF2C (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     EngAllocUserMemEx @ 0x1C00857B0 (EngAllocUserMemEx.c)
 *     EngSecureMem @ 0x1C00CADE0 (EngSecureMem.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall GrepSecureVirtualMemory(void *a1, SIZE_T a2, ULONG a3)
{
  if ( a2 )
    return MmSecureVirtualMemory(a1, a2, a3);
  else
    return 0LL;
}
