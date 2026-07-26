/*
 * XREFs of ndisOidPreReceiveFilterCaps @ 0x1C00C59F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0023700 (memmove.c)
 *     WPP_SF_qqDD @ 0x1C0037774 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 */

unsigned __int8 __fastcall ndisOidPreReceiveFilterCaps(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // r12
  char v6; // r15
  _WORD *v7; // rdx
  unsigned __int16 v8; // ax
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+28h] [rbp-30h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 0;
  v5 = a1[3];
  v6 = byte_1C0085312;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    WPP_SF_qqq(0xAu, &WPP_63298f27d84d406e2a9901f9d2228ddf_Traceguids, v1, v5, v3);
    v6 = byte_1C0085312;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x38u )
  {
    *(_DWORD *)(v3 + 56) = 56;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  if ( !*((_DWORD *)a1 + 10) )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_7;
    if ( !v1 )
      goto LABEL_23;
    v7 = *(_DWORD *)(v3 + 32) == 66081 ? *(_WORD **)(v1 + 3584) : *(_WORD **)(v1 + 3592);
    if ( !v7 )
    {
LABEL_7:
      *((_DWORD *)a1 + 10) = -1073741637;
    }
    else
    {
      v8 = v7[1];
      v9 = v8;
      if ( v8 >= 0x54u )
        v9 = 84;
      if ( v9 >= *(_DWORD *)(v3 + 48) )
        v9 = *(_DWORD *)(v3 + 48);
      memmove(*(void **)(v3 + 40), v7, v9);
      v10 = *(_QWORD *)(v3 + 40);
      if ( v9 < 0x54 )
      {
        if ( v9 >= 0x38 )
        {
          *(_BYTE *)(v10 + 1) = 1;
          *(_WORD *)(v10 + 2) = 56;
        }
      }
      else
      {
        *(_BYTE *)(v10 + 1) = 2;
        *(_WORD *)(v10 + 2) = 84;
      }
      *(_DWORD *)(v3 + 52) = v9;
      *((_DWORD *)a1 + 10) = 0;
    }
  }
  v4 = 1;
LABEL_23:
  if ( (unsigned __int8)v6 >= 4u )
  {
    v13 = *((_DWORD *)a1 + 10);
    LODWORD(v12) = v4;
    WPP_SF_qqDD(0xBu, &WPP_63298f27d84d406e2a9901f9d2228ddf_Traceguids, v1, v5, v12, v13);
  }
  return v4;
}
