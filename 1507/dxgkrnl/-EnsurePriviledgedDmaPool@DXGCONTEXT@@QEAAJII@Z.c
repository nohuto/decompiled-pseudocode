/*
 * XREFs of ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C00739F8
 * Callers:
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C0073374 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::EnsurePriviledgedDmaPool(DXGCONTEXT *this, int a2, int a3)
{
  int v3; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rax
  char v13; // [rsp+20h] [rbp-48h]

  v3 = 0;
  if ( !*((_QWORD *)this + 26) )
  {
    v13 = 1;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, char, _DWORD, int, int, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 416LL))(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
           *((unsigned int *)this + 82),
           *(_QWORD *)(*((_QWORD *)this + 2) + 536LL),
           this,
           v13,
           *((_DWORD *)this + 44),
           a2,
           a3,
           *((_DWORD *)this + 45),
           *((_DWORD *)this + 46));
    *((_QWORD *)this + 26) = v7;
    if ( v7 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                          + 8LL)
                                              + 424LL))(v7);
      if ( v3 >= 0 )
      {
        *((_DWORD *)this + 47) = a2;
        *((_DWORD *)this + 48) = a3;
      }
    }
    else
    {
      v12 = WdLogNewEntry5_WdWarning(0LL, v8, v9, v10);
      v3 = -1073741801;
      *(_QWORD *)(v12 + 24) = this;
      *(_QWORD *)(v12 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v12);
    }
  }
  return (unsigned int)v3;
}
