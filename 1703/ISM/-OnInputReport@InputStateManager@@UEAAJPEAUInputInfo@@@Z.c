/*
 * XREFs of ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x180006780
 * Callers:
 *     ?OnInputReport@InputStateManager@@W7EAAJPEAUInputInfo@@@Z @ 0x180007340 (-OnInputReport@InputStateManager@@W7EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     Template_qqqq @ 0x180005870 (Template_qqqq.c)
 *     Template_qqqqqqq @ 0x1800058F0 (Template_qqqqqqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@KPEAUIRawInputProvider@@$0BAA@@@QEAAJAEBKPEAPEAUIRawInputProvider@@@Z @ 0x180007144 (-GetValueForKey@-$FixedSizeMap@KPEAUIRawInputProvider@@$0BAA@@@QEAAJAEBKPEAPEAUIRawInputProvider.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x18000934C (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::OnInputReport(InputStateManager *this, struct InputInfo *a2)
{
  int PointersFromInput; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // r9d
  __int64 i; // rbx
  int *v10; // rcx
  DWORD TickCount; // r11d
  __int64 v12; // r8
  unsigned int v13; // r10d
  __int64 v14; // r9
  int v15; // edx
  int v16; // ecx
  unsigned int v18; // [rsp+50h] [rbp-88h] BYREF
  __int64 v19; // [rsp+58h] [rbp-80h] BYREF
  struct Pointer *v20[10]; // [rsp+60h] [rbp-78h] BYREF

  v19 = 0LL;
  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    Template_qqqq((__int64)this, &MinInput_Log_InputInfo, 1, *(_DWORD *)a2, *((_DWORD *)a2 + 1), *((_DWORD *)a2 + 2));
  if ( (*(_BYTE *)a2 & 0x3B) != 0 )
  {
    v18 = 0;
    PointersFromInput = GetPointersFromInput(a2, (unsigned int)a2, v20, &v18);
    v7 = PointersFromInput;
    if ( PointersFromInput < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v8 = 361;
LABEL_43:
        Template_qqq(v6, &MinInput_Warning_CheckResult, 1, v8, PointersFromInput);
        return v7;
      }
      return v7;
    }
    for ( i = 0LL; (unsigned int)i < v18; i = (unsigned int)(i + 1) )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
      {
        v10 = (int *)v20[i];
        Template_qqqqqqq((__int64)v10, v5, 1, *v10, v10[1], v10[3], v10[4], v10[5], v10[6]);
      }
    }
  }
  TickCount = GetTickCount();
  if ( (*(_BYTE *)a2 & 2) != 0 )
    v12 = *((unsigned __int16 *)a2 + 354);
  else
    v12 = 0LL;
  if ( (*(_BYTE *)a2 & 0x40) != 0 )
  {
    v13 = 3;
  }
  else if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    v13 = 1;
  }
  else if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    v13 = 2;
  }
  else if ( (*(_BYTE *)a2 & 8) != 0 )
  {
    v13 = 10;
  }
  else if ( (*(_BYTE *)a2 & 0x10) != 0 )
  {
    v13 = 12;
  }
  else
  {
    v13 = (*(_DWORD *)a2 & 0x100) != 0 ? 3 : 0;
  }
  v14 = 0xFFFFFFFFLL;
  v15 = ((*(_DWORD *)a2 & *((_DWORD *)this + 2074)) != 0 ? 3 : 1) | 4;
  if ( (*(_DWORD *)a2 & *((_DWORD *)this + 2075)) == 0 )
    v15 = (*(_DWORD *)a2 & *((_DWORD *)this + 2074)) != 0 ? 3 : 1;
  if ( *((_BYTE *)a2 + 699) )
  {
    v15 &= ~1u;
  }
  else if ( (*(_BYTE *)a2 & 0xC4) != 0 )
  {
    v14 = *((unsigned int *)this + 2077);
  }
  else
  {
    v14 = 0LL;
  }
  if ( *(_DWORD *)a2 != 2048 )
  {
    if ( (*(_DWORD *)a2 & 0x200) == 0 || (v16 = *((_DWORD *)a2 + 176), (unsigned int)(v16 - 4) > 2) && v16 != 8 )
      MITUpdateInputGlobals(TickCount, v13, v12, v14, v15);
  }
  PointersFromInput = FixedSizeMap<unsigned long,IRawInputProvider *,256>::GetValueForKey(
                        (char *)this + 72,
                        (char *)a2 + 4,
                        &v19);
  v7 = PointersFromInput;
  if ( PointersFromInput >= 0 )
  {
    PointersFromInput = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v19 + 48LL))(v19, a2);
    v7 = PointersFromInput;
    if ( PointersFromInput < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 380;
      goto LABEL_43;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 378;
    goto LABEL_43;
  }
  return v7;
}
