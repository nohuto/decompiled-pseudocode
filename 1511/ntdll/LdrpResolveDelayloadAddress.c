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
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        int *a6)
{
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // r14d
  WCHAR *v12; // rbx
  _QWORD *v13; // rsi
  unsigned int v14; // r15d
  int ProcedureAddress; // eax
  __int64 v16; // rbx
  int ForwardedDll; // edi
  __int64 v18; // rdi
  unsigned int v20; // eax
  __int64 v21; // [rsp+20h] [rbp-E0h]
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  int *v28; // [rsp+60h] [rbp-A0h]
  _BYTE v29[24]; // [rsp+68h] [rbp-98h] BYREF
  PWSTR Path[16]; // [rsp+80h] [rbp-80h] BYREF

  v7 = *(_QWORD *)(a1 + 48);
  v8 = a4 - *(unsigned int *)(a3 + 12);
  v23 = 0LL;
  v24 = a1;
  v28 = a6;
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
  v12 = (WCHAR *)a2[10];
  v27 = v10;
  v22 = v11;
  v13 = a2;
  BaseAddress = a2;
  v14 = 0;
  memset(Path, 0, sizeof(Path));
  LODWORD(Path[3]) = 0;
  Path[4] = v12;
  while ( 1 )
  {
    ProcedureAddress = LdrpGetProcedureAddress(v13[6]);
    v16 = v23;
    ForwardedDll = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v20 = v14++;
    if ( v20 >= 0x20 )
    {
      ForwardedDll = -1073741701;
      break;
    }
    ForwardedDll = LdrpParseForwarderDescription(v23, v29, &v27, &v22);
    if ( ForwardedDll < 0 )
      break;
    LODWORD(Path[3]) = *((_DWORD *)v13 + 68);
    LODWORD(v21) = 2;
    ForwardedDll = LdrpLoadForwardedDll(
                     (__int64)v29,
                     (__int64)Path,
                     (__int64)a2,
                     (__int64)v13,
                     v21,
                     (__int64)&BaseAddress);
    if ( ForwardedDll < 0 )
      break;
    v13 = BaseAddress;
    LdrpDereferenceModule(BaseAddress);
  }
  if ( BYTE4(Path[15]) )
    RtlReleasePath(Path[0]);
  *v28 = ForwardedDll;
  if ( ForwardedDll >= 0 )
  {
    v18 = v24;
    if ( AvrfpAPILookupCallbacksEnabled )
    {
      AVrfCallAPILookupCallback(*(_QWORD *)(v24 + 48), a2[6], v16, 1, (__int64)&v23);
      v16 = v23;
    }
    if ( HashTable )
    {
      v25 = 0LL;
      ((void (__fastcall *)(__int64 *, _QWORD *, __int64, _QWORD, _QWORD))HashTable)(
        &v25,
        a2,
        v16,
        *(_QWORD *)(v18 + 48),
        0LL);
      if ( v25 )
        return v25;
    }
  }
  return v16;
}
