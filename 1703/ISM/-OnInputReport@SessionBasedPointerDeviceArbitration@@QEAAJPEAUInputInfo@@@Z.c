/*
 * XREFs of ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x18005E99C
 * Callers:
 *     ?OnDeliverInput@EdgeGestureTarget@@UEAAJPEAUInputInfo@@PEAW4InputBufferingDecision@@@Z @ 0x1800240B0 (-OnDeliverInput@EdgeGestureTarget@@UEAAJPEAUInputInfo@@PEAW4InputBufferingDecision@@@Z.c)
 *     ?OnDeliverInput@MagnifierTarget@@UEAAJPEAUInputInfo@@PEAW4InputBufferingDecision@@@Z @ 0x180081E60 (-OnDeliverInput@MagnifierTarget@@UEAAJPEAUInputInfo@@PEAW4InputBufferingDecision@@@Z.c)
 *     ?DeliverInput@MagnifierTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180081F20 (-DeliverInput@MagnifierTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x18000934C (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     ?SetIsNonPrimaryDeviceInActiveSession@SessionBasedPointerDeviceArbitration@@AEAAJK_N@Z @ 0x18005E920 (-SetIsNonPrimaryDeviceInActiveSession@SessionBasedPointerDeviceArbitration@@AEAAJK_N@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SessionBasedPointerDeviceArbitration::OnInputReport(
        SessionBasedPointerDeviceArbitration *this,
        struct InputInfo *a2)
{
  unsigned int v2; // edi
  char v5; // bp
  char v6; // r14
  int PointersFromInput; // eax
  __int64 v8; // rcx
  int v9; // r9d
  struct Pointer **v10; // r9
  __int64 v11; // r10
  __int64 v12; // rax
  int v13; // r8d
  char v14; // cl
  char v15; // cl
  int v16; // ecx
  _DWORD *v17; // r8
  unsigned int v18; // edx
  _DWORD *v19; // rax
  char v20; // al
  int v21; // eax
  unsigned int i; // edx
  unsigned int v24[4]; // [rsp+30h] [rbp-88h] BYREF
  struct Pointer *v25[10]; // [rsp+40h] [rbp-78h] BYREF

  v2 = 0;
  if ( (*(_BYTE *)a2 & 0x3B) == 0 )
    return v2;
  v5 = 0;
  v6 = 0;
  if ( !*((_BYTE *)a2 + 697) )
  {
    v24[0] = 0;
    PointersFromInput = GetPointersFromInput(a2, (__int64)a2, v25, v24);
    v2 = PointersFromInput;
    if ( PointersFromInput < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v9 = 125;
LABEL_6:
        Template_qqq(v8, &MinInput_Warning_CheckResult, 0, v9, PointersFromInput);
        return v2;
      }
      return v2;
    }
    if ( v24[0] )
    {
      v10 = v25;
      v11 = v24[0];
      do
      {
        v12 = (__int64)*v10++;
        v13 = *(_DWORD *)(v12 + 4);
        v14 = v5 + 1;
        if ( (v13 & 2) == 0 )
          v14 = v5;
        v5 = v14;
        v15 = v6 + 1;
        if ( (v13 & 1) == 0 )
          v15 = v6;
        v6 = v15;
        --v11;
      }
      while ( v11 );
    }
  }
  v16 = *((_DWORD *)a2 + 1);
  if ( v16 != *((_DWORD *)this + 26) )
  {
    v17 = (_DWORD *)((char *)this + 24);
    v18 = 0;
    v19 = (_DWORD *)((char *)this + 24);
    while ( *v19 != v16 )
    {
      ++v18;
      ++v19;
      if ( v18 >= 0x14 )
      {
        v20 = 0;
        goto LABEL_20;
      }
    }
    v20 = 1;
LABEL_20:
    if ( *((_BYTE *)this + 108) || v20 )
    {
      if ( v5 )
      {
        if ( !v20 )
        {
          if ( *((_BYTE *)this + 109) )
          {
            PointersFromInput = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
            v2 = PointersFromInput;
            if ( PointersFromInput < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                return v2;
              v9 = 177;
              goto LABEL_6;
            }
            *((_DWORD *)this + 26) = *((_DWORD *)a2 + 1);
          }
          else
          {
            PointersFromInput = SessionBasedPointerDeviceArbitration::SetIsNonPrimaryDeviceInActiveSession(this, v16, 1);
            v2 = PointersFromInput;
            if ( PointersFromInput < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                return v2;
              v9 = 188;
              goto LABEL_6;
            }
          }
        }
      }
      else if ( v20 )
      {
        v21 = -1;
        for ( i = 0; i < 0x14; ++i )
        {
          if ( *v17 == v16 )
          {
            *v17 = 0;
          }
          else if ( !*v17 && v21 == -1 )
          {
            v21 = i;
          }
          ++v17;
        }
        v2 = 0;
      }
    }
    else
    {
      *((_DWORD *)this + 26) = v16;
    }
  }
  if ( *((_DWORD *)a2 + 1) == *((_DWORD *)this + 26) )
  {
    if ( v5 )
    {
      *((_WORD *)this + 54) = 1;
    }
    else if ( v6 )
    {
      *((_WORD *)this + 54) = 257;
    }
    else
    {
      *((_WORD *)this + 54) = 0;
    }
    (*(void (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), a2);
  }
  return v2;
}
