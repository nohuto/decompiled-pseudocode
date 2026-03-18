/*
 * XREFs of DwmAsyncNotifyWindowShadowChange @ 0x1C025F81C
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     _NotifyOverlayWindow @ 0x1C01D5F70 (_NotifyOverlayWindow.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall DwmAsyncNotifyWindowShadowChange(PVOID Object)
{
  unsigned int v2; // edi
  _DWORD v4[14]; // [rsp+20h] [rbp-38h] BYREF

  v2 = -1073741823;
  if ( Object )
  {
    memset((char *)v4 + 2, 0, 0x2AuLL);
    v4[0] = 2883588;
    LOWORD(v4[1]) = 0x8000;
    v4[10] = 1073741835;
    v2 = LpcRequestPort(Object, v4);
    ObfDereferenceObject(Object);
  }
  return v2;
}
