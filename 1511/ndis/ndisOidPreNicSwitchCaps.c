/*
 * XREFs of ndisOidPreNicSwitchCaps @ 0x1C00BE430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqDD @ 0x1C0038468 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 */

unsigned __int8 __fastcall ndisOidPreNicSwitchCaps(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  unsigned __int8 v4; // bl
  __int64 v5; // r14
  char v6; // r10
  __int128 *v7; // rdx
  unsigned int v8; // eax
  __int128 v9; // xmm0
  _OWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  _DWORD *v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-28h]
  int v17; // [rsp+28h] [rbp-20h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 0;
  v5 = a1[3];
  v6 = byte_1C0083712;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    WPP_SF_qqq(0x20u, &WPP_5bdf5f30a197d5f3fc0ac0df652068c7_Traceguids, v1, v5, v3);
    v6 = byte_1C0083712;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x20u )
  {
    *(_DWORD *)(v3 + 56) = 32;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  if ( !*((_DWORD *)a1 + 10) )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_7;
    if ( !v1 )
      goto LABEL_20;
    v7 = *(_DWORD *)(v3 + 32) == 66094 ? *(__int128 **)(v1 + 3608) : *(__int128 **)(v1 + 3616);
    if ( !v7 )
    {
LABEL_7:
      *((_DWORD *)a1 + 10) = -1073741637;
    }
    else
    {
      v8 = *(_DWORD *)(v3 + 48);
      v9 = *v7;
      if ( v8 >= 0x74 )
      {
        v12 = *(_QWORD *)(v3 + 40);
        *(_OWORD *)v12 = v9;
        *(_OWORD *)(v12 + 16) = v7[1];
        *(_OWORD *)(v12 + 32) = v7[2];
        *(_OWORD *)(v12 + 48) = v7[3];
        *(_OWORD *)(v12 + 64) = v7[4];
        *(_OWORD *)(v12 + 80) = v7[5];
        *(_OWORD *)(v12 + 96) = v7[6];
        if ( v8 >= 0x84 )
        {
          v14 = (_DWORD *)(v12 + 128);
          *((_OWORD *)v14 - 1) = v7[7];
          *v14 = *((_DWORD *)v7 + 32);
          *(_DWORD *)(v3 + 52) = 132;
        }
        else
        {
          *(_DWORD *)(v12 + 112) = *((_DWORD *)v7 + 28);
          v13 = *(_QWORD *)(v3 + 40);
          *(_BYTE *)(v13 + 1) = 2;
          *(_WORD *)(v13 + 2) = 116;
          *(_DWORD *)(v3 + 52) = 116;
        }
      }
      else
      {
        v10 = *(_OWORD **)(v3 + 40);
        *v10 = v9;
        v10[1] = v7[1];
        v11 = *(_QWORD *)(v3 + 40);
        *(_BYTE *)(v11 + 1) = 1;
        *(_WORD *)(v11 + 2) = 32;
        *(_DWORD *)(v3 + 52) = 32;
      }
      *((_DWORD *)a1 + 10) = 0;
    }
  }
  v4 = 1;
LABEL_20:
  if ( (unsigned __int8)v6 >= 4u )
  {
    v17 = *((_DWORD *)a1 + 10);
    LODWORD(v16) = v4;
    WPP_SF_qqDD(0x21u, &WPP_5bdf5f30a197d5f3fc0ac0df652068c7_Traceguids, v1, v5, v16, v17);
  }
  return v4;
}
