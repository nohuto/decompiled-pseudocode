/*
 * XREFs of NVMeHwAdapterControl @ 0x1C0002A40
 * Callers:
 *     <none>
 * Callees:
 *     NVMePowerActive @ 0x1C0002AA8 (NVMePowerActive.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C00069CC (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C0006AC8 (NVMeControllerFilterResouceRequirements.c)
 *     NVMeControllerPowerDown @ 0x1C0006FD8 (NVMeControllerPowerDown.c)
 *     NVMeControllerPowerUp @ 0x1C00070C0 (NVMeControllerPowerUp.c)
 *     NVMeControllerRemove @ 0x1C0007134 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C0007424 (NVMeControllerStop.c)
 *     NVMeMaxOperationalPower @ 0x1C0007984 (NVMeMaxOperationalPower.c)
 *     NVMePowerSetFState @ 0x1C000813C (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C0008214 (NVMePowerSetPerfState.c)
 *     NVMePowerSettingChangeNotification @ 0x1C000835C (NVMePowerSettingChangeNotification.c)
 *     NVMeSystemPowerHint @ 0x1C00086F0 (NVMeSystemPowerHint.c)
 */

__int64 __fastcall NVMeHwAdapterControl(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rax

  v3 = 0;
  if ( a2 > 9 )
  {
    v13 = a2 - 12;
    if ( !v13 )
    {
      NVMeSystemPowerHint(a1, a3);
      return v3;
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        NVMeMaxOperationalPower(a1, a3);
        return v3;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        NVMePowerSetPerfState(a1, a3);
        return v3;
      }
      v17 = (unsigned int)(v16 - 1);
      if ( !(_DWORD)v17 )
      {
        LODWORD(v17) = 17;
        *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFF6 | 8;
        NVMeControllerCompleteAllIORequests(a1, v17);
        *(_DWORD *)(a1 + 20) &= ~0x10u;
        return v3;
      }
      if ( (_DWORD)v17 == 1 )
      {
        v18 = *(_QWORD *)(a1 + 1080);
        if ( a3 )
        {
          if ( v18 && *(_DWORD *)a3 == 1 )
          {
            *(_OWORD *)(a3 + 9) = *(_OWORD *)(v18 + 4);
            *(_DWORD *)(a3 + 25) = *(_DWORD *)(v18 + 20);
            *(_BYTE *)(a3 + 29) = 0;
            *(_BYTE *)(a3 + 8) = 0;
            return v3;
          }
        }
      }
    }
    else if ( *(_DWORD *)a3 )
    {
      NVMeControllerFilterResouceRequirements(a1, a3);
      return v3;
    }
    return 1;
  }
  if ( a2 == 9 )
  {
    NVMePowerSetFState(a1, a3);
    return v3;
  }
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 3;
        if ( !v7 )
        {
          NVMePowerSettingChangeNotification(a1, a3);
          return v3;
        }
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 == 2 )
          {
            NVMePowerActive(a1, a3);
            return v3;
          }
          return 1;
        }
        v10 = *(_DWORD *)(a3 + 20);
        if ( v10 == 1 )
        {
          NVMeControllerPowerUp(a1);
        }
        else if ( v10 == 4 )
        {
          v11 = *(_DWORD *)(a3 + 16);
          if ( v11 != 5 && ((*(_DWORD *)(a1 + 20) & 0x40) == 0 || v11 != 3) )
            NVMeControllerPowerDown(a1);
        }
      }
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 20);
      if ( (v12 & 8) != 0 )
      {
        NVMeControllerRemove(a1);
      }
      else if ( (v12 & 2) != 0 )
      {
        NVMeControllerStop(a1);
      }
    }
  }
  else
  {
    if ( *(_DWORD *)a3 )
      *(_BYTE *)(a3 + 4) = 1;
    if ( *(_DWORD *)a3 > 1u )
      *(_BYTE *)(a3 + 5) = 1;
    if ( *(_DWORD *)a3 > 2u )
      *(_BYTE *)(a3 + 6) = 1;
    if ( *(_DWORD *)a3 > 6u )
      *(_BYTE *)(a3 + 10) = 1;
    if ( *(_DWORD *)a3 > 8u )
      *(_BYTE *)(a3 + 12) = 1;
    if ( *(_DWORD *)a3 > 9u )
      *(_BYTE *)(a3 + 13) = 1;
    if ( *(_DWORD *)a3 > 0xCu )
      *(_BYTE *)(a3 + 16) = 1;
    if ( *(_DWORD *)a3 > 0xDu )
      *(_BYTE *)(a3 + 17) = 1;
    if ( *(_DWORD *)a3 > 0xEu )
      *(_BYTE *)(a3 + 18) = 1;
    if ( *(_DWORD *)a3 > 0xFu )
      *(_BYTE *)(a3 + 19) = 1;
    if ( *(_DWORD *)a3 > 0x10u )
      *(_BYTE *)(a3 + 20) = 1;
    if ( *(_DWORD *)a3 > 5u )
      *(_BYTE *)(a3 + 9) = 1;
    if ( *(_DWORD *)a3 > 0x11u )
      *(_BYTE *)(a3 + 21) = 1;
  }
  return v3;
}
