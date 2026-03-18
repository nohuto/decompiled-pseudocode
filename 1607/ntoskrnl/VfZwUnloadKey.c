/*
 * XREFs of VfZwUnloadKey @ 0x140720AC4
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140720D1C (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwUnloadKey(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckObjectAttributes(a1, retaddr);
  return pXdvZwUnloadKey(a1);
}
