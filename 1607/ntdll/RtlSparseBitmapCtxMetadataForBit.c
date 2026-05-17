/*
 * XREFs of RtlSparseBitmapCtxMetadataForBit @ 0x180100680
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18004FE14 (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x18004FE34 (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCheckRangeArrayPage @ 0x18004FE58 (RtlpSparseBitmapCheckRangeArrayPage.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlSparseBitmapCtxMetadataForBit(__int64 a1, unsigned __int64 a2, void *a3, __int64 a4)
{
  unsigned int v7; // edi
  unsigned __int64 v8; // r14
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  volatile signed __int64 *v12; // rsi
  int v13; // ecx
  char *v14; // rax

  RtlpSparseBitmapCtxLockShared(a1, (volatile signed __int64 *)a1, (__int64)a3, a4);
  v7 = 0;
  if ( *(_DWORD *)(a1 + 68) )
  {
    v8 = a2 % *(unsigned int *)(a1 + 56);
    if ( *(_QWORD *)(a1 + 8)
      && RtlpSparseBitmapCheckRangeArrayPage(a1, a2 / *(unsigned int *)(a1 + 56))
      && (v11 = *(_QWORD *)(a1 + 8), (v12 = *(volatile signed __int64 **)(v11 + 8LL * (unsigned int)v10)) != 0LL) )
    {
      RtlpSparseBitmapCtxLockShared(a1, *(volatile signed __int64 **)(v11 + 8LL * (unsigned int)v10), v9, v10);
      v13 = *(_DWORD *)(a1 + 68);
      if ( v13 )
        v14 = (char *)v12 + *(unsigned int *)(a1 + 64);
      else
        v14 = 0LL;
      memmove(a3, &v14[(unsigned int)(v8 * v13)], *(unsigned int *)(a1 + 68));
      RtlpSparseBitmapCtxUnlockShared(a1, v12);
    }
    else
    {
      v7 = -1073741275;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  RtlpSparseBitmapCtxUnlockShared(a1, (volatile signed __int64 *)a1);
  return v7;
}
