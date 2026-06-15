/*
 * XREFs of ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x18007148C
 * Callers:
 *     ?OnPropertyValueChanged@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x180071510 (-OnPropertyValueChanged@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?PropertyStoreSetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180076230 (-PropertyStoreSetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z.c)
 *     ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x180094E20 (-OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall operator==(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax

  v2 = 0;
  if ( *(_DWORD *)(a1 + 16) == *(_DWORD *)(a2 + 16) )
  {
    v3 = *(_QWORD *)a1 - *(_QWORD *)a2;
    if ( *(_QWORD *)a1 == *(_QWORD *)a2 )
      v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)(a2 + 8);
    if ( !v3 )
      return 1;
  }
  return v2;
}
