/*
 * XREFs of ndisUnsetNdis6OpenHandlers @ 0x1C00E7194
 * Callers:
 *     ndisDeQueueOpenOnMiniport @ 0x1C00E712C (ndisDeQueueOpenOnMiniport.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall ndisUnsetNdis6OpenHandlers(__int64 a1)
{
  __int64 v1; // rdi
  bool v2; // si
  bool v3; // bp
  char v5; // dl
  bool v6; // r8
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 0;
  v3 = 0;
  v5 = byte_1C008530D;
  if ( (unsigned __int8)byte_1C008530D >= 4u )
  {
    WPP_SF_q(0x89u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
    v5 = byte_1C008530D;
  }
  v6 = *(_BYTE *)(a1 + 32) >= 6u;
  if ( !v1 )
    goto LABEL_21;
  do
  {
    v9 = *(_QWORD *)(v1 + 24);
    if ( !v2 )
      v2 = *(_BYTE *)(v9 + 56) >= 6u;
    if ( !v3 )
      v3 = *(_BYTE *)(v9 + 56) < 6u;
    v1 = *(_QWORD *)(v1 + 392);
  }
  while ( v1 );
  if ( !v2 )
  {
LABEL_21:
    if ( !*(_QWORD *)(a1 + 2056) )
    {
      *(_DWORD *)(a1 + 2248) = 0;
      v7 = (*(_DWORD *)(a1 + 120) & 0x20000000) == 0;
      v8 = *(_QWORD *)(a1 + 2160);
      *(_QWORD *)(a1 + 1896) = v8;
      if ( !v7 )
        *(_QWORD *)(a1 + 432) = v8;
      if ( !v6 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 3816) + 224LL);
        *(_QWORD *)(a1 + 2192) = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 2184) = v10;
      }
    }
  }
  if ( (unsigned __int8)v5 >= 4u )
    WPP_SF_q(0x8Au, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
}
