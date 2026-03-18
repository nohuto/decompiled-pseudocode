/*
 * XREFs of DxgkGetDisplayConfigBufferSizes @ 0x1C00C1250
 * Callers:
 *     ?GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C26A8 (-GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00A3D30 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCahcedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z @ 0x1C00C16DC (-GetCahcedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z.c)
 *     DxgkGetPathsModality @ 0x1C00C2810 (DxgkGetPathsModality.c)
 */

__int64 __fastcall DxgkGetDisplayConfigBufferSizes(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v3; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rcx
  struct DXGGLOBAL *v13; // rax
  __int64 (__fastcall *v14)(struct DXGADAPTER *, void *); // rdx
  int v15; // edi
  int v16; // eax
  int PathsModality; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int16 v22; // [rsp+20h] [rbp-48h] BYREF
  int v23; // [rsp+28h] [rbp-40h] BYREF
  __int64 v24; // [rsp+2Ch] [rbp-3Ch]

  v3 = (unsigned int)a1;
  v24 = 0LL;
  v23 = a1;
  Global = DXGGLOBAL::GetGlobal(a1);
  result = QDC_CACHE::GetCahcedBufferSizes(*((QDC_CACHE **)Global + 111), v3, a2, a3);
  if ( (int)result < 0 )
  {
    v11 = 1;
    if ( (v3 & 0x40000000) != 0 )
    {
      v15 = 0;
      v16 = 2;
      goto LABEL_9;
    }
    v12 = v3 & 7;
    if ( (_DWORD)v12 == 1 )
    {
      v13 = DXGGLOBAL::GetGlobal(v12);
      v14 = CalcAllPathDisplayConfigBufferSizeCallback;
      goto LABEL_6;
    }
    if ( (_DWORD)v12 == 2 )
    {
      v13 = DXGGLOBAL::GetGlobal(v12);
      v14 = CalcActivePathDisplayConfigBufferSizeCallback;
LABEL_6:
      v15 = DXGGLOBAL::IterateAdaptersWithCallback(
              (__int64)v13,
              (__int64 (__fastcall *)(_QWORD *, __int64))v14,
              (__int64)&v23,
              1);
LABEL_7:
      if ( v15 < 0 )
        return (unsigned int)v15;
      v16 = HIDWORD(v24);
      v11 = v24;
LABEL_9:
      *a2 = v11;
      *a3 = v16;
      return (unsigned int)v15;
    }
    if ( (_DWORD)v12 != 4 )
    {
      v15 = -1073741811;
      v21 = WdLogNewEntry5_WdWarning(v12, v8, v9, v10);
      *(_QWORD *)(v21 + 24) = v3;
      WdLogEvent5_WdWarning(v21);
      goto LABEL_7;
    }
    PathsModality = DxgkGetPathsModality(15LL, 0LL, &v22);
    v19 = PathsModality;
    if ( PathsModality == -1073741789 )
    {
      v11 = v22;
      v15 = 0;
      v16 = 2 * v22;
      if ( (v3 & 0x18) != 0 )
        v16 = 3 * v22;
      goto LABEL_9;
    }
    v20 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v20 + 24) = v19;
    WdLogEvent5_WdError(v20);
    if ( (int)v19 >= 0 )
      LODWORD(v19) = -1073741823;
    return (unsigned int)v19;
  }
  return result;
}
