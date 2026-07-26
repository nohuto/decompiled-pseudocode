/*
 * XREFs of ndisBugcheckHandler @ 0x1C005F830
 * Callers:
 *     <none>
 * Callees:
 *     ndisMInvokeShutdown @ 0x1C005E27C (ndisMInvokeShutdown.c)
 */

void __fastcall ndisBugcheckHandler(_DWORD *Buffer, ULONG Length)
{
  int v2; // eax

  if ( Length == 5896 )
  {
    v2 = Buffer[981];
    Buffer[31] |= 0x1000000u;
    if ( (unsigned int)(v2 - 2) > 2 )
    {
      if ( *((_BYTE *)Buffer + 32) >= 6u )
        ndisMInvokeShutdown((__int64)Buffer, 1u);
      else
        (*((void (__fastcall **)(_QWORD))Buffer + 259))(*((_QWORD *)Buffer + 258));
    }
  }
}
