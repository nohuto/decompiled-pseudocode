/*
 * XREFs of ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800209E4
 * Callers:
 *     _DWMHardwareCursor::Initialize_::_1_::dtor$2 @ 0x1800A022A (_DWMHardwareCursor--Initialize_--_1_--dtor$2.c)
 *     _DWMHardwareCursor::Initialize_::_1_::dtor$4 @ 0x1800A0236 (_DWMHardwareCursor--Initialize_--_1_--dtor$4.c)
 *     _DWMHardwareCursor::Initialize_::_1_::dtor$6 @ 0x1800A0242 (_DWMHardwareCursor--Initialize_--_1_--dtor$6.c)
 *     _DWMHardwareCursor::Initialize_::_1_::dtor$8 @ 0x1800A024E (_DWMHardwareCursor--Initialize_--_1_--dtor$8.c)
 *     _DWMHardwareCursor::Initialize_::_1_::dtor$10 @ 0x1800A025A (_DWMHardwareCursor--Initialize_--_1_--dtor$10.c)
 *     _DWMHardwareCursor::Initialize_::_1_::dtor$12 @ 0x1800A0266 (_DWMHardwareCursor--Initialize_--_1_--dtor$12.c)
 *     _DWMHardwareCursor::Initialize_::_1_::dtor$14 @ 0x1800A0272 (_DWMHardwareCursor--Initialize_--_1_--dtor$14.c)
 *     _DWMHardwareCursor::Initialize_::_1_::dtor$16 @ 0x1800A027E (_DWMHardwareCursor--Initialize_--_1_--dtor$16.c)
 *     _DWMHardwareCursor::Initialize_::_1_::dtor$18 @ 0x1800A028A (_DWMHardwareCursor--Initialize_--_1_--dtor$18.c)
 *     _DWMHardwareCursor::Initialize_::_1_::dtor$20 @ 0x1800A0296 (_DWMHardwareCursor--Initialize_--_1_--dtor$20.c)
 *     _DWMHardwareCursor::Initialize_::_1_::dtor$22 @ 0x1800A02A2 (_DWMHardwareCursor--Initialize_--_1_--dtor$22.c)
 *     _DWMHardwareCursor::Initialize_::_1_::dtor$24 @ 0x1800A02AE (_DWMHardwareCursor--Initialize_--_1_--dtor$24.c)
 *     _DWMHardwareCursor::Initialize_::_1_::dtor$26 @ 0x1800A02BA (_DWMHardwareCursor--Initialize_--_1_--dtor$26.c)
 *     _DWMHardwareCursor::Initialize_::_1_::dtor$28 @ 0x1800A02C6 (_DWMHardwareCursor--Initialize_--_1_--dtor$28.c)
 *     _DWMHardwareCursor::UpdateBitmapSource_::_1_::dtor$0 @ 0x1800A02D2 (_DWMHardwareCursor--UpdateBitmapSource_--_1_--dtor$0.c)
 *     _std::operator__char_std::char_traits_char__std::allocator_char____::_1_::dtor$0 @ 0x1800A0461 (_std--operator__char_std--char_traits_char__std--allocator_char____--_1_--dtor$0.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$0 @ 0x1800A1378 (_ISMTracing--GetVector3AsString_--_1_--dtor$0.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$1 @ 0x1800A1384 (_ISMTracing--GetVector3AsString_--_1_--dtor$1.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$2 @ 0x1800A1390 (_ISMTracing--GetVector3AsString_--_1_--dtor$2.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$3 @ 0x1800A139C (_ISMTracing--GetVector3AsString_--_1_--dtor$3.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$4 @ 0x1800A13A8 (_ISMTracing--GetVector3AsString_--_1_--dtor$4.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$5 @ 0x1800A13B4 (_ISMTracing--GetVector3AsString_--_1_--dtor$5.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$0 @ 0x1800A13C0 (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$0.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$1 @ 0x1800A13CC (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$1.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$3 @ 0x1800A13D8 (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$3.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$4 @ 0x1800A13E4 (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$4.c)
 *     _std::_Floating_to_string_float__::_1_::dtor$0 @ 0x1800A1424 (_std--_Floating_to_string_float__--_1_--dtor$0.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::string::~string(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 0x10 )
    std::_Deallocate(*(char **)a1, v1 + 1, 1uLL);
}
