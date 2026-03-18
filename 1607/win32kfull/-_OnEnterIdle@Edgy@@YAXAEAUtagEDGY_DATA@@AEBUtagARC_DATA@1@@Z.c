/*
 * XREFs of ?_OnEnterIdle@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C02202A4
 * Callers:
 *     ?_OnStateTransition@Edgy@@YAPEBUtagPOINTERINPUTFRAME@@AEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1C02203B0 (-_OnStateTransition@Edgy@@YAPEBUtagPOINTERINPUTFRAME@@AEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtag.c)
 * Callees:
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C0220578 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 */

void __fastcall Edgy::_OnEnterIdle(Edgy *this, struct tagEDGY_DATA **a2, const struct Edgy::tagARC_DATA *a3)
{
  Edgy::_StoreLastUpDataAndPost(this, *a2, a3);
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 28) = 0LL;
}
