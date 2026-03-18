/*
 * XREFs of DwmSyncFlushForceRenderAndWaitForBatch @ 0x1C014F610
 * Callers:
 *     <none>
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C00CA094 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall DwmSyncFlushForceRenderAndWaitForBatch(PVOID Object, int a2)
{
  unsigned int v4; // ebx
  int v5; // ecx
  int v6; // eax
  _BYTE v8[688]; // [rsp+20h] [rbp-2C8h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    v5 = 0;
    if ( gbInVideoPnpCallout )
      v5 = -1073741823;
    v4 = v5;
    if ( v5 >= 0 )
    {
      memset(&v8[2], 0, 0x2AEuLL);
      *(_DWORD *)v8 = 3145736;
      *(_WORD *)&v8[4] = 0x8000;
      *(_DWORD *)&v8[40] = -2147483636;
      *(_DWORD *)&v8[44] = a2;
      v6 = LpcRequestWaitReplyPortEx(Object, v8, v8);
      v4 = SyncLpcCheckNtStatus(v6, (struct _PORT_MESSAGE *)v8);
    }
    ObfDereferenceObject(Object);
  }
  return v4;
}
