/*
 * XREFs of ?CheckCurrentOrientation@OrientationWatcher@@IEAAXXZ @ 0x18005AC9C
 * Callers:
 *     ?OnConnected@OrientationWatcher@@UEAAJPEAUIMessageProxy@@@Z @ 0x18005AC50 (-OnConnected@OrientationWatcher@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnPropertyChanged@OrientationWatcher@@UEAAJPEAUIMessageProxy@@G@Z @ 0x18005AC80 (-OnPropertyChanged@OrientationWatcher@@UEAAJPEAUIMessageProxy@@G@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall OrientationWatcher::CheckCurrentOrientation(OrientationWatcher *this)
{
  void (__fastcall *v2)(_QWORD, _QWORD); // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 40LL))(*((_QWORD *)this + 4), &v3) >= 0 )
  {
    switch ( v3 )
    {
      case 1:
        *((_DWORD *)this + 16) = 1;
        break;
      case 2:
        *((_DWORD *)this + 16) = 2;
        break;
      case 4:
        *((_DWORD *)this + 16) = 3;
        break;
      case 8:
        *((_DWORD *)this + 16) = 4;
        break;
      default:
        return;
    }
    v2 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)this + 7);
    if ( v2 )
      v2(*((_QWORD *)this + 6), *((unsigned int *)this + 16));
  }
}
