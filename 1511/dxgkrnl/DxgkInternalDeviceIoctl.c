/*
 * XREFs of DxgkInternalDeviceIoctl @ 0x1C00C0F10
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C009735C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C00C1110 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z @ 0x1C00C14EC (-DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z.c)
 *     DxgkCaptureQueryInterface @ 0x1C0135F6C (DxgkCaptureQueryInterface.c)
 *     DmmQueryDmmTestInterface @ 0x1C017E600 (DmmQueryDmmTestInterface.c)
 */

__int64 __fastcall DxgkInternalDeviceIoctl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  unsigned int v6; // edi
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rbx
  _DWORD *v11; // r15
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 (__fastcall *v20)(); // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned int v30; // [rsp+58h] [rbp+38h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = 0;
  v30 = 0;
  v7 = *(unsigned int *)(v5 + 24);
  v8 = *(unsigned int *)(v5 + 8);
  v9 = *(unsigned int *)(v5 + 16);
  if ( *(_BYTE *)(a2 + 64) )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v22 + 24) = 527LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v10 = *(_QWORD *)(a2 + 112);
  v11 = *(_DWORD **)(v5 + 32);
  if ( (unsigned int)v7 <= 0x23004B )
  {
    switch ( (_DWORD)v7 )
    {
      case 0x23004B:
        if ( (unsigned int)v8 >= 8 && v10 )
        {
          v20 = DpiUnInitialize;
          goto LABEL_25;
        }
        break;
      case 0x22C00B:
        if ( (unsigned int)v9 >= 0x38 && (unsigned int)v8 >= 0x38 )
        {
          v12 = DmmQueryDmmTestInterface(*(_QWORD *)(a2 + 112), &v30);
          goto LABEL_11;
        }
        goto LABEL_54;
      case 0x230007:
        Global = DXGGLOBAL::GetGlobal(a1);
        v30 = -1073741275;
        LODWORD(v10) = DXGGLOBAL::IterateAdaptersWithCallback(
                         (__int64)Global,
                         (__int64 (__fastcall *)(_QWORD *, __int64))RfxVgpuResetCallback,
                         (__int64)&v30,
                         0);
        if ( (int)v10 >= 0 )
        {
          LODWORD(v10) = v30;
          if ( (v30 & 0x80000000) == 0 )
            goto LABEL_14;
        }
        v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
        v21[3] = (int)v10;
LABEL_62:
        WdLogEvent5_WdWarning(v21);
        goto LABEL_14;
      case 0x23003F:
        if ( (unsigned int)v8 >= 8 && v10 )
        {
          v20 = (__int64 (__fastcall *)())DpiInitialize;
          goto LABEL_25;
        }
        break;
      case 0x230043:
        if ( (unsigned int)v8 >= 8 && v10 )
        {
          v20 = (__int64 (__fastcall *)())DpiKmdDodInitialize;
          goto LABEL_25;
        }
        break;
      case 0x230047:
        if ( (unsigned int)v8 >= 8 && v10 )
        {
          v20 = (__int64 (__fastcall *)())DpiInitializeWin8;
LABEL_25:
          *(_QWORD *)v10 = v20;
          LODWORD(v10) = 0;
          v6 = 8;
          goto LABEL_14;
        }
        break;
      default:
LABEL_58:
        v21 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
        LODWORD(v10) = -1073741808;
        v21[3] = v7;
        v21[4] = -1073741808LL;
        goto LABEL_62;
    }
LABEL_42:
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    v21[4] = v10;
    v21[3] = v8;
LABEL_60:
    v10 = -1073741789LL;
    goto LABEL_61;
  }
  switch ( (_DWORD)v7 )
  {
    case 0x232063:
      if ( (unsigned int)v8 >= 8 && v10 )
      {
        v20 = (__int64 (__fastcall *)())DpiReportSoftwareDevice;
        goto LABEL_25;
      }
      goto LABEL_42;
    case 0x23E057:
      if ( (unsigned int)v9 < 0x6F0 || (unsigned int)v8 < 0x6F0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1);
        LODWORD(v10) = -1073741306;
        v29[3] = v9;
        v29[4] = v8;
        v29[5] = 1776LL;
        v29[6] = -1073741306LL;
        WdLogEvent5_WdAssertion(v29);
        goto LABEL_14;
      }
      v12 = DxgkWin32kQueryInterface(*(struct _DXGKWIN32K_INTERFACE **)(a2 + 112), &v30);
      goto LABEL_11;
    case 0x23E05B:
      if ( (unsigned int)v9 >= 0x1F8 && (unsigned int)v8 >= 0x1F8 )
      {
        v12 = DxgkCddQueryInterface(*(struct _DXGKCDD_INTERFACE **)(a2 + 112), &v30);
LABEL_11:
        v10 = v12;
        if ( v12 < 0 )
        {
          v28 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
          *(_QWORD *)(v28 + 24) = v10;
          WdLogEvent5_WdWarning(v28);
        }
        v6 = v30;
        goto LABEL_14;
      }
      goto LABEL_54;
    case 0x23E05F:
      if ( (unsigned int)v9 >= 0x30 && (unsigned int)v8 >= 0x30 )
      {
        v12 = DxgkCaptureQueryInterface(*(_QWORD *)(a2 + 112), &v30);
        goto LABEL_11;
      }
LABEL_54:
      v21 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
      v10 = -1073741306LL;
      v21[3] = v9;
      v21[4] = v8;
LABEL_61:
      v21[5] = v10;
      goto LABEL_62;
  }
  if ( (_DWORD)v7 != 2351207 )
    goto LABEL_58;
  if ( (unsigned int)v9 < 4 || !v11 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    v21[3] = v9;
    v21[4] = v11;
    goto LABEL_60;
  }
  if ( (*v11 & 1) != 0 )
    g_Win32kSupportsPathIndependentRotation = 1;
  LODWORD(v10) = 0;
LABEL_14:
  *(_QWORD *)(a2 + 56) = v6;
  *(_DWORD *)(a2 + 48) = v10;
  IofCompleteRequest((PIRP)a2, 0);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 2);
  return (unsigned int)v10;
}
