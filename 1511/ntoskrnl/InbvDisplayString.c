/*
 * XREFs of InbvDisplayString @ 0x140136DF4
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvDisplayString(__int64 a1)
{
  __int64 (*v2)(void); // rdx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_1402FDE30 )
    return 0;
  if ( qword_1402FDE28 )
    qword_1402FDE28(&v3);
  if ( qword_140305D60 && (v2 = *(__int64 (**)(void))(qword_140305D60 + 40)) != 0LL )
    return v2();
  else
    return 0;
}
