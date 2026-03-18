/*
 * XREFs of ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C00AB2A0
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00AB098 (-QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INF.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000A1C4 (DxgkLogCodePointPacket.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall LogDiagQDC(
        unsigned int a1,
        const struct DISPLAYCONFIG_PATH_INFO *const a2,
        unsigned int a3,
        const struct DISPLAYCONFIG_MODE_INFO *const a4,
        unsigned int a5,
        unsigned int a6,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a7,
        unsigned __int64 a8)
{
  __int64 v9; // r12
  unsigned int v12; // r13d
  _DWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rdi
  unsigned int v19; // ebx
  unsigned int v21; // ecx
  _DWORD *v22; // rdx
  __int64 v23; // rax

  v9 = a3;
  if ( (a5 & 7) == 1 )
  {
    v21 = 0;
    if ( a1 )
    {
      v22 = (_DWORD *)((char *)a2 + 68);
      do
      {
        if ( (*v22 & 1) == 0 )
          break;
        ++v21;
        v22 += 18;
      }
      while ( v21 < a1 );
    }
    a1 = v21;
  }
  v12 = (a3 << 6) + 8 * (a1 + 8 * a1 + 11);
  v13 = operator new[](v12, 0x43434451u, PagedPool);
  v18 = v13;
  if ( v13 )
  {
    memset(v13, 0, v12);
    v18[1] = v12;
    v18[10] = 0;
    *v18 = (a5 & 0x18) != 0 ? 22 : 7;
    *((_QWORD *)v18 + 4) = 0LL;
    *((_QWORD *)v18 + 1) = 0LL;
    *((_QWORD *)v18 + 2) = 0LL;
    *((_QWORD *)v18 + 3) = 0LL;
    v18[15] = a6;
    v18[13] = a1;
    v18[14] = v9;
    v18[16] = a5;
    if ( a7 )
      v18[17] = *(_DWORD *)a7;
    v18[12] = (a2 == 0LL) ^ ((a2 == 0LL) ^ (unsigned __int8)(2 * (a4 == 0LL))) & 2 ^ ((a2 == 0LL) ^ ((a2 == 0LL) ^ (unsigned __int8)(2 * (a4 == 0LL))) & 2 ^ (unsigned __int8)(4 * (a7 != 0LL))) & 4;
    *((_QWORD *)v18 + 10) = a8;
    if ( a2 )
      memmove(v18 + 22, a2, 72LL * a1);
    if ( a4 )
      memmove(&v18[16 * a1 + 22 + 2 * a1], a4, v9 << 6);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v18);
    v19 = v18[10];
    operator delete(v18);
    return v19;
  }
  else
  {
    v23 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
    *(_QWORD *)(v23 + 24) = v12;
    WdLogEvent5_WdLowResource(v23);
    DxgkLogCodePointPacket(0xAu, a5, a6, 0);
    return 0xFFFFFFFFLL;
  }
}
