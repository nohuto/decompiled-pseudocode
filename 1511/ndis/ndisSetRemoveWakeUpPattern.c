/*
 * XREFs of ndisSetRemoveWakeUpPattern @ 0x1C00C5398
 * Callers:
 *     ndisOidPreRemoveWakeUpPattern @ 0x1C00C3B20 (ndisOidPreRemoveWakeUpPattern.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetRemoveWakeUpPattern(__int64 a1, _BYTE *a2)
{
  char v4; // cl
  unsigned int v5; // r8d
  unsigned int *v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  unsigned int v10; // edx

  v4 = byte_1C0083712;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    WPP_SF_q(0x2Bu, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, a1);
    v4 = byte_1C0083712;
  }
  v5 = *(_DWORD *)(a1 + 48);
  *a2 = 1;
  if ( v5 >= 0x18 )
  {
    v6 = *(unsigned int **)(a1 + 40);
    v7 = 0;
    v8 = v6[2];
    if ( !(_DWORD)v8 || (v9 = v6[3], v9 < v8 + 24) )
    {
      v7 = -1073676267;
      goto LABEL_13;
    }
    v10 = v9 + v6[4];
    if ( v5 >= v10 )
    {
      *a2 = 0;
      goto LABEL_13;
    }
    *(_DWORD *)(a1 + 56) = v10;
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 24;
  }
  v7 = -1073676268;
  if ( (unsigned __int8)v4 >= 2u )
  {
    WPP_SF_q(0x2Cu, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, a1);
    v4 = byte_1C0083712;
  }
LABEL_13:
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_q(0x2Du, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, a1);
  return v7;
}
