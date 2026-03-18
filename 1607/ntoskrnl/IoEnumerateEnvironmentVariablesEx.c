/*
 * XREFs of IoEnumerateEnvironmentVariablesEx @ 0x1406280BC
 * Callers:
 *     NtEnumerateBootEntries @ 0x1406B378C (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1406B3D2C (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1406B41DC (NtEnumerateSystemEnvironmentValuesEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IopOpenSystemVariableDevice @ 0x140628DBC (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoEnumerateEnvironmentVariablesEx(unsigned int a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  PVOID v7; // rdi
  __int64 v9; // [rsp+20h] [rbp-28h]
  PVOID Object[3]; // [rsp+30h] [rbp-18h] BYREF
  PDEVICE_OBJECT v11; // [rsp+68h] [rbp+20h] BYREF

  v6 = IopOpenSystemVariableDevice((PFILE_OBJECT *)Object, &v11);
  if ( v6 >= 0 )
  {
    v9 = a3;
    v7 = Object[0];
    v6 = (*((__int64 (__fastcall **)(PVOID, PDEVICE_OBJECT, _QWORD, __int64, __int64))Object[1] + 2))(
           Object[0],
           v11,
           a1,
           a2,
           v9);
    if ( v7 )
      ObfDereferenceObject(v7);
  }
  return (unsigned int)v6;
}
