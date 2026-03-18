/*
 * XREFs of DxgkInternalDeviceIoctl @ 0x1C00D6AA0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00A3D30 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C00D6CA4 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z @ 0x1C00D7080 (-DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z.c)
 *     DxgkCaptureQueryInterface @ 0x1C01553D4 (DxgkCaptureQueryInterface.c)
 *     DmmQueryDmmTestInterface @ 0x1C01A79B8 (DmmQueryDmmTestInterface.c)
 */

__int64 __fastcall DxgkInternalDeviceIoctl(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  unsigned int v6; // edi
  __int64 LowPart; // r15
  __int64 Length; // rsi
  __int64 Options; // r14
  __int64 UserBuffer; // rbx
  _DWORD *p_NamedPipeType; // r12
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
  __int64 v23; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  unsigned int v32; // [rsp+70h] [rbp+50h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = 0;
  v32 = 0;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( a2->RequestorMode )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v22 + 24) = 640LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( (LowPart & 3) != 3 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v23 + 24) = 646LL;
    WdLogEvent5_WdAssertion(v23);
  }
  UserBuffer = (__int64)a2->UserBuffer;
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( (unsigned int)LowPart <= 0x23004B )
  {
    switch ( (_DWORD)LowPart )
    {
      case 0x23004B:
        if ( (unsigned int)Length >= 8 && UserBuffer )
        {
          v20 = DpiUnInitialize;
          goto LABEL_27;
        }
        break;
      case 0x22C00B:
        if ( (unsigned int)Options >= 0x38 && (unsigned int)Length >= 0x38 )
        {
          v12 = DmmQueryDmmTestInterface(UserBuffer, &v32);
          goto LABEL_13;
        }
        goto LABEL_56;
      case 0x230007:
        Global = DXGGLOBAL::GetGlobal(a1);
        v32 = -1073741275;
        LODWORD(UserBuffer) = DXGGLOBAL::IterateAdaptersWithCallback(
                                (__int64)Global,
                                (__int64 (__fastcall *)(_QWORD *, __int64))RfxVgpuResetCallback,
                                (__int64)&v32,
                                0);
        if ( (int)UserBuffer >= 0 )
        {
          LODWORD(UserBuffer) = v32;
          if ( (v32 & 0x80000000) == 0 )
            goto LABEL_16;
        }
        v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
        v21[3] = (int)UserBuffer;
LABEL_64:
        WdLogEvent5_WdWarning(v21);
        goto LABEL_16;
      case 0x23003F:
        if ( (unsigned int)Length >= 8 && UserBuffer )
        {
          v20 = (__int64 (__fastcall *)())DpiInitialize;
          goto LABEL_27;
        }
        break;
      case 0x230043:
        if ( (unsigned int)Length >= 8 && UserBuffer )
        {
          v20 = (__int64 (__fastcall *)())DpiKmdDodInitialize;
          goto LABEL_27;
        }
        break;
      case 0x230047:
        if ( (unsigned int)Length >= 8 && UserBuffer )
        {
          v20 = (__int64 (__fastcall *)())DpiInitializeWin8;
LABEL_27:
          *(_QWORD *)UserBuffer = v20;
          LODWORD(UserBuffer) = 0;
          v6 = 8;
          goto LABEL_16;
        }
        break;
      default:
LABEL_60:
        v21 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
        LODWORD(UserBuffer) = -1073741808;
        v21[3] = LowPart;
        v21[4] = -1073741808LL;
        goto LABEL_64;
    }
LABEL_44:
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    v21[4] = UserBuffer;
    v21[3] = Length;
LABEL_62:
    UserBuffer = -1073741789LL;
    goto LABEL_63;
  }
  switch ( (_DWORD)LowPart )
  {
    case 0x232063:
      if ( (unsigned int)Length >= 8 && UserBuffer )
      {
        v20 = (__int64 (__fastcall *)())DpiReportSoftwareDevice;
        goto LABEL_27;
      }
      goto LABEL_44;
    case 0x23E057:
      if ( (unsigned int)Options < 0x760 || (unsigned int)Length < 0x760 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1);
        LODWORD(UserBuffer) = -1073741306;
        v30[3] = Options;
        v30[4] = Length;
        v30[5] = 1888LL;
        v30[6] = -1073741306LL;
        WdLogEvent5_WdAssertion(v30);
        goto LABEL_16;
      }
      v12 = DxgkWin32kQueryInterface((struct _DXGKWIN32K_INTERFACE *)UserBuffer, &v32);
      goto LABEL_13;
    case 0x23E05B:
      if ( (unsigned int)Options >= 0x1F0 && (unsigned int)Length >= 0x1F0 )
      {
        v12 = DxgkCddQueryInterface((struct _DXGKCDD_INTERFACE *)UserBuffer, &v32);
LABEL_13:
        UserBuffer = v12;
        if ( v12 < 0 )
        {
          v29 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
          *(_QWORD *)(v29 + 24) = UserBuffer;
          WdLogEvent5_WdWarning(v29);
        }
        v6 = v32;
        goto LABEL_16;
      }
      goto LABEL_56;
    case 0x23E05F:
      if ( (unsigned int)Options >= 0x30 && (unsigned int)Length >= 0x30 )
      {
        v12 = DxgkCaptureQueryInterface(UserBuffer, &v32);
        goto LABEL_13;
      }
LABEL_56:
      v21 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
      UserBuffer = -1073741306LL;
      v21[3] = Options;
      v21[4] = Length;
LABEL_63:
      v21[5] = UserBuffer;
      goto LABEL_64;
  }
  if ( (_DWORD)LowPart != 2351207 )
    goto LABEL_60;
  if ( (unsigned int)Options < 4 || !p_NamedPipeType )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    v21[3] = Options;
    v21[4] = p_NamedPipeType;
    goto LABEL_62;
  }
  if ( (*p_NamedPipeType & 1) != 0 )
    g_Win32kSupportsPathIndependentRotation = 1;
  LODWORD(UserBuffer) = 0;
LABEL_16:
  a2->IoStatus.Information = v6;
  a2->IoStatus.Status = UserBuffer;
  IofCompleteRequest(a2, 0);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 2);
  return (unsigned int)UserBuffer;
}
