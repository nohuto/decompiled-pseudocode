/*
 * XREFs of ??$Base64Encode@$0IB@@TLV@@YAXPEBE_KAEAY0IB@D@Z @ 0x180033208
 * Callers:
 *     ??0CorrelationVectorWrapper@Background@ContentDeliveryManager@@QEAA@XZ @ 0x1800261E4 (--0CorrelationVectorWrapper@Background@ContentDeliveryManager@@QEAA@XZ.c)
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x18004653C (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TLV::Base64Encode<129>(unsigned __int8 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // r11
  unsigned int i; // ebp
  unsigned __int8 v10; // r9
  unsigned __int8 v11; // r10
  unsigned __int8 v12; // dl
  char v13; // cl
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // cl

  v5 = a2 / 3;
  v6 = a2 % 3;
  v7 = (((a2 % 3 != 1) + 2LL) & -(__int64)(a2 % 3 != 0)) + 4 * (a2 / 3) + 1;
  if ( v7 <= 0x81 )
  {
    v8 = 0LL;
    for ( i = 0; i < v5; LOBYTE(v7) = i )
    {
      ++i;
      v10 = (16 * (*a1 & 3)) | (a1[1] >> 4);
      v11 = *a1 >> 2;
      v12 = a1[2];
      v13 = 4 * (a1[1] & 0xF);
      a1 += 3;
      *(_BYTE *)(v8 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[v11];
      *(_BYTE *)(v8 + a3 + 1) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[v10];
      *(_BYTE *)(v8 + a3 + 2) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[(unsigned __int8)(v13 | (v12 >> 6))];
      *(_BYTE *)(v8 + a3 + 3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[v12 & 0x3F];
      v8 += 4LL;
    }
    v14 = v6 - 1;
    if ( v14 )
    {
      if ( v14 != 1 )
      {
LABEL_9:
        *(_BYTE *)(v8 + a3) = 0;
        return v7;
      }
      v15 = (16 * (*a1 & 3)) | (a1[1] >> 4);
      v16 = 4 * (a1[1] & 0xF);
      *(_BYTE *)(v8 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[*a1 >> 2];
      *(_BYTE *)(v8 + a3 + 1) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[v15];
      LOBYTE(v7) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[v16];
      *(_BYTE *)(v8 + a3 + 2) = v7;
      *(_BYTE *)(v8 + a3 + 3) = 61;
    }
    else
    {
      v17 = 16 * (*a1 & 3);
      *(_BYTE *)(v8 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[(unsigned __int64)*a1 >> 2];
      LOBYTE(v7) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[v17];
      *(_BYTE *)(v8 + a3 + 1) = v7;
      *(_WORD *)(v8 + a3 + 2) = 15677;
    }
    v8 += 4LL;
    goto LABEL_9;
  }
  return v7;
}
