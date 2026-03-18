/*
 * XREFs of ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C000DAB8
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C007A660 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     IsCompositionInputWindowUIDisabled @ 0x1C0118264 (IsCompositionInputWindowUIDisabled.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01E0A50 (-RequestModernAppClose@@YAHXZ.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0099824 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C02262CC (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetTopLevelHost(struct tagWND *a1)
{
  struct tagWND *v2; // r11
  struct tagWND *Host; // rax

  if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
  {
    v2 = a1;
    do
      Host = CoreWindowProp::GetHost(v2);
    while ( (unsigned int)CoreWindowProp::IsComponent(Host) );
  }
  return v2;
}
