/*
 * XREFs of IoQueryEnvironmentVariableInfoEx @ 0x140628288
 * Callers:
 *     NtQueryEnvironmentVariableInfoEx @ 0x1406B4DB8 (NtQueryEnvironmentVariableInfoEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopOpenSystemVariableDevice @ 0x140628E70 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoQueryEnvironmentVariableInfoEx(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // edi
  PVOID v9; // rbx
  __int64 v11; // [rsp+28h] [rbp-30h]
  PDEVICE_OBJECT v12; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object[4]; // [rsp+38h] [rbp-20h] BYREF

  v8 = IopOpenSystemVariableDevice((PFILE_OBJECT *)Object, &v12);
  if ( v8 >= 0 )
  {
    v11 = a4;
    v9 = Object[0];
    v8 = (*((__int64 (__fastcall **)(PVOID, PDEVICE_OBJECT, _QWORD, __int64, __int64, __int64))Object[1] + 3))(
           Object[0],
           v12,
           a1,
           a2,
           a3,
           v11);
    if ( v9 )
      ObfDereferenceObject(v9);
  }
  return (unsigned int)v8;
}
