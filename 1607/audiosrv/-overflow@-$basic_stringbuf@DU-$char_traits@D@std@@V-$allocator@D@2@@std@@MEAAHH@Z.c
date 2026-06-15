/*
 * XREFs of ?overflow@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHH@Z @ 0x180016C60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 */

__int64 __fastcall std::stringbuf::overflow(__int64 a1, unsigned int a2)
{
  int v2; // eax
  char *v5; // r14
  size_t v6; // rbp
  unsigned __int64 v7; // rcx
  SIZE_T v8; // rdi
  HANDLE ProcessHeap; // rax
  _BYTE *v10; // rax
  _BYTE *v11; // r12
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // rdi
  void *v17; // rax
  char *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  char *v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rax

  v2 = *(_DWORD *)(a1 + 112);
  if ( (v2 & 2) != 0 )
    return 0xFFFFFFFFLL;
  if ( a2 == -1 )
    return 0LL;
  if ( (v2 & 8) != 0
    && ((__int64 (*)(void))std::streambuf::pptr)()
    && (unsigned __int64)std::streambuf::pptr(a1) < *(_QWORD *)(a1 + 104) )
  {
    v13 = std::streambuf::epptr(a1);
    v14 = std::streambuf::pbase(a1);
    std::streambuf::setp(a1, v14, *(_QWORD *)(a1 + 104), v13);
  }
  if ( std::streambuf::pptr(a1) )
  {
    v15 = std::streambuf::epptr(a1);
    if ( std::streambuf::pptr(a1) < v15 )
    {
      *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
      return a2;
    }
  }
  v5 = 0LL;
  if ( std::streambuf::pptr(a1) )
  {
    v16 = std::streambuf::eback(a1);
    v6 = std::streambuf::epptr(a1) - v16;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = v6 >> 1;
  if ( v6 >> 1 >= 0x20 )
  {
    if ( !v7 )
      return 0xFFFFFFFFLL;
  }
  else
  {
    v7 = 32LL;
  }
  do
  {
    if ( 0x7FFFFFFF - v7 >= v6 )
      break;
    v7 >>= 1;
  }
  while ( v7 );
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v8 = v7 + v6;
  if ( v7 + v6 )
  {
    if ( v8 >= 0x1000 )
    {
      if ( v8 + 39 < v8 )
      {
        std::_Xbad_alloc();
        JUMPOUT(0x18004287ELL);
      }
      v17 = operator new(v8 + 39);
      if ( !v17 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        JUMPOUT(0x18004288FLL);
      }
      v5 = (char *)(((unsigned __int64)v17 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v5 - 1) = v17;
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      v5 = (char *)HeapAlloc(ProcessHeap, 0, v8);
      if ( !v5 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        JUMPOUT(0x1800428A7LL);
      }
    }
  }
  v10 = (_BYTE *)std::streambuf::eback(a1);
  v11 = v10;
  if ( v6 )
  {
    memcpy_0(v5, v10, v6);
    v18 = &v5[v8];
    *(_QWORD *)(a1 + 104) += v5 - v11;
    v19 = std::streambuf::pptr(a1) + v5 - v11;
    v20 = std::streambuf::pbase(a1);
    std::streambuf::setp(a1, v20 + v5 - v11, v19, v18);
    v21 = a1;
    if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
    {
      v22 = v5;
      v23 = 0LL;
    }
    else
    {
      v24 = std::streambuf::pptr(a1);
      v25 = std::streambuf::gptr(a1);
      v22 = (char *)(v24 + 1);
      v21 = a1;
      v23 = v25 + v5 - v11;
    }
    std::streambuf::setg(v21, v5, v23, v22);
  }
  else
  {
    *(_QWORD *)(a1 + 104) = v5;
    std::streambuf::setp(a1, v5, &v5[v8]);
    if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      std::streambuf::setg(a1, v5, 0LL, v5);
    else
      std::streambuf::setg(a1, v5, v5, v5 + 1);
  }
  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
    std::_Deallocate(v11, v6, 1uLL);
  *(_DWORD *)(a1 + 112) |= 1u;
  *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
  return a2;
}
