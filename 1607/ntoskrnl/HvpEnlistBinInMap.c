/*
 * XREFs of HvpEnlistBinInMap @ 0x1404F73D0
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x1404F7584 (HvpRemapAndEnlistHiveBins.c)
 *     HvpBuildMap @ 0x140610608 (HvpBuildMap.c)
 * Callees:
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     HvpPointMapEntriesToBuffer @ 0x1404F6EE8 (HvpPointMapEntriesToBuffer.c)
 *     HvpEnlistFreeCells @ 0x1404F7490 (HvpEnlistFreeCells.c)
 */

__int64 __fastcall HvpEnlistBinInMap(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rsi
  int v12; // eax
  int v14; // r9d
  int v15; // edx
  int v16; // [rsp+20h] [rbp-38h]

  v5 = *(_QWORD *)(BugCheckParameter2 + 56);
  v6 = 0;
  v7 = a3;
  if ( a4 )
    v7 = a4;
  v12 = *(_DWORD *)(v7 + 8);
  if ( (v12 & 0xFFF) != 0 )
  {
    v16 = 0;
    goto LABEL_10;
  }
  if ( a5 + v12 > a2 )
  {
    if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      v16 = 32;
      goto LABEL_10;
    }
    v6 = 1073741833;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    *(_DWORD *)(v7 + 8) = a2 - a5;
    SetFailureLocation(v5, 1, 10, 1073741833, 16);
  }
  HvpPointMapEntriesToBuffer(BugCheckParameter2, a3, a4, *(_DWORD *)(v7 + 8), a5, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 2) == 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 128) += 32;
    if ( !(unsigned __int8)HvpEnlistFreeCells(BugCheckParameter2) )
    {
      if ( v5 )
      {
        *(_DWORD *)(v5 + 296) = a2;
        *(_DWORD *)(v5 + 300) = a5;
        *(_QWORD *)(v5 + 304) = v7;
      }
      if ( CmpSelfHeal || (CmpBootType & 6) != 0 )
      {
        v14 = 1073741833;
        v16 = 48;
        v15 = 1;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        goto LABEL_20;
      }
      v16 = 64;
LABEL_10:
      v14 = -1073741492;
      v15 = 0;
LABEL_20:
      v6 = v14;
      SetFailureLocation(v5, v15, 10, v14, v16);
    }
  }
  return v6;
}
