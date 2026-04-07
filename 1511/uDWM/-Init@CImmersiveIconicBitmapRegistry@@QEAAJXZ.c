/*
 * XREFs of ?Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ @ 0x1800437AC
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180044F5C (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::Init(CImmersiveIconicBitmapRegistry *this)
{
  unsigned int v2; // ebx
  NTSTATUS v3; // eax
  unsigned __int64 v4; // rax
  int v5; // ecx
  _BYTE SystemInformation[8]; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+38h] [rbp-50h]
  int v9; // [rsp+3Ch] [rbp-4Ch]

  v2 = 0;
  v3 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( v3 < 0 )
  {
    v2 = v3 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3 | 0x10000000, 0x3Au);
  }
  else
  {
    v4 = (unsigned int)(v9 * v8);
    if ( v4 <= 0x40000000 )
      v5 = 8;
    else
      v5 = 12 * (v4 - 0x40000000) / 0xC0000000 + 8;
    *((_DWORD *)this + 2) = v5;
  }
  return v2;
}
