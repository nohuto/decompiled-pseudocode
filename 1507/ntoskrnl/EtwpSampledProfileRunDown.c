/*
 * XREFs of EtwpSampledProfileRunDown @ 0x1406E9678
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14054A6C8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     xHalSetSystemInformation @ 0x1405C733C (xHalSetSystemInformation.c)
 */

LONG __fastcall EtwpSampledProfileRunDown(unsigned int a1, char a2, char a3)
{
  unsigned __int16 v5; // di
  char *v6; // rcx
  unsigned int v7; // eax
  __int16 *v8; // rsi
  __int64 v9; // r15
  int v10; // r14d
  int v11; // eax
  const WCHAR *v12; // rcx
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  LONG result; // eax
  int v16; // [rsp+48h] [rbp-19h]
  const WCHAR *v17; // [rsp+50h] [rbp-11h]
  _DWORD v18[4]; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v19[3]; // [rsp+68h] [rbp+7h] BYREF
  int v20; // [rsp+80h] [rbp+1Fh]
  int v21; // [rsp+84h] [rbp+23h]

  v5 = 3913;
  if ( !a2 )
    v5 = 3914;
  if ( a3 )
  {
    v6 = (char *)&EtwpProfileObject;
    v7 = 1;
  }
  else
  {
    KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
    v7 = EtwpPmcProfile;
    v6 = (char *)qword_1403274E8;
    if ( !EtwpPmcProfile )
      return KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  }
  v8 = (__int16 *)(v6 + 240);
  v9 = v7;
  do
  {
    v10 = *v8;
    if ( (int)off_140321B18() < 0 )
    {
      v11 = 0;
      v12 = L"Unknown";
    }
    else
    {
      v11 = v16;
      v12 = v17;
    }
    v18[1] = v11;
    v13 = L"Unknown";
    v18[2] = v11;
    v18[0] = v10;
    if ( v12 )
      v13 = v12;
    v19[0] = v18;
    v14 = -1LL;
    v19[1] = 12LL;
    do
      ++v14;
    while ( v13[v14] );
    v19[2] = v13;
    v20 = 2 * v14 + 2;
    v21 = 0;
    result = EtwpLogKernelEvent((__int64)v19, a1, 2u, v5, 4200707);
    v8 += 124;
    --v9;
  }
  while ( v9 );
  if ( !a3 )
    return KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return result;
}
