/*
 * XREFs of xxxEventWndProc @ 0x1C0080730
 * Callers:
 *     <none>
 * Callees:
 *     ClientEventCallback @ 0x1C000C424 (ClientEventCallback.c)
 *     xxxDefWindowProc @ 0x1C006F890 (xxxDefWindowProc.c)
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 *     xxxChangeMonitorFlags @ 0x1C0108BF8 (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall xxxEventWndProc(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  unsigned int v4; // edi
  __int64 v8; // rax

  v4 = a2;
  LOBYTE(a2) = 9;
  v8 = HMValidateHandleNoRip(*(_QWORD *)(a1 + 376), a2);
  if ( !v8 )
    return xxxDefWindowProc((struct tagWND *)a1, v4, a3, (__int64)a4);
  if ( v4 == 2 )
  {
    xxxChangeMonitorFlags(v8, 0LL, 0LL);
  }
  else
  {
    if ( v4 != 60 )
      return xxxDefWindowProc((struct tagWND *)a1, v4, a3, (__int64)a4);
    if ( (*(_DWORD *)a4 & *(_DWORD *)(v8 + 40)) != 0 && a4[2] || (*(_DWORD *)a4 & *(_DWORD *)(v8 + 40)) == 0 && !a4[2] )
      ClientEventCallback(*(_QWORD *)(v8 + 56), a4);
  }
  return 0LL;
}
