/*
 * XREFs of ?ReadRegistryBitfields@CSettingsManager@@AEAAXW4DwmSettingType@@PEAUBitfieldRegistrySetting@@IPEAK@Z @ 0x1400025E0
 * Callers:
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x140002900 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 * Callees:
 *     ?GetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGPEAK@Z @ 0x140002670 (-GetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGPEAK@Z.c)
 */

void __fastcall CSettingsManager::ReadRegistryBitfields(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  _DWORD *v5; // r15
  int v8; // edi
  _DWORD *v9; // rbx
  __int64 v10; // rsi
  int v11; // eax
  int v12; // [rsp+58h] [rbp+20h] BYREF

  v5 = a5;
  v8 = *a5;
  if ( a4 )
  {
    v9 = (_DWORD *)(a3 + 8);
    v10 = a4;
    do
    {
      if ( (int)CSettingsManager::GetDword(a1, a2, *((_QWORD *)v9 - 1), &v12) >= 0 )
      {
        v11 = v12;
      }
      else
      {
        v11 = v9[1];
        v12 = v11;
      }
      if ( v11 )
        v8 |= *v9;
      else
        v8 &= ~*v9;
      v9 += 4;
      --v10;
    }
    while ( v10 );
  }
  *v5 = v8;
}
