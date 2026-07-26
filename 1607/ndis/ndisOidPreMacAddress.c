/*
 * XREFs of ndisOidPreMacAddress @ 0x1C00C52E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

char __fastcall ndisOidPreMacAddress(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  char v4; // bl
  char v5; // r14
  unsigned int v6; // ecx

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = byte_1C00895D2;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    WPP_SF_qq(0xA4u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v1, v3);
    v5 = byte_1C00895D2;
  }
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_10:
    v4 = 1;
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 40) = 0;
    v6 = *(unsigned __int16 *)(*(_QWORD *)(v1 + 4096) + 1124LL);
    if ( *(_DWORD *)(v3 + 48) < v6 )
    {
      *(_DWORD *)(v3 + 56) = v6;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( !*(_DWORD *)(a1 + 40) )
    {
      memmove(
        *(void **)(v3 + 40),
        (const void *)(*(_QWORD *)(v1 + 4096) + 1126LL),
        *(unsigned __int16 *)(*(_QWORD *)(v1 + 4096) + 1124LL));
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(v3 + 52) = *(unsigned __int16 *)(*(_QWORD *)(v1 + 4096) + 1124LL);
      goto LABEL_10;
    }
  }
LABEL_11:
  if ( (unsigned __int8)v5 >= 4u )
    WPP_SF_qD(0xA5u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v1, *(_DWORD *)(a1 + 40));
  return v4;
}
