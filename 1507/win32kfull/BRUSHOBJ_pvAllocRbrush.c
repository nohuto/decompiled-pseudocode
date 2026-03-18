/*
 * XREFs of BRUSHOBJ_pvAllocRbrush @ 0x1C025AE30
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C02908B0 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     ?MulRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C0296FC0 (-MulRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 */

PVOID __stdcall BRUSHOBJ_pvAllocRbrush(BRUSHOBJ *pbo, ULONG cj)
{
  __int64 v4; // r8
  PVOID result; // rax
  ULONG v6; // ebx

  if ( gpCachedDbrush )
  {
    v4 = _InterlockedExchange64((volatile __int64 *)gpCachedDbrush, 0LL);
    if ( v4 )
    {
      if ( cj + 16 >= cj && *(unsigned int *)(v4 + 4) >= (unsigned __int64)cj + 16 )
      {
        result = (PVOID)(v4 + 16);
LABEL_6:
        pbo->pvRbrush = result;
        return result;
      }
      Win32FreePool(v4);
    }
  }
  v6 = cj + 16;
  result = PALLOCMEM2(v6, 1919050823LL, 1);
  if ( result )
  {
    *((_DWORD *)result + 1) = v6;
    result = (char *)result + 16;
    goto LABEL_6;
  }
  return result;
}
