/*
 * XREFs of ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C0094F44
 * Callers:
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C0094F0C (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::GetDeviceExecutionState(DXGDEVICE *this, enum _D3DKMT_DEVICEEXECUTION_STATE *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // eax
  bool v8; // dl
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rax
  int v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 9094LL;
    WdLogEvent5_WdAssertion(v5);
  }
  switch ( *((_DWORD *)this + 94) )
  {
    case 1:
      v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 376LL) + 8LL)
                                                    + 192LL))(
             *((_QWORD *)this + 71),
             &v13);
      v9 = (unsigned int)v13;
      v2 = v7;
      v8 = v13 < 0;
      LODWORD(v9) = v13 & 0x7FFFFFFF;
      v13 &= ~0x80000000;
      if ( v7 < 0 )
        return v2;
      if ( (int)v9 > 10 )
      {
        if ( (int)v9 <= 13 )
          goto LABEL_27;
        if ( (_DWORD)v9 == 14 )
          goto LABEL_24;
        if ( (int)v9 > 19 )
        {
          if ( (_DWORD)v9 == 27
            && EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_4029903163_58741410_FeatureDescriptorDetails) )
          {
            goto LABEL_24;
          }
LABEL_26:
          v11 = WdLogNewEntry5_WdAssertion(v9);
          *(_QWORD *)(v11 + 24) = 9178LL;
          WdLogEvent5_WdAssertion(v11);
          v2 = -1073741823;
          goto LABEL_27;
        }
      }
      else if ( (int)v9 < 9 )
      {
        if ( !(_DWORD)v9 )
        {
          *a2 = v8 + 1;
          return v2;
        }
        v10 = v9 - 2;
        if ( v10 )
        {
          v9 = (unsigned int)(v10 - 4);
          if ( !(_DWORD)v9 )
          {
            *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAFAULT;
            return v2;
          }
          if ( (_DWORD)v9 == 1 )
            goto LABEL_16;
          goto LABEL_26;
        }
LABEL_27:
        *a2 = D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY;
        return v2;
      }
      *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAPAGEFAULT;
      return v2;
    case 2:
      *a2 = D3DKMT_DEVICEEXECUTION_RESET;
      return v2;
    case 3:
LABEL_16:
      *a2 = D3DKMT_DEVICEEXECUTION_HUNG;
      return v2;
    case 4:
LABEL_24:
      *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
      return v2;
  }
  v6 = WdLogNewEntry5_WdAssertion((unsigned int)(*((_DWORD *)this + 94) - 3));
  *(_QWORD *)(v6 + 24) = 9191LL;
  WdLogEvent5_WdAssertion(v6);
  *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
  return (unsigned int)-1073741823;
}
