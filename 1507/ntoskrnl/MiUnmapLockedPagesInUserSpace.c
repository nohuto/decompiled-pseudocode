/*
 * XREFs of MiUnmapLockedPagesInUserSpace @ 0x140133700
 * Callers:
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiCheckSecuredVad @ 0x1404749C8 (MiCheckSecuredVad.c)
 *     MiUnmapVad @ 0x1404B7570 (MiUnmapVad.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiUnmapLockedPagesInUserSpace(unsigned __int64 a1, _DWORD *a2)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 *v5; // rdi
  unsigned __int64 v6; // rax
  char *v7; // rbx
  __int64 v8; // rdx
  int v9; // r15d
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r9
  __int64 v12; // rsi
  _QWORD *v13; // r11
  __int64 v14; // rsi
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v3 = (((a2[8] + a2[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a2[10] + 4095) >> 12;
  v5 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = MiObtainReferencedVad(a1, &v16);
  v7 = (char *)v6;
  if ( v6 )
  {
    v8 = *(unsigned int *)(v6 + 24);
    v9 = *(_DWORD *)(v6 + 48);
    v10 = (v8 | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) << 12;
    if ( (v9 & 7) == 1 && (a1 & 0xFFFFFFFFFFFFF000uLL) == v10 )
    {
      v11 = (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32))
          - (v8 | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32));
      if ( v3 == v11 + 1 )
      {
        v12 = (a1 >> 9) & 0x7FFFFFFFF8LL;
        v13 = (unsigned __int64 *)((char *)v5 + (_QWORD)a2 - v12 + 0x98000000030LL);
        v14 = v12 - (_QWORD)a2 - 0x7B7DBED030LL;
        while ( 1 )
        {
          PteShadow = *v5;
          if ( (unsigned __int64)v13 + v14 <= 0x7F8 )
            PteShadow = MiReadPteShadow(v5, *v5);
          v16 = PteShadow;
          if ( (unsigned __int64)&STACK[0x90482413050] <= 0x7F8 )
            PteShadow = MiReadPteShadow(&v16, PteShadow);
          if ( *v13 != ((PteShadow >> 12) & 0xFFFFFFFFFLL) )
            break;
          ++v5;
          ++v13;
          if ( !--v3 )
          {
            if ( (v9 & 0x4000) == 0 || (int)MiCheckSecuredVad(v7, v10, (v11 + 1) << 12, 85LL) >= 0 )
            {
              MiUnmapVad(v7, 0LL);
              return;
            }
            break;
          }
        }
      }
    }
    MiUnlockAndDereferenceVad(v7);
  }
}
