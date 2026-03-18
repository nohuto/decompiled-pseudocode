/*
 * XREFs of ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C00897F4
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C00542E4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     GetDesktopHeapSize_0 @ 0x1C0002970 (GetDesktopHeapSize_0.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     Win32CreateSection @ 0x1C0053C4C (Win32CreateSection.c)
 */

__int64 __fastcall ReserveUserSessionViewsWorker(void **a1, void **a2)
{
  int v4; // ebp
  int v5; // ebp
  int v6; // ebp
  ULONG_PTR v7; // rbp
  __int64 v8; // r8
  NTSTATUS Section; // eax
  unsigned int v10; // ebx
  PVOID v11; // rcx
  int v12; // eax
  ULONG v14; // eax
  ULONG v15; // eax
  __int64 v16; // [rsp+20h] [rbp-48h]
  ULONG_PTR v17; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+20h] BYREF

  v4 = 10 * GetDesktopHeapSize_0();
  v5 = GetDesktopHeapSize_0() + v4;
  v6 = GetDesktopHeapSize_0() + v5;
  v7 = (unsigned int)GetDesktopHeapSize_0() + v6;
  v17 = v7;
  Section = Win32CreateSection(a1, 983071LL, v8, (__int64)&v17, v16, 0x4000000);
  v10 = Section;
  if ( Section < 0 )
  {
    v14 = RtlNtStatusToDosError(Section);
    UserSetLastError(v14);
  }
  else
  {
    *a2 = 0LL;
    v11 = *a1;
    ViewSize = v7;
    v12 = MmMapViewInSessionSpace(v11, a2, &ViewSize);
    v10 = v12;
    if ( v12 < 0 )
    {
      v15 = RtlNtStatusToDosError(v12);
      UserSetLastError(v15);
      ObfDereferenceObject(*a1);
    }
  }
  return v10;
}
