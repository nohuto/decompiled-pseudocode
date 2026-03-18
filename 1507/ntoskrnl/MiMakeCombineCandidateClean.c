/*
 * XREFs of MiMakeCombineCandidateClean @ 0x14022AB3C
 * Callers:
 *     MiCrcStillIntact @ 0x140229DF8 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 * Callees:
 *     MiLockPageAndSetDirty @ 0x14003C7B8 (MiLockPageAndSetDirty.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1401228AC (MiCaptureWriteWatchDirtyBit.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

char __fastcall MiMakeCombineCandidateClean(__int64 *a1, __int64 a2)
{
  __int64 PteShadow; // r9
  __int64 v3; // r11
  unsigned __int64 v4; // r10
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r9
  __int64 v9; // rsi
  char result; // al
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  PteShadow = *a1;
  v3 = 0x12090482600LL;
  v4 = 2040LL;
  if ( (unsigned __int64)(a1 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow((__int64)a1, *a1);
  v11 = PteShadow;
  v7 = PteShadow;
  if ( (unsigned __int64)&v11 + v3 * 8 <= v4 )
    v7 = MiReadPteShadow((__int64)&v11, PteShadow);
  v8 = PteShadow & 0xFFFFFFFFFFFFFFBDuLL;
  v11 = v8;
  *a1 = v8;
  v9 = 48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( (unsigned __int64)&a1[v3] <= v4 )
    MiWritePteShadow((__int64)a1, v8);
  result = MiLockPageAndSetDirty(v9, 1);
  if ( a2 )
  {
    result = *(_DWORD *)(a2 + 48) & 7;
    if ( result == 4 )
      return MiCaptureWriteWatchDirtyBit(
               (__int64)KeGetCurrentThread()->ApcState.Process,
               (__int64)((_QWORD)a1 << 25) >> 16,
               a2);
  }
  return result;
}
