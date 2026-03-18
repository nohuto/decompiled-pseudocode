/*
 * XREFs of InitCreateSharedSection @ 0x1C013C56C
 * Callers:
 *     Win32UserInitialize @ 0x1C013B9C4 (Win32UserInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     UserCreateHeap @ 0x1C006D550 (UserCreateHeap.c)
 *     Win32CreateSection @ 0x1C00AFD74 (Win32CreateSection.c)
 */

__int64 __fastcall InitCreateSharedSection(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  NTSTATUS v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-38h]
  int v7; // [rsp+60h] [rbp+8h] BYREF
  int v8; // [rsp+64h] [rbp+Ch]
  ULONG_PTR ViewSize; // [rsp+68h] [rbp+10h] BYREF

  v8 = 0;
  v7 = 1605632;
  result = Win32CreateSection(&ghSectionShared, 983071LL, a3, (__int64)&v7, v6, 0x4000000);
  if ( (int)result >= 0 )
  {
    ViewSize = 0LL;
    gpvSharedBase = 0LL;
    v4 = MmMapViewInSessionSpace(ghSectionShared, &gpvSharedBase, &ViewSize);
    if ( v4 < 0 )
    {
      ObfDereferenceObject(ghSectionShared);
LABEL_6:
      ghSectionShared = 0LL;
      return (unsigned int)v4;
    }
    gpvSharedAlloc = UserCreateHeap(
                       (__int64)ghSectionShared,
                       1572864LL,
                       (char *)gpvSharedBase + 1572864,
                       0x8000u,
                       (NTSTATUS (__stdcall *)(PVOID, PVOID *, PSIZE_T))UserCommitSharedMemory);
    if ( !gpvSharedAlloc )
    {
      UserSetLastError(8LL, v5);
      MmUnmapViewInSessionSpace(gpvSharedBase);
      ObfDereferenceObject(ghSectionShared);
      gpvSharedAlloc = 0LL;
      v4 = -1073741801;
      gpvSharedBase = 0LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  return result;
}
