/*
 * XREFs of ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C0085524
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C007C5BC (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     GetDesktopHeapSize_0 @ 0x1C0002940 (GetDesktopHeapSize_0.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     Win32CreateSection @ 0x1C00AB874 (Win32CreateSection.c)
 */

__int64 __fastcall ReserveUserSessionViewsWorker(void **a1, void **a2)
{
  int v4; // ebp
  int v5; // ebp
  int v6; // ebp
  ULONG_PTR v7; // rbp
  int v8; // r8d
  NTSTATUS Section; // eax
  unsigned int v10; // ebx
  ULONG v11; // eax
  __int64 v12; // rdx
  PVOID v13; // rcx
  int v14; // eax
  ULONG v15; // eax
  __int64 v16; // rdx
  ULONG_PTR v18; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+20h] BYREF

  v4 = 10 * GetDesktopHeapSize_0();
  v5 = GetDesktopHeapSize_0() + v4;
  v6 = GetDesktopHeapSize_0() + v5;
  v7 = (unsigned int)GetDesktopHeapSize_0() + v6;
  v18 = v7;
  Section = Win32CreateSection((_DWORD)a1, 983071, v8, (unsigned int)&v18);
  v10 = Section;
  if ( Section >= 0 )
  {
    *a2 = 0LL;
    v13 = *a1;
    ViewSize = v7;
    v14 = MmMapViewInSessionSpace(v13, a2, &ViewSize);
    v10 = v14;
    if ( v14 < 0 )
    {
      v15 = RtlNtStatusToDosError(v14);
      UserSetLastError(v15, v16);
      ObfDereferenceObject(*a1);
    }
  }
  else
  {
    v11 = RtlNtStatusToDosError(Section);
    UserSetLastError(v11, v12);
  }
  return v10;
}
