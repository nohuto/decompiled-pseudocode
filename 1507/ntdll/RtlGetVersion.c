/*
 * XREFs of RtlGetVersion @ 0x180042170
 * Callers:
 *     SbpUpdateCacheWithCurrentImpl @ 0x180041F50 (SbpUpdateCacheWithCurrentImpl.c)
 *     RtlVerifyVersionInfo @ 0x1800455E0 (RtlVerifyVersionInfo.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180045940 (RtlpGetDeviceFamilyInfoEnum.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x18001F684 (RtlStringCbCopyW.c)
 *     RtlGetNtProductType @ 0x180042900 (RtlGetNtProductType.c)
 */

__int64 __fastcall RtlGetVersion(int *a1)
{
  struct _PEB *v1; // rdi
  unsigned __int16 *Buffer; // r8
  int v4; // ecx
  int v6; // eax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = NtCurrentPeb();
  a1[1] = v1->OSMajorVersion;
  a1[2] = v1->OSMinorVersion;
  a1[3] = v1->OSBuildNumber;
  a1[4] = v1->OSPlatformId;
  Buffer = v1->CSDVersion.Buffer;
  if ( Buffer && *Buffer )
  {
    if ( (int)RtlStringCbCopyW((_WORD *)a1 + 10, 0x100uLL, (__int64)Buffer) < 0 )
      *((_WORD *)a1 + 10) = 0;
  }
  else
  {
    *((_WORD *)a1 + 10) = 0;
  }
  v4 = *a1;
  if ( ((*a1 - 284) & 0xFFFFFFF7) == 0 )
  {
    *((_WORD *)a1 + 138) = HIBYTE(v1->OSCSDVersion);
    *((_WORD *)a1 + 139) = (unsigned __int8)v1->OSCSDVersion;
    *((_WORD *)a1 + 140) = MEMORY[0x7FFE02D0];
    if ( v4 == 292 )
      a1[71] = MEMORY[0x7FFE02D0] & 0x1FFFF;
    *((_BYTE *)a1 + 282) = 0;
    if ( (unsigned __int8)RtlGetNtProductType(&v7) )
    {
      v6 = v7;
      *((_BYTE *)a1 + 282) = v7;
      if ( v6 == 1 )
      {
        *((_WORD *)a1 + 140) &= ~0x10u;
        if ( *a1 == 292 )
          a1[71] &= 0x1FFEFu;
      }
    }
  }
  return 0LL;
}
