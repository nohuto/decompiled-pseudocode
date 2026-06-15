/*
 * XREFs of ?seekpos@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@V32@H@Z @ 0x1800655A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::stringbuf::seekpos(__int64 a1, __int64 *a2, _QWORD *a3, char a4)
{
  __int64 v5; // rbp
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // ebx
  int v14; // eax

  v5 = *a3 + a3[1];
  if ( std::streambuf::pptr(a1) && *(_QWORD *)(a1 + 104) < (unsigned __int64)std::streambuf::pptr(a1) )
    *(_QWORD *)(a1 + 104) = std::streambuf::pptr(a1);
  if ( v5 != std::_BADOFF )
  {
    if ( (a4 & 1) != 0 && std::streambuf::gptr(a1) )
    {
      if ( v5 >= 0 && v5 <= *(_QWORD *)(a1 + 104) - std::streambuf::eback(a1) )
      {
        v8 = v5 - std::streambuf::gptr(a1);
        v9 = std::streambuf::eback(a1);
        std::streambuf::gbump(a1, (unsigned int)(v8 + v9));
        if ( (a4 & 2) != 0 && std::streambuf::pptr(a1) )
        {
          v10 = std::streambuf::epptr(a1);
          v11 = std::streambuf::gptr(a1);
          v12 = std::streambuf::pbase(a1);
          std::streambuf::setp(a1, v12, v11, v10);
        }
        goto LABEL_18;
      }
    }
    else if ( (a4 & 2) != 0
           && std::streambuf::pptr(a1)
           && v5 >= 0
           && v5 <= *(_QWORD *)(a1 + 104) - std::streambuf::eback(a1) )
    {
      v13 = v5 - std::streambuf::pptr(a1);
      v14 = std::streambuf::eback(a1);
      std::streambuf::pbump(a1, (unsigned int)(v13 + v14));
      goto LABEL_18;
    }
    v5 = std::_BADOFF;
  }
LABEL_18:
  a2[1] = 0LL;
  *a2 = v5;
  a2[2] = 0LL;
  return a2;
}
