/*
 * XREFs of CreateDesktopHeap @ 0x1401E3B64
 * Callers:
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1401E3704 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 */

PVOID __fastcall CreateDesktopHeap(__int64 *a1, unsigned int a2)
{
  ULONG_PTR v4; // rdi
  NTSTATUS v5; // eax
  int v6; // eax
  __int64 Heap; // rax
  ULONG_PTR v9; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR ViewSize; // [rsp+48h] [rbp-8h] BYREF
  PVOID Section; // [rsp+80h] [rbp+30h] BYREF
  PVOID MappedBase; // [rsp+88h] [rbp+38h] BYREF

  v4 = a2 + 4096LL;
  v9 = v4;
  Section = 0LL;
  v5 = ((__int64 (__fastcall *)(PVOID *, __int64, _QWORD, ULONG_PTR *, int, int, _QWORD, _QWORD))MmCreateSection)(
         &Section,
         983071LL,
         0LL,
         &v9,
         4,
         0x4000000,
         0LL,
         0LL);
  if ( v5 < 0 )
  {
    SetLastNtError(v5);
  }
  else
  {
    ObDeleteCapturedInsertInfo(Section);
    MappedBase = 0LL;
    ViewSize = v4;
    v6 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
    if ( v6 < 0 )
    {
      SetLastNtError(v6);
    }
    else
    {
      Heap = UserCreateHeap(Section, 0LL, MappedBase, a2, UserCommitDesktopMemory);
      if ( Heap )
      {
        *a1 = Heap;
        return Section;
      }
      UserSetLastError(8);
      MmUnmapViewInSessionSpace(MappedBase);
    }
    ObfDereferenceObject(Section);
    *a1 = 0LL;
  }
  return 0LL;
}
