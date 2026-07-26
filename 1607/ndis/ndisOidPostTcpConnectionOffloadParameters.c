/*
 * XREFs of ndisOidPostTcpConnectionOffloadParameters @ 0x1C0046BB0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

void __fastcall ndisOidPostTcpConnectionOffloadParameters(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  char v4; // r14
  size_t v5; // rsi
  unsigned int v6; // eax
  size_t v7; // r8
  __int64 v8; // rax
  unsigned int v9; // eax

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = byte_1C00895D2;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    WPP_SF_qq(0xE2u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v1, v3);
    v4 = byte_1C00895D2;
  }
  if ( *(_DWORD *)(v3 + 4) == 1 && !*(_DWORD *)(a1 + 40) )
  {
    v5 = 60LL;
    if ( *(_QWORD *)a1 )
    {
      v6 = *(_DWORD *)(v3 + 52);
      if ( v6 < 0x38 )
      {
        *(_DWORD *)(a1 + 40) = -1073741823;
      }
      else
      {
        v7 = 60LL;
        if ( v6 <= 0x3C )
          v7 = v6;
        memmove((void *)(*(_QWORD *)(v1 + 4152) + 960LL), *(const void **)(v3 + 40), v7);
      }
    }
    v8 = *(_QWORD *)(a1 + 24);
    if ( v8 )
    {
      v1 = *(_QWORD *)(v8 + 16);
      v9 = *(_DWORD *)(v3 + 52);
      if ( v9 < 0x38 )
      {
        *(_DWORD *)(a1 + 40) = -1073741823;
      }
      else
      {
        if ( v9 <= 0x3C )
          v5 = v9;
        memmove((void *)(*(_QWORD *)(v1 + 4152) + 900LL), *(const void **)(v3 + 40), v5);
      }
    }
  }
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_qD(0xE3u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v1, *(_DWORD *)(a1 + 40));
}
