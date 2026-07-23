/*
 * XREFs of EtwpSampledProfileRunDown @ 0x1406A8034
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140496594 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     xHalSetSystemInformation @ 0x140581DF0 (xHalSetSystemInformation.c)
 */

void __fastcall EtwpSampledProfileRunDown(unsigned int a1, char a2, char a3)
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
  int v15; // [rsp+48h] [rbp-19h]
  const WCHAR *v16; // [rsp+50h] [rbp-11h]
  _DWORD v17[4]; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v18[3]; // [rsp+68h] [rbp+7h] BYREF
  int v19; // [rsp+80h] [rbp+1Fh]
  int v20; // [rsp+84h] [rbp+23h]

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
    v6 = (char *)qword_1402FD668;
    if ( !EtwpPmcProfile )
    {
LABEL_16:
      KeReleaseMutex(&EtwpGroupMaskMutex, 0);
      return;
    }
  }
  v8 = (__int16 *)(v6 + 240);
  v9 = v7;
  do
  {
    v10 = *v8;
    if ( (int)off_1402F37E8() < 0 )
    {
      v11 = 0;
      v12 = L"Unknown";
    }
    else
    {
      v11 = v15;
      v12 = v16;
    }
    v17[1] = v11;
    v13 = L"Unknown";
    v17[2] = v11;
    v17[0] = v10;
    if ( v12 )
      v13 = v12;
    v18[0] = v17;
    v14 = -1LL;
    v18[1] = 12LL;
    do
      ++v14;
    while ( v13[v14] );
    v18[2] = v13;
    v19 = 2 * v14 + 2;
    v20 = 0;
    EtwpLogKernelEvent((__int64)v18, EtwpHostSiloState, a1, 2u, v5, 0x401903u);
    v8 += 124;
    --v9;
  }
  while ( v9 );
  if ( !a3 )
    goto LABEL_16;
}
