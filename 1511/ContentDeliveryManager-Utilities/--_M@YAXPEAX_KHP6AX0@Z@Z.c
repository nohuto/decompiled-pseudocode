/*
 * XREFs of ??_M@YAXPEAX_KHP6AX0@Z@Z @ 0x180027BF4
 * Callers:
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18000F150 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 *     ??1CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAA@XZ @ 0x18000F32C (--1CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAA@XZ.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventUriAsync_::_1_::dtor$1 @ 0x180028BFD (_ContentManagement--ContentManagementService--ProcessCreativeEventUriAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventUriAsync_::_1_::dtor$4 @ 0x180028C36 (_ContentManagement--ContentManagementService--ProcessCreativeEventUriAsync_--_1_--dtor$4.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z @ 0x180027C64 (-__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, int a3, void (__fastcall *a4)(char *))
{
  int v5; // ebx
  char *i; // rdi

  v5 = a3;
  for ( i = &a1[a2 * a3]; --v5 >= 0; a4(i) )
  {
    i -= a2;
    _guard_check_icall_fptr();
  }
}
