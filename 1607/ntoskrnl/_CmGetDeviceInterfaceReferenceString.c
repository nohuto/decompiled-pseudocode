/*
 * XREFs of _CmGetDeviceInterfaceReferenceString @ 0x140529454
 * Callers:
 *     PiSwCompleteCreate @ 0x140487650 (PiSwCompleteCreate.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1404E64C8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IoGetDeviceInterfaceAlias @ 0x140529090 (IoGetDeviceInterfaceAlias.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     _CmValidateDeviceInterfaceName @ 0x1404DF4B0 (_CmValidateDeviceInterfaceName.c)
 */

__int64 __fastcall CmGetDeviceInterfaceReferenceString(
        __int64 a1,
        __int64 a2,
        wchar_t *a3,
        unsigned int a4,
        _DWORD *a5)
{
  size_t v5; // rsi
  NTSTATUS v8; // ebx
  wchar_t *v9; // rax
  const wchar_t *v10; // r8
  wchar_t v11; // ax
  const wchar_t *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rax

  v5 = a4;
  v8 = CmValidateDeviceInterfaceName(a1, a2);
  if ( v8 >= 0 )
  {
    v9 = wcschr((const wchar_t *)(a2 + 8), 0x5Cu);
    if ( v9 )
    {
      v10 = v9 + 1;
      v11 = v9[1];
      v12 = v10;
      while ( v11 )
      {
        if ( v11 == 92 || v11 == 47 )
        {
          v8 = -1073741767;
          break;
        }
        v11 = *++v12;
      }
      if ( v8 >= 0 )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( v10[v13] );
        v14 = v13 + 1;
        if ( v14 > 0xFFFFFFFF )
        {
          return (unsigned int)-1073741675;
        }
        else
        {
          if ( a5 )
            *a5 = v14;
          if ( (unsigned int)v14 > (unsigned int)v5 )
            return (unsigned int)-1073741789;
          else
            return (unsigned int)RtlStringCchCopyExW(a3, v5, v10, 0LL, 0LL, 0x900u);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741772;
    }
  }
  return (unsigned int)v8;
}
