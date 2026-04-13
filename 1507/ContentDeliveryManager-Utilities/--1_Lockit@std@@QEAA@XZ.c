/*
 * XREFs of ??1_Lockit@std@@QEAA@XZ @ 0x180021A18
 * Callers:
 *     sub_18000AA04 @ 0x18000AA04 (sub_18000AA04.c)
 *     sub_180018340 @ 0x180018340 (sub_180018340.c)
 *     sub_18001865C @ 0x18001865C (sub_18001865C.c)
 *     sub_1800187A4 @ 0x1800187A4 (sub_1800187A4.c)
 *     sub_180021550 @ 0x180021550 (sub_180021550.c)
 *     sub_180021614 @ 0x180021614 (sub_180021614.c)
 *     sub_180021820 @ 0x180021820 (sub_180021820.c)
 *     ?dtor$0@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x180026EB1 (-dtor$0@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 *     unknown_libname_38 @ 0x1800276DB (unknown_libname_38.c)
 *     sub_180027B5C @ 0x180027B5C (sub_180027B5C.c)
 * Callees:
 *     LeaveCriticalSection @ 0x180022B3C (LeaveCriticalSection.c)
 */

void __fastcall std::_Lockit::~_Lockit(std::_Lockit *this)
{
  __int64 v1; // rax

  v1 = *(int *)this;
  if ( (_DWORD)v1 )
  {
    if ( (int)v1 < 4 )
      LeaveCriticalSection(&CriticalSection + v1);
  }
  else
  {
    unlock(12LL);
  }
}
