/*
 * XREFs of MiLocateKernelSections @ 0x1407B16B4
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x1407B1234 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 */

int __fastcall MiLocateKernelSections(__int64 a1)
{
  char *v1; // rbx
  PIMAGE_NT_HEADERS v2; // rax
  int NumberOfSections; // r9d
  int *v4; // r8
  unsigned int v5; // r10d
  int v6; // ecx
  char *v7; // rdx

  v1 = *(char **)(a1 + 48);
  v2 = RtlImageNtHeader(v1);
  NumberOfSections = v2->FileHeader.NumberOfSections;
  v4 = (int *)((char *)&v2->OptionalHeader + v2->FileHeader.SizeOfOptionalHeader);
  if ( v2->FileHeader.NumberOfSections )
  {
    LODWORD(v2) = MiFlags;
    do
    {
      v5 = v4[2];
      v6 = *v4;
      if ( v4[4] >= v5 )
        v5 = v4[4];
      if ( v6 == 1987011374 || v6 == 1953655086 )
      {
        LODWORD(v2) = (unsigned int)v2 | 0x400;
        MiFlags = (int)v2;
      }
      else if ( v6 == 1280266064 )
      {
        v7 = &v1[v4[3]];
        if ( v4[1] == 1162104643 )
        {
          ExPoolCodeStart = (__int64)&v1[v4[3]];
          ExPoolCodeEnd = ((unsigned __int64)&v7[v5 + 4095] & 0xFFFFFFFFFFFFF000uLL) - 1;
        }
      }
      --NumberOfSections;
      v4 += 10;
    }
    while ( NumberOfSections > 0 );
  }
  return (int)v2;
}
