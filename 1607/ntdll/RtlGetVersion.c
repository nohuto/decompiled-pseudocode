/*
 * XREFs of RtlGetVersion @ 0x18002EE50
 * Callers:
 *     SbpUpdateCacheWithCurrentImpl @ 0x18002EBE0 (SbpUpdateCacheWithCurrentImpl.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18007A760 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlVerifyVersionInfo @ 0x180085AA0 (RtlVerifyVersionInfo.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18002CD40 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x18002CDC0 (RtlGetSuiteMask.c)
 *     RtlStringCbCopyW @ 0x180040FD4 (RtlStringCbCopyW.c)
 */

__int64 __fastcall RtlGetVersion(__int64 a1)
{
  struct _PEB *v1; // rdi
  wchar_t *Buffer; // r8
  int v5; // eax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = NtCurrentPeb();
  *(_DWORD *)(a1 + 4) = v1->OSMajorVersion;
  *(_DWORD *)(a1 + 8) = v1->OSMinorVersion;
  *(_DWORD *)(a1 + 12) = v1->OSBuildNumber;
  *(_DWORD *)(a1 + 16) = v1->OSPlatformId;
  Buffer = v1->CSDVersion.Buffer;
  if ( Buffer && *Buffer )
  {
    if ( (int)RtlStringCbCopyW(a1 + 20, 256LL) < 0 )
      *(_WORD *)(a1 + 20) = 0;
  }
  else
  {
    *(_WORD *)(a1 + 20) = 0;
  }
  if ( ((*(_DWORD *)a1 - 284) & 0xFFFFFFF7) == 0 )
  {
    *(_WORD *)(a1 + 276) = HIBYTE(v1->OSCSDVersion);
    *(_WORD *)(a1 + 278) = (unsigned __int8)v1->OSCSDVersion;
    *(_WORD *)(a1 + 280) = RtlGetSuiteMask();
    if ( *(_DWORD *)a1 == 292 )
      *(_DWORD *)(a1 + 284) = RtlGetSuiteMask() & 0x1FFFF;
    *(_BYTE *)(a1 + 282) = 0;
    if ( RtlGetNtProductType(&v6) )
    {
      v5 = v6;
      *(_BYTE *)(a1 + 282) = v6;
      if ( v5 == 1 )
      {
        *(_WORD *)(a1 + 280) &= ~0x10u;
        if ( *(_DWORD *)a1 == 292 )
          *(_DWORD *)(a1 + 284) &= 0x1FFEFu;
      }
    }
  }
  return 0LL;
}
