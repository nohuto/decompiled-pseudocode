/*
 * XREFs of RtlpLoadPolicyLanguageSpec @ 0x1800F3D64
 * Callers:
 *     RtlpLoadMachineUIByPolicy @ 0x180070B50 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpLoadLanguageConfigList @ 0x1800710B4 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadUserUIByPolicy @ 0x180071A00 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlpMuiRegGetOrAddString @ 0x180040CFC (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x180043F60 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x180044468 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     LdrpQueryValueKey @ 0x1800716C4 (LdrpQueryValueKey.c)
 */

__int64 __fastcall RtlpLoadPolicyLanguageSpec(HANDLE KeyHandle, __int64 a2, _BYTE *a3, _WORD *a4)
{
  PVOID Heap; // rdi
  unsigned __int8 v9; // si
  int v10; // eax
  int InstalledLanguageIndex; // ebx
  unsigned __int16 v12; // cx
  __int16 v14[2]; // [rsp+30h] [rbp-20h] BYREF
  SIZE_T Size; // [rsp+34h] [rbp-1Ch] BYREF
  DWORD Lcid; // [rsp+3Ch] [rbp-14h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int16 v18; // [rsp+88h] [rbp+38h] BYREF

  v18 = 0;
  v14[0] = -1;
  Heap = 0LL;
  if ( a2 && KeyHandle )
  {
    v9 = 1;
    Size = 0x100000000LL;
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    v10 = LdrpQueryValueKey(KeyHandle, &DestinationString, (_DWORD *)&Size + 1, 0LL, (ULONG *)&Size);
    if ( !(_DWORD)Size || v10 == -1073741772 )
      return (unsigned int)-1073741823;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
    if ( !Heap )
      return (unsigned int)-1073741801;
    InstalledLanguageIndex = LdrpQueryValueKey(KeyHandle, &DestinationString, (_DWORD *)&Size + 1, Heap, (ULONG *)&Size);
    if ( InstalledLanguageIndex >= 0 )
    {
      if ( HIDWORD(Size) == 1
        && (RtlInitUnicodeString(&DestinationString, (PCWSTR)Heap), RtlCultureNameToLCID(&DestinationString, &Lcid)) )
      {
        v12 = Lcid;
        if ( ((Lcid - 4096) & 0xFFFFFBFF) != 0 )
          goto LABEL_14;
        InstalledLanguageIndex = RtlpMuiRegGetOrAddString(a2, DestinationString.Buffer, 0LL, (__int16 *)&v18);
        if ( InstalledLanguageIndex >= 0 )
        {
          v12 = v18;
          v9 = 3;
LABEL_14:
          InstalledLanguageIndex = RtlpMuiRegGetInstalledLanguageIndex(a2, v9, v12, v14);
          if ( InstalledLanguageIndex >= 0 )
          {
            if ( a3 )
              *a3 = 2;
            if ( a4 )
              *a4 = v14[0];
          }
        }
      }
      else
      {
        InstalledLanguageIndex = -1073741823;
      }
    }
  }
  else
  {
    InstalledLanguageIndex = -1073741811;
  }
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)InstalledLanguageIndex;
}
