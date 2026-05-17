/*
 * XREFs of RtlIsValidHandle @ 0x1800682E0
 * Callers:
 *     RtlIsValidIndexHandle @ 0x1800682A0 (RtlIsValidIndexHandle.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlIsValidHandle(__int64 a1, _BYTE *a2)
{
  return a2
      && (unsigned __int64)a2 >= *(_QWORD *)(a1 + 24)
      && (unsigned __int64)a2 < *(_QWORD *)(a1 + 32)
      && ((*(_DWORD *)(a1 + 4) - 1) & (unsigned int)a2) == 0
      && (*a2 & 1) != 0;
}
