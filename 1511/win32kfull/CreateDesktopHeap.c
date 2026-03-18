/*
 * XREFs of CreateDesktopHeap @ 0x1C00D0C64
 * Callers:
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C00D090C (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     Win32DestroySection @ 0x1C01D3948 (Win32DestroySection.c)
 *     Win32CreateSection @ 0x1C01E8B94 (Win32CreateSection.c)
 *     Win32MapViewInSessionSpace @ 0x1C01E8BE8 (Win32MapViewInSessionSpace.c)
 *     Win32UnmapViewInSessionSpace @ 0x1C01E8BF0 (Win32UnmapViewInSessionSpace.c)
 */

PVOID __fastcall CreateDesktopHeap(__int64 *a1, unsigned int a2, int a3)
{
  ULONG_PTR v3; // rsi
  NTSTATUS v5; // eax
  ULONG v6; // eax
  int v8; // eax
  ULONG v9; // eax
  __int64 Heap; // rax
  __int64 v11; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-8h] BYREF
  PVOID Section; // [rsp+90h] [rbp+30h] BYREF
  PVOID MappedBase; // [rsp+98h] [rbp+38h] BYREF

  v3 = a2;
  v11 = a2;
  v5 = Win32CreateSection((unsigned int)&Section, a2, a3, (unsigned int)&v11);
  if ( v5 < 0 )
  {
    v6 = RtlNtStatusToDosError(v5);
    UserSetLastError(v6);
    return 0LL;
  }
  MappedBase = 0LL;
  ViewSize = v3;
  v8 = Win32MapViewInSessionSpace(Section, &MappedBase, &ViewSize);
  if ( v8 < 0 )
  {
    v9 = RtlNtStatusToDosError(v8);
    UserSetLastError(v9);
LABEL_8:
    Win32DestroySection(Section);
    *a1 = 0LL;
    return 0LL;
  }
  Heap = UserCreateHeap(Section, 0LL, MappedBase, (unsigned int)v3, UserCommitDesktopMemory);
  if ( !Heap )
  {
    UserSetLastError(8);
    Win32UnmapViewInSessionSpace(MappedBase);
    goto LABEL_8;
  }
  *a1 = Heap;
  return Section;
}
