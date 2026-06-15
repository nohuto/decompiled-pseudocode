/*
 * XREFs of ?_Swap_bx@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXAEAV12@@Z @ 0x1800515A4
 * Callers:
 *     ?shrink_to_fit@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180051A0C (-shrink_to_fit@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 * Callees:
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 */

char *__fastcall std::string::_Swap_bx(__int64 Src, void **a2)
{
  _QWORD *v3; // rbx
  char *result; // rax
  void *v5; // r8
  void *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  signed __int64 v9; // rdi
  char v10; // cl
  char *v11; // rsi

  v3 = (_QWORD *)Src;
  if ( *(_QWORD *)(Src + 24) < 0x10uLL )
  {
    if ( (unsigned __int64)a2[3] >= 0x10 )
    {
      v11 = (char *)*a2;
      if ( *(_QWORD *)(Src + 16) != -1LL )
        result = (char *)memcpy_0(a2, (const void *)Src, *(_QWORD *)(Src + 16) + 1LL);
      *v3 = v11;
    }
    else if ( (void **)Src != a2 )
    {
      result = (char *)(Src + 16);
      v7 = 16LL;
      if ( Src > (unsigned __int64)(Src + 16) )
        v7 = 0LL;
      if ( v7 )
      {
        v8 = -Src;
        v9 = (signed __int64)a2 - Src;
        do
        {
          v10 = *(_BYTE *)v3;
          *(_BYTE *)v3 = *((_BYTE *)v3 + v9);
          *((_BYTE *)v3 + v9) = v10;
          v3 = (_QWORD *)((char *)v3 + 1);
          result = (char *)v3 + v8;
        }
        while ( (_QWORD *)((char *)v3 + v8) != (_QWORD *)v7 );
      }
    }
  }
  else if ( (unsigned __int64)a2[3] < 0x10 )
  {
    v6 = *(void **)Src;
    if ( a2[2] != (void *)-1LL )
      result = (char *)memcpy_0((void *)Src, a2, (size_t)a2[2] + 1);
    *a2 = v6;
  }
  else
  {
    result = (char *)*a2;
    v5 = *(void **)Src;
    *(_QWORD *)Src = *a2;
    *a2 = v5;
  }
  return result;
}
