/*
 * XREFs of _TlgEnableCallback @ 0x140545D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
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
  int v8; // ecx
  void (__fastcall *v9)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD); // r10

  if ( pCallbackContext )
  {
    if ( callbackType )
    {
      if ( callbackType == 1 )
      {
        if ( level )
          v8 = level + 1;
        else
          v8 = 256;
        *(_DWORD *)pCallbackContext = v8;
        *((_QWORD *)pCallbackContext + 2) = keywordAny;
        *((_QWORD *)pCallbackContext + 3) = keywordAll;
      }
    }
    else
    {
      *(_DWORD *)pCallbackContext = 0;
    }
    v9 = (void (__fastcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD))*((_QWORD *)pCallbackContext + 5);
    if ( v9 )
      v9(pSourceId, callbackType, level, keywordAny, keywordAll, pFilterData, *((_QWORD *)pCallbackContext + 6));
  }
}
