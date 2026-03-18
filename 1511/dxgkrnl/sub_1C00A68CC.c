/*
 * XREFs of sub_1C00A68CC @ 0x1C00A68CC
 * Callers:
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00A436C (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     sub_1C00A7420 @ 0x1C00A7420 (sub_1C00A7420.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

void __fastcall sub_1C00A68CC(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
