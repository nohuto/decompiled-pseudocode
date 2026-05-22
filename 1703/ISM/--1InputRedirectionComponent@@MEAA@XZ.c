/*
 * XREFs of ??1InputRedirectionComponent@@MEAA@XZ @ 0x1800825AC
 * Callers:
 *     ??_EInputRedirectionComponent@@MEAAPEAXI@Z @ 0x180082568 (--_EInputRedirectionComponent@@MEAAPEAXI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall InputRedirectionComponent::~InputRedirectionComponent(InputRedirectionComponent *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  __int64 v7; // rdx
  char *v8; // r8
  __int64 v9; // rbp
  __int64 v10; // r9
  _QWORD *v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD v17[3]; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)this = &InputRedirectionComponent::`vftable'{for `IInputTargetingComponent'};
  *((_QWORD *)this + 1) = &InputRedirectionComponent::`vftable'{for `IRemoteInputRedirection'};
  *((_QWORD *)this + 2) = &InputRedirectionComponent::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 3) = &InputRedirectionComponent::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *((_QWORD *)this + 5) = 0LL;
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *((_QWORD *)this + 6) = 0LL;
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 7) = 0LL;
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 8) = 0LL;
  v6 = (_DWORD *)((char *)this + 80);
  v7 = 0LL;
  v8 = (char *)this + 80;
  v9 = 3LL;
  v10 = 3LL;
  do
  {
    if ( *(_DWORD *)v8 )
    {
      v17[v7] = *((_QWORD *)v8 + 1);
      v7 = (unsigned int)(v7 + 1);
    }
    v8 += 16;
    --v10;
  }
  while ( v10 );
  if ( (_DWORD)v7 )
  {
    v11 = v17;
    v12 = (unsigned int)v7;
    do
    {
      (*(void (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v11 + 16LL))(*v11, v7, v8);
      ++v11;
      --v12;
    }
    while ( v12 );
  }
  do
  {
    *v6 = 0;
    v6 += 4;
    --v9;
  }
  while ( v9 );
  v13 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v13 + 16LL))(v13, v7, v8);
  v14 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v14 + 16LL))(v14, v7, v8);
  v15 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v15 + 16LL))(v15, v7, v8);
  v16 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v16 + 16LL))(v16, v7, v8);
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}
