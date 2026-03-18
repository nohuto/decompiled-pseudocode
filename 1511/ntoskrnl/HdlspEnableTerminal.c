/*
 * XREFs of HdlspEnableTerminal @ 0x1406D738C
 * Callers:
 *     HdlspDispatch @ 0x1406D6DE0 (HdlspDispatch.c)
 *     HeadlessInit @ 0x14077250C (HeadlessInit.c)
 * Callees:
 *     InbvPortEnableFifo @ 0x140222358 (InbvPortEnableFifo.c)
 *     InbvPortInitialize @ 0x14022239C (InbvPortInitialize.c)
 *     InbvPortTerminate @ 0x14022256C (InbvPortTerminate.c)
 *     HdlspSendStringAtBaud @ 0x1406D7F44 (HdlspSendStringAtBaud.c)
 */

__int64 __fastcall HdlspEnableTerminal(char a1)
{
  unsigned int v1; // edx
  char v2; // r8
  int v3; // ecx
  PKSPIN_LOCK v4; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+28h] [rbp-20h]

  if ( a1 == 1 )
  {
    v1 = *((_DWORD *)HeadlessGlobals + 12);
    if ( (v1 & 1) == 0 )
    {
      v2 = *((_BYTE *)HeadlessGlobals + 116);
      if ( !v2 || (v1 & 2) == 0 )
      {
        v3 = (unsigned __int8)InbvPortInitialize(
                                *((_DWORD *)HeadlessGlobals + 13),
                                (v1 >> 9) & 7,
                                (PHYSICAL_ADDRESS)HeadlessGlobals[8],
                                (unsigned int *)HeadlessGlobals + 14,
                                v2,
                                v7,
                                *((_BYTE *)HeadlessGlobals + 86));
        v4 = HeadlessGlobals;
        *((_DWORD *)HeadlessGlobals + 12) ^= (*((_DWORD *)HeadlessGlobals + 12) ^ v3) & 1;
        if ( (v4[6] & 1) == 0 )
          return 3221225473LL;
        HdlspSendStringAtBaud("\x1B[2J");
        HdlspSendStringAtBaud("\x1B[H");
        InbvPortEnableFifo(*((_DWORD *)HeadlessGlobals + 14));
      }
    }
  }
  else if ( !a1 )
  {
    InbvPortTerminate(*((_DWORD *)HeadlessGlobals + 14));
    *(_DWORD *)(v6 + 56) = 0;
    *(_DWORD *)(v6 + 48) &= ~1u;
  }
  return 0LL;
}
