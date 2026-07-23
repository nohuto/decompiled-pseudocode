/*
 * XREFs of PiDevCfgBuildDriverNodeStrongName @ 0x1406327B8
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14013C4F0 (RtlUnicodeStringPrintf.c)
 *     ExpAllocateStringRoutine @ 0x1403F6F7C (ExpAllocateStringRoutine.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlHashUnicodeString @ 0x1404E21B0 (RtlHashUnicodeString.c)
 */

__int64 __fastcall PiDevCfgBuildDriverNodeStrongName(
        __int64 a1,
        const UNICODE_STRING *a2,
        const UNICODE_STRING *a3,
        UNICODE_STRING *a4)
{
  unsigned __int16 *v4; // r15
  int v6; // edx
  __int64 v7; // r12
  int v9; // ecx
  unsigned int v12; // ecx
  NTSTATUS v13; // ebx
  ULONG v14; // ebx
  ULONG v15; // r8d
  UNICODE_STRING v16; // xmm0
  ULONG v18; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  ULONG HashValue; // [rsp+B0h] [rbp+30h] BYREF

  v4 = (unsigned __int16 *)(a1 + 88);
  *(_DWORD *)&DestinationString.Length = 0;
  v6 = *(unsigned __int16 *)(a1 + 40);
  v7 = a1 + 72;
  DestinationString.Buffer = 0LL;
  v9 = *(unsigned __int16 *)(a1 + 72);
  HashValue = 0;
  v18 = 0;
  v12 = *v4 + v6 + v9 + 90;
  if ( (unsigned __int64)v12 + 2 <= 0xFFFE )
  {
    DestinationString.Length = v12;
    DestinationString.MaximumLength = v12 + 2;
    DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(v12 + 2));
    if ( DestinationString.Buffer )
    {
      if ( a2->Buffer && RtlHashUnicodeString(a2, 1u, 0, &HashValue) >= 0 )
        v14 = HashValue;
      else
        v14 = 0;
      if ( a3->Buffer && RtlHashUnicodeString(a3, 1u, 0, &v18) >= 0 )
        v15 = v18;
      else
        v15 = 0;
      v13 = RtlUnicodeStringPrintf(
              &DestinationString,
              L"%wZ:%08x%08x:%wZ:%u.%u.%u.%u:%wZ",
              a1 + 40,
              v14,
              v15,
              v4,
              (unsigned __int16)HIWORD(*(_DWORD *)(a1 + 124)),
              *(unsigned __int16 *)(a1 + 124),
              *(unsigned __int16 *)(a1 + 122),
              *(unsigned __int16 *)(a1 + 120),
              v7);
      if ( v13 >= 0 )
      {
        v16 = DestinationString;
        *(_QWORD *)&DestinationString.Length = 0LL;
        *a4 = v16;
        DestinationString.Buffer = 0LL;
      }
    }
    else
    {
      v13 = -1073741670;
    }
  }
  else
  {
    v13 = -1073741562;
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v13;
}
