/*
 * XREFs of DpiInitializeEx @ 0x1C00E67A8
 * Callers:
 *     DpiKmdDodInitialize @ 0x1C000FC50 (DpiKmdDodInitialize.c)
 *     DpiInitializeInternal @ 0x1C000FCD8 (DpiInitializeInternal.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiGetDriverDataSizeFromVersion @ 0x1C00E6ED8 (DpiGetDriverDataSizeFromVersion.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rcx
  _QWORD *v19; // rax
  __int64 **v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  PVOID *v31; // rcx
  PVOID DriverObjectExtension; // [rsp+20h] [rbp-50h] BYREF
  size_t Size; // [rsp+28h] [rbp-48h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v35[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v36; // [rsp+60h] [rbp-10h]

  DriverObjectExtension = 0LL;
  v35[0] = *(_OWORD *)L"\\Driver\\MiraDispKmd";
  v36 = *(_QWORD *)L"Kmd";
  *(_DWORD *)&String1.Length = 2621478;
  v9 = 0;
  String1.Buffer = (wchar_t *)v35;
  v35[1] = *(_OWORD *)L"MiraDispKmd";
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
    v18 = (void *)*((_QWORD *)DriverObjectExtension + 6);
    if ( !v18 )
    {
      LODWORD(v12) = -1073741801;
      v29 = (_QWORD *)WdLogNewEntry5_WdLowResource(0LL, v15, v16, v17);
      v29[3] = DpiInitialize;
      v29[4] = ExAllocatePoolWithTag;
      v29[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v29);
      goto LABEL_24;
    }
    memset(v18, 0, *((unsigned __int16 *)DriverObjectExtension + 21));
    RtlCopyUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40), SourceString);
    KeInitializeMutex((PRKMUTEX)((char *)DriverObjectExtension + 72), 0);
    v19 = (char *)DriverObjectExtension + 56;
    *((_QWORD *)DriverObjectExtension + 8) = (char *)DriverObjectExtension + 56;
    *v19 = v19;
    AcquireMiniportListMutex();
    v20 = (__int64 **)qword_1C0046D00;
    v21 = (__int64 *)DriverObjectExtension;
    *(_QWORD *)DriverObjectExtension = &qword_1C0046CF8;
    v21[1] = (__int64)v20;
    if ( *v20 != &qword_1C0046CF8 )
      __fastfail(3u);
    *v20 = v21;
    qword_1C0046D00 = (__int64)v21;
    _InterlockedExchange64(&qword_1C0046D08, 0LL);
    KeReleaseMutex(Mutex, 0);
    v26 = WdLogNewEntry5_WdEvent(v23, v22, v24, v25);
    *(_QWORD *)(v26 + 24) = DpiInitialize;
    *(_QWORD *)(v26 + 32) = DriverObjectExtension;
    WdLogEvent5_WdEvent(v26);
    ClientIdentificationAddress->MajorFunction[0] = (PDRIVER_DISPATCH)DpiDispatchCreate;
    ClientIdentificationAddress->MajorFunction[27] = (PDRIVER_DISPATCH)DpiDispatchPnp;
    ClientIdentificationAddress->MajorFunction[22] = (PDRIVER_DISPATCH)DpiDispatchPower;
    ClientIdentificationAddress->MajorFunction[14] = (PDRIVER_DISPATCH)DpiDispatchIoctl;
    ClientIdentificationAddress->MajorFunction[15] = (PDRIVER_DISPATCH)DpiDispatchInternalIoctl;
    ClientIdentificationAddress->MajorFunction[23] = (PDRIVER_DISPATCH)&DpiDispatchSystemControl;
    ClientIdentificationAddress->MajorFunction[2] = (PDRIVER_DISPATCH)DpiDispatchCleanupAndClose;
    ClientIdentificationAddress->MajorFunction[18] = (PDRIVER_DISPATCH)DpiDispatchCleanupAndClose;
    ClientIdentificationAddress->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)DpiAddDevice;
    ClientIdentificationAddress->DriverUnload = (PDRIVER_UNLOAD)DpiDriverUnload;
    goto LABEL_11;
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdError(v11);
  v28[3] = DpiInitialize;
  v28[4] = IoAllocateDriverObjectExtension;
  v28[5] = v12;
  WdLogEvent5_WdError(v28);
LABEL_11:
  if ( (int)v12 >= 0 )
    return (unsigned int)v12;
  if ( v9 == 1 )
  {
    if ( !DriverObjectExtension )
      return (unsigned int)v12;
    AcquireMiniportListMutex();
    v30 = *(_QWORD **)DriverObjectExtension;
    v31 = (PVOID *)*((_QWORD *)DriverObjectExtension + 1);
    if ( *(PVOID *)(*(_QWORD *)DriverObjectExtension + 8LL) != DriverObjectExtension || *v31 != DriverObjectExtension )
      __fastfail(3u);
    *v31 = v30;
    v30[1] = v31;
    _InterlockedExchange64(&qword_1C0046D08, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
LABEL_24:
  if ( DriverObjectExtension && *((_QWORD *)DriverObjectExtension + 6) )
    RtlFreeUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40));
  return (unsigned int)v12;
}
