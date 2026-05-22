/*
 * XREFs of ??1InputStateManager@@MEAA@XZ @ 0x180005BA4
 * Callers:
 *     ??_GInputStateManager@@MEAAPEAXI@Z @ 0x180005B60 (--_GInputStateManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?GetValues@?$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEAY0BAA@PEAUIInputProcessor@@PEAI@Z @ 0x18000728C (-GetValues@-$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEAY0BAA@PEAUIInputProcessor@@PEAI@.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall InputStateManager::~InputStateManager(InputStateManager *this)
{
  _DWORD *v2; // rdi
  _QWORD *v3; // rsi
  __int64 v4; // rbp
  _DWORD *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD v17[4]; // [rsp+20h] [rbp-848h] BYREF
  _BYTE v18[2048]; // [rsp+40h] [rbp-828h] BYREF

  v17[1] = -2LL;
  v17[2] = this;
  *(_QWORD *)this = &InputStateManager::`vftable'{for `IRawInputClient'};
  *((_QWORD *)this + 1) = &InputStateManager::`vftable'{for `IInputProcessorHost'};
  *((_QWORD *)this + 2) = &InputStateManager::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &InputStateManager::`vftable'{for `RefCountedObject'};
  LODWORD(v17[0]) = 0;
  v2 = (_DWORD *)((char *)this + 72);
  FixedSizeMap<unsigned long,IInputProcessor *,256>::GetValues((char *)this + 72, v18, v17);
  if ( LODWORD(v17[0]) )
  {
    v3 = v18;
    v4 = LODWORD(v17[0]);
    do
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  v5 = v2 + 1024;
  v6 = 256LL;
  v7 = 256LL;
  do
  {
    *v2 = *v5;
    v2 += 4;
    --v7;
  }
  while ( v7 );
  v8 = (_DWORD *)((char *)this + 4176);
  do
  {
    *v8 = *((_DWORD *)this + 2068);
    v8 += 4;
    --v6;
  }
  while ( v6 );
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  *((_QWORD *)this + 5) = 0LL;
  if ( *((_DWORD *)this + 16) )
  {
    v17[0] = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6), v17) >= 0 )
      (*(void (__fastcall **)(_QWORD, const wchar_t *, __int64))(*(_QWORD *)v17[0] + 48LL))(
        v17[0],
        L"System\\Input\\DeviceCommandEndpoint",
        1LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 144LL))(
      *((_QWORD *)this + 6),
      *((unsigned int *)this + 16));
    *((_DWORD *)this + 16) = 0;
    v10 = v17[0];
    v17[0] = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 7);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  *((_QWORD *)this + 7) = 0LL;
  v12 = *((_QWORD *)this + 6);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  *((_QWORD *)this + 6) = 0LL;
  v13 = *((_QWORD *)this + 1036);
  *((_QWORD *)this + 1036) = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}
