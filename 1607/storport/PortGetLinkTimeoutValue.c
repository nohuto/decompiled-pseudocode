/*
 * XREFs of PortGetLinkTimeoutValue @ 0x1C00102BC
 * Callers:
 *     RaidInitializeAdapter @ 0x1C00596D8 (RaidInitializeAdapter.c)
 * Callees:
 *     PortpReadLinkTimeoutValue @ 0x1C005846C (PortpReadLinkTimeoutValue.c)
 *     PortOpenDeviceKey @ 0x1C0059344 (PortOpenDeviceKey.c)
 */

int __fastcall PortGetLinkTimeoutValue(__int64 a1, unsigned int a2)
{
  void *v4; // rax
  void *v5; // rbx
  void *v6; // rax
  void *v7; // rbx

  v4 = (void *)PortOpenDeviceKey(a1, 0xFFFFFFFFLL);
  v5 = v4;
  if ( v4 )
  {
    PortpReadLinkTimeoutValue(v4);
    ZwClose(v5);
  }
  v6 = (void *)PortOpenDeviceKey(a1, a2);
  v7 = v6;
  if ( v6 )
  {
    PortpReadLinkTimeoutValue(v6);
    LODWORD(v6) = ZwClose(v7);
  }
  return (int)v6;
}
