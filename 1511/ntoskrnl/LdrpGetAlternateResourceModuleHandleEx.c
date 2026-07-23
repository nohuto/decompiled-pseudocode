/*
 * XREFs of LdrpGetAlternateResourceModuleHandleEx @ 0x1400DD36C
 * Callers:
 *     LdrpAccessResourceData @ 0x1404A1380 (LdrpAccessResourceData.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     LdrpInitMuiCrits @ 0x1400DE030 (LdrpInitMuiCrits.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1401F7674 (LdrpGetMappingFromCacheEntry.c)
 */

__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  int j; // edi
  PIMAGE_NT_HEADERS v10; // rax
  unsigned __int16 Magic; // cx
  __int64 SizeOfImage; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF

  v14 = 0LL;
  SizeOfImage = 0LL;
  LdrpInitMuiCrits(a1, a2);
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  *a4 = 0LL;
  v7 = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    if ( *((_QWORD *)AlternateResourceModules + 9 * i + 1) == a1 )
    {
      if ( v14 )
      {
        for ( j = v7; j >= 0; --j )
        {
          if ( *((_QWORD *)AlternateResourceModules + 9 * j + 1) == a1
            && (unsigned __int8)LdrpGetMappingFromCacheEntry((unsigned int)j, a3, &v14, &SizeOfImage) )
          {
            v7 = j;
            break;
          }
        }
        if ( j < 0 )
          v7 = AlternateResourceModuleCount;
        break;
      }
      v14 = *((_QWORD *)AlternateResourceModules + 9 * i + 4);
      SizeOfImage = *((_QWORD *)AlternateResourceModules + 9 * i + 6);
      v7 = i;
    }
  }
  if ( v7 == AlternateResourceModuleCount )
  {
    v14 = 0LL;
  }
  else
  {
    if ( !SizeOfImage )
    {
      v10 = RtlImageNtHeader((PVOID)(v14 & 0xFFFFFFFFFFFFFFFCuLL));
      if ( v10 )
      {
        Magic = v10->OptionalHeader.Magic;
        if ( Magic == 267 || Magic == 523 )
          SizeOfImage = v10->OptionalHeader.SizeOfImage;
        else
          SizeOfImage = 0LL;
      }
    }
    *a4 = SizeOfImage;
  }
  KeReleaseMutex(&MuiMutex, 0);
  return v14;
}
