/*
 * XREFs of LdrpFindLoadedDllByMappingLockHeld @ 0x180031AD0
 * Callers:
 *     LdrpMapImage @ 0x18000E70C (LdrpMapImage.c)
 *     LdrpFindLoadedDllByMapping @ 0x180076CC0 (LdrpFindLoadedDllByMapping.c)
 * Callees:
 *     LdrpCompareModuleMappingInfo @ 0x180031C18 (LdrpCompareModuleMappingInfo.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     memcmp @ 0x1800992D0 (memcmp.c)
 *     ZwAreMappedFilesTheSame @ 0x1800A61F0 (ZwAreMappedFilesTheSame.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMappingLockHeld(
        __int64 a1,
        const void *a2,
        unsigned int *a3,
        volatile signed __int32 **a4)
{
  _QWORD *v4; // rsi
  unsigned int v5; // edi
  _QWORD *v6; // rbx
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  volatile signed __int32 *v15; // rsi
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  void *Buf2; // [rsp+20h] [rbp-28h] BYREF

  v4 = (_QWORD *)LdrpMappingInfoIndex;
  v5 = 0;
  v6 = 0LL;
  while ( v4 )
  {
    v11 = LdrpCompareModuleMappingInfo(a3, v4);
    if ( v11 < 0 )
    {
LABEL_3:
      v4 = (_QWORD *)*v4;
    }
    else
    {
      if ( v11 <= 0 )
      {
        v6 = v4;
        goto LABEL_3;
      }
      v4 = (_QWORD *)v4[1];
    }
  }
  while ( 1 )
  {
    if ( !v6 )
      return (unsigned int)-1073741515;
    v15 = (volatile signed __int32 *)(v6 - 28);
    if ( (int)RtlImageNtHeaderEx(3LL, *(v6 - 22), 0LL, &Buf2) >= 0
      && !memcmp(a2, Buf2, 0x30uLL)
      && (int)ZwAreMappedFilesTheSame(*((_QWORD *)v15 + 6), a1) >= 0 )
    {
      break;
    }
    v16 = (_QWORD *)v6[1];
    v17 = v6;
    if ( v16 )
    {
      do
      {
        v6 = v16;
        v16 = (_QWORD *)*v16;
      }
      while ( v16 );
    }
    else
    {
      while ( 1 )
      {
        v6 = (_QWORD *)(v6[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v6 || (_QWORD *)*v6 == v17 )
          break;
        v17 = v6;
      }
    }
    if ( !v6 )
      return (unsigned int)-1073741515;
    v12 = *((_DWORD *)v6 - 24);
    if ( *a3 >= v12 && *a3 <= v12 )
    {
      v13 = *((_DWORD *)v6 - 40);
      if ( a3[1] >= v13 && a3[1] <= v13 )
        continue;
    }
    v6 = 0LL;
  }
  v18 = *((_QWORD *)v15 + 19);
  if ( *(_DWORD *)(v18 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v18 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement(v15 + 69);
  *a4 = v15;
  return v5;
}
