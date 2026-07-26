/*
 * XREFs of ndisOidPrePMCapabilities @ 0x1C00C8AD0
 * Callers:
 *     ndisOidPrePMCurrentCapabilities @ 0x1C00C8C60 (ndisOidPrePMCurrentCapabilities.c)
 *     ndisOidPrePMHardwareCapabilities @ 0x1C00C8C70 (ndisOidPrePMHardwareCapabilities.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPrePMCapabilities(__int64 a1, char a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  unsigned __int8 v6; // si
  char v7; // dl
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  __int64 v11; // rax
  __int64 v12; // rcx

  v2 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 32);
  v6 = 1;
  v7 = byte_1C00895D2;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    WPP_SF_qq(0x30u, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, v2, v4);
    v7 = byte_1C00895D2;
  }
  v8 = *(_QWORD *)(a1 + 24);
  if ( v8
    && (v9 = *(_QWORD *)(v8 + 24), v10 = *(_BYTE *)(v9 + 56), v10 <= 6u)
    && (v10 != 6 || *(_BYTE *)(v9 + 57) < 0x14u)
    || (*(_DWORD *)(v4 + 4) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v4 + 48) < 0x34u )
    {
      *(_DWORD *)(v4 + 56) = 52;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( !*(_DWORD *)(a1 + 40) )
    {
      if ( *(_QWORD *)a1 )
      {
        v11 = v2 + 1000;
        v12 = *(_QWORD *)(v4 + 40);
        if ( *(_DWORD *)(v4 + 48) >= 0x3Cu )
        {
          if ( !a2 )
            v11 = v2 + 1060;
          *(_OWORD *)v12 = *(_OWORD *)v11;
          *(_OWORD *)(v12 + 16) = *(_OWORD *)(v11 + 16);
          *(_OWORD *)(v12 + 32) = *(_OWORD *)(v11 + 32);
          *(_QWORD *)(v12 + 48) = *(_QWORD *)(v11 + 48);
          *(_DWORD *)(v12 + 56) = *(_DWORD *)(v11 + 56);
          *(_DWORD *)(v4 + 52) = 60;
        }
        else
        {
          if ( !a2 )
            v11 = v2 + 1060;
          *(_OWORD *)v12 = *(_OWORD *)v11;
          *(_OWORD *)(v12 + 16) = *(_OWORD *)(v11 + 16);
          *(_OWORD *)(v12 + 32) = *(_OWORD *)(v11 + 32);
          *(_DWORD *)(v12 + 48) = *(_DWORD *)(v11 + 48);
          *(_WORD *)(v12 + 2) = 52;
          *(_BYTE *)(v12 + 1) = 1;
          *(_DWORD *)(v4 + 52) = 52;
        }
        *(_DWORD *)(v4 + 56) = 0;
        *(_DWORD *)(a1 + 40) = 0;
      }
      else
      {
        v6 = 0;
      }
    }
  }
  if ( (unsigned __int8)v7 >= 4u )
    WPP_SF_qdD(0x31u, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, v2, *(_DWORD *)(a1 + 40), v6);
  return v6;
}
