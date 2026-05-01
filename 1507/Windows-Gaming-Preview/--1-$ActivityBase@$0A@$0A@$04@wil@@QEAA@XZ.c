/*
 * XREFs of ??1?$ActivityBase@$0A@$0A@$04@wil@@QEAA@XZ @ 0x18002193C
 * Callers:
 *     _lambda_243e5818cdba31bdb76d77cbcbf5d1a4_::operator() @ 0x1800230B4 (_lambda_243e5818cdba31bdb76d77cbcbf5d1a4_--operator().c)
 *     _lambda_baa2029db22e8b1694aee1901adb8c93_::operator() @ 0x180023260 (_lambda_baa2029db22e8b1694aee1901adb8c93_--operator().c)
 * Callees:
 *     ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x18000894C (--1StoredFailureInfo@wil@@QEAA@XZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180024578 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180024D9C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180025E28 (--3@YAXPEAX@Z.c)
 *     free @ 0x180026994 (free.c)
 */

void __fastcall wil::ActivityBase<0,0,5>::~ActivityBase<0,0,5>(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 **v6; // rbx
  void *v7; // rdx
  unsigned int v8; // r8d
  __int64 *v9; // rax
  __int64 v10; // rax
  int v11; // [rsp+20h] [rbp-8h]
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
      wil::details::in1diag3::Log_Hr(retaddr, v7, v8, (const char *)0x8007029CLL, v11);
    v9 = *v6;
    *((_DWORD *)v6 + 6) = 0;
    while ( *v9 )
    {
      v10 = **v6;
      if ( (__int64 **)v10 == v6 )
      {
        **v6 = (__int64)v6[2];
        break;
      }
      v9 = (__int64 *)(v10 + 16);
      *v6 = v9;
    }
    *v6 = 0LL;
  }
}
