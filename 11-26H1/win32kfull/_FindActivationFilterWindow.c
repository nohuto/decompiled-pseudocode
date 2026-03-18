/*
 * XREFs of _FindActivationFilterWindow @ 0x1401C0E28
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14004544C (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     _SetActivationFilter @ 0x1401C0798 (_SetActivationFilter.c)
 *     ?CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z @ 0x1401C0B30 (-CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FindActivationFilterWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *i; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = (_QWORD *)(v1 + 312);
    for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    {
      if ( i[2] == a1 )
        return i;
    }
  }
  return (_QWORD *)v2;
}
