/*
 * XREFs of RtlpGetMUIRedirectedFilePath @ 0x18006A4A4
 * Callers:
 *     RtlGetFileMUIPath @ 0x180069A90 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x180010430 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x180013C80 (RtlAppendUnicodeToString.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlDoesFileExists_UEx @ 0x18006A6B8 (RtlDoesFileExists_UEx.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

char __fastcall RtlpGetMUIRedirectedFilePath(
        PCUNICODE_STRING Source,
        PCWSTR a2,
        PCWSTR a3,
        _DWORD *a4,
        char a5,
        void *a6,
        _BYTE *BaseAddress)
{
  wchar_t *v11; // rdi
  unsigned __int64 v12; // rax
  wchar_t *Heap; // rax
  unsigned __int64 v14; // r15
  char v16; // [rsp+20h] [rbp-38h]
  _UNICODE_STRING Destination; // [rsp+28h] [rbp-30h] BYREF

  v16 = 0;
  v11 = 0LL;
  if ( BaseAddress )
    *BaseAddress = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a2[v12] );
      if ( v12 < 0x104 )
      {
        Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
        v11 = Heap;
        if ( Heap )
        {
          *(_DWORD *)&Destination.Length = 34078720;
          Destination.Buffer = Heap;
          if ( RtlAppendUnicodeToString(&Destination, a2) >= 0
            && RtlAppendUnicodeToString(&Destination, L"\\") >= 0
            && RtlAppendUnicodeStringToString(&Destination, Source) >= 0
            && RtlAppendUnicodeToString(&Destination, L"\\") >= 0
            && RtlAppendUnicodeToString(&Destination, a3) >= 0
            && (!a5 || RtlAppendUnicodeToString(&Destination, L".mui") >= 0) )
          {
            if ( (unsigned __int8)RtlDoesFileExists_UEx(Destination.Buffer) )
            {
              if ( a6 )
              {
                v14 = (unsigned __int64)Destination.Length >> 1;
                if ( (unsigned int)*a4 < v14 + 1 )
                {
                  if ( BaseAddress )
                    *BaseAddress = 1;
                }
                else
                {
                  memmove(a6, Destination.Buffer, Destination.Length);
                  *((_WORD *)a6 + v14) = 0;
                }
                goto LABEL_19;
              }
              if ( a4 )
              {
                *a4 = ((unsigned __int64)Destination.Length >> 1) + 1;
LABEL_19:
                v16 = 1;
              }
            }
          }
        }
      }
    }
  }
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  return v16;
}
