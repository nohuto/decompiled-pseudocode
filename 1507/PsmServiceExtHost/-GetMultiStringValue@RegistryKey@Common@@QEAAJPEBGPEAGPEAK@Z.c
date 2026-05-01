/*
 * XREFs of ?GetMultiStringValue@RegistryKey@Common@@QEAAJPEBGPEAGPEAK@Z @ 0x18001C2EC
 * Callers:
 *     ?GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z @ 0x180007ADC (-GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x1800455E4 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Common::RegistryKey::GetMultiStringValue(
        HKEY *this,
        const unsigned __int16 *a2,
        BYTE *lpData,
        unsigned int *a4)
{
  DWORD *lpcbData; // rbx
  unsigned int v6; // eax
  DWORD *v7; // rdi
  LSTATUS Value; // eax
  unsigned int v9; // ecx
  __int64 result; // rax
  const unsigned __int16 *v11; // [rsp+48h] [rbp+10h] BYREF
  int v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = a2;
  if ( a4 )
  {
    lpcbData = (DWORD *)&v11;
    v6 = 2 * *a4;
    v7 = (DWORD *)&v12;
    v12 = 0;
    LODWORD(v11) = v6;
  }
  else
  {
    LODWORD(v11) = 0;
    lpcbData = 0LL;
    v12 = 0;
    v7 = 0LL;
  }
  Value = RegQueryValueExW(*this, L"Children", 0LL, v7, lpData, lpcbData);
  v9 = Value;
  if ( Value > 0 )
    v9 = (unsigned __int16)Value | 0x80070000;
  if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147024662 )
    return v9;
  if ( lpcbData )
  {
    if ( ((unsigned __int8)v11 & 1) != 0 )
      return 2147942413LL;
    *a4 = (unsigned int)v11 >> 1;
  }
  if ( !v7 )
    return v9;
  if ( v12 == 7 )
    return v9;
  result = 2147944204LL;
  if ( !v12 )
    return v9;
  return result;
}
