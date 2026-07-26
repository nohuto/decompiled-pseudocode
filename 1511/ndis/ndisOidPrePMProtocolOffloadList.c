/*
 * XREFs of ndisOidPrePMProtocolOffloadList @ 0x1C00C3540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0040C54 (WPP_SF_qqqL.c)
 */

char __fastcall ndisOidPrePMProtocolOffloadList(__int64 *a1)
{
  __int64 v1; // r14
  char v2; // bl
  __int64 v3; // r15
  unsigned int v4; // ebp
  __int64 v5; // rsi
  int v6; // r12d
  char v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  int v15; // ecx
  __int64 *v16; // rdx
  _QWORD *i; // rax
  __int64 j; // r8

  v1 = *a1;
  v2 = 0;
  v3 = a1[3];
  v4 = 0;
  v5 = a1[4];
  v6 = 0;
  v8 = byte_1C0083712;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    WPP_SF_qqq(0x6Au, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, v1, v3, v5);
    v8 = byte_1C0083712;
  }
  v9 = a1[3];
  if ( v9
    && (v10 = *(_QWORD *)(v9 + 24), v11 = *(_BYTE *)(v10 + 56), v11 <= 6u)
    && (v11 != 6 || *(_BYTE *)(v10 + 57) < 0x14u)
    || (v12 = a1[1]) != 0
    && (*(_DWORD *)(v5 + 88) & 0x4000) == 0
    && (v13 = *(_QWORD *)(v12 + 16), v14 = *(_BYTE *)(v13 + 100), v14 <= 6u)
    && (v14 != 6 || *(_BYTE *)(v13 + 101) < 0x14u)
    || (v15 = *(_DWORD *)(v5 + 4), (v15 & 0xFFFFFFFD) != 0) )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
LABEL_32:
    v2 = 1;
    goto LABEL_33;
  }
  if ( v9 && !v15 )
  {
    v16 = *(__int64 **)(v3 + 512);
LABEL_24:
    for ( i = v16; i; v4 += 240 )
      i = (_QWORD *)*i;
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v5 + 48) < v4 )
    {
      *(_DWORD *)(v5 + 56) = v4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    if ( !*((_DWORD *)a1 + 10) )
    {
      for ( j = *(_QWORD *)(v5 + 40); v16; v16 = (__int64 *)*v16 )
      {
        v6 += 240;
        *(_OWORD *)j = *((_OWORD *)v16 + 3);
        *(_OWORD *)(j + 16) = *((_OWORD *)v16 + 4);
        *(_OWORD *)(j + 32) = *((_OWORD *)v16 + 5);
        *(_OWORD *)(j + 48) = *((_OWORD *)v16 + 6);
        *(_OWORD *)(j + 64) = *((_OWORD *)v16 + 7);
        *(_OWORD *)(j + 80) = *((_OWORD *)v16 + 8);
        *(_OWORD *)(j + 96) = *((_OWORD *)v16 + 9);
        *(_OWORD *)(j + 112) = *((_OWORD *)v16 + 10);
        *(_OWORD *)(j + 128) = *((_OWORD *)v16 + 11);
        *(_OWORD *)(j + 144) = *((_OWORD *)v16 + 12);
        *(_OWORD *)(j + 160) = *((_OWORD *)v16 + 13);
        *(_OWORD *)(j + 176) = *((_OWORD *)v16 + 14);
        *(_OWORD *)(j + 192) = *((_OWORD *)v16 + 15);
        *(_OWORD *)(j + 208) = *((_OWORD *)v16 + 16);
        *(_OWORD *)(j + 224) = *((_OWORD *)v16 + 17);
        *(_DWORD *)(j + 152) = *v16 != 0 ? v6 : 0;
        j += 240LL;
      }
      *(_DWORD *)(v5 + 52) = v6;
    }
    goto LABEL_32;
  }
  if ( v12 && (*(_DWORD *)(v5 + 88) & 0x4000) == 0 && !v15 )
  {
    v16 = *(__int64 **)(v12 + 856);
    goto LABEL_24;
  }
  if ( *a1 && v15 == 2 )
  {
    v16 = *(__int64 **)(v1 + 976);
    goto LABEL_24;
  }
LABEL_33:
  if ( (unsigned __int8)v8 >= 4u )
    WPP_SF_qqqL(0x6Bu, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, v1, v3, v5, *((_DWORD *)a1 + 10));
  return v2;
}
