/*
 * XREFs of ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180016DD0
 * Callers:
 *     ?str@?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180016F44 (-str@-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU.c)
 * Callees:
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x180027AD0 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEBD_K@Z @ 0x18004FB1C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEBD_K@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@$$QEAV01@@Z @ 0x18004FD58 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180051454 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 */

_QWORD *__fastcall std::stringbuf::str(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rbx
  size_t v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rcx
  const void *v9; // rdi
  _QWORD *v10; // r9
  _QWORD *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  _QWORD Src[2]; // [rsp+28h] [rbp-28h] BYREF
  size_t v18; // [rsp+38h] [rbp-18h]
  unsigned __int64 v19; // [rsp+40h] [rbp-10h]

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 && std::streambuf::pptr(a1) )
  {
    v4 = *(_QWORD *)(a1 + 104);
    if ( v4 < std::streambuf::pptr(a1) )
      v4 = std::streambuf::pptr(a1);
    v5 = v4 - std::streambuf::pbase(a1);
    v6 = std::streambuf::pbase(a1);
    v18 = 0LL;
    v8 = 15LL;
    v19 = 15LL;
    v9 = (const void *)v6;
    LOBYTE(Src[0]) = 0;
    if ( v5 == -1LL )
      std::_Xlength_error("string too long");
    if ( v5 > 0xF )
    {
      std::string::_Copy(Src);
      v8 = v19;
    }
    else if ( !v5 )
    {
      v18 = 0LL;
      LOBYTE(Src[0]) = 0;
LABEL_13:
      a2[3] = 15LL;
      a2[2] = 0LL;
      *(_BYTE *)a2 = 0;
      v12 = v19;
      if ( v19 >= 0x10 )
      {
        *a2 = Src[0];
        Src[0] = 0LL;
      }
      else if ( v18 != -1LL )
      {
        memmove(a2, Src, v18 + 1);
        v12 = v19;
      }
      a2[2] = v18;
      a2[3] = v12;
      v19 = 15LL;
      v18 = 0LL;
      LOBYTE(Src[0]) = 0;
      goto LABEL_17;
    }
    if ( v8 >= 0x10 )
      v10 = (_QWORD *)Src[0];
    else
      v10 = Src;
    memcpy_0(v10, v9, v5);
    v11 = (_QWORD *)Src[0];
    v18 = v5;
    if ( v19 < 0x10 )
      v11 = Src;
    *((_BYTE *)v11 + v5) = 0;
    goto LABEL_13;
  }
  if ( (*(_BYTE *)(a1 + 112) & 4) != 0 || !std::streambuf::gptr(a1) )
  {
    v19 = 15LL;
    v18 = 0LL;
    LOBYTE(Src[0]) = 0;
  }
  else
  {
    v14 = std::streambuf::eback(a1);
    v15 = std::streambuf::egptr(a1) - v14;
    v16 = std::streambuf::eback(a1);
    std::string::string(Src, v16, v15);
  }
  std::string::string(a2, Src);
LABEL_17:
  LOBYTE(v12) = 1;
  ((void (__fastcall *)(_QWORD *, unsigned __int64, _QWORD, __int64, _DWORD))std::string::_Tidy)(Src, v12, 0LL, v7, 0);
  return a2;
}
