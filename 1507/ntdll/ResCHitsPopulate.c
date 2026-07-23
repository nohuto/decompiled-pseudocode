/*
 * XREFs of ResCHitsPopulate @ 0x1800FC34C
 * Callers:
 *     ResCHitsCreateAndPopulate @ 0x1800FC2AC (ResCHitsCreateAndPopulate.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall ResCHitsPopulate(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  LONG v4; // ecx
  __int64 result; // rax

  if ( a3 - 1 > 0x26
    && a2
    && *(_QWORD *)a2 == 0x54494843534552LL
    && *(_DWORD *)(a2 + 8) == 1
    && (v3 = *(_DWORD *)(a2 + 12)) != 0 )
  {
    if ( !a3 || a3 >= 8 * v3 + 40 )
    {
      *(_QWORD *)(a1 + 24) = a2;
      result = 1LL;
      *(_QWORD *)(a1 + 32) = a2 + 40;
      return result;
    }
    v4 = 24;
  }
  else
  {
    v4 = 13;
  }
  RtlSetLastWin32Error(v4);
  return 0LL;
}
