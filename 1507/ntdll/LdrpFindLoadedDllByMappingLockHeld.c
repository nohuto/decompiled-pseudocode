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
        __int64 a1,
        const void *a2,
        unsigned int *a3,
        volatile signed __int32 **a4)
{
  _QWORD *v4; // rsi
  unsigned int v5; // edi
  _QWORD *v6; // rbx
  int v11; // eax
  _QWORD *v12; // rax
  unsigned int v13; // eax
  volatile signed __int32 *v15; // rsi
  _QWORD *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rax
  void *Buf2; // [rsp+20h] [rbp-28h] BYREF

  v4 = (_QWORD *)LdrpMappingInfoIndex;
  v5 = 0;
  v6 = 0LL;
  while ( v4 )
  {
    v11 = LdrpCompareModuleMappingInfo(a3, (__int64)v4);
    if ( v11 < 0 )
      goto LABEL_6;
    if ( v11 <= 0 )
    {
      v6 = v4;
LABEL_6:
      v4 = (_QWORD *)*v4;
    }
    else
    {
      v4 = (_QWORD *)v4[1];
    }
  }
  while ( 1 )
  {
    if ( !v6 )
      return (unsigned int)-1073741515;
    v15 = (volatile signed __int32 *)(v6 - 28);
    if ( (int)RtlImageNtHeaderEx(3, *(v6 - 22), 0LL, &Buf2) >= 0
      && !memcmp(a2, Buf2, 0x30uLL)
      && (int)ZwAreMappedFilesTheSame(*((_QWORD *)v15 + 6), a1) >= 0 )
    {
      break;
    }
    v12 = (_QWORD *)v6[1];
    v16 = v6;
    if ( v12 )
    {
      do
      {
        v6 = v12;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 );
    }
    else
    {
      while ( 1 )
      {
        v6 = (_QWORD *)(v6[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v6 || (_QWORD *)*v6 == v16 )
          break;
        v16 = v6;
      }
    }
    if ( !v6 )
      return (unsigned int)-1073741515;
    v13 = *((_DWORD *)v6 - 24);
    if ( *a3 >= v13 && *a3 <= v13 )
    {
      v17 = *((_DWORD *)v6 - 40);
      if ( a3[1] >= v17 && a3[1] <= v17 )
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
