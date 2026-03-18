/*
 * XREFs of MiInitializeDynamicPfns @ 0x1401D1AA4
 * Callers:
 *     MiMapNewPfns @ 0x140622C14 (MiMapNewPfns.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     MiAbortCombineScan @ 0x1400A980C (MiAbortCombineScan.c)
 *     MiInitializeMdlPfn @ 0x1400BCE40 (MiInitializeMdlPfn.c)
 *     MiPageToChannel @ 0x1400C05B0 (MiPageToChannel.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall MiInitializeDynamicPfns(unsigned __int64 a1, __int64 a2, char a3)
{
  KIRQL v6; // al
  __int16 v7; // bx
  __int64 result; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  _OWORD v20[6]; // [rsp+28h] [rbp-51h] BYREF
  __int16 v21; // [rsp+E0h] [rbp+67h]
  char v22; // [rsp+E8h] [rbp+6Fh]
  unsigned __int8 v23; // [rsp+F0h] [rbp+77h]
  unsigned int v24; // [rsp+F8h] [rbp+7Fh]

  memset(v20, 0, sizeof(v20));
  v24 = 0;
  v22 = 0;
  v21 = 5;
  if ( (a3 & 4) != 0 )
  {
    LOBYTE(v21) = 6;
    v6 = ExAcquireSpinLockExclusive(&dword_1402FFE20);
    qword_140301390 += a2;
    ExReleaseSpinLockExclusive(&dword_1402FFE20, v6);
  }
  v7 = v21;
  *((_QWORD *)&v20[4] + 1) |= 0x8000000000000000uLL;
  *((_QWORD *)&v20[1] + 1) |= 0x8000000000000000uLL;
  result = 0x58000000000LL;
  v9 = 48 * a1 - 0x58000000000LL;
  WORD1(v20[2]) = v21;
  v10 = v9 + 48 * a2;
  if ( v9 < v10 )
  {
    while ( 1 )
    {
      if ( (a3 & 3) == 1 )
      {
        v24 = MiPageToNode(a1, 0);
        v22 = MiPageToChannel(a1);
      }
      v23 = MiLockPageInline(v9);
      v11 = *(_QWORD *)(v9 + 40);
      if ( (a3 & 1) != 0 )
      {
        *(_WORD *)(v9 + 34) = v7;
        *(_QWORD *)(v9 + 40) = v11 & 0x3DFFFCFFFFFFFFFLL | ((((unsigned __int64)v24 << 22) | v22 & 3) << 36) | 0x20000000000000LL;
        if ( (a3 & 4) != 0 )
        {
          MiInitializeMdlPfn(v9, 0);
          v12 = *(_QWORD *)(v9 + 40) & 0xFFFFFFFFFFFFFFFDuLL;
          *(_QWORD *)(v9 + 16) = 128LL;
          *(_QWORD *)(v9 + 40) = v12 | 0xFFFFFFFFDLL;
        }
        if ( (a3 & 2) != 0 )
          *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
        *(_BYTE *)(v9 + 34) = *(_BYTE *)(v9 + 34) & 0x3F | 0x40;
        if ( (a3 & 2) != 0 )
          *(_QWORD *)(v9 + 40) |= 0x10000000000000uLL;
      }
      else
      {
        v13 = v20[1];
        v14 = (unsigned __int16)(HIDWORD(v11) >> 8);
        v15 = *((_QWORD *)&v20[2] + 1);
        v16 = *((_QWORD *)&v20[2] + 1) ^ (v14 << 40);
        *(_OWORD *)v9 = v20[0];
        *((_QWORD *)&v20[2] + 1) = v16 & 0x3FF0000000000LL ^ v15;
        v17 = v20[2];
        *(_OWORD *)(v9 + 16) = v13;
        *(_OWORD *)(v9 + 32) = v17;
        MiAbortCombineScan(v9);
        if ( (a3 & 0x10) != 0 )
        {
          v18 = v20[4];
          *(_OWORD *)v9 = v20[3];
          v19 = v20[5];
          *(_OWORD *)(v9 + 16) = v18;
          *(_OWORD *)(v9 + 32) = v19;
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = v23;
      __writecr8(v23);
      v9 += 48LL;
      ++a1;
      if ( v9 >= v10 )
        break;
      v7 = v21;
    }
  }
  return result;
}
