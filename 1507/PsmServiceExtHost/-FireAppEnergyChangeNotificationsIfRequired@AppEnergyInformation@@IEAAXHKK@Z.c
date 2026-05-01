/*
 * XREFs of ?FireAppEnergyChangeNotificationsIfRequired@AppEnergyInformation@@IEAAXHKK@Z @ 0x1800492A8
 * Callers:
 *     ?FireChangeEventsIfRequired@AppEnergyInformation@@IEAAXHKK@Z @ 0x18004935C (-FireChangeEventsIfRequired@AppEnergyInformation@@IEAAXHKK@Z.c)
 * Callees:
 *     ?PublishWnfStateData@AppEnergyInformation@@IEAAJU_WNF_STATE_NAME@@PEAEK@Z @ 0x18004B5A8 (-PublishWnfStateData@AppEnergyInformation@@IEAAJU_WNF_STATE_NAME@@PEAEK@Z.c)
 */

void __fastcall AppEnergyInformation::FireAppEnergyChangeNotificationsIfRequired(
        AppEnergyInformation *this,
        int a2,
        unsigned int a3,
        unsigned int a4)
{
  int v4; // r10d
  char *v6; // rdx
  struct _WNF_STATE_NAME v7; // rdx
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( a3 >= a4 )
  {
    if ( a3 <= AppEnergyUsageManager::s_dwEnergyDecreaseEventLevel
      || a4 > AppEnergyUsageManager::s_dwEnergyDecreaseEventLevel )
    {
      return;
    }
    v4 = 1;
  }
  else if ( (a3 >= AppEnergyUsageManager::s_dwEnergyWarningEventLevel
          || a4 < AppEnergyUsageManager::s_dwEnergyWarningEventLevel)
         && (int)(a4 / AppEnergyUsageManager::s_dwEnergyIncreaseEventChange) <= (int)(a3
                                                                                    / AppEnergyUsageManager::s_dwEnergyIncreaseEventChange)
         && a4 < AppEnergyUsageManager::s_dwBadEnergyLevel )
  {
    return;
  }
  v6 = (char *)this + 48;
  if ( !a2 )
    v6 = (char *)this + 68;
  v8 = a4;
  if ( v4 )
  {
    if ( *((_DWORD *)v6 + 2) || *((_DWORD *)v6 + 3) )
    {
      v7 = (struct _WNF_STATE_NAME)*((_QWORD *)v6 + 1);
LABEL_19:
      AppEnergyInformation::PublishWnfStateData(this, v7, (unsigned __int8 *)&v8, 4u);
    }
  }
  else if ( *(_DWORD *)v6 || *((_DWORD *)v6 + 1) )
  {
    v7 = *(struct _WNF_STATE_NAME *)v6;
    goto LABEL_19;
  }
}
