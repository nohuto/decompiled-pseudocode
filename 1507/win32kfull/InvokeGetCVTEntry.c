/*
 * XREFs of InvokeGetCVTEntry @ 0x1C00BF9EC
 * Callers:
 *     itrp_MIRP @ 0x1C00BE9A0 (itrp_MIRP.c)
 * Callees:
 *     itrp_GetCVTScale @ 0x1C00B806C (itrp_GetCVTScale.c)
 */

__int64 __fastcall InvokeGetCVTEntry(int a1, int a2)
{
  __int64 v2; // rbx
  int v3; // ecx
  int CVTScale; // eax

  v2 = a2;
  v3 = a1 - 2;
  if ( !v3 )
    return *(unsigned int *)(*(_QWORD *)(qword_1C0323160 + 16) + 4LL * a2);
  if ( v3 == 1 )
  {
    CVTScale = itrp_GetCVTScale();
    return FixMul(*(_DWORD *)(*(_QWORD *)(qword_1C0323160 + 16) + 4 * v2), CVTScale);
  }
  else
  {
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    return 0LL;
  }
}
