/*
 * XREFs of ??1?$vector@GV?$allocator@G@std@@@std@@QEAA@XZ @ 0x18007A9D0
 * Callers:
 *     _DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty_HSTRING_______ptr64__::_1_::dtor$2 @ 0x1800A2EC7 (_DevicePropertyHelpers--DevicePropertyHelper--GetDriverProperty_HSTRING_______ptr64__--_1_--dtor.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<unsigned short>::~vector<unsigned short>(__int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 1, 2uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
