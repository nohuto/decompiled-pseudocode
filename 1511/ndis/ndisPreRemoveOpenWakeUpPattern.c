/*
 * XREFs of ndisPreRemoveOpenWakeUpPattern @ 0x1C00C41EC
 * Callers:
 *     ndisOidPreRemoveWakeUpPattern @ 0x1C00C3B20 (ndisOidPreRemoveWakeUpPattern.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memcmp @ 0x1C0026B00 (memcmp.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 */

unsigned __int8 __fastcall ndisPreRemoveOpenWakeUpPattern(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // bp
  char v5; // r14
  __int64 *i; // rbx
  _DWORD *v7; // rdi
  __int64 v8; // r12
  const void *v9; // rcx
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // r8
  int v14; // [rsp+70h] [rbp+8h]
  int v15; // [rsp+78h] [rbp+10h]

  v4 = 1;
  v5 = byte_1C0083712;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    WPP_SF_qq(0x21u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, a1, a2);
    v5 = byte_1C0083712;
  }
  for ( i = *(__int64 **)(a1 + 496); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      v4 = 0;
      goto LABEL_12;
    }
    v7 = *(_DWORD **)(a2 + 40);
    if ( v7[4] == *((_DWORD *)i + 16) && v7[2] == *((_DWORD *)i + 14) )
      break;
LABEL_9:
    ;
  }
  v8 = (unsigned int)v7[3];
  v9 = *(const void **)(a2 + 40);
  v10 = *((unsigned int *)i + 15);
  v14 = v7[1];
  v11 = *((_DWORD *)i + 13);
  v7[3] = 0;
  *((_DWORD *)i + 15) = 0;
  v7[1] = 0;
  v12 = *((unsigned int *)i + 14);
  *((_DWORD *)i + 13) = 0;
  v15 = v11;
  if ( memcmp(v9, i + 6, v12 + 24) || memcmp((char *)v7 + v8, (char *)i + v10 + 48, *((unsigned int *)i + 16)) )
  {
    v7[3] = v8;
    *((_DWORD *)i + 15) = v10;
    v7[1] = v14;
    *((_DWORD *)i + 13) = v15;
    goto LABEL_9;
  }
  v7[3] = v8;
  *((_DWORD *)i + 15) = v10;
  *(_DWORD *)(a2 + 152) = *((_DWORD *)i + 10);
LABEL_12:
  if ( (unsigned __int8)v5 >= 4u )
    WPP_SF_qqd(0x22u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, a1, a2, v4);
  return v4;
}
