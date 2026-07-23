/*
 * XREFs of _ResCLoadFixedSize @ 0x1800F965C
 * Callers:
 *     ResCLoadCultureMap @ 0x1800FBBFC (ResCLoadCultureMap.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     _ResCloseHandle @ 0x1800F9834 (_ResCloseHandle.c)
 *     _ResCreateFile @ 0x1800F98D4 (_ResCreateFile.c)
 *     _ResGetFileSizeEx @ 0x1800FA87C (_ResGetFileSizeEx.c)
 *     _ResReadFile @ 0x1800FAA5C (_ResReadFile.c)
 *     ResCCultureMapCreateAndPopulate @ 0x1800FB940 (ResCCultureMapCreateAndPopulate.c)
 */

__int64 __fastcall ResCLoadFixedSize(const WCHAR *a1)
{
  char *v1; // rbx
  void *v2; // rdi
  __int64 File; // rax
  LONG v4; // ecx
  PVOID Heap; // rax
  int v6; // esi
  __int64 v7; // rsi
  SIZE_T Size; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  Size = 0LL;
  if ( !a1 || !ResCCultureMapCreateAndPopulate )
  {
    v4 = 87;
    goto LABEL_13;
  }
  File = ResCreateFile(a1);
  v1 = (char *)File;
  if ( File == -1 || !(unsigned int)ResGetFileSizeEx(File, &Size) )
    goto LABEL_14;
  if ( HIDWORD(Size) )
    goto LABEL_6;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)Size);
  v2 = Heap;
  if ( !Heap )
    goto LABEL_14;
  v6 = Size;
  if ( !(unsigned int)ResReadFile(v1, Heap, Size) )
    goto LABEL_14;
  if ( v6 )
  {
LABEL_6:
    v4 = 536937216;
LABEL_13:
    RtlSetLastWin32Error(v4);
    goto LABEL_14;
  }
  v7 = ResCCultureMapCreateAndPopulate(v2, 0LL, 0LL);
  if ( v7 )
  {
    ResCloseHandle(v1);
    return v7;
  }
LABEL_14:
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ResCloseHandle(v1);
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  return 0LL;
}
