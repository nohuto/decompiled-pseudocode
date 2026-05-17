/*
 * XREFs of _ResCLoadFixedSize @ 0x180103908
 * Callers:
 *     ResCLoadCultureMap @ 0x180105A7C (ResCLoadCultureMap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     _ResCloseHandle @ 0x180103AE0 (_ResCloseHandle.c)
 *     _ResCreateFile @ 0x180103B80 (_ResCreateFile.c)
 *     _ResGetFileSizeEx @ 0x180104B40 (_ResGetFileSizeEx.c)
 *     _ResReadFile @ 0x180104D20 (_ResReadFile.c)
 *     ResCCultureMapCreateAndPopulate @ 0x1801057C0 (ResCCultureMapCreateAndPopulate.c)
 */

__int64 __fastcall ResCLoadFixedSize(__int64 a1)
{
  char *v1; // rbx
  unsigned __int64 Heap; // rdi
  __int64 File; // rax
  unsigned int v4; // ecx
  unsigned int v5; // esi
  __int64 v6; // rsi
  unsigned int v8; // [rsp+60h] [rbp+18h] BYREF
  int v9; // [rsp+64h] [rbp+1Ch]

  v1 = 0LL;
  Heap = 0LL;
  v8 = 0;
  v9 = 0;
  if ( !a1 || !ResCCultureMapCreateAndPopulate )
  {
    v4 = 87;
    goto LABEL_13;
  }
  File = ResCreateFile(a1, 0x80000000LL, 1LL);
  v1 = (char *)File;
  if ( File == -1 || !(unsigned int)ResGetFileSizeEx(File, &v8) )
    goto LABEL_14;
  if ( v9 )
    goto LABEL_6;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
  if ( !Heap )
    goto LABEL_14;
  v5 = v8;
  if ( !(unsigned int)ResReadFile(v1) )
    goto LABEL_14;
  if ( v5 )
  {
LABEL_6:
    v4 = 536937216;
LABEL_13:
    RtlSetLastWin32Error(v4);
    goto LABEL_14;
  }
  v6 = ResCCultureMapCreateAndPopulate(Heap, 0LL, 0LL);
  if ( v6 )
  {
    ResCloseHandle(v1);
    return v6;
  }
LABEL_14:
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ResCloseHandle(v1);
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return 0LL;
}
