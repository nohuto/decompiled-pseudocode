/*
 * XREFs of _anonymous_namespace_::ComputeWindowToActivate @ 0x140192C70
 * Callers:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x140191B8C (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 * Callees:
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1401A36FC (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

bool __fastcall anonymous_namespace_::ComputeWindowToActivate(const struct tagWND *a1, char a2, int a3, _OWORD *a4)
{
  void (**v8)(ForegroundLaunch *__hidden, bool); // rbx
  bool result; // al
  __int128 v10; // [rsp+20h] [rbp-18h]

  *a4 = 0LL;
  if ( (a2 & 1) != 0 && IsWindowActivateable(a1) )
  {
    *(_QWORD *)&v10 = a1;
    result = 1;
    *((_QWORD *)&v10 + 1) = 1LL;
    *a4 = v10;
  }
  else
  {
    if ( (a2 & 2) != 0 )
    {
      v8 = (void (**)(ForegroundLaunch *__hidden, bool))&unk_1403590F0;
      do
      {
        if ( (a3 & *(_DWORD *)v8) != 0
          && ((unsigned __int8 (__fastcall *)(const struct tagWND *, _OWORD *))v8[1])(a1, a4) )
        {
          break;
        }
        v8 += 2;
      }
      while ( v8 != &off_140359140 );
    }
    return *(_QWORD *)a4 != 0LL;
  }
  return result;
}
