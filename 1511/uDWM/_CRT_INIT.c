/*
 * XREFs of _CRT_INIT @ 0x18004F6FC
 * Callers:
 *     sub_18004F99C @ 0x18004F99C (sub_18004F99C.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     _amsg_exit_0 @ 0x18004FC08 (_amsg_exit_0.c)
 *     _IsNonwritableInCurrentImage @ 0x18004FC70 (_IsNonwritableInCurrentImage.c)
 *     _initterm_0 @ 0x18004FDDA (_initterm_0.c)
 */

__int64 __fastcall CRT_INIT(__int64 a1, int a2, __int64 a3)
{
  int v5; // r15d
  PVOID StackBase; // rbx
  signed __int64 v7; // rax
  void (__fastcall **v8)(_QWORD); // r14
  void (__fastcall **v9)(_QWORD); // rsi
  void *v10; // r13
  __int64 v11; // r12
  void (__fastcall *v12)(_QWORD); // rcx
  int v14; // r14d
  PVOID v15; // rbx
  signed __int64 v16; // rax
  _QWORD *v17; // rbx
  int v18; // eax

  if ( !a2 )
  {
    if ( dword_1800BBC78 > 0 )
    {
      v5 = 0;
      --dword_1800BBC78;
      StackBase = NtCurrentTeb()->NtTib.StackBase;
      while ( 1 )
      {
        v7 = _InterlockedCompareExchange64(&_native_startup_lock, (signed __int64)StackBase, 0LL);
        if ( !v7 )
          break;
        if ( (PVOID)v7 == StackBase )
        {
          v5 = 1;
          break;
        }
        Sleep(0x3E8u);
      }
      if ( _native_startup_state == 2 )
      {
        v8 = (void (__fastcall **)(_QWORD))_onexitbegin;
        if ( _onexitbegin )
        {
          v9 = (void (__fastcall **)(_QWORD))_onexitend;
          v10 = _onexitbegin;
          v11 = _onexitend;
          while ( --v9 >= v8 )
          {
            if ( *v9 )
            {
              v12 = *v9;
              *v9 = 0LL;
              v12(v12);
              if ( v10 != _onexitbegin || v11 != _onexitend )
              {
                v10 = _onexitbegin;
                v8 = (void (__fastcall **)(_QWORD))_onexitbegin;
                v11 = _onexitend;
                v9 = (void (__fastcall **)(_QWORD))_onexitend;
              }
            }
          }
          free(v8);
          _onexitend = 0LL;
          _onexitbegin = 0LL;
        }
        _native_startup_state = 0;
        if ( !v5 )
          _InterlockedExchange64(&_native_startup_lock, 0LL);
      }
      else
      {
        amsg_exit_0(31LL);
      }
      return 1LL;
    }
    return 0LL;
  }
  if ( a2 == 1 )
  {
    v14 = 0;
    v15 = NtCurrentTeb()->NtTib.StackBase;
    while ( 1 )
    {
      v16 = _InterlockedCompareExchange64(&_native_startup_lock, (signed __int64)v15, 0LL);
      if ( !v16 )
        break;
      if ( (PVOID)v16 == v15 )
      {
        v14 = 1;
        break;
      }
      Sleep(0x3E8u);
    }
    if ( _native_startup_state )
    {
      amsg_exit_0(31LL);
    }
    else
    {
      v17 = &_xi_a;
      _native_startup_state = 1;
      v18 = 0;
      if ( &_xi_a < (_UNKNOWN *)&_xi_z )
      {
        while ( !v18 )
        {
          if ( *v17 )
            v18 = ((__int64 (__fastcall *)(_QWORD))*v17)(*v17);
          if ( ++v17 >= &_xi_z )
          {
            if ( v18 )
              return 0LL;
            goto LABEL_37;
          }
        }
        return 0LL;
      }
LABEL_37:
      initterm_0((_PVFV *)&_xc_a, (_PVFV *)&_xc_z);
      _native_startup_state = 2;
    }
    if ( !v14 )
      _InterlockedExchange64(&_native_startup_lock, 0LL);
    if ( _dyn_tls_init_callback && (unsigned int)IsNonwritableInCurrentImage(&_dyn_tls_init_callback) )
      ((void (__fastcall *)(__int64, __int64, __int64))_dyn_tls_init_callback)(a1, 2LL, a3);
    ++dword_1800BBC78;
  }
  return 1LL;
}
