/*
 * XREFs of PsIsProcessLoggingEnabled @ 0x14020EF78
 * Callers:
 *     MiReadWriteVirtualMemory @ 0x1404EEBF0 (MiReadWriteVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsIsProcessLoggingEnabled(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // eax

  v2 = 0;
  v3 = 0;
  switch ( a2 )
  {
    case 2:
      v3 = 0x20000000;
      break;
    case 16:
      v3 = 0x4000000;
      break;
    case 32:
      v3 = 0x8000000;
      break;
    case 2048:
      v3 = 0x10000000;
      break;
  }
  LOBYTE(v2) = (*(_DWORD *)(a1 + 1740) & v3) != 0;
  return v2;
}
