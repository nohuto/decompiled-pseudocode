/*
 * XREFs of ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C00CC3EC
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C00CB6B0 (-bWiden@WIDENER@@IEAAHXZ.c)
 *     ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C00CC04C (-bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z.c)
 *     ?bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C011A52C (-bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     ?bGrowPath@WIDEPATHOBJ@@IEAAHXZ @ 0x1C00CC20C (-bGrowPath@WIDEPATHOBJ@@IEAAHXZ.c)
 *     ?bValid@WIDEPATHOBJ@@QEAAHXZ @ 0x1C00CC42C (-bValid@WIDEPATHOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall WIDEPATHOBJ::bBeginFigure(WIDEPATHOBJ *this)
{
  WIDEPATHOBJ *v2; // rcx
  __int64 result; // rax

  if ( (unsigned int)WIDEPATHOBJ::bValid(this) )
  {
    if ( (unsigned int)WIDEPATHOBJ::bGrowPath(v2) )
    {
      result = 1LL;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 16LL) = 1;
      return result;
    }
    *((_DWORD *)this + 32) = 1;
  }
  return 0LL;
}
