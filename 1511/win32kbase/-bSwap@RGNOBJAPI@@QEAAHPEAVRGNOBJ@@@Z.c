/*
 * XREFs of ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0027FA0
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0025350 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 * Callees:
 *     ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C00299E0 (-bSwap@RGNOBJ@@QEAAHPEAV1@@Z.c)
 *     HmgReplace @ 0x1C0071330 (HmgReplace.c)
 */

__int64 __fastcall RGNOBJAPI::bSwap(RGNOBJAPI *this, struct RGNOBJ *a2)
{
  __int64 result; // rax
  char v5; // [rsp+20h] [rbp-18h]

  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)a2 + 12LL), 1u);
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)this + 12LL), 1u);
  v5 = 4;
  if ( HmgReplace(*((_QWORD *)this + 1), *(_QWORD *)a2, 0LL, 1LL, v5) != *(_QWORD *)this )
    return 0LL;
  result = RGNOBJ::bSwap(this, a2);
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a2 + 12LL));
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
  return result;
}
