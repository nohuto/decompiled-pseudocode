/*
 * XREFs of rimProcessFrameBasedHidInput @ 0x1C00C8E14
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0086A90 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C007F7DC (rimFreeAutoRepeatCompleteFrame.c)
 *     rimProcessPTPDeviceInput @ 0x1C00CD9FC (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CDE70 (rimProcessPointerDeviceInput.c)
 *     ApiSetProcessHidRawInput @ 0x1C00CE8B0 (ApiSetProcessHidRawInput.c)
 */

_WORD *__fastcall rimProcessFrameBasedHidInput(__int64 a1, __int64 a2)
{
  _WORD *result; // rax

  rimFreeAutoRepeatCompleteFrame(a2);
  result = gpsi;
  if ( (*(_DWORD *)gpsi & 0x2000) == 0 )
  {
    if ( (*(_DWORD *)gpsi & 0x4000) == 0
      || *(_DWORD *)(a2 + 308) && (result = *(_WORD **)(a2 + 400), result[21] == 13) && result[20] == 5 )
    {
      if ( *(_DWORD *)(a2 + 308) )
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
