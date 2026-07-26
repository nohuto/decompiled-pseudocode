/*
 * XREFs of ndisOidPreNicSwitchCaps @ 0x1C00C55B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqDD @ 0x1C0037774 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 */

unsigned __int8 __fastcall ndisOidPreNicSwitchCaps(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  unsigned __int8 v4; // bl
  __int64 v5; // r14
  char v6; // r8
  __int128 *v7; // rdx
  __int128 v8; // xmm0
  _OWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+28h] [rbp-20h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 0;
  v5 = a1[3];
  v6 = byte_1C0085312;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    WPP_SF_qqq(0x20u, &WPP_63298f27d84d406e2a9901f9d2228ddf_Traceguids, v1, v5, v3);
    v6 = byte_1C0085312;
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
      goto LABEL_18;
    v7 = *(_DWORD *)(v3 + 32) == 66094 ? *(__int128 **)(v1 + 3608) : *(__int128 **)(v1 + 3616);
    if ( !v7 )
    {
LABEL_7:
      *((_DWORD *)a1 + 10) = -1073741637;
    }
    else
    {
      v8 = *v7;
      if ( *(_DWORD *)(v3 + 48) >= 0x74u )
      {
        v11 = *(_QWORD *)(v3 + 40);
        *(_OWORD *)v11 = v8;
        *(_OWORD *)(v11 + 16) = v7[1];
        *(_OWORD *)(v11 + 32) = v7[2];
        *(_OWORD *)(v11 + 48) = v7[3];
        *(_OWORD *)(v11 + 64) = v7[4];
        *(_OWORD *)(v11 + 80) = v7[5];
        *(_OWORD *)(v11 + 96) = v7[6];
        *(_DWORD *)(v11 + 112) = *((_DWORD *)v7 + 28);
        *(_DWORD *)(v3 + 52) = 116;
      }
      else
      {
        v9 = *(_OWORD **)(v3 + 40);
        *v9 = v8;
        v9[1] = v7[1];
        v10 = *(_QWORD *)(v3 + 40);
        *(_BYTE *)(v10 + 1) = 1;
        *(_WORD *)(v10 + 2) = 32;
        *(_DWORD *)(v3 + 52) = 32;
      }
      *((_DWORD *)a1 + 10) = 0;
    }
  }
  v4 = 1;
LABEL_18:
  if ( (unsigned __int8)v6 >= 4u )
  {
    v14 = *((_DWORD *)a1 + 10);
    LODWORD(v13) = v4;
    WPP_SF_qqDD(0x21u, &WPP_63298f27d84d406e2a9901f9d2228ddf_Traceguids, v1, v5, v13, v14);
  }
  return v4;
}
