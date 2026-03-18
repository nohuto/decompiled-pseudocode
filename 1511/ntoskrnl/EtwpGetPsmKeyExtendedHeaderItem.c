/*
 * XREFs of EtwpGetPsmKeyExtendedHeaderItem @ 0x14065FC3C
 * Callers:
 *     EtwpWriteUserEvent @ 0x14041BFD0 (EtwpWriteUserEvent.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     PsQueryProcessAttributesByToken @ 0x14046F8E0 (PsQueryProcessAttributesByToken.c)
 *     EtwpQueryPsmKey @ 0x14065FCFC (EtwpQueryPsmKey.c)
 */

__int64 __fastcall EtwpGetPsmKeyExtendedHeaderItem(__int64 a1)
{
  _KPROCESS *Process; // r14
  __int16 v3; // di
  PACCESS_TOKEN v4; // rbp
  int v5; // eax
  __int16 v6; // bx
  __int64 result; // rax
  char v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = 8;
  v4 = PsReferencePrimaryToken(Process);
  PsQueryProcessAttributesByToken((__int64)v4, &v8, &v9);
  if ( v8 )
  {
    v10 = 466LL;
    v5 = EtwpQueryPsmKey(v4, a1 + 8, &v10);
    v6 = v10;
    if ( v5 < 0 )
      v6 = 0;
    v3 = v6 + 8;
  }
  else
  {
    v6 = v10;
  }
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v4);
  result = 65528LL;
  *(_WORD *)(a1 + 6) = v6;
  *(_DWORD *)(a1 + 2) = 9;
  *(_WORD *)a1 = (v3 + 7) & 0xFFF8;
  return result;
}
