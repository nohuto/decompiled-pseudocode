/*
 * XREFs of ?GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180082510
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void *__fastcall ATL::CDacl::CAccessObjectAce::GetACE(ATL::CDacl::CAccessObjectAce *this)
{
  size_t v2; // rbx
  char *v3; // rax
  char *v4; // rdi
  char *v5; // rbp
  int v6; // eax
  __int128 *v7; // rax
  __int128 v8; // xmm0
  __int128 *v9; // rax
  __int128 v10; // xmm0
  DWORD LengthSid; // eax
  errno_t v12; // eax

  if ( !*((_QWORD *)this + 17) )
  {
    v2 = (*(unsigned int (__fastcall **)(ATL::CDacl::CAccessObjectAce *))(*(_QWORD *)this + 16LL))(this);
    v3 = (char *)malloc(v2);
    v4 = v3;
    if ( !v3 )
      ATL::AtlThrowImpl(-2147024882);
    memset_0(v3, 0, v2);
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
    v12 = memcpy_s(v5, v5 - v4, (char *)this + 16, LengthSid);
    if ( v12 )
    {
      if ( v12 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v12 == 22 || v12 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v12 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
    *((_QWORD *)this + 17) = v4;
  }
  return (void *)*((_QWORD *)this + 17);
}
