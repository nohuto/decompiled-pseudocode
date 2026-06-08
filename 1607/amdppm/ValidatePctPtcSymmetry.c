/*
 * XREFs of ValidatePctPtcSymmetry @ 0x1C001C04C
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C001BBD4 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidatePctPtcSymmetry(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int v8; // edi

  v5 = 12;
  v6 = 12;
  v8 = -1073741823;
  if ( *a2 == 10 )
    v6 = 4;
  if ( RtlCompareMemory(a2, (const void *)a4, v6) == v6 )
  {
    if ( a2[12] == 10 )
      v5 = 4;
    if ( RtlCompareMemory(a2 + 12, (const void *)(a4 + 12), v5) == v5 )
      return 0;
  }
  return v8;
}
