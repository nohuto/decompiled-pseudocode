/*
 * XREFs of MiParseComImage @ 0x140508108
 * Callers:
 *     MiCreateNewSection @ 0x1405050A8 (MiCreateNewSection.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiLogRelocationRva @ 0x140508C50 (MiLogRelocationRva.c)
 *     MiMapImageInSystemSpace @ 0x140508D28 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x140508E5C (MiUnmapImageInSystemSpace.c)
 */

__int64 __fastcall MiParseComImage(__int64 a1, unsigned int *a2, _BYTE *a3)
{
  char v6; // bl
  ULONG_PTR v7; // r15
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v10; // r14d
  unsigned int v11; // eax
  __int128 *v12; // rcx
  int v13; // r9d
  __int64 v14; // r8
  __int64 v15; // rdx
  char v16; // cl
  _QWORD v19[10]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v20; // [rsp+90h] [rbp-88h]
  __int128 v21; // [rsp+A0h] [rbp-78h]
  __int128 v22; // [rsp+B0h] [rbp-68h]
  __int128 v23; // [rsp+C0h] [rbp-58h]
  __int64 v24; // [rsp+D0h] [rbp-48h]

  v6 = 0;
  v7 = 0LL;
  *a3 = 0;
  v8 = a2[20];
  if ( !(_DWORD)v8 )
    return 0LL;
  if ( (v8 & 3) != 0 )
    return 0LL;
  v9 = a2[21];
  if ( v9 < 0x48 || (unsigned int)v8 + v9 <= (unsigned int)v8 || v8 + 72 > (unsigned __int64)a2[4] )
    return 0LL;
  v10 = MiMapImageInSystemSpace(a1, 3LL, v19);
  if ( v10 >= 0 )
  {
    v7 = MiReferenceControlAreaFile(a1);
    v6 = 3;
    v10 = 0;
    v11 = a2[20];
    v12 = (__int128 *)(v19[0] + v11);
    v20 = *v12;
    v21 = v12[1];
    v22 = v12[2];
    v23 = v12[3];
    v24 = *((_QWORD *)v12 + 8);
    MiLogRelocationRva(v11, 72LL, v7, a1, 3, v7, a1);
    v13 = v21;
    if ( (v21 & 1) != 0 )
    {
      *a3 = 1;
      v14 = *(_QWORD *)a1;
      *(_BYTE *)(*(_QWORD *)a1 + 15LL) |= 1u;
      if ( WORD2(v20) > 2u || WORD2(v20) == 2 && WORD3(v20) >= 5u )
      {
        v15 = *(_QWORD *)(v14 + 56);
        *(_BYTE *)(v15 + 51) |= 2u;
        if ( (v13 & 0x20002) != 2 && (*(_BYTE *)(v14 + 14) & 0x40) != 0 )
        {
          v16 = *(_BYTE *)(v15 + 51) | 1;
          *(_BYTE *)(v15 + 51) = v16;
          if ( (v13 & 0x20000) != 0 )
            *(_BYTE *)(v15 + 51) = v16 | 0x20;
        }
      }
    }
  }
  if ( (v6 & 1) != 0 )
    MiUnmapImageInSystemSpace(v19);
  if ( (v6 & 2) != 0 )
    MiDereferenceControlAreaFile(a1, v7);
  return (unsigned int)v10;
}
