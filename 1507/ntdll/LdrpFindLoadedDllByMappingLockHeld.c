/*
 * XREFs of LdrpFindLoadedDllByMappingLockHeld @ 0x1800170B8
 * Callers:
 *     LdrpMapImage @ 0x180040760 (LdrpMapImage.c)
 *     LdrpFindLoadedDllByMapping @ 0x18006C1E0 (LdrpFindLoadedDllByMapping.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180015E10 (RtlImageNtHeaderEx.c)
 *     LdrpCompareModuleMappingInfo @ 0x180016FFC (LdrpCompareModuleMappingInfo.c)
 *     memcmp @ 0x180087B20 (memcmp.c)
 *     ZwAreMappedFilesTheSame @ 0x1800941A0 (ZwAreMappedFilesTheSame.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMappingLockHeld(
        PVOID File2MappedAsFile,
        void *Buf1,
        unsigned int *a3,
        volatile signed __int32 **a4)
{
  _RTL_BALANCED_NODE *Root; // rsi
  unsigned int v5; // edi
  _QWORD *Children; // rbx
  int v11; // eax
  _QWORD *v12; // rax
  unsigned int v13; // eax
  volatile signed __int32 *v15; // rsi
  _QWORD *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+20h] [rbp-28h] BYREF

  Root = LdrpMappingInfoIndex.Root;
  v5 = 0;
  Children = 0LL;
  while ( Root )
  {
    v11 = LdrpCompareModuleMappingInfo(a3, (__int64)Root);
    if ( v11 < 0 )
      goto LABEL_6;
    if ( v11 <= 0 )
    {
      Children = Root->Children;
LABEL_6:
      Root = Root->Children[0];
    }
    else
    {
      Root = Root->Children[1];
    }
  }
  while ( 1 )
  {
    if ( !Children )
      return (unsigned int)-1073741515;
    v15 = (volatile signed __int32 *)(Children - 28);
    if ( RtlImageNtHeaderEx(3u, (PVOID)*(Children - 22), 0LL, &OutHeaders) >= 0
      && !memcmp(Buf1, OutHeaders, 0x30uLL)
      && ZwAreMappedFilesTheSame(*((PVOID *)v15 + 6), File2MappedAsFile) >= 0 )
    {
      break;
    }
    v12 = (_QWORD *)Children[1];
    v16 = Children;
    if ( v12 )
    {
      do
      {
        Children = v12;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 );
    }
    else
    {
      while ( 1 )
      {
        Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !Children || (_QWORD *)*Children == v16 )
          break;
        v16 = Children;
      }
    }
    if ( !Children )
      return (unsigned int)-1073741515;
    v13 = *((_DWORD *)Children - 24);
    if ( *a3 >= v13 && *a3 <= v13 )
    {
      v17 = *((_DWORD *)Children - 40);
      if ( a3[1] >= v17 && a3[1] <= v17 )
        continue;
    }
    Children = 0LL;
  }
  v18 = *((_QWORD *)v15 + 19);
  if ( *(_DWORD *)(v18 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v18 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement(v15 + 69);
  *a4 = v15;
  return v5;
}
