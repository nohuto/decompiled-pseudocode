/*
 * XREFs of ??1?$ActivityBase@$0A@$0A@$04@wil@@QEAA@XZ @ 0x180021550
 * Callers:
 *     _lambda_4b113ca380de658e4b053f81fda3c9b1_::operator() @ 0x180022F84 (_lambda_4b113ca380de658e4b053f81fda3c9b1_--operator().c)
 *     _lambda_9e7d2ca8e92d49cfddf0abd925277e19_::operator() @ 0x180023130 (_lambda_9e7d2ca8e92d49cfddf0abd925277e19_--operator().c)
 * Callees:
 *     ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x180008854 (--1StoredFailureInfo@wil@@QEAA@XZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180024478 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180024C9C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180025CF8 (--3@YAXPEAX@Z.c)
 *     free @ 0x180026864 (free.c)
 */

void __fastcall wil::ActivityBase<0,0,5>::~ActivityBase<0,0,5>(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 **v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(volatile signed __int32 **)(a1 + 312);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(_QWORD *)(a1 + 312);
      if ( v3 )
      {
        wil::StoredFailureInfo::~StoredFailureInfo((wil::StoredFailureInfo *)(v3 + 96));
        if ( *(_BYTE *)(v3 + 80) )
        {
          free(*(void **)(v3 + 72));
          *(_BYTE *)(v3 + 80) = 0;
        }
        *(_QWORD *)(v3 + 72) = 0LL;
        if ( *(_DWORD *)(v3 + 8) == 1 )
        {
          v4 = *(_QWORD *)(v3 + 48);
          *(_DWORD *)(v3 + 8) = 2;
          _TlgWriteActivityAutoStop<0,5>(v4, v3 + 16);
        }
        *(_DWORD *)(v3 + 8) = 3;
        operator delete((void *)v3);
      }
    }
    *(_QWORD *)(a1 + 312) = 0LL;
  }
  wil::StoredFailureInfo::~StoredFailureInfo((wil::StoredFailureInfo *)(a1 + 144));
  if ( *(_BYTE *)(a1 + 128) )
  {
    free(*(void **)(a1 + 120));
    *(_BYTE *)(a1 + 128) = 0;
  }
  *(_QWORD *)(a1 + 120) = 0LL;
  if ( *(_DWORD *)(a1 + 56) == 1 )
  {
    v5 = *(_QWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 56) = 2;
    _TlgWriteActivityAutoStop<0,5>(v5, a1 + 64);
  }
  *(_DWORD *)(a1 + 56) = 3;
  v6 = (__int64 **)(a1 + 8);
  if ( *((_DWORD *)v6 + 6) )
  {
    if ( *((_DWORD *)v6 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x779,
        (unsigned int)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL,
        v9);
    v7 = *v6;
    *((_DWORD *)v6 + 6) = 0;
    while ( *v7 )
    {
      v8 = **v6;
      if ( (__int64 **)v8 == v6 )
      {
        **v6 = (__int64)v6[2];
        break;
      }
      v7 = (__int64 *)(v8 + 16);
      *v6 = v7;
    }
    *v6 = 0LL;
  }
}
