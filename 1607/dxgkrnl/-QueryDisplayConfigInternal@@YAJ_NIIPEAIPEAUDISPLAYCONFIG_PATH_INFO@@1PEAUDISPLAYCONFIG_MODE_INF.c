/*
 * XREFs of ?QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C245C
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C00C11A0 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C13B0 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C00C22B4 (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG.c)
 *     ?GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C26A8 (-GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 */

__int64 __fastcall QueryDisplayConfigInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        struct DISPLAYCONFIG_PATH_INFO *a5,
        unsigned int *a6,
        struct DISPLAYCONFIG_MODE_INFO *a7,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a8)
{
  __int64 v8; // rbx
  enum DISPLAYCONFIG_TOPOLOGY_ID *v9; // rsi
  ULONG TimeIncrement; // eax
  const struct DISPLAYCONFIG_PATH_INFO *Src; // r12
  unsigned int *v13; // r15
  const struct DISPLAYCONFIG_MODE_INFO *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  _BOOL8 v19; // r8
  int v20; // eax
  __int64 v21; // r9
  unsigned int v22; // ecx
  signed int RequestedPathsModality; // edi
  enum DISPLAYCONFIG_TOPOLOGY_ID *v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  struct DXGGLOBAL *Global; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD v38[14]; // [rsp+50h] [rbp-31h] BYREF
  int v39; // [rsp+D0h] [rbp+4Fh] BYREF
  unsigned int v40; // [rsp+D8h] [rbp+57h]
  unsigned int v41; // [rsp+E0h] [rbp+5Fh]
  unsigned __int64 v42; // [rsp+E8h] [rbp+67h]

  v40 = a2;
  v39 = -1;
  v8 = a3;
  v9 = 0LL;
  memset(v38, 0, 0x30uLL);
  v42 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  Src = a5;
  v42 *= TimeIncrement;
  memset(a5, 0, 72LL * *a4);
  v13 = a6;
  v14 = a7;
  memset(a7, 0, (unsigned __int64)*a6 << 6);
  v18 = 0LL;
  if ( (int)v8 < 0 )
  {
    if ( (v8 & 7) != 2 )
    {
      v35 = WdLogNewEntry5_WdWarning(0LL, v15, v16, v17);
      *(_QWORD *)(v35 + 24) = v8;
      WdLogEvent5_WdWarning(v35);
      RequestedPathsModality = -1073741811;
      goto LABEL_12;
    }
    v18 = 0x80000LL;
  }
  if ( (v8 & 0x40000000) != 0 )
    LODWORD(v18) = v18 | 0x200000;
  if ( (v8 & 0x20000000) != 0 )
    LODWORD(v18) = v18 | 0x800000;
  HIDWORD(v38[0]) = *a4;
  v19 = (v8 & 0x18) != 0;
  LODWORD(v38[2]) = *v13;
  v20 = v8 & 7;
  v21 = ((unsigned __int8)v8 >> 3) & 1;
  v38[1] = Src;
  v38[3] = v14;
  v38[4] = Src;
  v38[5] = v14;
  LOBYTE(v38[0]) = 1;
  switch ( v20 )
  {
    case 1:
      v22 = v18 | 0x10;
LABEL_11:
      RequestedPathsModality = GetRequestedPathsModality(
                                 v22,
                                 0,
                                 v19,
                                 v21,
                                 (struct _QDC_CONTEXT *)v38,
                                 (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v39);
      break;
    case 2:
      if ( (v8 & 0x10000000) != 0 )
        LODWORD(v18) = v18 | 0x1000000;
      v22 = v18 | 0x40;
      goto LABEL_11;
    case 4:
      RequestedPathsModality = GetRequestedPathsModality(
                                 v18 | 0xF,
                                 1,
                                 v19,
                                 v21,
                                 (struct _QDC_CONTEXT *)v38,
                                 (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v39);
      v9 = (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v39;
      break;
    default:
      RequestedPathsModality = -1073741811;
      v36 = WdLogNewEntry5_WdWarning(v18, 1LL, v19, v21);
      *(_QWORD *)(v36 + 24) = v8;
      WdLogEvent5_WdWarning(v36);
      break;
  }
LABEL_12:
  v41 = LogDiagQDC(*a4, Src, *v13, v14, v8, RequestedPathsModality, v9, v42);
  if ( RequestedPathsModality >= 0 )
  {
    v24 = a8;
    v25 = (__int64)(v38[5] - v38[3]) >> 6;
    v26 = (unsigned __int64)((unsigned __int128)((__int64)(v38[4] - v38[1]) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 63;
    *a4 = (v38[4] - v38[1]) / 72LL;
    *v13 = v25;
    if ( v24 )
      *(_DWORD *)v24 = v39;
    Global = DXGGLOBAL::GetGlobal(v26);
    v28 = QDC_CACHE::AddToCache(
            *((struct DXGFASTMUTEX ***)Global + 111),
            v40,
            v41,
            (unsigned int)v8,
            *a4,
            Src,
            *v13,
            v14,
            v24);
    v33 = v28;
    if ( v28 )
    {
      v37 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
      *(_QWORD *)(v37 + 24) = v33;
      WdLogEvent5_WdWarning(v37);
    }
  }
  return (unsigned int)RequestedPathsModality;
}
