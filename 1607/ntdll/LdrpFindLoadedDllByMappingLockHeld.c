/*
 * XREFs of LdrpFindLoadedDllByMappingLockHeld @ 0x180031524
 * Callers:
 *     LdrpMapImage @ 0x18002F43C (LdrpMapImage.c)
 *     LdrpFindLoadedDllByMapping @ 0x180078550 (LdrpFindLoadedDllByMapping.c)
 * Callees:
 *     LdrpCompareModuleMappingInfo @ 0x180031744 (LdrpCompareModuleMappingInfo.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 *     memcmp @ 0x18009A690 (memcmp.c)
 *     ZwAreMappedFilesTheSame @ 0x1800A7550 (ZwAreMappedFilesTheSame.c)
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
  unsigned int v12; // eax
  unsigned int v13; // eax
  volatile signed __int32 *v15; // rsi
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+20h] [rbp-28h] BYREF

  Root = LdrpMappingInfoIndex.Root;
  v5 = 0;
  Children = 0LL;
  while ( Root )
  {
    v11 = LdrpCompareModuleMappingInfo(a3, Root);
    if ( v11 < 0 )
    {
LABEL_3:
      Root = Root->Children[0];
    }
    else
    {
      if ( v11 <= 0 )
      {
        Children = Root->Children;
        goto LABEL_3;
      }
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
    v16 = (_QWORD *)Children[1];
    v17 = Children;
    if ( v16 )
    {
      do
      {
        Children = v16;
        v16 = (_QWORD *)*v16;
      }
      while ( v16 );
    }
    else
    {
      while ( 1 )
      {
        Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !Children || (_QWORD *)*Children == v17 )
          break;
        v17 = Children;
      }
    }
    if ( !Children )
      return (unsigned int)-1073741515;
    v12 = *((_DWORD *)Children - 24);
    if ( *a3 >= v12 && *a3 <= v12 )
    {
      v13 = *((_DWORD *)Children - 40);
      if ( a3[1] >= v13 && a3[1] <= v13 )
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
