/*
 * XREFs of _RegRtlDeleteKeyTransacted @ 0x140562208
 * Callers:
 *     _RegRtlDeleteTreeInternal @ 0x1405620CC (_RegRtlDeleteTreeInternal.c)
 *     _PnpCtxRegDeleteKey @ 0x1406D7080 (_PnpCtxRegDeleteKey.c)
 *     _RegRtlDeletePathInternal @ 0x1406E06D0 (_RegRtlDeletePathInternal.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwDeleteKey @ 0x14015B580 (ZwDeleteKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1404FDBD4 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall RegRtlDeleteKeyTransacted(char *a1, const WCHAR *a2, void *a3)
{
  int v3; // ebx
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  if ( a2 )
  {
    v3 = RegRtlOpenKeyTransacted(a1, a2, 0, 0x10000u, &KeyHandle, a3);
    if ( v3 < 0 )
      goto LABEL_5;
    a1 = (char *)KeyHandle;
  }
  v3 = ZwDeleteKey(a1);
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
