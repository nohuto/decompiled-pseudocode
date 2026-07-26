/*
 * XREFs of ndisPostRemoveMiniportWakeUpPattern @ 0x1C00450A8
 * Callers:
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0044DF0 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisPostSetRemoveWakeUpPattern @ 0x1C0045450 (ndisPostSetRemoveWakeUpPattern.c)
 * Callees:
 *     memcmp @ 0x1C00235F0 (memcmp.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

void __fastcall ndisPostRemoveMiniportWakeUpPattern(__int64 a1, __int64 a2, int a3)
{
  char v6; // r14
  __int64 i; // rcx
  _QWORD *v8; // rdi
  _DWORD *v9; // rbx
  _DWORD *v10; // rsi
  __int64 v11; // r13
  const void *v12; // rcx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *j; // rax
  _DWORD *v20; // rdx
  int v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+38h] [rbp-40h]
  unsigned int v23; // [rsp+90h] [rbp+18h]
  int v24; // [rsp+98h] [rbp+20h]

  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqd(39LL, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1, a2, a3);
  if ( !a3 )
  {
    v6 = 0;
    for ( i = a2 + 72; (*(_DWORD *)(i + 16) & 0x4000) != 0; i = *(_QWORD *)(i + 24) + 72LL )
      ;
    v8 = 0LL;
    v9 = *(_DWORD **)(a1 + 960);
    v22 = *(_QWORD *)(i + 32);
    while ( v9 )
    {
      v10 = *(_DWORD **)(a2 + 40);
      if ( v10[4] == v9[16] && v10[2] == v9[14] )
      {
        v11 = (unsigned int)v9[15];
        v12 = *(const void **)(a2 + 40);
        v23 = v10[3];
        v24 = v10[1];
        v13 = v9[13];
        v10[1] = 0;
        v9[13] = 0;
        v10[3] = 0;
        v14 = (unsigned int)v9[14];
        v9[15] = 0;
        v21 = v13;
        if ( !memcmp(v12, v9 + 12, v14 + 24) && !memcmp((char *)v10 + v23, (char *)v9 + v11 + 48, (unsigned int)v9[16]) )
        {
          if ( v22 == *((_QWORD *)v9 + 3) )
          {
            v15 = *((_QWORD *)v9 + 1);
            v6 = 1;
            if ( v15 )
            {
              v17 = (_QWORD *)(v15 - 8);
              if ( v8 )
                *v8 = v17;
              else
                *(_QWORD *)(a1 + 960) = v17;
              v18 = *(_QWORD **)v9;
LABEL_31:
              *v17 = v18;
            }
            else
            {
              v16 = *(_QWORD *)v9;
              if ( v8 )
                *v8 = v16;
              else
                *(_QWORD *)(a1 + 960) = v16;
            }
          }
          else
          {
            v17 = v9 + 2;
            v9[15] = v11;
            for ( j = (_QWORD *)*((_QWORD *)v9 + 1); j; j = (_QWORD *)*j )
            {
              v20 = j - 1;
              if ( j[2] == v22 )
              {
                v18 = (_QWORD *)*j;
                v6 = 1;
                v9 = v20;
                goto LABEL_31;
              }
              v17 = j;
            }
          }
          v10[3] = v23;
          if ( v6 )
            ExFreePoolWithTag(v9, 0);
          break;
        }
        v10[3] = v23;
        v9[15] = v11;
        v10[1] = v24;
        v9[13] = v21;
      }
      v8 = v9;
      v9 = *(_DWORD **)v9;
    }
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqd(40LL, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1, a2, a3);
}
