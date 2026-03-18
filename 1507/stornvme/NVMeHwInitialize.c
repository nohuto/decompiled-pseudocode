/*
 * XREFs of NVMeHwInitialize @ 0x1C0001AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall NVMeHwInitialize(__int64 a1, __int64 a2)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
  {
    LOBYTE(a2) = 1;
    return NVMeControllerInitPart2(a1, a2);
  }
  else
  {
    v3 = 0;
    StorPortNotification(4096LL, a1, NVMeHwPassiveInitialize, &v3);
    return v3;
  }
}
