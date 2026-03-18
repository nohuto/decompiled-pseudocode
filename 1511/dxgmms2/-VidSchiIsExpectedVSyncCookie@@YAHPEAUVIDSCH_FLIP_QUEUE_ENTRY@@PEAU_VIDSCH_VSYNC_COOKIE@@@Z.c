/*
 * XREFs of ?VidSchiIsExpectedVSyncCookie@@YAHPEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C00044F0
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C00056C0 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiIsExpectedVSyncCookie(struct VIDSCH_FLIP_QUEUE_ENTRY *a1, struct _VIDSCH_VSYNC_COOKIE *a2)
{
  int v3; // eax
  int *v6; // rdx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  unsigned int v10; // esi
  unsigned int v11; // r13d
  char v12; // r8
  bool v13; // zf
  int v14; // eax
  char v15; // cl
  char v16; // dl
  _DWORD *v17; // r15
  int v18; // r14d
  unsigned __int64 v19; // r12
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  char v23; // dl
  char v24; // [rsp+68h] [rbp+10h]
  char v25; // [rsp+70h] [rbp+18h]

  v3 = *((_DWORD *)a1 + 277);
  if ( *((_DWORD *)a2 + 4) == 3 )
  {
    if ( (v3 & 0x10) != 0 )
      return 0LL;
    return *(_QWORD *)(*((_QWORD *)a1 + 144) + 32LL) == *((_QWORD *)a2 + 13);
  }
  else
  {
    if ( (v3 & 0x10) != 0 )
    {
      v6 = (int *)*((_QWORD *)a1 + 144);
      v7 = *((_DWORD *)a2 + 24);
      if ( ((unsigned __int8)v7 & *((_BYTE *)v6 + 1)) != 0 )
        return 0LL;
      v8 = *v6;
      v9 = (unsigned __int8)*v6;
      if ( (unsigned __int8)(v7 & v8) != v9 )
        return 0LL;
      v10 = 1;
      if ( v9 )
      {
        v11 = (unsigned __int8)v7;
        v12 = 0;
        v13 = !_BitScanForward((unsigned int *)&v14, (unsigned __int8)v7);
        v24 = 0;
        v25 = 0;
        v15 = -1;
        v16 = 0;
        if ( !v13 )
          v15 = v14;
        while ( v11 )
        {
          v17 = (_DWORD *)*((_QWORD *)a1 + 144);
          v18 = 1 << v15;
          if ( ((unsigned __int8)*v17 & (unsigned __int8)(1 << v15)) != 0 )
          {
            v19 = (unsigned __int64)(unsigned int)v12 << 6;
            if ( *(_QWORD *)((char *)v17 + v19 + 32) != *((_QWORD *)a2 + 5 * v16 + 13) )
              return 0LL;
            if ( RtlCompareMemory((char *)v17 + v19 + 40, (char *)a2 + 40 * v16 + 112, 8uLL) != 8 )
              return 0LL;
            if ( RtlCompareMemory((char *)v17 + v19 + 48, (char *)a2 + 40 * v24 + 120, 8uLL) != 8 )
              return 0LL;
            v20 = *(_DWORD *)((char *)v17 + v19 + 68);
            v21 = *((_DWORD *)a2 + 10 * v24 + 34);
            if ( (((unsigned __int8)v21 ^ *((_BYTE *)v17 + v19 + 68)) & 1) != 0
              || (((unsigned __int8)v21 ^ (unsigned __int8)v20) & 2) != 0
              || (((unsigned __int8)v21 ^ (unsigned __int8)v20) & 0x18) != 0 )
            {
              return 0LL;
            }
            v12 = ++v25;
          }
          v11 &= ~v18;
          v13 = !_BitScanForward((unsigned int *)&v22, v11);
          v23 = -1;
          if ( !v13 )
            v23 = v22;
          v15 = v23;
          v16 = ++v24;
        }
      }
    }
    else
    {
      v10 = 1;
      if ( (unsigned __int8)*((_DWORD *)a2 + 24) != 1
        || *((_QWORD *)a2 + 13) != *(_QWORD *)(*((_QWORD *)a1 + 144) + 32LL) )
      {
        return 0;
      }
    }
    return v10;
  }
}
