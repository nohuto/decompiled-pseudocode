/*
 * XREFs of ?DeliverInput@InputRedirectionTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180083840
 * Callers:
 *     ?DeliverInput@InputRedirectionTarget@@W7EAAJPEAUInputInfo@@@Z @ 0x180083A10 (-DeliverInput@InputRedirectionTarget@@W7EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionTarget::DeliverInput(InputRedirectionTarget *this, struct InputInfo *a2)
{
  int v2; // ebx
  __int64 v5; // rax
  char *v6; // rcx
  struct InputInfo *v7; // rax
  __int64 v8; // rdx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rdx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  HANDLE v22; // rax
  void *v23; // rbx
  int v25; // [rsp+30h] [rbp-788h] BYREF
  char v26; // [rsp+38h] [rbp-780h] BYREF

  v2 = 0;
  if ( a2 )
  {
    if ( *((_DWORD *)this + 10) )
    {
      v5 = *((_QWORD *)this + 7);
      v6 = &v26;
      *((_QWORD *)a2 + 69) = v5;
      v7 = a2;
      v8 = 14LL;
      v25 = 3;
      do
      {
        v9 = *((_OWORD *)v7 + 1);
        *(_OWORD *)v6 = *(_OWORD *)v7;
        v10 = *((_OWORD *)v7 + 2);
        *((_OWORD *)v6 + 1) = v9;
        v11 = *((_OWORD *)v7 + 3);
        *((_OWORD *)v6 + 2) = v10;
        v12 = *((_OWORD *)v7 + 4);
        *((_OWORD *)v6 + 3) = v11;
        v13 = *((_OWORD *)v7 + 5);
        *((_OWORD *)v6 + 4) = v12;
        v14 = *((_OWORD *)v7 + 6);
        *((_OWORD *)v6 + 5) = v13;
        v15 = *((_OWORD *)v7 + 7);
        v7 = (struct InputInfo *)((char *)v7 + 128);
        *((_OWORD *)v6 + 6) = v14;
        v6 += 128;
        *((_OWORD *)v6 - 1) = v15;
        --v8;
      }
      while ( v8 );
      v16 = *((unsigned int *)this + 10);
      v17 = *((_OWORD *)v7 + 1);
      *(_OWORD *)v6 = *(_OWORD *)v7;
      v18 = *((_OWORD *)v7 + 2);
      *((_OWORD *)v6 + 1) = v17;
      v19 = *((_OWORD *)v7 + 3);
      *((_OWORD *)v6 + 2) = v18;
      v20 = *((_OWORD *)v7 + 4);
      *((_OWORD *)v6 + 3) = v19;
      v21 = *((_OWORD *)v7 + 5);
      *((_OWORD *)v6 + 4) = v20;
      *((_OWORD *)v6 + 5) = v21;
      v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, int))(**((_QWORD **)this + 4) + 152LL))(
             *((_QWORD *)this + 4),
             v16,
             4LL,
             &v25,
             1896);
      if ( v2 < 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 144LL))(
          *((_QWORD *)this + 4),
          *((unsigned int *)this + 10));
        *((_DWORD *)this + 10) = 0;
        v2 = 0;
      }
    }
    if ( !*((_DWORD *)this + 10) )
    {
      if ( *((_BYTE *)a2 + 696) )
      {
        v22 = OpenEventW(2u, 0, L"Touch_Test_Sync_Event");
        v23 = v22;
        if ( v22 )
        {
          SetEvent(v22);
          CloseHandle(v23);
        }
      }
      return 0;
    }
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 183, 87);
  }
  return (unsigned int)v2;
}
