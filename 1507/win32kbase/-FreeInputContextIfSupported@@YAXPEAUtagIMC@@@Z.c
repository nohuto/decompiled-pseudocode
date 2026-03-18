/*
 * XREFs of ?FreeInputContextIfSupported@@YAXPEAUtagIMC@@@Z @ 0x1C0011A70
 * Callers:
 *     <none>
 * Callees:
 *     IsFreeInputContextSupported_0 @ 0x1C0002870 (IsFreeInputContextSupported_0.c)
 *     FreeInputContext_0 @ 0x1C0002878 (FreeInputContext_0.c)
 */

void __fastcall FreeInputContextIfSupported(struct tagIMC *a1)
{
  if ( (int)IsFreeInputContextSupported_0() >= 0 )
    FreeInputContext_0();
}
