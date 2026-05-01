/*
 * XREFs of _TlgEnableCallback @ 0x180001220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
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
  void (__fastcall *v8)(LPCGUID, _QWORD, _QWORD, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD); // rdi

  if ( pCallbackContext )
  {
    if ( callbackType )
    {
      if ( callbackType == 1 )
      {
        if ( level )
          v7 = level + 1;
        else
          v7 = 256;
        *(_DWORD *)pCallbackContext = v7;
        *((_QWORD *)pCallbackContext + 2) = keywordAny;
        *((_QWORD *)pCallbackContext + 3) = keywordAll;
      }
    }
    else
    {
      *(_DWORD *)pCallbackContext = 0;
    }
    v8 = (void (__fastcall *)(LPCGUID, _QWORD, _QWORD, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD))*((_QWORD *)pCallbackContext + 5);
    if ( v8 )
      v8(pSourceId, callbackType, level, keywordAny, keywordAll, pFilterData, *((_QWORD *)pCallbackContext + 6));
  }
}
