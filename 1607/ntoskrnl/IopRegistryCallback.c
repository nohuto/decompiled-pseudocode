/*
 * XREFs of IopRegistryCallback @ 0x140566B0C
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14015C330 (ZwNotifyChangeKey.c)
 *     IopRegistryOpenDeepestPath @ 0x140566BE8 (IopRegistryOpenDeepestPath.c)
 */

NTSTATUS __fastcall IopRegistryCallback(unsigned int a1)
{
  wchar_t *v1; // rbx
  wchar_t **v2; // rdi
  bool v3; // zf
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  char v6; // [rsp+70h] [rbp+8h] BYREF
  wchar_t *v7; // [rsp+78h] [rbp+10h] BYREF

  v1 = (wchar_t *)a1;
  v2 = &(&IopRegistryRegisteredCallbacks)[14 * a1];
  RtlInitUnicodeString(&DestinationString, *v2);
  v2[11] = v1;
  v2[10] = (wchar_t *)IopRegistryCallback;
  v2[8] = 0LL;
  if ( ((_DWORD)v2[5] & 1) == 0
    || (((void (__fastcall *)(wchar_t *))v2[2])(v2[3]),
        result = ZwNotifyChangeKey(
                   v2[4],
                   0LL,
                   (PIO_APC_ROUTINE)(v2 + 8),
                   (PVOID)1,
                   (PIO_STATUS_BLOCK)v2 + 6,
                   *((_DWORD *)v2 + 2),
                   1u,
                   0LL,
                   0,
                   1u),
        result < 0) )
  {
    if ( (int)IopRegistryOpenDeepestPath(&DestinationString, &v7, &v6) < 0 )
      goto LABEL_9;
    ZwClose(v2[4]);
    v3 = v6 == 1;
    v2[4] = v7;
    if ( v3 )
    {
      *((_DWORD *)v2 + 10) |= 1u;
      ((void (__fastcall *)(wchar_t *))v2[2])(v2[3]);
    }
    result = ZwNotifyChangeKey(
               v2[4],
               0LL,
               (PIO_APC_ROUTINE)(v2 + 8),
               (PVOID)1,
               (PIO_STATUS_BLOCK)v2 + 6,
               *((_DWORD *)v2 + 2),
               1u,
               0LL,
               0,
               1u);
    if ( result < 0 )
    {
LABEL_9:
      result = ZwClose(v2[4]);
      *((_DWORD *)v2 + 2) = 0;
    }
  }
  return result;
}
