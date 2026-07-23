/*
 * XREFs of SeGetLinkedToken @ 0x140692AA0
 * Callers:
 *     <none>
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x1400807E0 (SepDeReferenceLogonSessionDirect.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     SepReferenceLogonSessionSilo @ 0x1404785A4 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SeGetLinkedToken(int a1, __int64 a2, char **a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // r10
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-30h]
  __int64 v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+58h] [rbp-20h]
  __int128 v15; // [rsp+60h] [rbp-18h]
  _QWORD *v16; // [rsp+90h] [rbp+18h] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  v5 = a2;
  v16 = 0LL;
  if ( (unsigned int)(a1 - 2) > 1 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a2 + 216);
  v8 = *(_DWORD *)(v7 + 32);
  if ( ((v8 & 4) == 0 || a1 != 2) && ((v8 & 2) == 0 || a1 != 3) )
    goto LABEL_9;
  v9 = SepReferenceLogonSessionSilo((_DWORD *)(v7 + 16), *(_QWORD *)(v7 + 160), (__int64 *)&v16);
  v3 = v16;
  v10 = v9;
  if ( v9 >= 0 )
  {
    v5 = v16[6];
LABEL_9:
    v12 = 0LL;
    v14 = 0;
    v13 = 0LL;
    v11 = 48;
    v15 = 0LL;
    v10 = SepDuplicateToken(v5, (int)&v11, 0, 1, 0, 0, 0, a3);
  }
  if ( v3 )
    SepDeReferenceLogonSessionDirect(v3);
  return v10;
}
