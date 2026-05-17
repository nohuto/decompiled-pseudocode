/*
 * XREFs of LdrpResGetMappingSize @ 0x18001AFF0
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 *     LdrpResSearchResourceMappedFile @ 0x180018FCC (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x18001AAA0 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x180056F50 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180015E10 (RtlImageNtHeaderEx.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x1800381AC (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     ZwQueryVirtualMemory @ 0x180093B30 (ZwQueryVirtualMemory.c)
 *     LdrpTraceLoadMUIDll @ 0x1800CBC78 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResGetMappingSize(__int64 a1, unsigned __int64 *a2, int a3, char a4)
{
  unsigned __int64 v7; // r12
  unsigned __int64 FileSizeFromLoadAsDataTable; // rdi
  int VirtualMemory; // ebx
  unsigned __int64 v10; // rsi
  bool v11; // r15
  _QWORD v13[2]; // [rsp+40h] [rbp-68h] BYREF
  int v14; // [rsp+50h] [rbp-58h] BYREF
  const wchar_t *v15; // [rsp+58h] [rbp-50h]
  _BYTE v16[16]; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+70h] [rbp-38h]
  __int64 v18; // [rsp+B0h] [rbp+8h] BYREF
  char v19; // [rsp+C8h] [rbp+20h]

  v19 = a4;
  LODWORD(v13[0]) = 3670070;
  v13[1] = L"LdrpResGetMappingSize Enter";
  v14 = 3538996;
  v15 = L"LdrpResGetMappingSize Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(v13, MEMORY[0x7FFE0384]);
  if ( a1 && a2 )
  {
    v7 = 0LL;
    if ( (a3 & 0x80000) != 0 )
    {
      FileSizeFromLoadAsDataTable = *a2;
      VirtualMemory = 0;
      goto LABEL_31;
    }
    if ( (a3 & 0x20000) != 0 )
      v7 = *a2;
    *a2 = 0LL;
    FileSizeFromLoadAsDataTable = 0LL;
    v10 = 0LL;
    v11 = 0;
    if ( (a3 & 0x100) != 0 )
      v11 = (a1 & 1) == 0;
    v13[0] = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    VirtualMemory = RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v18);
    if ( VirtualMemory >= 0 )
    {
      if ( *(_WORD *)(v18 + 24) == 267 || *(_WORD *)(v18 + 24) == 523 )
      {
        v10 = *(unsigned int *)(v18 + 80);
      }
      else
      {
        v10 = 0LL;
        VirtualMemory = -1073741701;
      }
    }
    if ( VirtualMemory < 0 )
      return (unsigned int)VirtualMemory;
    if ( !v11 || !v10 )
    {
      if ( !v19 )
        FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
      if ( FileSizeFromLoadAsDataTable )
      {
        VirtualMemory = 0;
      }
      else
      {
        VirtualMemory = ZwQueryVirtualMemory(-1LL, v13[0], 3LL, v16, 32LL, 0LL);
        if ( VirtualMemory >= 0 )
          FileSizeFromLoadAsDataTable = v17;
      }
      if ( FileSizeFromLoadAsDataTable || !v10 )
      {
LABEL_30:
        if ( VirtualMemory < 0 )
        {
LABEL_35:
          if ( (MEMORY[0x7FFE0385] & 1) != 0 )
            LdrpTraceLoadMUIDll(&v14, MEMORY[0x7FFE0384]);
          return (unsigned int)VirtualMemory;
        }
LABEL_31:
        if ( v7 && v7 < FileSizeFromLoadAsDataTable )
          VirtualMemory = -1073741793;
        else
          *a2 = FileSizeFromLoadAsDataTable;
        goto LABEL_35;
      }
      VirtualMemory = 0;
    }
    FileSizeFromLoadAsDataTable = v10;
    goto LABEL_30;
  }
  return 3221225485LL;
}
