/*
 * XREFs of MmGetSectionRange @ 0x14052FFB0
 * Callers:
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     MiLookupDataTableEntry @ 0x1400145B0 (MiLookupDataTableEntry.c)
 *     MiReleaseResourceLite @ 0x140082D74 (MiReleaseResourceLite.c)
 *     MiAcquireResourceSharedLite @ 0x1400883F0 (MiAcquireResourceSharedLite.c)
 */

__int64 __fastcall MmGetSectionRange(unsigned __int64 a1, _QWORD *a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v7; // edi
  PVOID *v8; // rax
  PVOID *v9; // rsi
  PVOID v10; // rcx
  unsigned __int64 v11; // rbx
  PIMAGE_NT_HEADERS v12; // rax
  int v13; // r9d
  unsigned int NumberOfSections; // r10d
  _DWORD *v15; // rdx
  unsigned int v16; // r8d
  unsigned __int64 v17; // rax

  CurrentThread = KeGetCurrentThread();
  v7 = -1073741275;
  MiAcquireResourceSharedLite((__int64)CurrentThread);
  v8 = MiLookupDataTableEntry(a1, 1);
  v9 = v8;
  if ( v8 )
  {
    v10 = v8[6];
    v11 = a1 - (_QWORD)v10;
    v12 = RtlImageNtHeader(v10);
    v13 = 0;
    NumberOfSections = v12->FileHeader.NumberOfSections;
    v15 = (_DWORD *)((char *)&v12->OptionalHeader.Magic + v12->FileHeader.SizeOfOptionalHeader);
    if ( v12->FileHeader.NumberOfSections )
    {
      while ( 1 )
      {
        v16 = v15[2];
        v17 = (unsigned int)v15[3];
        if ( v15[4] >= v16 )
          v16 = v15[4];
        if ( v11 >= v17 && v11 < v16 + (unsigned int)v17 )
          break;
        v15 += 10;
        if ( ++v13 >= NumberOfSections )
          goto LABEL_10;
      }
      *a2 = (char *)v9[6] + (unsigned int)v15[3];
      v7 = 0;
      *a3 = v16;
    }
  }
LABEL_10:
  MiReleaseResourceLite((__int64)CurrentThread);
  return v7;
}
