/*
 * XREFs of DxgkCddVerifyCddDevMode @ 0x1C00B15C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000822C (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C009A7B4 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DxgkCddVerifyCddDevMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rax
  unsigned __int8 v15; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && *(_WORD *)(a1 + 70) == 24 )
  {
    v5 = *(unsigned int *)(a1 + 72);
    if ( (v5 & 0x40000) != 0 && (unsigned int)GetBitsPerPixel(*(_DWORD *)(a1 + 228)) == *(_DWORD *)(a1 + 168) )
    {
      v6 = 0LL;
      if ( (v5 & 0x200000) != 0 )
        v6 = (unsigned int)((*(_BYTE *)(a1 + 180) & 2) != 0) + 1;
      if ( *(_DWORD *)(a1 + 224) )
      {
        if ( (v5 & 0x400000) == 0 )
          return 0LL;
        v15 = 0;
        v7 = DmmMapVSyncFromRationalToInteger((const struct _D3DDDI_RATIONAL *)(a1 + 220), v6, &v15, a4);
        v11 = *(unsigned int *)(a1 + 184);
        if ( v7 == (_DWORD)v11 || v7 + 1 == (_DWORD)v11 && v15 )
          return 0LL;
        v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v8, v9, v10);
        v13[3] = *(unsigned int *)(a1 + 184);
        v13[4] = *(unsigned int *)(a1 + 220);
        v13[5] = *(unsigned int *)(a1 + 224);
        v13[6] = v15;
      }
      else
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, v6, v5, a4);
        v13[3] = 3110LL;
      }
    }
    else
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, v5, a4);
      v13[3] = *(unsigned int *)(a1 + 168);
      v13[4] = *(int *)(a1 + 228);
    }
    WdLogEvent5_WdWarning(v13);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v14 + 24) = 3066LL;
    WdLogEvent5_WdError(v14);
  }
  return 3221225473LL;
}
