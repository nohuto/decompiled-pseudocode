/*
 * XREFs of ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C00B1A08
 * Callers:
 *     vMatchAPal @ 0x1C00B1A30 (vMatchAPal.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C00BCFE8 (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vUpdateTime(XEPALOBJ *this)
{
  signed __int32 v1; // edx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = _InterlockedIncrement((volatile signed __int32 *)&ulXlatePalUnique);
  *(_DWORD *)(*(_QWORD *)this + 32LL) = v1;
  v2 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 136LL);
  if ( v3 != v2 )
    *(_DWORD *)(v3 + 32) = v1;
}
