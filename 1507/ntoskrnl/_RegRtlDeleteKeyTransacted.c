/*
 * XREFs of _RegRtlDeleteKeyTransacted @ 0x1405A834C
 * Callers:
 *     _RegRtlDeleteTreeInternal @ 0x1405A8114 (_RegRtlDeleteTreeInternal.c)
 *     _PnpCtxRegDeleteKey @ 0x1407123A4 (_PnpCtxRegDeleteKey.c)
 *     _RegRtlDeletePathInternal @ 0x14071A3E4 (_RegRtlDeletePathInternal.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwDeleteKey @ 0x140180890 (ZwDeleteKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x140435A8C (_RegRtlOpenKeyTransacted.c)
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
