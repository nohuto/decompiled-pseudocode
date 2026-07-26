/*
 * XREFs of ndisSetOpenAddWakeUpPattern @ 0x1C00C50B0
 * Callers:
 *     ndisOidPreAddWakeUpPattern @ 0x1C00C31C0 (ndisOidPreAddWakeUpPattern.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memcmp @ 0x1C0026B00 (memcmp.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     ndisCreateWakeUpPatternEntry @ 0x1C00C2F88 (ndisCreateWakeUpPatternEntry.c)
 */

__int64 __fastcall ndisSetOpenAddWakeUpPattern(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned __int8 v8; // cl
  unsigned int v9; // r8d
  _DWORD *v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 *i; // rsi
  __int64 v15; // r15
  __int64 v16; // r12
  size_t v17; // r8
  _DWORD *WakeUpPatternEntry; // rcx

  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0x17u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, a1, a2);
  v6 = 0;
  *a3 = 1;
  *(_DWORD *)(a2 + 56) = 0;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_BYTE *)(v7 + 56);
  if ( v8 > 6u || v8 == 6 && *(_BYTE *)(v7 + 57) >= 0x14u )
  {
    v6 = -1073741637;
    goto LABEL_29;
  }
  v9 = *(_DWORD *)(a2 + 48);
  if ( v9 < 0x18 )
  {
    *(_DWORD *)(a2 + 56) = 24;
    goto LABEL_14;
  }
  v10 = *(_DWORD **)(a2 + 40);
  v11 = (unsigned int)v10[2];
  if ( !(_DWORD)v11 || (v12 = (unsigned int)v10[3], v12 < v11 + 24) || (v13 = v12 + v10[4], v13 < (unsigned int)v12) )
  {
LABEL_9:
    v6 = -1073676267;
    goto LABEL_29;
  }
  if ( v9 < v13 )
  {
    *(_DWORD *)(a2 + 56) = v13;
LABEL_14:
    v6 = -1073676268;
    if ( (unsigned __int8)byte_1C0083712 >= 2u )
      WPP_SF_(0x18u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids);
    goto LABEL_29;
  }
  *v10 = 0;
  for ( i = *(__int64 **)(a1 + 496); i; i = (__int64 *)*i )
  {
    if ( v10[4] == *((_DWORD *)i + 16) && v10[2] == *((_DWORD *)i + 14) )
    {
      v15 = (unsigned int)v10[3];
      v16 = *((unsigned int *)i + 15);
      v10[3] = 0;
      v17 = *((unsigned int *)i + 14) + 24LL;
      *((_DWORD *)i + 15) = 0;
      if ( !memcmp(v10, i + 6, v17) && !memcmp((char *)v10 + v15, (char *)i + v16 + 48, *((unsigned int *)i + 16)) )
      {
        v10[3] = v15;
        *((_DWORD *)i + 15) = v16;
        goto LABEL_9;
      }
      v10[3] = v15;
      *((_DWORD *)i + 15) = v16;
    }
  }
  WakeUpPatternEntry = ndisCreateWakeUpPatternEntry(v10, *(_DWORD *)(a2 + 8));
  if ( WakeUpPatternEntry )
  {
    *((_QWORD *)WakeUpPatternEntry + 3) = *(_QWORD *)(a2 + 104);
    *(_QWORD *)(a2 + 160) = WakeUpPatternEntry;
    *a3 = 0;
  }
  else
  {
    v6 = -1073741670;
  }
LABEL_29:
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qdD(0x19u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, a1, (unsigned __int8)*a3, v6);
  return v6;
}
