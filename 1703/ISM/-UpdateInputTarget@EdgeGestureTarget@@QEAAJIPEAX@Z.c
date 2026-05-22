/*
 * XREFs of ?UpdateInputTarget@EdgeGestureTarget@@QEAAJIPEAX@Z @ 0x180023D80
 * Callers:
 *     ?OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x180022C40 (-OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUI.c)
 *     ?Initialize@EdgeGestureTarget@@IEAAJIPEAX@Z @ 0x180023694 (-Initialize@EdgeGestureTarget@@IEAAJIPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0PropertyMap@Input@@QEAA@XZ @ 0x180011584 (--0PropertyMap@Input@@QEAA@XZ.c)
 *     ?Initialize@DWMInputTarget@@IEAAJXZ @ 0x180019F28 (-Initialize@DWMInputTarget@@IEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall EdgeGestureTarget::UpdateInputTarget(EdgeGestureTarget *this, unsigned int a2, void *a3)
{
  unsigned int v6; // edi
  char v7; // bl
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  int v15; // esi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0;
  if ( !a2 )
  {
    v6 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 197, 87);
    return v6;
  }
  v8 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 8);
  if ( v8 )
  {
    v19 = 0LL;
    if ( (**v8)(v8, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v19) >= 0 )
    {
      v9 = v19;
      if ( !v19 )
      {
        v6 = -2147418113;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          Template_qqq(0LL, &MinInput_Warning_CheckResult, 0, 209, 255);
          v9 = v19;
        }
        v19 = 0LL;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        return v6;
      }
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *))(*(_QWORD *)v19 + 24LL))(v19, a2, a3);
      if ( v7 && a3 )
        CloseHandle(a3);
    }
    v10 = v19;
    v19 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v7 )
      return v6;
  }
  v11 = 0LL;
  v12 = malloc(0xC8uLL);
  v13 = v12;
  if ( v12 )
    memset(v12, 0, 0xC8uLL);
  if ( v13 )
  {
    v13[5] = &RefCountedObject::`vftable';
    *((_DWORD *)v13 + 12) = 1;
    *v13 = &DWMInputTarget::`vftable'{for `IInputTarget'};
    v13[1] = &DWMInputTarget::`vftable'{for `IDCompInputTarget'};
    v13[2] = &DWMInputTarget::`vftable'{for `IDWMPnPTarget'};
    v13[3] = &DWMInputTarget::`vftable'{for `IFocusInputTarget'};
    v13[4] = &DWMInputTarget::`vftable'{for `IInputTarget2'};
    v13[5] = &DWMInputTarget::`vftable'{for `RefCountedObject'};
    v13[7] = 0LL;
    v13[17] = 0LL;
    *((_BYTE *)v13 + 144) = 0;
    Input::PropertyMap::PropertyMap((Input::PropertyMap *)(v13 + 19));
    *((_DWORD *)v13 + 16) = a2;
    v13[9] = a3;
    *((_BYTE *)v13 + 132) = 0;
    *((_DWORD *)v13 + 32) = -1;
    *((_DWORD *)v13 + 20) = 0;
    v16 = DWMInputTarget::Initialize((DWMInputTarget *)v13);
    v15 = v16;
    if ( v16 >= 0 )
    {
      v11 = v13;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v14, &MinInput_Warning_CheckResult, 3, 220, v16);
    }
    if ( v15 < 0 )
      (*(void (__fastcall **)(_QWORD *, __int64))(v13[5] + 24LL))(v13 + 5, 1LL);
  }
  else
  {
    CloseHandle(a3);
    v15 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v14, &MinInput_Warning_CheckResult, 3, 217, 14);
      v6 = -2147024882;
      goto LABEL_30;
    }
  }
  v6 = v15;
  if ( v15 >= 0 )
  {
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
    v17 = *((_QWORD *)this + 8);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    *((_QWORD *)this + 8) = v11;
    if ( v11 )
      goto LABEL_39;
    return v6;
  }
LABEL_30:
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v14, &MinInput_Warning_CheckResult, 0, 243, v15);
  if ( v11 )
LABEL_39:
    (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
  return v6;
}
