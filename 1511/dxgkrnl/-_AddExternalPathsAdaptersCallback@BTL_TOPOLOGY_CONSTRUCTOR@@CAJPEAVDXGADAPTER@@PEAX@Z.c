/*
 * XREFs of ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01836D4
 * Callers:
 *     sub_1C0182FB0 @ 0x1C0182FB0 (sub_1C0182FB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback(
        struct DXGADAPTER *a1,
        BTL_TOPOLOGY_CONSTRUCTOR *this)
{
  __int64 v3; // rdx

  v3 = *((_QWORD *)a1 + 248);
  if ( v3 && (!*((_BYTE *)this + 10) || *(_BYTE *)(v3 + 158)) )
    return BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsToTopology(this, a1);
  else
    return 0LL;
}
