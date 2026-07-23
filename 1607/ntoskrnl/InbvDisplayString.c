/*
 * XREFs of InbvDisplayString @ 0x140139F64
 * Callers:
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvDisplayString(__int64 a1)
{
  __int64 (*v2)(void); // rdx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_140323478 )
    return 0;
  if ( qword_140323480 )
    qword_140323480(&v3);
  if ( qword_140328E10 && (v2 = *(__int64 (**)(void))(qword_140328E10 + 40)) != 0LL )
    return v2();
  else
    return 0;
}
