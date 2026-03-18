/*
 * XREFs of ?RotateCursorShapeWorker@@YAXPEAUCURSOR_INFO@@PEBU1@@Z @ 0x1C014A5AC
 * Callers:
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C014A340 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 * Callees:
 *     ?GetRotatedPoint@@YAXIIPEAI0W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@II@Z @ 0x1C014A2A0 (-GetRotatedPoint@@YAXIIPEAI0W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@II@Z.c)
 */

void __fastcall RotateCursorShapeWorker(struct CURSOR_INFO *a1, const struct CURSOR_INFO *a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // esi
  unsigned int v4; // r13d
  unsigned int v7; // ebp
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  int v10; // ebx
  _BYTE *v11; // r8
  __int64 v12; // rbx
  unsigned int v13; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+90h] [rbp+18h] BYREF
  unsigned int i; // [rsp+98h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 2);
  v3 = 0;
  v4 = *(_DWORD *)a1;
  for ( i = v2; v3 < v2; ++v3 )
  {
    v7 = 0;
    if ( v4 )
    {
      v8 = 0LL;
      v9 = 0LL;
      do
      {
        if ( *((_DWORD *)a1 + 9) )
        {
          v10 = (*(unsigned __int8 *)((v8 >> 3) + v3 * *((_DWORD *)a2 + 4) + *((_QWORD *)a2 + 3)) >> (7 - (v7 & 7))) & 1;
          GetRotatedPoint(
            v7,
            v3,
            &v14,
            &v13,
            *((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)a1 + 8),
            *(_DWORD *)a2,
            *((_DWORD *)a2 + 2));
          v11 = (_BYTE *)(*((_QWORD *)a1 + 3) + ((unsigned __int64)v14 >> 3) + v13 * *((_DWORD *)a1 + 5));
          *v11 = ((_BYTE)v10 << (7 - (v14 & 7))) | *v11 & ~(1 << (7 - (v14 & 7)));
        }
        else
        {
          v12 = *((_QWORD *)a2 + 3) + v3 * *((_DWORD *)a2 + 4);
          GetRotatedPoint(
            v7,
            v3,
            &v14,
            &v13,
            *((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)a1 + 8),
            *(_DWORD *)a2,
            *((_DWORD *)a2 + 2));
          *(_DWORD *)(4 * v14 + (unsigned __int64)(v13 * *((_DWORD *)a1 + 5)) + *((_QWORD *)a1 + 3)) = *(_DWORD *)(v12 + v9);
        }
        ++v7;
        ++v8;
        v9 += 4LL;
      }
      while ( v7 < v4 );
      v2 = i;
    }
  }
}
