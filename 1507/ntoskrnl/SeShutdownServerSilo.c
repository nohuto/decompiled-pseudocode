/*
 * XREFs of SeShutdownServerSilo @ 0x1406D0480
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     SepDeReferenceLogonSession @ 0x14052E368 (SepDeReferenceLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1406D62B4 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 */

void __fastcall SeShutdownServerSilo(__int64 a1, _QWORD *a2)
{
  void *v3; // rcx
  void *v4; // rcx
  _QWORD *v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  SepDeleteUnreferencedLogonSessionsInSilo();
  if ( a2 )
  {
    v3 = (void *)a2[2];
    if ( v3 )
      ObfDereferenceObject(v3);
    v4 = (void *)a2[3];
    if ( v4 )
      ObfDereferenceObject(v4);
    v5 = (_QWORD *)*a2;
    if ( *a2 )
    {
      _m_prefetchw(v5 + 3);
      v6 = v5[3];
      while ( v6 - 1 > 0 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64(v5 + 3, v6 - 1, v6);
        if ( v7 == v6 )
          goto LABEL_14;
      }
      if ( v6 != 1 )
        __fastfail(0xEu);
      v8 = v5[1];
      v9 = v5[20];
      v15 = v8;
      SepDeReferenceLogonSession(&v15, v9);
    }
LABEL_14:
    v10 = (_QWORD *)a2[1];
    if ( v10 )
    {
      _m_prefetchw(v10 + 3);
      v11 = v10[3];
      while ( v11 - 1 > 0 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange64(v10 + 3, v11 - 1, v11);
        if ( v12 == v11 )
          return;
      }
      if ( v11 != 1 )
        __fastfail(0xEu);
      v13 = v10[1];
      v14 = v10[20];
      v16 = v13;
      SepDeReferenceLogonSession(&v16, v14);
    }
  }
}
