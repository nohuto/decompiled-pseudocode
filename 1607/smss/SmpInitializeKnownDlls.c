/*
 * XREFs of SmpInitializeKnownDlls @ 0x1400050A0
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x14000614C (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpEventWriteULONG @ 0x1400028E0 (SmpEventWriteULONG.c)
 *     SmpOpenKnownDllsHandles @ 0x140005740 (SmpOpenKnownDllsHandles.c)
 *     SmpEventWrite @ 0x14000677C (SmpEventWrite.c)
 *     SmpInitializeKnownDllsInternal @ 0x140007090 (SmpInitializeKnownDllsInternal.c)
 *     SmpFreeSavedRegistryEntry @ 0x140009354 (SmpFreeSavedRegistryEntry.c)
 */

__int64 SmpInitializeKnownDlls()
{
  int v0; // ebx
  int v1; // eax
  HANDLE v2; // rsi
  HANDLE v3; // r14
  unsigned int v4; // edi
  HANDLE v5; // r15
  PVOID *v6; // rdi
  struct _UNICODE_STRING *v7; // rbx
  _QWORD *v8; // rcx
  void **Buffer; // rax
  void *v10; // r8
  __int64 *v11; // rbx
  __int64 *v13; // rcx
  HANDLE v14; // [rsp+20h] [rbp-48h] BYREF
  HANDLE v15; // [rsp+28h] [rbp-40h] BYREF
  int v16; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v17; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+40h] [rbp-28h] BYREF
  const wchar_t *v19; // [rsp+48h] [rbp-20h]
  int v20; // [rsp+50h] [rbp-18h] BYREF
  const wchar_t *v21; // [rsp+58h] [rbp-10h]
  HANDLE v22; // [rsp+B0h] [rbp+48h] BYREF
  HANDLE v23; // [rsp+B8h] [rbp+50h] BYREF
  HANDLE v24; // [rsp+C0h] [rbp+58h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+60h] BYREF

  v16 = 1441812;
  v18 = 1703960;
  v17 = L"\\KnownDlls";
  v20 = 2097182;
  v19 = L"\\KnownDlls32";
  v21 = L"\\KnownDllsArm32";
  Handle = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  SmpEventWrite(&SmssEvt_InitializeKnownDlls_Start);
  v0 = SmpOpenKnownDllsHandles(&v16, 1LL, &v15, &v14);
  if ( v0 >= 0 )
  {
    v0 = SmpOpenKnownDllsHandles(&v18, 0LL, &v23, &Handle);
    if ( v0 >= 0 )
    {
      v1 = SmpOpenKnownDllsHandles(&v20, 0LL, &v24, &v22);
      v2 = v23;
      v0 = v1;
      if ( v1 < 0 )
      {
        v3 = 0LL;
        v5 = 0LL;
      }
      else
      {
        v3 = v24;
        if ( v23 || (v4 = 0, v24) )
          v4 = 1;
        v0 = SmpInitializeKnownDllsInternal(v15, v14, 0LL, v4);
        if ( v0 < 0 || v2 && (v0 = SmpInitializeKnownDllsInternal(v2, Handle, 1LL, v4), v0 < 0) )
        {
          v5 = v22;
        }
        else
        {
          v5 = v22;
          if ( !v3 || (v0 = SmpInitializeKnownDllsInternal(v3, v22, 1LL, v4), v0 >= 0) )
          {
            v6 = (PVOID *)SmpKnownDllsList;
            if ( SmpKnownDllsList != &SmpKnownDllsList )
            {
              do
              {
                v7 = (struct _UNICODE_STRING *)v6;
                v6 = (PVOID *)*v6;
                v8 = *(_QWORD **)&v7->Length;
                Buffer = (void **)v7->Buffer;
                if ( *(struct _UNICODE_STRING **)(*(_QWORD *)&v7->Length + 8LL) != v7 || *Buffer != v7 )
                  __fastfail(3u);
                *Buffer = v8;
                v8[1] = Buffer;
                RtlFreeUnicodeString(v7 + 2);
                v10 = *(void **)&v7[3].Length;
                if ( v10 )
                  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v10);
                RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v7);
              }
              while ( v6 != &SmpKnownDllsList );
              v2 = v23;
              v5 = v22;
              v3 = v24;
            }
            v11 = (__int64 *)SmpExcludeKnownDllsList;
            while ( v11 != &SmpExcludeKnownDllsList )
            {
              v13 = v11;
              v11 = (__int64 *)*v11;
              SmpFreeSavedRegistryEntry(v13);
            }
            v0 = 0;
          }
        }
      }
      if ( Handle )
        NtClose(Handle);
      if ( v2 )
        NtClose(v2);
      if ( v5 )
        NtClose(v5);
      if ( v3 )
        NtClose(v3);
    }
    if ( v14 )
      NtClose(v14);
    if ( v15 )
      NtClose(v15);
  }
  SmpEventWriteULONG(&SmssEvt_InitializeKnownDlls_Stop, v0);
  return (unsigned int)v0;
}
