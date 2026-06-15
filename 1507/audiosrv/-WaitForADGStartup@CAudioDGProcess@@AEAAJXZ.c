/*
 * XREFs of ?WaitForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180006300
 * Callers:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x180001B68 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180006498 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180006974 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioDGProcess::WaitForADGStartup(CAudioDGProcess *this)
{
  void *v2; // rcx
  unsigned int v3; // ebx
  void *v4; // rax
  DWORD v5; // eax
  signed int LastError; // eax
  __int64 v8; // rcx
  HANDLE v9[3]; // [rsp+30h] [rbp-18h] BYREF
  DWORD ExitCode; // [rsp+50h] [rbp+8h] BYREF

  v2 = (void *)*((_QWORD *)this + 11);
  v3 = -2004287472;
  if ( !v2 )
    goto LABEL_22;
  v4 = (void *)*((_QWORD *)this + 13);
  v9[1] = v2;
  v9[0] = v4;
  v5 = WaitForMultipleObjectsEx(2u, v9, 0, 0xFFFFFFFF, 0);
  if ( !v5 )
    return 0;
  if ( v5 == 1 )
  {
    if ( !GetExitCodeProcess(*((HANDLE *)this + 11), &ExitCode) )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          21LL,
          &WPP_790b6676494959b41396352d3c3efd49_Traceguids,
          v3);
        v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      goto LABEL_20;
    }
    v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( ExitCode != -1073740760 )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          22LL,
          &WPP_790b6676494959b41396352d3c3efd49_Traceguids,
          ExitCode);
        v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      v3 = -2147467259;
LABEL_20:
      if ( (v3 & 0x80000000) == 0 )
        return v3;
      goto LABEL_23;
    }
    v3 = -2147024319;
  }
  else
  {
LABEL_22:
    v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
LABEL_23:
  if ( (struct _GUID *)v8 != &WPP_GLOBAL_Control && (*(_BYTE *)(v8 + 28) & 4) != 0 && *(_BYTE *)(v8 + 25) >= 2u )
    WPP_SF_D(*(_QWORD *)(v8 + 16), 23LL, &WPP_790b6676494959b41396352d3c3efd49_Traceguids, v3);
  return v3;
}
