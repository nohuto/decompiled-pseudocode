/*
 * XREFs of SwitchedRtlGetVersion @ 0x180074114
 * Callers:
 *     RtlSwitchedVVI @ 0x180073CA0 (RtlSwitchedVVI.c)
 * Callees:
 *     SbSelectProcedure @ 0x18000EFD0 (SbSelectProcedure.c)
 *     RtlStringCbCopyW @ 0x18001C134 (RtlStringCbCopyW.c)
 *     RtlGetNtProductType @ 0x1800743D0 (RtlGetNtProductType.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall SwitchedRtlGetVersion(int *a1)
{
  struct _PEB *v1; // rsi
  __int64 (__fastcall *v2)(_QWORD); // rbp
  int v4; // edi
  int v5; // edi
  unsigned __int16 *Buffer; // r8
  int v7; // ecx
  int v8; // eax
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = NtCurrentPeb();
  v2 = (__int64 (__fastcall *)(_QWORD))qword_180145F68;
  v4 = 0;
  a1[1] = v1->OSMajorVersion;
  a1[2] = v1->OSMinorVersion;
  a1[3] = v1->OSBuildNumber;
  a1[4] = v1->OSPlatformId;
  if ( v2
    || (qword_180145F68 = SbSelectProcedure(2880154539LL, 0, (__int64)"kLsE", 0),
        (v2 = (__int64 (__fastcall *)(_QWORD))qword_180145F68) != 0LL) )
  {
    v4 = v2(v2);
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    a1[2] = 2;
    a1[3] = 9200;
LABEL_17:
    a1[1] = 6;
    goto LABEL_5;
  }
  if ( v5 == 1 )
  {
    a1[2] = 3;
    a1[3] = 9600;
    goto LABEL_17;
  }
LABEL_5:
  Buffer = v1->CSDVersion.Buffer;
  if ( !Buffer || !*Buffer || (int)RtlStringCbCopyW((_WORD *)a1 + 10, 0x100uLL, (__int64)Buffer) < 0 )
    *((_WORD *)a1 + 10) = 0;
  v7 = *a1;
  if ( ((*a1 - 284) & 0xFFFFFFF7) == 0 )
  {
    *((_WORD *)a1 + 138) = HIBYTE(v1->OSCSDVersion);
    *((_WORD *)a1 + 139) = (unsigned __int8)v1->OSCSDVersion;
    *((_WORD *)a1 + 140) = MEMORY[0x7FFE02D0];
    if ( v7 == 292 )
      a1[71] = MEMORY[0x7FFE02D0] & 0x1FFFF;
    *((_BYTE *)a1 + 282) = 0;
    if ( (unsigned __int8)RtlGetNtProductType(&v10) )
    {
      v8 = v10;
      *((_BYTE *)a1 + 282) = v10;
      if ( v8 == 1 )
      {
        *((_WORD *)a1 + 140) &= ~0x10u;
        if ( *a1 == 292 )
          a1[71] &= 0x1FFEFu;
      }
    }
  }
  return 0LL;
}
