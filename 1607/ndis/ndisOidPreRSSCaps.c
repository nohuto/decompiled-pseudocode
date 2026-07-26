/*
 * XREFs of ndisOidPreRSSCaps @ 0x1C00AF8B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_qqDD @ 0x1C003C3D8 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 */

unsigned __int8 __fastcall ndisOidPreRSSCaps(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // r12
  char v6; // r15
  unsigned int v8; // eax
  unsigned __int16 v9; // bp
  unsigned __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-28h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 0;
  v5 = a1[3];
  v6 = byte_1C00895D2;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    WPP_SF_qqq(0x9Au, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v1, v5, v3);
    v6 = byte_1C00895D2;
  }
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_9;
  if ( !*a1 )
    goto LABEL_5;
  if ( *(_WORD *)(v1 + 2730) )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v3 + 48) < 0x10u )
    {
      *(_DWORD *)(v3 + 56) = 16;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    if ( !*((_DWORD *)a1 + 10) )
    {
      if ( *(_BYTE *)(v1 + 1992) )
        *(_DWORD *)(v1 + 2732) |= 0x8000000u;
      v8 = *(_DWORD *)(v3 + 48);
      v9 = 20;
      v10 = v8;
      if ( v8 >= 0x14 )
        v10 = 20LL;
      if ( v10 < *(unsigned __int16 *)(v1 + 2730) )
      {
        if ( v8 < 0x14 )
          v9 = *(_WORD *)(v3 + 48);
      }
      else
      {
        v9 = *(_WORD *)(v1 + 2730);
      }
      memmove(*(void **)(v3 + 40), (const void *)(v1 + 2728), v9);
      *(_WORD *)(*(_QWORD *)(v3 + 40) + 2LL) = v9;
      *(_DWORD *)(v3 + 52) = v9;
      *((_DWORD *)a1 + 10) = 0;
    }
  }
  else
  {
LABEL_9:
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  v4 = 1;
LABEL_5:
  if ( (unsigned __int8)v6 >= 4u )
  {
    LODWORD(v11) = v4;
    WPP_SF_qqDD(0x9Bu, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v1, v5, v11, *((_DWORD *)a1 + 10));
  }
  return v4;
}
