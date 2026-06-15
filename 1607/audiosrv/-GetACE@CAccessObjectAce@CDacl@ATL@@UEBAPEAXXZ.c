/*
 * XREFs of ?GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ @ 0x18006B270
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void *__fastcall ATL::CDacl::CAccessObjectAce::GetACE(ATL::CDacl::CAccessObjectAce *this)
{
  size_t v2; // rsi
  char *v3; // rax
  char *v4; // rbx
  char *v5; // rsi
  int v6; // eax
  __int128 *v7; // rax
  __int128 v8; // xmm0
  __int128 *v9; // rax
  __int128 v10; // xmm0
  DWORD LengthSid; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rbp

  if ( !*((_QWORD *)this + 17) )
  {
    v2 = (*(unsigned int (__fastcall **)(ATL::CDacl::CAccessObjectAce *))(*(_QWORD *)this + 16LL))(this);
    v3 = (char *)malloc(v2);
    v4 = v3;
    if ( !v3 )
      ATL::AtlThrowImpl(-2147024882);
    memset(v3, 0, v2);
    *((_WORD *)v4 + 1) = v2;
    v4[1] = *((_BYTE *)this + 132);
    *v4 = (*(__int64 (__fastcall **)(ATL::CDacl::CAccessObjectAce *))(*(_QWORD *)this + 24LL))(this);
    v5 = v4 + 44;
    v6 = *((_DWORD *)this + 32);
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 1) = v6;
    v7 = (__int128 *)*((_QWORD *)this + 19);
    if ( v7 )
    {
      v8 = *v7;
      *((_DWORD *)v4 + 2) = 1;
      *(_OWORD *)(v4 + 12) = v8;
    }
    else
    {
      v5 = v4 + 28;
    }
    v9 = (__int128 *)*((_QWORD *)this + 20);
    if ( v9 )
    {
      v10 = *v9;
      if ( *((_QWORD *)this + 19) )
        *(_OWORD *)(v4 + 28) = v10;
      else
        *(_OWORD *)(v4 + 12) = v10;
      *((_DWORD *)v4 + 2) |= 2u;
    }
    else
    {
      v5 -= 16;
    }
    LengthSid = GetLengthSid((char *)this + 16);
    v14 = LengthSid;
    v15 = v5 - v4;
    if ( LengthSid )
    {
      if ( !v5 )
        goto LABEL_15;
      if ( this == (ATL::CDacl::CAccessObjectAce *)-16LL || v15 < LengthSid )
      {
        memset(v5, 0, v5 - v4);
        if ( this != (ATL::CDacl::CAccessObjectAce *)-16LL )
        {
          if ( v15 >= v14 )
            goto LABEL_25;
          *(_DWORD *)_o__errno(v13, v12) = 34;
LABEL_24:
          invalid_parameter_noinfo();
LABEL_25:
          ATL::AtlThrowImpl(-2147024809);
        }
LABEL_15:
        *(_DWORD *)_o__errno(v13, v12) = 22;
        goto LABEL_24;
      }
      memcpy_0(v5, (char *)this + 16, LengthSid);
    }
    *((_QWORD *)this + 17) = v4;
  }
  return (void *)*((_QWORD *)this + 17);
}
