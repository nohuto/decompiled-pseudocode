/*
 * XREFs of _CancelMagnificationInputTransform @ 0x14023BFA0
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401E3D68 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     MagpRevokeInputTransfrom @ 0x14023BF80 (MagpRevokeInputTransfrom.c)
 *     FreeDesktop @ 0x1402A5110 (FreeDesktop.c)
 * Callees:
 *     _SetMagnificationInputTransform @ 0x14023BFDC (_SetMagnificationInputTransform.c)
 */

__int64 CancelMagnificationInputTransform()
{
  __int64 v1; // [rsp+20h] [rbp-38h] BYREF
  __int128 v2; // [rsp+28h] [rbp-30h]
  __int64 v3; // [rsp+38h] [rbp-20h]
  int v4; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  v3 = 0LL;
  v2 = 0LL;
  v4 = 3;
  return SetMagnificationInputTransform((struct _MAGN_INPUT_TRANSFORM *)&v1);
}
