/*
 * XREFs of ?Create@EdgeGestureComponent@@SAJPEAUIDWMInputProxy@@PEAUIInputDisplay@@PEAPEAUIInputTargetingComponent@@@Z @ 0x180022984
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001248C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0EdgeGestureComponent@@IEAA@XZ @ 0x1800227EC (--0EdgeGestureComponent@@IEAA@XZ.c)
 *     ?Initialize@InputEdgyNotifier@@QEAAJXZ @ 0x180024CD8 (-Initialize@InputEdgyNotifier@@QEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgeGestureComponent::Create(
        struct IDWMInputProxy *a1,
        struct IInputDisplay *a2,
        struct IInputTargetingComponent **a3)
{
  unsigned int v6; // ebx
  int v7; // r9d
  EdgeGestureComponent *v8; // rax
  EdgeGestureComponent *v9; // rbx
  EdgeGestureComponent *v10; // rsi
  int v11; // edi
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  _DWORD *v16; // r14
  int v17; // eax
  int v18; // r9d

  if ( a3 )
  {
    v8 = (EdgeGestureComponent *)malloc(0xC0uLL);
    v9 = v8;
    if ( v8 )
      memset(v8, 0, 0xC0uLL);
    if ( v9 )
      v10 = EdgeGestureComponent::EdgeGestureComponent(v9);
    else
      v10 = 0LL;
    if ( !v10 )
    {
      v6 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v6;
      v7 = 82;
      goto LABEL_4;
    }
    if ( !a1 )
    {
      v6 = -2147024809;
      v11 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v12 = 50;
LABEL_16:
        Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v12, 87);
        goto LABEL_33;
      }
      goto LABEL_36;
    }
    *((_QWORD *)v10 + 8) = a1;
    if ( !a2 )
    {
      v6 = -2147024809;
      v11 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v12 = 53;
        goto LABEL_16;
      }
LABEL_36:
      if ( v11 < 0 )
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v10 + 1) + 24LL))((__int64)v10 + 8, 1LL);
      return v6;
    }
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)a2 + 8LL))(a2);
    v14 = *((_QWORD *)v10 + 9);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    *((_QWORD *)v10 + 9) = a2;
    v15 = (_DWORD *)((char *)v10 + 28);
    v16 = (_DWORD *)((char *)v10 + 24);
    v17 = (*(__int64 (__fastcall **)(struct IInputDisplay *, __int64, __int64))(*(_QWORD *)a2 + 32LL))(
            a2,
            (__int64)v10 + 24,
            (__int64)v10 + 28);
    v11 = v17;
    if ( v17 >= 0 )
    {
      if ( !*v16 && !*v15 )
      {
        *v16 = 1024;
        *v15 = 768;
      }
      v17 = InputEdgyNotifier::Initialize((EdgeGestureComponent *)((char *)v10 + 104));
      v11 = v17;
      if ( v17 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_32;
      v18 = 64;
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_32:
        v6 = v11;
        if ( v11 < 0 )
        {
LABEL_33:
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v13, &MinInput_Warning_CheckResult, 0, 84, v11);
          goto LABEL_36;
        }
        *a3 = v10;
        goto LABEL_36;
      }
      v18 = 56;
    }
    Template_qqq(v13, &MinInput_Warning_CheckResult, 0, v18, v17);
    goto LABEL_32;
  }
  v6 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 79;
LABEL_4:
    Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v7, v6);
  }
  return v6;
}
