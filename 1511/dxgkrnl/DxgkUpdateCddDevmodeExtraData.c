/*
 * XREFs of DxgkUpdateCddDevmodeExtraData @ 0x1C00C5440
 * Callers:
 *     <none>
 * Callees:
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00A6F40 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DxgkUpdateCddDevmodeExtraData(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // eax
  int v6; // eax
  char v7; // al
  int v8; // eax
  int v9; // ecx
  __int64 v11; // rax
  unsigned __int8 v12; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 72) & 0x40000) != 0 )
  {
    v4 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v4 )
    {
      switch ( (_DWORD)v4 )
      {
        case 0x20:
          v5 = 21;
          break;
        case 8:
          v5 = 41;
          break;
        case 0x10:
          v5 = 23;
          break;
        case 0x18:
          v5 = 20;
          break;
        default:
          v11 = WdLogNewEntry5_WdError(a1);
          *(_QWORD *)(v11 + 24) = v4;
          WdLogEvent5_WdError(v11);
          v5 = 0;
          break;
      }
      *(_DWORD *)(a2 + 228) = v5;
    }
  }
  v6 = *(_DWORD *)(a1 + 72);
  if ( (v6 & 0x400000) != 0 && (v6 & 0x200000) != 0 )
  {
    v7 = *(_BYTE *)(a1 + 180) & 2;
    v12 = 0;
    v8 = DmmMapVSyncFromRationalToInteger(
           (const struct _D3DDDI_RATIONAL *)(a2 + 220),
           (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((v7 != 0) + 1),
           &v12);
    v9 = *(_DWORD *)(a1 + 184);
    if ( v8 != v9 && (v8 + 1 != v9 || !v12) )
    {
      *(_DWORD *)(a2 + 220) = v9;
      *(_DWORD *)(a2 + 224) = 1;
    }
  }
  return 0LL;
}
