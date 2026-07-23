/*
 * XREFs of IoSetOplockKeyContext @ 0x1401336D0
 * Callers:
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 *     FsRtlpAttachOplockKey @ 0x14007BA34 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 *     IopGetFileObjectExtension @ 0x14007B5A0 (IopGetFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x14007B640 (IopSetTypeSpecificFoExtension.c)
 *     IopAllocateFileObjectExtension @ 0x1400E9400 (IopAllocateFileObjectExtension.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall IoSetOplockKeyContext(__int64 a1, __int128 *a2, __int16 a3)
{
  __int64 result; // rax
  char *v6; // rax
  char *v7; // rbx
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  unsigned int v10; // edi
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( (unsigned __int16)(a3 - 1) > 1u )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 208) )
  {
    IopGetFileObjectExtension(a1, 6, &v11);
  }
  else
  {
    result = IopAllocateFileObjectExtension(a1, &v11);
    if ( (int)result < 0 )
      return result;
  }
  v6 = (char *)ExAllocateFromNPagedLookasideList(&IopOplockFoExtLookasideList);
  v7 = v6;
  if ( !v6 )
    return 3221225626LL;
  memset(v6, 0, 0x30uLL);
  *(_WORD *)v7 = a3;
  if ( a3 == 1 )
  {
    v9 = *a2;
  }
  else
  {
    if ( a3 != 2 )
      goto LABEL_12;
    if ( *((_BYTE *)a2 + 32) )
    {
      v8 = *a2;
      *((_WORD *)v7 + 1) |= 1u;
      *(_OWORD *)(v7 + 4) = v8;
    }
    if ( !*((_BYTE *)a2 + 33) )
      goto LABEL_12;
    v9 = a2[1];
  }
  *((_WORD *)v7 + 1) |= 2u;
  *(_OWORD *)(v7 + 20) = v9;
LABEL_12:
  v10 = IopSetTypeSpecificFoExtension(v11, 6u, (signed __int64)v7);
  if ( v10 == -1073741823 )
    ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, v7);
  return v10;
}
