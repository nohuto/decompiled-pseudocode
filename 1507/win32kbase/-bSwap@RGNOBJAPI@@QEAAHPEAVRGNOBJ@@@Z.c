/*
 * XREFs of ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0042CD0
 * Callers:
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     HmgReplace @ 0x1C000EBA0 (HmgReplace.c)
 *     ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C003FC40 (-bSwap@RGNOBJ@@QEAAHPEAV1@@Z.c)
 */

__int64 __fastcall RGNOBJAPI::bSwap(RGNOBJAPI *this, struct RGNOBJ *a2)
{
  __int64 result; // rax

  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)a2 + 12LL), 1u);
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)this + 12LL), 1u);
  if ( HmgReplace(*((_QWORD *)this + 5), *(_QWORD *)a2) != *(_QWORD *)this )
    return 0LL;
  result = RGNOBJ::bSwap((__int64 **)this, (__m128i **)a2);
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a2 + 12LL));
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
  return result;
}
