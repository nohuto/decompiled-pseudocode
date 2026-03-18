/*
 * XREFs of DpiInitializeEx @ 0x1C00D9938
 * Callers:
 *     DpiKmdDodInitialize @ 0x1C000EC20 (DpiKmdDodInitialize.c)
 *     DpiInitializeInternal @ 0x1C000ECA8 (DpiInitializeInternal.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiGetDriverDataSizeFromVersion @ 0x1C00DA058 (DpiGetDriverDataSizeFromVersion.c)
 */

__int64 __fastcall DpiInitializeEx(
        struct _DRIVER_OBJECT *ClientIdentificationAddress,
        PCUNICODE_STRING SourceString,
        unsigned int *Src,
        __int64 a4,
        char a5)
{
  char v9; // r12
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  _WORD *v14; // rcx
  void *v15; // rcx
  _QWORD *v16; // rax
  __int64 **v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  PVOID *v28; // rcx
  PVOID DriverObjectExtension; // [rsp+20h] [rbp-50h] BYREF
  size_t Size; // [rsp+28h] [rbp-48h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v32[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v33; // [rsp+60h] [rbp-10h]

  DriverObjectExtension = 0LL;
  v32[0] = *(_OWORD *)L"\\Driver\\MiraDispKmd";
  v33 = *(_QWORD *)L"Kmd";
  *(_DWORD *)&String1.Length = 2621478;
  v9 = 0;
  String1.Buffer = (wchar_t *)v32;
  v32[1] = *(_OWORD *)L"MiraDispKmd";
  v10 = IoAllocateDriverObjectExtension(
          ClientIdentificationAddress,
          ClientIdentificationAddress,
          0x3D0u,
          &DriverObjectExtension);
  v12 = v10;
  if ( v10 >= 0 )
  {
    v9 = 1;
    *((_DWORD *)DriverObjectExtension + 4) = 1953656900;
    *((_DWORD *)DriverObjectExtension + 5) = 1;
    *((_DWORD *)DriverObjectExtension + 6) = 2;
    *((_QWORD *)DriverObjectExtension + 4) = ClientIdentificationAddress;
    *((_BYTE *)DriverObjectExtension + 132) = a5;
    *((_BYTE *)DriverObjectExtension + 134) = 0;
    if ( !RtlCompareUnicodeString(&String1, &ClientIdentificationAddress->DriverName, 1u) )
      *((_BYTE *)DriverObjectExtension + 134) = 1;
    if ( Src )
    {
      *((_BYTE *)DriverObjectExtension + 133) = 0;
      v13 = *Src;
      *((_DWORD *)DriverObjectExtension + 7) = v13;
      LODWORD(v12) = DpiGetDriverDataSizeFromVersion(0LL, v13, 832LL, &Size);
      if ( (int)v12 < 0 )
        goto LABEL_24;
      memmove((char *)DriverObjectExtension + 136, Src, (unsigned int)Size);
      *((_QWORD *)DriverObjectExtension + 121) = 0LL;
    }
    else
    {
      *((_BYTE *)DriverObjectExtension + 133) = 1;
      memset((char *)DriverObjectExtension + 136, 0, 0x348uLL);
      *((_DWORD *)DriverObjectExtension + 7) = *(_DWORD *)a4;
      *((_DWORD *)DriverObjectExtension + 34) = *(_DWORD *)a4;
      *((_QWORD *)DriverObjectExtension + 18) = *(_QWORD *)(a4 + 8);
      *((_QWORD *)DriverObjectExtension + 19) = *(_QWORD *)(a4 + 16);
      *((_QWORD *)DriverObjectExtension + 20) = *(_QWORD *)(a4 + 24);
      *((_QWORD *)DriverObjectExtension + 21) = *(_QWORD *)(a4 + 32);
      *((_QWORD *)DriverObjectExtension + 22) = *(_QWORD *)(a4 + 40);
      *((_QWORD *)DriverObjectExtension + 23) = *(_QWORD *)(a4 + 48);
      *((_QWORD *)DriverObjectExtension + 24) = *(_QWORD *)(a4 + 56);
      *((_QWORD *)DriverObjectExtension + 25) = *(_QWORD *)(a4 + 64);
      *((_QWORD *)DriverObjectExtension + 26) = *(_QWORD *)(a4 + 72);
      *((_QWORD *)DriverObjectExtension + 27) = *(_QWORD *)(a4 + 80);
      *((_QWORD *)DriverObjectExtension + 28) = *(_QWORD *)(a4 + 88);
      *((_QWORD *)DriverObjectExtension + 29) = *(_QWORD *)(a4 + 96);
      *((_QWORD *)DriverObjectExtension + 30) = *(_QWORD *)(a4 + 104);
      *((_QWORD *)DriverObjectExtension + 31) = *(_QWORD *)(a4 + 112);
      *((_QWORD *)DriverObjectExtension + 32) = *(_QWORD *)(a4 + 120);
      *((_QWORD *)DriverObjectExtension + 33) = *(_QWORD *)(a4 + 128);
      *((_QWORD *)DriverObjectExtension + 34) = *(_QWORD *)(a4 + 136);
      *((_QWORD *)DriverObjectExtension + 46) = *(_QWORD *)(a4 + 144);
      *((_QWORD *)DriverObjectExtension + 47) = *(_QWORD *)(a4 + 152);
      *((_QWORD *)DriverObjectExtension + 48) = *(_QWORD *)(a4 + 160);
      *((_QWORD *)DriverObjectExtension + 51) = *(_QWORD *)(a4 + 168);
      *((_QWORD *)DriverObjectExtension + 52) = *(_QWORD *)(a4 + 176);
      *((_QWORD *)DriverObjectExtension + 54) = *(_QWORD *)(a4 + 184);
      *((_QWORD *)DriverObjectExtension + 55) = *(_QWORD *)(a4 + 192);
      *((_QWORD *)DriverObjectExtension + 56) = *(_QWORD *)(a4 + 200);
      *((_QWORD *)DriverObjectExtension + 58) = *(_QWORD *)(a4 + 208);
      *((_QWORD *)DriverObjectExtension + 59) = *(_QWORD *)(a4 + 216);
      *((_QWORD *)DriverObjectExtension + 60) = *(_QWORD *)(a4 + 224);
      *((_QWORD *)DriverObjectExtension + 61) = *(_QWORD *)(a4 + 232);
      *((_QWORD *)DriverObjectExtension + 63) = *(_QWORD *)(a4 + 240);
      *((_QWORD *)DriverObjectExtension + 87) = *(_QWORD *)(a4 + 248);
      *((_QWORD *)DriverObjectExtension + 121) = *(_QWORD *)(a4 + 256);
      *((_QWORD *)DriverObjectExtension + 92) = *(_QWORD *)(a4 + 264);
      *((_QWORD *)DriverObjectExtension + 93) = *(_QWORD *)(a4 + 272);
      *((_QWORD *)DriverObjectExtension + 94) = *(_QWORD *)(a4 + 280);
      if ( *(_DWORD *)a4 >= 0x3005u )
        *((_QWORD *)DriverObjectExtension + 96) = *(_QWORD *)(a4 + 288);
      if ( *(_DWORD *)a4 < 0x3007u )
        *((_QWORD *)DriverObjectExtension + 63) = 0LL;
      else
        *((_QWORD *)DriverObjectExtension + 65) = *(_QWORD *)(a4 + 296);
      if ( *(_DWORD *)a4 >= 0x3009u )
      {
        *((_QWORD *)DriverObjectExtension + 88) = *(_QWORD *)(a4 + 304);
        *((_QWORD *)DriverObjectExtension + 97) = *(_QWORD *)(a4 + 312);
      }
      v14 = DriverObjectExtension;
      if ( *((_DWORD *)DriverObjectExtension + 7) < 0x5006u )
        goto LABEL_8;
      *((_QWORD *)DriverObjectExtension + 118) = *(_QWORD *)(a4 + 328);
    }
    v14 = DriverObjectExtension;
LABEL_8:
    v14[21] = SourceString->Length + 2;
    *((_WORD *)DriverObjectExtension + 20) = SourceString->Length;
    *((_QWORD *)DriverObjectExtension + 6) = ExAllocatePoolWithTag(
                                               PagedPool,
                                               *((unsigned __int16 *)DriverObjectExtension + 21),
                                               0x74727044u);
    v15 = (void *)*((_QWORD *)DriverObjectExtension + 6);
    if ( !v15 )
    {
      LODWORD(v12) = -1073741801;
      v26 = (_QWORD *)WdLogNewEntry5_WdLowResource(0LL);
      v26[3] = DpiInitialize;
      v26[4] = ExAllocatePoolWithTag;
      v26[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v26);
      goto LABEL_24;
    }
    memset(v15, 0, *((unsigned __int16 *)DriverObjectExtension + 21));
    RtlCopyUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40), SourceString);
    KeInitializeMutex((PRKMUTEX)((char *)DriverObjectExtension + 72), 0);
    v16 = (char *)DriverObjectExtension + 56;
    *((_QWORD *)DriverObjectExtension + 8) = (char *)DriverObjectExtension + 56;
    *v16 = v16;
    AcquireMiniportListMutex();
    v17 = (__int64 **)qword_1C0046C80;
    v18 = (__int64 *)DriverObjectExtension;
    *(_QWORD *)DriverObjectExtension = &qword_1C0046C78;
    v18[1] = (__int64)v17;
    if ( *v17 != &qword_1C0046C78 )
      __fastfail(3u);
    *v17 = v18;
    qword_1C0046C80 = (__int64)v18;
    _InterlockedExchange64(&qword_1C0046C88, 0LL);
    KeReleaseMutex((PRKMUTEX)Mutex, 0);
    v23 = WdLogNewEntry5_WdEvent(v20, v19, v21, v22);
    *(_QWORD *)(v23 + 24) = DpiInitialize;
    *(_QWORD *)(v23 + 32) = DriverObjectExtension;
    WdLogEvent5_WdEvent(v23);
    ClientIdentificationAddress->MajorFunction[0] = (PDRIVER_DISPATCH)DpiDispatchCreate;
    ClientIdentificationAddress->MajorFunction[27] = (PDRIVER_DISPATCH)DpiDispatchPnp;
    ClientIdentificationAddress->MajorFunction[22] = (PDRIVER_DISPATCH)DpiDispatchPower;
    ClientIdentificationAddress->MajorFunction[14] = (PDRIVER_DISPATCH)&DpiDispatchIoctl;
    ClientIdentificationAddress->MajorFunction[15] = (PDRIVER_DISPATCH)DpiDispatchInternalIoctl;
    ClientIdentificationAddress->MajorFunction[23] = (PDRIVER_DISPATCH)&DpiDispatchSystemControl;
    ClientIdentificationAddress->MajorFunction[2] = (PDRIVER_DISPATCH)DpiDispatchClose;
    ClientIdentificationAddress->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)DpiAddDevice;
    ClientIdentificationAddress->DriverUnload = (PDRIVER_UNLOAD)DpiDriverUnload;
    goto LABEL_11;
  }
  v25 = (_QWORD *)WdLogNewEntry5_WdError(v11);
  v25[3] = DpiInitialize;
  v25[4] = IoAllocateDriverObjectExtension;
  v25[5] = v12;
  WdLogEvent5_WdError(v25);
LABEL_11:
  if ( (int)v12 >= 0 )
    return (unsigned int)v12;
  if ( v9 == 1 )
  {
    if ( !DriverObjectExtension )
      return (unsigned int)v12;
    AcquireMiniportListMutex();
    v27 = *(_QWORD **)DriverObjectExtension;
    v28 = (PVOID *)*((_QWORD *)DriverObjectExtension + 1);
    if ( *(PVOID *)(*(_QWORD *)DriverObjectExtension + 8LL) != DriverObjectExtension || *v28 != DriverObjectExtension )
      __fastfail(3u);
    *v28 = v27;
    v27[1] = v28;
    _InterlockedExchange64(&qword_1C0046C88, 0LL);
    KeReleaseMutex((PRKMUTEX)Mutex, 0);
  }
LABEL_24:
  if ( DriverObjectExtension && *((_QWORD *)DriverObjectExtension + 6) )
    RtlFreeUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40));
  return (unsigned int)v12;
}
