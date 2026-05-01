/*
 * XREFs of ?GetMultiStringValue@RegistryKey@Common@@QEAAJPEBGPEAGPEAK@Z @ 0x180049720
 * Callers:
 *     ?GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z @ 0x18001C854 (-GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x18004AB30 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 * Callees:
 *     ?GetValue@RegistryKey@Common@@QEAAJPEBGPEAXPEAK2@Z @ 0x180027B3C (-GetValue@RegistryKey@Common@@QEAAJPEBGPEAXPEAK2@Z.c)
 */

__int64 __fastcall Common::RegistryKey::GetMultiStringValue(
        HKEY *this,
        const unsigned __int16 *a2,
        BYTE *a3,
        unsigned int *a4)
{
  unsigned int *v5; // rdi
  unsigned int *v6; // rsi
  unsigned int v7; // eax
  unsigned int Value; // edx
  __int64 result; // rax
  const unsigned __int16 *v10; // [rsp+48h] [rbp+10h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = a2;
  if ( a4 )
  {
    v5 = (unsigned int *)&v10;
    v7 = 2 * *a4;
    v6 = (unsigned int *)&v11;
    v11 = 0;
    LODWORD(v10) = v7;
  }
  else
  {
    LODWORD(v10) = 0;
    v5 = 0LL;
    v11 = 0;
    v6 = 0LL;
  }
  Value = Common::RegistryKey::GetValue(this, L"Children", a3, v5, v6);
  if ( (int)(Value + 0x80000000) >= 0 && Value != -2147024662 )
    return Value;
  if ( v5 )
  {
    if ( ((unsigned __int8)v10 & 1) != 0 )
      return 2147942413LL;
    *a4 = (unsigned int)v10 >> 1;
  }
  if ( !v6 )
    return Value;
  if ( v11 == 7 )
    return Value;
  result = 2147944204LL;
  if ( !v11 )
    return Value;
  return result;
}
