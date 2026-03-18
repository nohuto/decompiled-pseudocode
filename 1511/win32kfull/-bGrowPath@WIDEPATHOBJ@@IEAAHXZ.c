/*
 * XREFs of ?bGrowPath@WIDEPATHOBJ@@IEAAHXZ @ 0x1C0131D50
 * Callers:
 *     ?bPenFlatten@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C0131210 (-bPenFlatten@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C0131F30 (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C02C7920 (-vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WIDEPATHOBJ::bGrowPath(WIDEPATHOBJ *this)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 *v4; // r9
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax

  v2 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
  if ( !v2
    || (v4 = (__int64 *)(v2 + 8), v9 = v2 + *(unsigned int *)(v2 + 16), v10 = *(_QWORD *)(v2 + 8) + 24LL, v9 <= v10)
    || (v5 = (__int64)(v9 - v10) >> 3, (unsigned int)v5 < 8) )
  {
    result = newpathalloc();
    if ( !result )
      return result;
    v4 = (__int64 *)(result + 8);
    *(_QWORD *)result = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = result;
    v5 = ((unsigned __int64)(unsigned int)(result + *(_DWORD *)(result + 16) - *(_DWORD *)(result + 8)) - 24) >> 3;
  }
  v6 = *((_QWORD *)this + 1);
  v7 = *v4;
  v8 = *(_QWORD **)(v6 + 40);
  if ( v8 )
  {
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL);
  }
  else
  {
    *(_QWORD *)(v6 + 32) = v7;
    *(_QWORD *)(v7 + 8) = 0LL;
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v7;
  *(_QWORD *)v7 = 0LL;
  *(_DWORD *)(v7 + 20) = 0;
  *((_QWORD *)this + 17) = v7 + 24;
  result = 1LL;
  *((_QWORD *)this + 18) = v7 + 8 * ((unsigned int)v5 + 3LL);
  return result;
}
