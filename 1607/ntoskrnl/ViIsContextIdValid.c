/*
 * XREFs of ViIsContextIdValid @ 0x140704A34
 * Callers:
 *     VfInsertContext @ 0x140222554 (VfInsertContext.c)
 *     VfQueryDeviceContext @ 0x140222624 (VfQueryDeviceContext.c)
 *     VfQueryDriverContext @ 0x140222658 (VfQueryDriverContext.c)
 *     VfQueryIrpContext @ 0x140222694 (VfQueryIrpContext.c)
 *     VfQueryThreadContext @ 0x1402226D0 (VfQueryThreadContext.c)
 *     VfRemoveContext @ 0x14022270C (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

char __fastcall ViIsContextIdValid(int a1, int a2)
{
  char result; // al
  int v3; // ecx
  int v4; // ecx
  bool v5; // sf
  bool v6; // of

  result = 0;
  if ( a1 && (v3 = a1 - 1) != 0 && (v4 = v3 - 1) != 0 )
  {
    if ( v4 != 1 )
      return result;
    v6 = __OFSUB__(a2, 2);
    v5 = a2 - 2 < 0;
  }
  else
  {
    v6 = __OFSUB__(a2, 1);
    v5 = a2 - 1 < 0;
  }
  return v5 ^ v6;
}
