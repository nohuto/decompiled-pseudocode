/*
 * XREFs of DxgkUpdateCddDevmodeExtraData @ 0x1C00B0EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C009A7B4 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DxgkUpdateCddDevmodeExtraData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  char v9; // al
  int v10; // eax
  int v11; // ecx
  __int64 v13; // rax
  unsigned __int8 v14; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 72) & 0x40000) != 0 )
  {
    v6 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v6 )
    {
      switch ( (_DWORD)v6 )
      {
        case 0x20:
          v7 = 21;
          break;
        case 8:
          v7 = 41;
          break;
        case 0x10:
          v7 = 23;
          break;
        case 0x18:
          v7 = 20;
          break;
        default:
          v13 = WdLogNewEntry5_WdError(a1);
          *(_QWORD *)(v13 + 24) = v6;
          WdLogEvent5_WdError(v13);
          v7 = 0;
          break;
      }
      *(_DWORD *)(a2 + 228) = v7;
    }
  }
  v8 = *(_DWORD *)(a1 + 72);
  if ( (v8 & 0x400000) != 0 && (v8 & 0x200000) != 0 )
  {
    v9 = *(_BYTE *)(a1 + 180) & 2;
    v14 = 0;
    v10 = DmmMapVSyncFromRationalToInteger(
            (const struct _D3DDDI_RATIONAL *)(a2 + 220),
            (unsigned int)(v9 != 0) + 1,
            &v14,
            a4);
    v11 = *(_DWORD *)(a1 + 184);
    if ( v10 != v11 && (v10 + 1 != v11 || !v14) )
    {
      *(_DWORD *)(a2 + 220) = v11;
      *(_DWORD *)(a2 + 224) = 1;
    }
  }
  return 0LL;
}
