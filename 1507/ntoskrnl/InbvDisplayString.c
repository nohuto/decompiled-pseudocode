/*
 * XREFs of InbvDisplayString @ 0x14016313C
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvDisplayString(__int64 a1)
{
  __int64 (*v2)(void); // rdx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_14034E2C8 )
    return 0;
  if ( qword_14034E2C0 )
    qword_14034E2C0(&v3);
  if ( qword_140353AD8 && (v2 = *(__int64 (**)(void))(qword_140353AD8 + 40)) != 0LL )
    return v2();
  else
    return 0;
}
