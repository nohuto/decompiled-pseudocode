/*
 * XREFs of PiDqConvertObjectTypeToString @ 0x140631428
 * Callers:
 *     PiDqTraceQueryCreate @ 0x14048D044 (PiDqTraceQueryCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDqConvertObjectTypeToString(int a1, const wchar_t **a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  const wchar_t *v6; // rax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  v2 = 0;
  *a2 = 0LL;
  if ( a1 > 5 )
  {
    v7 = a1 - 6;
    if ( !v7 )
    {
      v6 = L"AEPContainer";
      goto LABEL_23;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v6 = L"DeviceInstallerClass";
      goto LABEL_23;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      v6 = L"DeviceInterfaceDisplay";
      goto LABEL_23;
    }
    if ( v9 == 1 )
    {
      v6 = L"DeviceContainerDisplay";
      goto LABEL_23;
    }
  }
  else
  {
    if ( a1 == 5 )
    {
      v6 = L"AEP";
      goto LABEL_23;
    }
    if ( !a1 )
    {
      v6 = L"Unknown";
      goto LABEL_23;
    }
    v3 = a1 - 1;
    if ( !v3 )
    {
      v6 = L"DeviceInterface";
      goto LABEL_23;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      v6 = L"DeviceContainer";
      goto LABEL_23;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      v6 = L"Device";
      goto LABEL_23;
    }
    if ( v5 == 1 )
    {
      v6 = L"DeviceInterfaceClass";
LABEL_23:
      *a2 = v6;
      return v2;
    }
  }
  return (unsigned int)-1073741811;
}
