/*
 * XREFs of SeGetLinkedToken @ 0x1406D5518
 * Callers:
 *     <none>
 * Callees:
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 *     SepReferenceLogonSessionSilo @ 0x14046E22C (SepReferenceLogonSessionSilo.c)
 *     SepDeReferenceLogonSession @ 0x14052E368 (SepDeReferenceLogonSession.c)
 */

__int64 __fastcall SeGetLinkedToken(int a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // r10
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // rdx
  int v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h]
  __int64 v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+58h] [rbp-18h]
  __int128 v18; // [rsp+60h] [rbp-10h]
  _QWORD *v19; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+38h] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  v19 = 0LL;
  v5 = a2;
  if ( (unsigned int)(a1 - 2) > 1 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a2 + 216);
  v8 = *(_DWORD *)(v7 + 32);
  if ( ((v8 & 4) == 0 || a1 != 2) && ((v8 & 2) == 0 || a1 != 3) )
    goto LABEL_9;
  v9 = SepReferenceLogonSessionSilo((_DWORD *)(v7 + 16), *(_QWORD *)(v7 + 160), (__int64 *)&v19);
  v3 = v19;
  v10 = v9;
  if ( v9 >= 0 )
  {
    v5 = v19[6];
LABEL_9:
    v15 = 0LL;
    v17 = 0;
    v16 = 0LL;
    v14 = 48;
    v18 = 0LL;
    v10 = SepDuplicateToken(v5, (int)&v14, 0, 1, 0, 0, 0, a3);
  }
  if ( v3 )
  {
    _m_prefetchw(v3 + 3);
    v11 = v3[3];
    while ( v11 - 1 > 0 )
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange64(v3 + 3, v11 - 1, v11);
      if ( v12 == v11 )
        return v10;
    }
    if ( v11 != 1 )
      __fastfail(0xEu);
    v13 = v19[20];
    v20 = v19[1];
    SepDeReferenceLogonSession(&v20, v13);
  }
  return v10;
}
