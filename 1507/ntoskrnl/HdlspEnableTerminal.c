/*
 * XREFs of HdlspEnableTerminal @ 0x14075A430
 * Callers:
 *     HdlspDispatch @ 0x140759E40 (HdlspDispatch.c)
 *     HeadlessInit @ 0x1407E9094 (HeadlessInit.c)
 * Callees:
 *     InbvPortEnableFifo @ 0x140272230 (InbvPortEnableFifo.c)
 *     InbvPortInitialize @ 0x140272274 (InbvPortInitialize.c)
 *     InbvPortTerminate @ 0x140272444 (InbvPortTerminate.c)
 *     HdlspSendStringAtBaud @ 0x14075B128 (HdlspSendStringAtBaud.c)
 */

__int64 __fastcall HdlspEnableTerminal(char a1)
{
  unsigned int v1; // edx
  char v2; // r8
  int v3; // ecx
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+28h] [rbp-20h]

  if ( a1 == 1 )
  {
    v1 = *(_DWORD *)(HeadlessGlobals + 48);
    if ( (v1 & 1) == 0 )
    {
      v2 = *(_BYTE *)(HeadlessGlobals + 116);
      if ( !v2 || (v1 & 2) == 0 )
      {
        v3 = (unsigned __int8)InbvPortInitialize(
                                *(_DWORD *)(HeadlessGlobals + 52),
                                (v1 >> 9) & 7,
                                *(PHYSICAL_ADDRESS *)(HeadlessGlobals + 64),
                                (unsigned int *)(HeadlessGlobals + 56),
                                v2,
                                v7,
                                *(_BYTE *)(HeadlessGlobals + 86));
        v4 = HeadlessGlobals;
        *(_DWORD *)(HeadlessGlobals + 48) ^= (*(_DWORD *)(HeadlessGlobals + 48) ^ v3) & 1;
        if ( (*(_DWORD *)(v4 + 48) & 1) == 0 )
          return 3221225473LL;
        HdlspSendStringAtBaud("\x1B[2J");
        HdlspSendStringAtBaud("\x1B[H");
        InbvPortEnableFifo(*(_DWORD *)(HeadlessGlobals + 56));
      }
    }
  }
  else if ( !a1 )
  {
    InbvPortTerminate(*(_DWORD *)(HeadlessGlobals + 56));
    *(_DWORD *)(v6 + 56) = 0;
    *(_DWORD *)(v6 + 48) &= ~1u;
  }
  return 0LL;
}
