/*
 * XREFs of ?QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00AB098
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C00AAAC0 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00AACD8 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C00AB2A0 (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG.c)
 *     ?GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00AB440 (-GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 */

__int64 __fastcall QueryDisplayConfigInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        struct DISPLAYCONFIG_PATH_INFO *Src,
        unsigned int *a6,
        struct DISPLAYCONFIG_MODE_INFO *a7,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a8)
{
  __int64 v8; // rdi
  ULONG TimeIncrement; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  const struct DISPLAYCONFIG_MODE_INFO *v14; // r13
  __int64 v15; // rcx
  unsigned int *v16; // r12
  struct DISPLAYCONFIG_MODE_INFO *v17; // rsi
  _BOOL8 v18; // r8
  int v19; // eax
  __int64 v20; // r9
  unsigned int v21; // ecx
  int v22; // edx
  int RequestedPathsModality; // ebx
  enum DISPLAYCONFIG_TOPOLOGY_ID *v24; // rsi
  unsigned int v25; // r14d
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  struct DXGGLOBAL *Global; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  struct DISPLAYCONFIG_MODE_INFO *v39; // [rsp+40h] [rbp-51h]
  __int64 v40; // [rsp+58h] [rbp-39h]
  _QWORD v41[13]; // [rsp+60h] [rbp-31h] BYREF
  int v42; // [rsp+D8h] [rbp+47h] BYREF
  unsigned int v43; // [rsp+E0h] [rbp+4Fh]

  v43 = a2;
  v8 = a3;
  v42 = 1;
  memset(v41, 0, 0x30uLL);
  v40 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v14 = a7;
  v15 = 0LL;
  v16 = a6;
  v17 = (struct DISPLAYCONFIG_MODE_INFO *)(v40 * TimeIncrement);
  if ( (int)v8 < 0 )
  {
    if ( (v8 & 7) != 2 )
    {
      v36 = WdLogNewEntry5_WdWarning(0LL, v11, v12, v13);
      *(_QWORD *)(v36 + 24) = v8;
      WdLogEvent5_WdWarning(v36);
      RequestedPathsModality = -1073741811;
      goto LABEL_11;
    }
    v15 = 0x80000LL;
  }
  if ( (v8 & 0x40000000) != 0 )
    LODWORD(v15) = v15 | 0x200000;
  if ( (v8 & 0x20000000) != 0 )
    LODWORD(v15) = v15 | 0x800000;
  v18 = (v8 & 0x18) != 0;
  HIDWORD(v41[0]) = *a4;
  LODWORD(v41[2]) = *a6;
  v19 = v8 & 7;
  v20 = ((unsigned __int8)v8 >> 3) & 1;
  v41[1] = Src;
  v41[3] = a7;
  v41[4] = Src;
  v41[5] = a7;
  LOBYTE(v41[0]) = 1;
  switch ( v19 )
  {
    case 1:
      v21 = v15 | 0x10;
      goto LABEL_9;
    case 2:
      v21 = v15 | 0x40;
LABEL_9:
      v22 = 0;
LABEL_10:
      RequestedPathsModality = GetRequestedPathsModality(
                                 v21,
                                 v22,
                                 v18,
                                 v20,
                                 (struct _QDC_CONTEXT *)v41,
                                 (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v42);
      goto LABEL_11;
    case 4:
      v21 = v15 | 0xF;
      v22 = 1;
      goto LABEL_10;
  }
  RequestedPathsModality = -1073741811;
  v37 = WdLogNewEntry5_WdWarning(v15, Src, v18, v20);
  *(_QWORD *)(v37 + 24) = v8;
  WdLogEvent5_WdWarning(v37);
LABEL_11:
  v39 = v17;
  v24 = a8;
  v25 = LogDiagQDC(*a4, Src, *v16, v14, v8, RequestedPathsModality, a8, (unsigned __int64)v39);
  if ( RequestedPathsModality >= 0 )
  {
    v26 = (__int64)(v41[5] - v41[3]) >> 6;
    v27 = (unsigned __int64)((unsigned __int128)((__int64)(v41[4] - v41[1]) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 63;
    *a4 = (v41[4] - v41[1]) / 72LL;
    *v16 = v26;
    if ( v24 )
      *(_DWORD *)v24 = v42;
    Global = DXGGLOBAL::GetGlobal(v27);
    v29 = QDC_CACHE::AddToCache(
            *((struct DXGFASTMUTEX ***)Global + 134),
            v43,
            v25,
            (unsigned int)v8,
            *a4,
            Src,
            *v16,
            v14,
            v24);
    v34 = v29;
    if ( v29 )
    {
      v38 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
      *(_QWORD *)(v38 + 24) = v34;
      WdLogEvent5_WdWarning(v38);
    }
  }
  return (unsigned int)RequestedPathsModality;
}
