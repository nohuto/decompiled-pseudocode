/*
 * XREFs of LdrpResolveDelayloadAddress @ 0x1800323F0
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180032120 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x180081FEC (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     LdrpLoadForwardedDll @ 0x180010DF8 (LdrpLoadForwardedDll.c)
 *     RtlReleasePath @ 0x18002F730 (RtlReleasePath.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x180034810 (LdrpGetProcedureAddress.c)
 *     LdrpParseForwarderDescription @ 0x180078D08 (LdrpParseForwarderDescription.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     AVrfCallAPILookupCallback @ 0x1800CDE10 (AVrfCallAPILookupCallback.c)
 */

__int64 __fastcall LdrpResolveDelayloadAddress(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(__int64 *, __int64, __int64, _QWORD, _QWORD),
        int *a6)
{
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // r14d
  __int64 v12; // rbx
  __int64 v13; // rsi
  unsigned int v14; // r15d
  int ProcedureAddress; // eax
  char *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  int ForwardedDll; // edi
  __int64 v21; // rdi
  unsigned int v23; // eax
  unsigned int v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h]
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  int *v30; // [rsp+60h] [rbp-A0h]
  _BYTE v31[24]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v32[16]; // [rsp+80h] [rbp-80h] BYREF

  v7 = *(_QWORD *)(a1 + 48);
  v8 = a4 - *(unsigned int *)(a3 + 12);
  v25 = 0LL;
  v26 = a1;
  v30 = a6;
  v9 = *(_QWORD *)(v7 + *(unsigned int *)(a3 + 16) + 8 * ((v8 - v7) >> 3));
  if ( v9 < 0 )
  {
    v10 = 0LL;
    v11 = (unsigned __int16)v9;
  }
  else
  {
    v10 = v9 + v7 + 2;
    v11 = 0;
  }
  v12 = *(_QWORD *)(a2 + 80);
  v29 = v10;
  v24 = v11;
  v13 = a2;
  v28 = a2;
  v14 = 0;
  memset(v32, 0, sizeof(v32));
  LODWORD(v32[3]) = 0;
  v32[4] = v12;
  while ( 1 )
  {
    ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(v13 + 48), v10, v11, &v25);
    v19 = v25;
    ForwardedDll = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v23 = v14++;
    if ( v23 >= 0x20 )
    {
      ForwardedDll = -1073741701;
      break;
    }
    ForwardedDll = LdrpParseForwarderDescription(v25, v31, &v29, &v24);
    if ( ForwardedDll < 0 )
      break;
    LODWORD(v32[3]) = *(_DWORD *)(v13 + 272);
    ForwardedDll = LdrpLoadForwardedDll((__int64)v31, (int)v32, a2, v13, 2, (__int64)&v28);
    if ( ForwardedDll < 0 )
      break;
    v13 = v28;
    LdrpDereferenceModule(v28);
    v10 = v29;
    v11 = v24;
  }
  if ( BYTE4(v32[15]) )
    RtlReleasePath(v32[0], v16, v17, v18);
  *v30 = ForwardedDll;
  if ( ForwardedDll >= 0 )
  {
    v21 = v26;
    if ( AvrfpAPILookupCallbacksEnabled )
    {
      AVrfCallAPILookupCallback(*(_QWORD *)(v26 + 48), *(_QWORD *)(a2 + 48), v19, 1, (__int64)&v25);
      v19 = v25;
    }
    if ( a5 )
    {
      v27 = 0LL;
      a5(&v27, a2, v19, *(_QWORD *)(v21 + 48), 0LL);
      if ( v27 )
        return v27;
    }
  }
  return v19;
}
