/*
 * XREFs of _RegRtlDeleteKeyTransacted @ 0x140531290
 * Callers:
 *     _RegRtlDeleteTreeInternal @ 0x140531140 (_RegRtlDeleteTreeInternal.c)
 *     _PnpCtxRegDeleteKey @ 0x140692804 (_PnpCtxRegDeleteKey.c)
 *     _RegRtlDeletePathInternal @ 0x14069A424 (_RegRtlDeletePathInternal.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwDeleteKey @ 0x140151EE0 (ZwDeleteKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x14043BEB8 (_RegRtlOpenKeyTransacted.c)
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
