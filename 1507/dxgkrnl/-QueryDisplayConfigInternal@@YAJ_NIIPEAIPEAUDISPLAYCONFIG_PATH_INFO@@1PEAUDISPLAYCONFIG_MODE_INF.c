/*
 * XREFs of ?QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C0060B74
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C0060590 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00607A4 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C0060D88 (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG.c)
 *     ?GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C0060F28 (-GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
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
  __int64 v8; // rdi
  ULONG TimeIncrement; // eax
  const struct DISPLAYCONFIG_PATH_INFO *Src; // r12
  struct DISPLAYCONFIG_MODE_INFO *v12; // rsi
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
  int v23; // edx
  int RequestedPathsModality; // ebx
  enum DISPLAYCONFIG_TOPOLOGY_ID *v25; // rsi
  __int64 v26; // rax
  struct DXGGLOBAL *Global; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  struct DISPLAYCONFIG_MODE_INFO *v38; // [rsp+38h] [rbp-49h]
  _QWORD v39[14]; // [rsp+50h] [rbp-31h] BYREF
  int v40; // [rsp+D0h] [rbp+4Fh] BYREF
  unsigned int v41; // [rsp+D8h] [rbp+57h]
  unsigned int v42; // [rsp+E0h] [rbp+5Fh]
  __int64 v43; // [rsp+E8h] [rbp+67h]

  v41 = a2;
  v8 = a3;
  v40 = 1;
  memset(v39, 0, 0x30uLL);
  v43 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  Src = a5;
  v12 = (struct DISPLAYCONFIG_MODE_INFO *)(v43 * TimeIncrement);
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
      goto LABEL_9;
    }
    v18 = 0x80000LL;
  }
  if ( (v8 & 0x40000000) != 0 )
    LODWORD(v18) = v18 | 0x200000;
  HIDWORD(v39[0]) = *a4;
  v19 = (v8 & 0x18) != 0;
  LODWORD(v39[2]) = *v13;
  v20 = v8 & 7;
  v21 = ((unsigned __int8)v8 >> 3) & 1;
  v39[1] = Src;
  v39[3] = v14;
  v39[4] = Src;
  v39[5] = v14;
  LOBYTE(v39[0]) = 1;
  switch ( v20 )
  {
    case 1:
      v22 = v18 | 0x10;
      goto LABEL_7;
    case 2:
      v22 = v18 | 0x40;
LABEL_7:
      v23 = 0;
LABEL_8:
      RequestedPathsModality = GetRequestedPathsModality(
                                 v22,
                                 v23,
                                 v19,
                                 v21,
                                 (struct _QDC_CONTEXT *)v39,
                                 (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v40);
      goto LABEL_9;
    case 4:
      v22 = v18 | 0xF;
      v23 = 1;
      goto LABEL_8;
  }
  RequestedPathsModality = -1073741811;
  v36 = WdLogNewEntry5_WdWarning(v18, v15, v19, v21);
  *(_QWORD *)(v36 + 24) = v8;
  WdLogEvent5_WdWarning(v36);
LABEL_9:
  v38 = v12;
  v25 = a8;
  v42 = LogDiagQDC(*a4, Src, *v13, v14, v8, RequestedPathsModality, a8, (unsigned __int64)v38);
  if ( RequestedPathsModality >= 0 )
  {
    v26 = (__int64)(v39[5] - v39[3]) >> 6;
    *a4 = (v39[4] - v39[1]) / 72LL;
    *v13 = v26;
    if ( v25 )
      *(_DWORD *)v25 = v40;
    Global = DXGGLOBAL::GetGlobal();
    v28 = QDC_CACHE::AddToCache(
            *((struct DXGFASTMUTEX ***)Global + 113),
            v41,
            v42,
            (unsigned int)v8,
            *a4,
            Src,
            *v13,
            v14,
            v25);
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
