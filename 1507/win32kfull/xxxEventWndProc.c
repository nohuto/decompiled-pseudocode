/*
 * XREFs of xxxEventWndProc @ 0x1C007D5A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDefWindowProc @ 0x1C0063B30 (xxxDefWindowProc.c)
 *     HMValidateHandleNoRip @ 0x1C007E714 (HMValidateHandleNoRip.c)
 *     xxxChangeMonitorFlags @ 0x1C00FBA48 (xxxChangeMonitorFlags.c)
 *     ClientEventCallback @ 0x1C020DC44 (ClientEventCallback.c)
 */

__int64 __fastcall xxxEventWndProc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v8; // rax

  v4 = a2;
  LOBYTE(a2) = 9;
  v8 = HMValidateHandleNoRip(*(_QWORD *)(a1 + 376), a2);
  if ( !v8 )
    return xxxDefWindowProc((struct tagWND *)a1, v4, a3, a4);
  if ( v4 == 2 )
  {
    xxxChangeMonitorFlags(v8, 0LL, 0LL);
  }
  else
  {
    if ( v4 != 60 )
      return xxxDefWindowProc((struct tagWND *)a1, v4, a3, a4);
    if ( (*(_DWORD *)a4 & *(_DWORD *)(v8 + 40)) != 0 && *(_WORD *)(a4 + 4)
      || (*(_DWORD *)a4 & *(_DWORD *)(v8 + 40)) == 0 && !*(_WORD *)(a4 + 4) )
    {
      ClientEventCallback(*(_QWORD *)(v8 + 56), a4, 0LL);
    }
  }
  return 0LL;
}
