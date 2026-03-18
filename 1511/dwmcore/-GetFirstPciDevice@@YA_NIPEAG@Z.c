/*
 * XREFs of ?GetFirstPciDevice@@YA_NIPEAG@Z @ 0x180157120
 * Callers:
 *     ?GetChipSetInfo@@YAKXZ @ 0x180157074 (-GetChipSetInfo@@YAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

bool __fastcall GetFirstPciDevice(__int64 a1, unsigned __int16 *a2)
{
  bool v2; // di
  HMODULE LibraryW; // rax
  HMODULE v5; // rbx
  FARPROC ProcAddress; // rsi
  FARPROC v7; // r12
  FARPROC v8; // r13
  FARPROC v9; // rax
  void (__fastcall *v10)(__int64); // rbp
  __int64 v11; // r14
  unsigned int v12; // esi
  HMODULE v14; // [rsp+30h] [rbp-58h]
  _DWORD v15[8]; // [rsp+38h] [rbp-50h] BYREF

  v2 = 0;
  LibraryW = LoadLibraryW(L"setupapi.dll");
  v14 = LibraryW;
  v5 = LibraryW;
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "SetupDiGetClassDevsW");
    v7 = GetProcAddress(v5, "SetupDiEnumDeviceInfo");
    v8 = GetProcAddress(v5, "SetupDiGetDeviceInstanceIdW");
    v9 = GetProcAddress(v5, "SetupDiDestroyDeviceInfoList");
    v10 = (void (__fastcall *)(__int64))v9;
    if ( ProcAddress )
    {
      if ( v7 )
      {
        if ( v8 )
        {
          if ( v9 )
          {
            v11 = ((__int64 (__fastcall *)(GUID *, _QWORD, _QWORD, __int64))ProcAddress)(
                    &GUID_DEVCLASS_SYSTEM,
                    0LL,
                    0LL,
                    2LL);
            if ( v11 != -1 )
            {
              v15[0] = 32;
              v12 = 0;
              do
              {
                if ( !((unsigned int (__fastcall *)(__int64, _QWORD, _DWORD *))v7)(v11, v12, v15) )
                  break;
                if ( ((unsigned int (__fastcall *)(__int64, _DWORD *, unsigned __int16 *, __int64, _QWORD))v8)(
                       v11,
                       v15,
                       a2,
                       260LL,
                       0LL) )
                {
                  a2[259] = 0;
                  v2 = wcsstr(a2, L"PCI") != 0LL;
                }
                ++v12;
              }
              while ( !v2 );
              v10(v11);
              v5 = v14;
            }
          }
        }
      }
    }
    FreeLibrary(v5);
  }
  return v2;
}
