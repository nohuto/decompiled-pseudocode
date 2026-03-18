/*
 * XREFs of PpmWmiDispatch @ 0x1405403EC
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x1400E78B8 (KiSetTimerEx.c)
 *     PpmWmiRegisterInfo @ 0x14054045C (PpmWmiRegisterInfo.c)
 *     PpmWmiGetAllData @ 0x14063BEEC (PpmWmiGetAllData.c)
 */

__int64 __fastcall PpmWmiDispatch(int a1, __int64 *a2, int a3, int a4, __int64 a5, _DWORD *a6)
{
  char v6; // bl
  char v7; // r10
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx

  v6 = 0;
  v7 = 0;
  if ( !a1 )
  {
    v7 = 1;
    goto LABEL_45;
  }
  v8 = a1 - 1;
  if ( !v8 )
  {
LABEL_45:
    result = PpmWmiGetAllData((int)a5 - 224, (_DWORD)a2, a3, a4, (__int64)a6, v7);
    goto LABEL_9;
  }
  v9 = v8 - 3;
  if ( !v9 )
  {
    v6 = 1;
    goto LABEL_12;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_12:
    *a6 = 0;
    v12 = *a2;
    v13 = PPM_PERFSTATE_CHANGE_GUID - *a2;
    if ( PPM_PERFSTATE_CHANGE_GUID == *a2 )
      v13 = 0xBB9EB5430E9092B8uLL - a2[1];
    if ( v13 )
    {
      v15 = PPM_PERFSTATE_DOMAIN_CHANGE_GUID - v12;
      if ( PPM_PERFSTATE_DOMAIN_CHANGE_GUID == v12 )
        v15 = 0x1BF290CA33678B9LL - a2[1];
      if ( v15 )
      {
        v16 = PPM_IDLESTATE_CHANGE_GUID - v12;
        if ( PPM_IDLESTATE_CHANGE_GUID == v12 )
          v16 = 0x6C4CACA73084CC9ELL - a2[1];
        if ( v16 )
        {
          v17 = PPM_IDLE_ACCOUNTING_EX_GUID - v12;
          if ( PPM_IDLE_ACCOUNTING_EX_GUID == v12 )
            v17 = 0xEE12C91EE3725281uLL - a2[1];
          if ( v17 )
          {
            v18 = PPM_THERMALCONSTRAINT_GUID - v12;
            if ( PPM_THERMALCONSTRAINT_GUID == v12 )
              v18 = 0x881A93820DF32C8CuLL - a2[1];
            if ( v18 )
            {
              v19 = PPM_THERMAL_POLICY_CHANGE_GUID - v12;
              if ( PPM_THERMAL_POLICY_CHANGE_GUID == v12 )
                v19 = 0x4D65C6760138DC8BLL - a2[1];
              if ( v19 )
                return 3221226133LL;
              v14 = &WmiThermalPolicyEventEnabled;
            }
            else
            {
              v14 = &WmiThermalEventEnabled;
            }
          }
          else
          {
            v14 = (volatile signed __int32 *)&WmiIdleAccntEventEnabled;
          }
        }
        else
        {
          v14 = (volatile signed __int32 *)&WmiIdleStateEventEnabled;
        }
      }
      else
      {
        v14 = &WmiPerfStateDomainEventEnabled;
      }
    }
    else
    {
      v14 = &WmiPerfStateEventEnabled;
    }
    if ( v6 )
    {
      if ( _InterlockedIncrement(v14) == 1 && v14 == (volatile signed __int32 *)&WmiIdleAccntEventEnabled )
        KiSetTimerEx((__int64)&PpmWmiIdleAccountingTimer, 0LL, 10000LL, 0, (unsigned __int64)&PpmWmiIdleAccountingDpc);
    }
    else if ( _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1
           && v14 == (volatile signed __int32 *)&WmiIdleAccntEventEnabled )
    {
      KeCancelTimer(&PpmWmiIdleAccountingTimer);
    }
    return 0LL;
  }
  if ( v10 != 3 )
  {
    *a6 = 0;
    return 3221225488LL;
  }
  result = PpmWmiRegisterInfo(*(unsigned int *)(a5 - 23996));
LABEL_9:
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
