/*
 * XREFs of BRUSHOBJ_pvAllocRbrush @ 0x140184EF0
 * Callers:
 *     ?MulRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x140186F30 (-MulRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x140349460 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 * Callees:
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ?ulSizeSet@RBRUSH@@QEAAKKH@Z @ 0x14030A98C (-ulSizeSet@RBRUSH@@QEAAKKH@Z.c)
 */

PVOID __stdcall BRUSHOBJ_pvAllocRbrush(BRUSHOBJ *pbo, ULONG cj)
{
  __int64 v2; // rbx
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  unsigned int v5; // esi
  PVOID result; // rax
  char *v7; // rbx
  unsigned int *v8; // r8

  v2 = cj;
  v4 = Gre::Base::Globals((Gre::Base *)pbo);
  if ( *((_QWORD *)v4 + 14) )
  {
    v8 = (unsigned int *)_InterlockedExchange64((volatile __int64 *)v4 + 14, 0LL);
    if ( v8 )
    {
      if ( (int)v2 + 16 >= (unsigned int)v2 && v8[1] >= (unsigned __int64)(v2 + 16) )
      {
        result = v8 + 4;
        goto LABEL_4;
      }
      Win32FreePool(v8);
    }
  }
  v5 = v2 + 16;
  result = (PVOID)PALLOCMEM((int)v2 + 16, 1919050823LL);
  v7 = (char *)result;
  if ( result )
  {
    RBRUSH::ulSizeSet((RBRUSH *)result, v5, 0);
    result = v7 + 16;
LABEL_4:
    pbo->pvRbrush = result;
  }
  return result;
}
