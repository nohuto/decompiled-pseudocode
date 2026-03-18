/*
 * XREFs of ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0066FF0
 * Callers:
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0066F18 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmEndSession @ 0x1C006B940 (WinSqmEndSession.c)
 *     WinSqmAddToStreamEx @ 0x1C007E7E0 (WinSqmAddToStreamEx.c)
 *     WinSqmAddToStream @ 0x1C00AE330 (WinSqmAddToStream.c)
 *     WinSqmSetString @ 0x1C00AE52C (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsExtendedWinSqmHandle(struct _GUID *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (unsigned __int64)&a1[-1].Data4[7] <= 0xFFFFFFFFFFFFFFFDuLL
    && RtlCompareMemory(a1, &xmmword_1C00FE950, 0x10uLL) == 16 )
  {
    return a1[1].Data1 == 40;
  }
  return v1;
}
