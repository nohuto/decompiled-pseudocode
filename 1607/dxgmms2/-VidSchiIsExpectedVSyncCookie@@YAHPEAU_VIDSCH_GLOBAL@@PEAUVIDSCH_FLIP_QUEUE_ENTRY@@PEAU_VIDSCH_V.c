/*
 * XREFs of ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0004F34
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0005A50 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     ?VidSchiIsExpectedVSyncCookie2@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0021594 (-VidSchiIsExpectedVSyncCookie2@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_.c)
 */

__int64 __fastcall VidSchiIsExpectedVSyncCookie(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_QUEUE_ENTRY *a2,
        struct _VIDSCH_VSYNC_COOKIE *a3)
{
  int v3; // eax
  unsigned int v4; // esi
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  int *v11; // rdx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  unsigned int v15; // edi
  char v16; // cl
  unsigned int v17; // r12d
  int v18; // eax
  char v19; // r8
  int v20; // eax
  char v21; // r13
  _DWORD *v22; // r9
  int v23; // r15d
  __int64 v24; // r11
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  __int64 v28; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+28h] [rbp-40h]
  char v30; // [rsp+80h] [rbp+18h]
  _DWORD *v31; // [rsp+88h] [rbp+20h]

  v3 = *((_DWORD *)a3 + 23);
  v4 = 0;
  if ( v3 && v3 != *((_DWORD *)a2 + 265) )
    return 0LL;
  v7 = *((_DWORD *)a3 + 4);
  if ( v7 == 10 )
    return VidSchiIsExpectedVSyncCookie2(a1, a2, a3);
  v8 = v7 == 3;
  v9 = *((_DWORD *)a2 + 277);
  if ( v8 )
  {
    if ( (v9 & 0x10) == 0 )
    {
      LOBYTE(v4) = *((_QWORD *)a3 + 13) == *(_QWORD *)(*(_DWORD *)(*((_QWORD *)a2 + 144) + 4LL)
                                                     * ((8 * *(_DWORD *)(*((_QWORD *)a2 + 144) + 8LL) + 167) & 0xFFFFFFF8)
                                                     + *((_QWORD *)a2 + 144)
                                                     + 40LL);
      return v4;
    }
    return 0LL;
  }
  if ( (v9 & 0x10) != 0 )
  {
    v11 = (int *)*((_QWORD *)a2 + 144);
    v12 = *((_DWORD *)a3 + 24);
    if ( ((unsigned __int8)v12 & *((_BYTE *)v11 + 1)) != 0 )
      return 0LL;
    v13 = *v11;
    v14 = (unsigned __int8)*v11;
    if ( (unsigned __int8)(v12 & v13) != v14 )
      return 0LL;
    v15 = 1;
    if ( v14 )
    {
      v17 = (unsigned __int8)v12;
      v19 = 0;
      v8 = !_BitScanForward((unsigned int *)&v20, (unsigned __int8)v12);
      v16 = -1;
      v30 = 0;
      v21 = 0;
      if ( !v8 )
        v16 = v20;
      for ( ; v17; v30 = v19 )
      {
        v22 = (_DWORD *)*((_QWORD *)a2 + 144);
        v23 = 1 << v16;
        if ( ((unsigned __int8)*v22 & (unsigned __int8)(1 << v16)) != 0 )
        {
          v28 = v19;
          v24 = (unsigned int)v21;
          v25 = v22[2];
          v29 = 5LL * v19;
          if ( *((_QWORD *)a3 + 5 * v19 + 13) != *(_QWORD *)((char *)&v22[12 * v24 + 10]
                                                           + v22[1] * ((8 * v25 + 167) & 0xFFFFFFF8)) )
            return 0LL;
          v31 = (_DWORD *)((char *)v22 + (unsigned int)v24 * ((8 * v25 + 167) & 0xFFFFFFF8) + 144);
          if ( RtlCompareMemory(v31, (char *)a3 + 40 * v19 + 112, 8uLL) != 8 )
            return 0LL;
          if ( RtlCompareMemory(v31 + 2, (char *)a3 + 40 * v28 + 120, 8uLL) != 8 )
            return 0LL;
          v26 = *((_DWORD *)a3 + 2 * v29 + 34);
          v27 = v31[7];
          if ( (((unsigned __int8)v26 ^ *((_BYTE *)v31 + 28)) & 1) != 0
            || (((unsigned __int8)v26 ^ (unsigned __int8)v27) & 2) != 0
            || (((unsigned __int8)v26 ^ (unsigned __int8)v27) & 0x18) != 0 )
          {
            return 0LL;
          }
          v19 = v30;
          ++v21;
        }
        v16 = -1;
        v17 &= ~v23;
        v8 = !_BitScanForward((unsigned int *)&v18, v17);
        if ( !v8 )
          v16 = v18;
        ++v19;
      }
    }
  }
  else
  {
    v15 = 1;
    if ( (unsigned __int8)*((_DWORD *)a3 + 24) != 1
      || *(_QWORD *)(*(_DWORD *)(*((_QWORD *)a2 + 144) + 4LL)
                   * ((8 * *(_DWORD *)(*((_QWORD *)a2 + 144) + 8LL) + 167) & 0xFFFFFFF8)
                   + *((_QWORD *)a2 + 144)
                   + 40LL) != *((_QWORD *)a3 + 13) )
    {
      return 0;
    }
  }
  return v15;
}
