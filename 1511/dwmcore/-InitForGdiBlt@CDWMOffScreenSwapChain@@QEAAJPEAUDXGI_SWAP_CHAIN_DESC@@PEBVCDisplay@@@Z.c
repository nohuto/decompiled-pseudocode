/*
 * XREFs of ?InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z @ 0x1800B5C7C
 * Callers:
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800B4F38 (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDispl.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::InitForGdiBlt(
        CDWMOffScreenSwapChain *this,
        struct DXGI_SWAP_CHAIN_DESC *a2,
        const struct CDisplay *a3)
{
  UINT Width; // esi
  UINT Height; // ebx
  HMODULE LibraryW; // rax
  FARPROC ProcAddress; // rax
  HMODULE v9; // rcx
  NTSTATUS v10; // r14d
  HANDLE CurrentProcess; // rax
  NTSTATUS v12; // r14d
  HANDLE v13; // rbx
  HANDLE v14; // rax
  __int64 (__fastcall *v15)(_OWORD *, char *); // rbx
  int v16; // eax
  int v17; // r14d
  signed int LastError; // eax
  int v20; // r9d
  unsigned int SectionPageProtection; // [rsp+20h] [rbp-49h]
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-19h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+58h] [rbp-11h] BYREF
  __int128 v24; // [rsp+60h] [rbp-9h]
  __int128 v25; // [rsp+70h] [rbp+7h]
  _OWORD v26[4]; // [rsp+80h] [rbp+17h] BYREF
  void *SectionHandle; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE TargetHandle; // [rsp+D8h] [rbp+6Fh] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+E8h] [rbp+7Fh] BYREF

  Width = a2->BufferDesc.Width;
  Height = a2->BufferDesc.Height;
  SectionHandle = 0LL;
  TargetHandle = 0LL;
  LibraryW = LoadLibraryW(L"rdsdwmdr.dll");
  *((_QWORD *)this + 56) = LibraryW;
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "DwmIndirectCreate");
    v9 = (HMODULE)*((_QWORD *)this + 56);
    *((_QWORD *)this + 57) = ProcAddress;
    *((_QWORD *)this + 58) = GetProcAddress(v9, "DwmIndirectSetDebugFlag");
  }
  if ( !*((_QWORD *)this + 57) )
  {
    v17 = -2147024809;
    SectionPageProtection = 256;
    goto LABEL_19;
  }
  if ( !*((_QWORD *)this + 47) )
  {
    HIDWORD(v25) = Height;
    MaximumSize.QuadPart = 4 * Width * Height;
    v10 = NtCreateSection(&SectionHandle, 6u, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
    if ( v10 < 0 )
    {
      v17 = v10 | 0x10000000;
      SectionPageProtection = 281;
    }
    else
    {
      ViewSize = 0LL;
      SectionOffset.QuadPart = 0LL;
      *((_QWORD *)this + 47) = SectionHandle;
      CurrentProcess = GetCurrentProcess();
      v12 = NtMapViewOfSection(
              *((HANDLE *)this + 47),
              CurrentProcess,
              (PVOID *)this + 48,
              0LL,
              0LL,
              &SectionOffset,
              &ViewSize,
              ViewUnmap,
              0,
              4u);
      if ( v12 >= 0 )
        goto LABEL_7;
      v17 = v12 | 0x10000000;
      SectionPageProtection = 299;
    }
LABEL_19:
    v20 = v17;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, SectionPageProtection);
    return (unsigned int)v17;
  }
  HIDWORD(v25) = -Height;
LABEL_7:
  SetLastError(0);
  v13 = GetCurrentProcess();
  v14 = GetCurrentProcess();
  if ( !DuplicateHandle(v14, *((HANDLE *)this + 47), v13, &TargetHandle, 0, 0, 2u) )
  {
    LastError = GetLastError();
    v17 = LastError;
    if ( LastError > 0 )
      v17 = (unsigned __int16)LastError | 0x80070000;
    SectionPageProtection = 314;
    if ( v17 >= 0 )
      v17 = -2003304445;
    goto LABEL_19;
  }
  v15 = (__int64 (__fastcall *)(_OWORD *, char *))*((_QWORD *)this + 57);
  *(_QWORD *)&v24 = TargetHandle;
  DWORD2(v25) = Width;
  *(_QWORD *)&v25 = (char *)a3 + 144;
  v26[0] = v24;
  v26[1] = v25;
  v16 = v15(v26, (char *)this + 472);
  v17 = v16;
  if ( v16 < 0 )
  {
    SectionPageProtection = 323;
    v20 = v16;
    goto LABEL_21;
  }
  (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 59))(
    *((_QWORD *)this + 59),
    &IID_IDWMRemotingIndirectEx,
    (char *)this + 480);
  return (unsigned int)v17;
}
