/*
 * XREFs of ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C0229EE8
 * Callers:
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C02292DC (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C022A01C (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 */

__int64 __fastcall Edgy::_PostEdgyInertia(unsigned __int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 result; // rax

  result = HMValidateHandleNoSecure(a1, 1);
  if ( result && *(char *)(result + 44) >= 0 && *(char *)(result + 43) >= 0 )
    return PostMessage(result, 0x23Du, 0LL, (struct _LARGE_STRING *)(a3 | (unsigned __int64)(a2 << 16)));
  return result;
}
