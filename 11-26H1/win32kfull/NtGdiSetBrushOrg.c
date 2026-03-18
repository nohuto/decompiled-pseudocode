/*
 * XREFs of NtGdiSetBrushOrg @ 0x140127620
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBrushOrg @ 0x14012768C (GreSetBrushOrg.c)
 */

__int64 __fastcall NtGdiSetBrushOrg(HDC a1, __int64 a2, __int64 a3, void *a4)
{
  unsigned int v5; // ebx
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = 0LL;
  v5 = GreSetBrushOrg(a1);
  if ( v5 && a4 )
    GreProbeAndWriteToUntrustedVa(a4, 8uLL, v7, 8uLL, 1uLL);
  return v5;
}
