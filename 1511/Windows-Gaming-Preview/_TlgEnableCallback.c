/*
 * XREFs of _TlgEnableCallback @ 0x180001010
 * Callers:
 *     <none>
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

void __stdcall TlgEnableCallback(
        LPCGUID pSourceId,
        ULONG callbackType,
        UCHAR level,
        ULONGLONG keywordAny,
        ULONGLONG keywordAll,
        PEVENT_FILTER_DESCRIPTOR pFilterData,
        PVOID pCallbackContext)
{
  int v7; // eax
  void (__fastcall *v8)(LPCGUID, _QWORD, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD); // rdi

  if ( pCallbackContext )
  {
    if ( callbackType )
    {
      if ( callbackType == 1 )
      {
        v7 = 256;
        *((_QWORD *)pCallbackContext + 2) = keywordAny;
        *((_QWORD *)pCallbackContext + 3) = keywordAll;
        if ( level )
          v7 = level + 1;
        *(_DWORD *)pCallbackContext = v7;
      }
    }
    else
    {
      *(_DWORD *)pCallbackContext = 0;
    }
    v8 = (void (__fastcall *)(LPCGUID, _QWORD, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD))*((_QWORD *)pCallbackContext + 5);
    if ( v8 )
      v8(pSourceId, callbackType, level, keywordAny, keywordAll, pFilterData, *((_QWORD *)pCallbackContext + 6));
  }
}
