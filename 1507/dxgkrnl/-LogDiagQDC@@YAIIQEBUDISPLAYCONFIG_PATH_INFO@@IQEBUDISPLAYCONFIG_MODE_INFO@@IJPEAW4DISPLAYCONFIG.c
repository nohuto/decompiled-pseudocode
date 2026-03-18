/*
 * XREFs of ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C0060D88
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C0060B74 (-QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INF.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
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
  __int64 v14; // rcx
  _DWORD *v15; // rdi
  unsigned int v16; // ebx
  unsigned int v18; // ecx
  _DWORD *v19; // rdx
  __int64 v20; // rax

  v9 = a3;
  if ( (a5 & 7) == 1 )
  {
    v18 = 0;
    if ( a1 )
    {
      v19 = (_DWORD *)((char *)a2 + 68);
      do
      {
        if ( (*v19 & 1) == 0 )
          break;
        ++v18;
        v19 += 18;
      }
      while ( v18 < a1 );
    }
    a1 = v18;
  }
  v12 = (a3 << 6) + 8 * (a1 + 8 * a1 + 11);
  v13 = operator new[](v12, 0x43434451u, PagedPool);
  v15 = v13;
  if ( v13 )
  {
    memset(v13, 0, v12);
    v15[1] = v12;
    v15[10] = 0;
    *v15 = (a5 & 0x18) != 0 ? 22 : 7;
    *((_QWORD *)v15 + 4) = 0LL;
    *((_QWORD *)v15 + 1) = 0LL;
    *((_QWORD *)v15 + 2) = 0LL;
    *((_QWORD *)v15 + 3) = 0LL;
    v15[15] = a6;
    v15[13] = a1;
    v15[14] = v9;
    v15[16] = a5;
    if ( a7 )
      v15[17] = *(_DWORD *)a7;
    v15[12] = (a2 == 0LL) ^ ((a2 == 0LL) ^ (unsigned __int8)(2 * (a4 == 0LL))) & 2 ^ ((a2 == 0LL) ^ ((a2 == 0LL) ^ (unsigned __int8)(2 * (a4 == 0LL))) & 2 ^ (unsigned __int8)(4 * (a7 != 0LL))) & 4;
    *((_QWORD *)v15 + 10) = a8;
    if ( a2 )
      memmove(v15 + 22, a2, 72LL * a1);
    if ( a4 )
      memmove(&v15[16 * a1 + 22 + 2 * a1], a4, v9 << 6);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v15);
    v16 = v15[10];
    operator delete(v15);
    return v16;
  }
  else
  {
    v20 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v20 + 24) = v12;
    WdLogEvent5_WdLowResource(v20);
    DxgkLogCodePointPacket(0xAu, a5, a6, 0);
    return 0xFFFFFFFFLL;
  }
}
