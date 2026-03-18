/*
 * XREFs of MiParseComImage @ 0x14046E4A4
 * Callers:
 *     MiCreateNewSection @ 0x1404702B8 (MiCreateNewSection.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiLogRelocationRva @ 0x1404431EC (MiLogRelocationRva.c)
 *     MiMapImageInSystemSpace @ 0x14051BD60 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14051BE94 (MiUnmapImageInSystemSpace.c)
 */

__int64 __fastcall MiParseComImage(_DWORD *a1, unsigned int *a2, _BYTE *a3)
{
  char v6; // bl
  ULONG_PTR v7; // r15
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r14d
  unsigned int v14; // eax
  __int128 *v15; // rcx
  char v16; // cl
  _QWORD v18[10]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v19; // [rsp+90h] [rbp-88h]
  __int128 v20; // [rsp+A0h] [rbp-78h]
  __int128 v21; // [rsp+B0h] [rbp-68h]
  __int128 v22; // [rsp+C0h] [rbp-58h]
  __int64 v23; // [rsp+D0h] [rbp-48h]

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
  v13 = MiMapImageInSystemSpace(a1, 3LL, v18);
  if ( v13 >= 0 )
  {
    v7 = MI_REFERENCE_CONTROL_AREA_FILE((__int64)a1);
    v6 = 3;
    v13 = 0;
    v14 = a2[20];
    v15 = (__int128 *)(v18[0] + v14);
    v19 = *v15;
    v20 = v15[1];
    v21 = v15[2];
    v22 = v15[3];
    v23 = *((_QWORD *)v15 + 8);
    MiLogRelocationRva(v14, 0x48u, v7, a1);
    v12 = (unsigned int)v20;
    if ( (v20 & 1) != 0 )
    {
      *a3 = 1;
      v11 = *(_QWORD *)a1;
      *(_BYTE *)(*(_QWORD *)a1 + 15LL) |= 1u;
      if ( WORD2(v19) > 2u || WORD2(v19) == 2 && WORD3(v19) >= 5u )
      {
        v10 = *(_QWORD *)(v11 + 56);
        *(_BYTE *)(v10 + 51) |= 2u;
        if ( (v12 & 0x20002) != 2 && (*(_BYTE *)(v11 + 14) & 0x40) != 0 )
        {
          v16 = *(_BYTE *)(v10 + 51) | 1;
          *(_BYTE *)(v10 + 51) = v16;
          if ( (v12 & 0x20000) != 0 )
            *(_BYTE *)(v10 + 51) = v16 | 0x20;
        }
      }
    }
  }
  if ( (v6 & 1) != 0 )
    MiUnmapImageInSystemSpace(v18, v10, v11, v12);
  if ( (v6 & 2) != 0 )
    MI_DEREFERENCE_CONTROL_AREA_FILE((__int64)a1, v7);
  return (unsigned int)v13;
}
