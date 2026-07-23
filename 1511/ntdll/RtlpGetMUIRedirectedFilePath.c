/*
 * XREFs of RtlpGetMUIRedirectedFilePath @ 0x18003FC68
 * Callers:
 *     RtlGetFileMUIPath @ 0x18003F210 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x18000E310 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x180019AF0 (RtlAppendUnicodeToString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlDoesFileExists_UEx @ 0x18003FE78 (RtlDoesFileExists_UEx.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
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
  unsigned __int16 *v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int16 *Heap; // rax
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
        Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
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
              }
              else
              {
                if ( !a4 )
                  goto LABEL_25;
                *a4 = ((unsigned __int64)Destination.Length >> 1) + 1;
              }
              v16 = 1;
            }
          }
        }
      }
    }
  }
LABEL_25:
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  return v16;
}
