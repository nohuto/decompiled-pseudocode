/*
 * XREFs of SwitchedRtlGetVersion @ 0x18002B7E0
 * Callers:
 *     RtlSwitchedVVI @ 0x18002B380 (RtlSwitchedVVI.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18002CD30 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x18002CDB0 (RtlGetSuiteMask.c)
 *     SbSelectProcedure @ 0x18002E9B0 (SbSelectProcedure.c)
 *     RtlStringCbCopyW @ 0x180040FC4 (RtlStringCbCopyW.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SwitchedRtlGetVersion(__int64 a1)
{
  struct _PEB *v1; // rsi
  int v3; // edi
  __int64 (*v4)(void); // rax
  int v5; // edi
  wchar_t *Buffer; // r8
  _NT_PRODUCT_TYPE v7; // eax
  _NT_PRODUCT_TYPE NtProductType; // [rsp+30h] [rbp+8h] BYREF

  v1 = NtCurrentPeb();
  v3 = 0;
  *(_DWORD *)(a1 + 4) = v1->OSMajorVersion;
  *(_DWORD *)(a1 + 8) = v1->OSMinorVersion;
  *(_DWORD *)(a1 + 12) = v1->OSBuildNumber;
  *(_DWORD *)(a1 + 16) = v1->OSPlatformId;
  v4 = (__int64 (*)(void))qword_180153060;
  if ( qword_180153060
    || (v4 = (__int64 (*)(void))SbSelectProcedure(2880154539LL, 0LL, "kLsE", 0LL), (qword_180153060 = (__int64)v4) != 0) )
  {
    v3 = v4();
  }
  v5 = v3 - 1;
  if ( !v5 )
  {
    *(_DWORD *)(a1 + 8) = 2;
    *(_DWORD *)(a1 + 12) = 9200;
LABEL_17:
    *(_DWORD *)(a1 + 4) = 6;
    goto LABEL_5;
  }
  if ( v5 == 1 )
  {
    *(_DWORD *)(a1 + 8) = 3;
    *(_DWORD *)(a1 + 12) = 9600;
    goto LABEL_17;
  }
LABEL_5:
  Buffer = v1->CSDVersion.Buffer;
  if ( !Buffer || !*Buffer || (int)RtlStringCbCopyW(a1 + 20, 256LL) < 0 )
    *(_WORD *)(a1 + 20) = 0;
  if ( ((*(_DWORD *)a1 - 284) & 0xFFFFFFF7) == 0 )
  {
    *(_WORD *)(a1 + 276) = HIBYTE(v1->OSCSDVersion);
    *(_WORD *)(a1 + 278) = (unsigned __int8)v1->OSCSDVersion;
    *(_WORD *)(a1 + 280) = RtlGetSuiteMask();
    if ( *(_DWORD *)a1 == 292 )
      *(_DWORD *)(a1 + 284) = RtlGetSuiteMask() & 0x1FFFF;
    *(_BYTE *)(a1 + 282) = 0;
    if ( RtlGetNtProductType(&NtProductType) )
    {
      v7 = NtProductType;
      *(_BYTE *)(a1 + 282) = NtProductType;
      if ( v7 == NtProductWinNt )
      {
        *(_WORD *)(a1 + 280) &= ~0x10u;
        if ( *(_DWORD *)a1 == 292 )
          *(_DWORD *)(a1 + 284) &= 0x1FFEFu;
      }
    }
  }
  return 0LL;
}
