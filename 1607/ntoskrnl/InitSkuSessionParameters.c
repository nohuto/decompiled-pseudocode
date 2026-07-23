/*
 * XREFs of InitSkuSessionParameters @ 0x1407BB814
 * Callers:
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExIsMultiSessionSku @ 0x14057F828 (ExIsMultiSessionSku.c)
 */

int InitSkuSessionParameters()
{
  int result; // eax
  char v1; // [rsp+30h] [rbp+8h] BYREF

  result = ExIsMultiSessionSku(&v1);
  if ( result >= 0 && v1 )
  {
    result = MEMORY[0xFFFFF780000002F0] | 0x100;
    MEMORY[0xFFFFF780000002F0] |= 0x100u;
  }
  if ( RtlpMultiUsersInSessionSupported )
  {
    result = MEMORY[0xFFFFF780000002F0] | 0x200;
    MEMORY[0xFFFFF780000002F0] |= 0x200u;
  }
  return result;
}
