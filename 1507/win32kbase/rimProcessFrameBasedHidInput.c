/*
 * XREFs of rimProcessFrameBasedHidInput @ 0x1C00C7F10
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C006EE0C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C0071978 (rimFreeAutoRepeatCompleteFrame.c)
 *     rimProcessPTPDeviceInput @ 0x1C00CC708 (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CCB80 (rimProcessPointerDeviceInput.c)
 *     ApiSetProcessHidRawInput @ 0x1C00CD574 (ApiSetProcessHidRawInput.c)
 */

_WORD *__fastcall rimProcessFrameBasedHidInput(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *result; // rax

  rimFreeAutoRepeatCompleteFrame(a1, a2, a3);
  result = gpsi;
  if ( (*(_DWORD *)gpsi & 0x2000) == 0 )
  {
    if ( (*(_DWORD *)gpsi & 0x4000) == 0
      || *(_DWORD *)(a2 + 316) && (result = *(_WORD **)(a2 + 400), result[21] == 13) && result[20] == 5 )
    {
      if ( *(_DWORD *)(a2 + 316) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a2 + 416) + 24LL) == 8 )
          rimProcessPTPDeviceInput(a1, a2);
        else
          rimProcessPointerDeviceInput(a1, a2);
      }
      return (_WORD *)ApiSetProcessHidRawInput(a2);
    }
  }
  return result;
}
