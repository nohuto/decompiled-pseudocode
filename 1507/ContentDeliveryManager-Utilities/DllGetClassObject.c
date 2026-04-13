/*
 * XREFs of DllGetClassObject @ 0x180006A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180006540 @ 0x180006540 (sub_180006540.c)
 *     atexit @ 0x1800261E4 (atexit.c)
 */

HRESULT __stdcall DllGetClassObject(const IID *const rclsid, const IID *const riid, LPVOID *ppv)
{
  __int64 *i; // r9
  _QWORD *v7; // rcx
  __int64 v8; // r9
  HRESULT result; // eax
  int v10; // [rsp+50h] [rbp+18h] BYREF

  if ( (dword_18003AE44 & 1) == 0 )
  {
    dword_18003AE44 |= 1u;
    qword_18003AC80 = (__int64)&qword_18003AE38;
    qword_18003AE38 = (__int64)off_18002CB48;
    atexit(sub_180028020);
  }
  *ppv = 0LL;
  for ( i = &qword_180037938; i < &qword_180037938; ++i )
  {
    if ( *i )
    {
      v7 = *(_QWORD **)(*i + 8);
      if ( *v7 == *(_QWORD *)&rclsid->Data1 && v7[1] == *(_QWORD *)rclsid->Data4 )
      {
        v8 = *i;
        v10 = 1;
        result = sub_180006540((__int64)v7, &v10, (__int64)riid, v8, (PSRWLOCK)ppv);
        goto LABEL_11;
      }
    }
  }
  result = -2147221231;
LABEL_11:
  if ( result == -2147221231 )
    return NdrDllGetClassObject(rclsid, riid, ppv, (const ProxyFileInfo **)&pProxyFileList, &pclsid, &pPSFactoryBuffer);
  return result;
}
