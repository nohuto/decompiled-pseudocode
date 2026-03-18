/*
 * XREFs of MiParseComImage @ 0x1404B536C
 * Callers:
 *     MiCreateNewSection @ 0x1403C8128 (MiCreateNewSection.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiLogRelocationRva @ 0x1403C71B0 (MiLogRelocationRva.c)
 *     MiUnmapImageInSystemSpace @ 0x1403C72A0 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x1403C72D4 (MiMapImageInSystemSpace.c)
 */

__int64 __fastcall MiParseComImage(_DWORD *a1, unsigned int *a2, _BYTE *a3)
{
  __int64 v6; // r9
  __int64 result; // rax
  unsigned int v8; // eax
  ULONG_PTR v9; // rbx
  __int128 *v10; // rax
  int v11; // r9d
  __int64 v12; // r8
  __int64 v13; // rdx
  char v14; // cl
  _QWORD v15[10]; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v16; // [rsp+80h] [rbp-78h]
  __int128 v17; // [rsp+90h] [rbp-68h]
  __int128 v18; // [rsp+A0h] [rbp-58h]
  __int128 v19; // [rsp+B0h] [rbp-48h]
  __int64 v20; // [rsp+C0h] [rbp-38h]

  *a3 = 0;
  v6 = a2[20];
  if ( !(_DWORD)v6 )
    return 0LL;
  if ( (v6 & 3) != 0 )
    return 0LL;
  v8 = a2[21];
  if ( v8 < 0x48 || (unsigned int)v6 + v8 <= (unsigned int)v6 || v6 + 72 > (unsigned __int64)a2[4] )
    return 0LL;
  result = MiMapImageInSystemSpace((__int64)a1, 3u, (__int64)v15);
  if ( (int)result >= 0 )
  {
    v9 = MI_REFERENCE_CONTROL_AREA_FILE((__int64)a1);
    MiLogRelocationRva(a2[20], 0x48u, v9, a1);
    MI_DEREFERENCE_CONTROL_AREA_FILE((__int64)a1, v9);
    v10 = (__int128 *)(v15[0] + a2[20]);
    v16 = *v10;
    v17 = v10[1];
    v18 = v10[2];
    v19 = v10[3];
    v20 = *((_QWORD *)v10 + 8);
    MiUnmapImageInSystemSpace((__int64)v15);
    v11 = v17;
    if ( (v17 & 1) != 0 )
    {
      *a3 = 1;
      v12 = *(_QWORD *)a1;
      *(_BYTE *)(*(_QWORD *)a1 + 15LL) |= 1u;
      if ( WORD2(v16) > 2u || WORD2(v16) == 2 && WORD3(v16) >= 5u )
      {
        v13 = *(_QWORD *)(v12 + 56);
        *(_BYTE *)(v13 + 51) |= 2u;
        if ( (v11 & 0x20002) != 2 && (*(_BYTE *)(v12 + 14) & 0x40) != 0 )
        {
          v14 = *(_BYTE *)(v13 + 51) | 1;
          *(_BYTE *)(v13 + 51) = v14;
          if ( (v11 & 0x20000) != 0 )
            *(_BYTE *)(v13 + 51) = v14 | 0x20;
        }
      }
    }
    return 0LL;
  }
  return result;
}
