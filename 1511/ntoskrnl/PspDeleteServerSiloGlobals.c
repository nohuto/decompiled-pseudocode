/*
 * XREFs of PspDeleteServerSiloGlobals @ 0x1406402E4
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x14063FFCC (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x140640348 (PspDeleteSilo.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PspDeleteServerSiloGlobals(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  if ( P )
  {
    v2 = (void *)P[8];
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x416C6953u);
      P[8] = 0LL;
    }
    v3 = (void *)P[2];
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x6D4E624Fu);
      P[2] = 0LL;
    }
    v4 = (void *)P[3];
    if ( v4 )
    {
      ZwClose(v4);
      P[3] = 0LL;
    }
    ExFreePoolWithTag(P, 0x476C6953u);
  }
}
