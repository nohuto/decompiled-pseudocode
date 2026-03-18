/*
 * XREFs of ?FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x180116A50
 * Callers:
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x18010FC88 (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_P.c)
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180116914 (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::FindMagnifier(CComposition *this, struct CVisual *a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax

  v2 = *((_DWORD *)this + 232);
  for ( result = 0LL; (unsigned int)result < v2; result = (unsigned int)(result + 1) )
  {
    if ( **(struct CVisual ***)(*((_QWORD *)this + 113) + 8 * result) == a2 )
      break;
  }
  return result;
}
