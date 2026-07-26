/*
 * XREFs of ndisDriverSystemDispatch @ 0x1C00AC9A4
 * Callers:
 *     ndisDispatchRequest @ 0x1C0094420 (ndisDispatchRequest.c)
 * Callees:
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ndisEtwRegisterGuids @ 0x1C00ACA3C (ndisEtwRegisterGuids.c)
 */

__int64 __fastcall ndisDriverSystemDispatch(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  unsigned int v5; // r14d
  _QWORD *v6; // rdi
  __int64 v8; // rcx

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v5 = *(_DWORD *)(v2 + 24);
  v6 = *(_QWORD **)(v2 + 32);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqd(0x4Cu, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, a1, a2, *(unsigned __int8 *)(v2 + 1));
  switch ( *(_BYTE *)(v2 + 1) )
  {
    case 4:
      if ( v5 < 0x30 || !v6 || *(_DWORD *)v6 < 0x30u )
        goto LABEL_29;
      v8 = v6[3] - *(_QWORD *)&ndisControlGuid.Data1;
      if ( !v8 )
        v8 = v6[4] - *(_QWORD *)ndisControlGuid.Data4;
      if ( v8 )
      {
LABEL_29:
        v3 = -1073741811;
      }
      else
      {
        qword_1C0085010 = v6[1];
        byte_1C008500C = BYTE2(qword_1C0085010);
        ndisLogger = HIDWORD(qword_1C0085010);
        if ( (qword_1C0085010 & 0x800000000LL) != 0 )
          LOBYTE(dword_1C0085018) = 1;
        if ( (qword_1C0085010 & 0x100000000LL) != 0 )
          BYTE1(dword_1C0085018) = 1;
        if ( (qword_1C0085010 & 0x200000000LL) != 0 )
          BYTE2(dword_1C0085018) = 1;
        if ( (qword_1C0085010 & 0x400000000LL) != 0 )
          HIBYTE(dword_1C0085018) = 1;
        if ( (qword_1C0085010 & 0x1000000000LL) != 0 )
          LOBYTE(word_1C008501C) = 1;
        if ( (qword_1C0085010 & 0x2000000000LL) != 0 )
          HIBYTE(word_1C008501C) = 1;
      }
      break;
    case 5:
      byte_1C008500C = 0;
      ndisLogger = 0;
      qword_1C0085010 = 0LL;
      dword_1C0085018 = 0;
      word_1C008501C = 0;
      *(_QWORD *)(a2 + 56) = 0LL;
      break;
    case 0xB:
      v3 = ndisEtwRegisterGuids(v6);
      *(_QWORD *)(a2 + 56) = 0LL;
      break;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_d(0x4Du, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, v3);
  return v3;
}
