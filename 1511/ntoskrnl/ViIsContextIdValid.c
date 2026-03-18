/*
 * XREFs of ViIsContextIdValid @ 0x1406B8978
 * Callers:
 *     VfInsertContext @ 0x14020AC6C (VfInsertContext.c)
 *     VfQueryDeviceContext @ 0x14020AD3C (VfQueryDeviceContext.c)
 *     VfQueryDriverContext @ 0x14020AD70 (VfQueryDriverContext.c)
 *     VfQueryIrpContext @ 0x14020ADAC (VfQueryIrpContext.c)
 *     VfQueryThreadContext @ 0x14020ADE8 (VfQueryThreadContext.c)
 *     VfRemoveContext @ 0x14020AE24 (VfRemoveContext.c)
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
