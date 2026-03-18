/*
 * XREFs of ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C006CC0C
 * Callers:
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C006CBD4 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::GetDeviceExecutionState(DXGDEVICE *this, enum _D3DKMT_DEVICEEXECUTION_STATE *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  bool v6; // dl
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  int v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 8658LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *((_DWORD *)this + 88) != 1 )
  {
    if ( *((_DWORD *)this + 88) == 2 )
    {
      *a2 = D3DKMT_DEVICEEXECUTION_RESET;
      return v2;
    }
    if ( *((_DWORD *)this + 88) == 3 )
    {
LABEL_19:
      *a2 = D3DKMT_DEVICEEXECUTION_HUNG;
      return v2;
    }
    if ( *((_DWORD *)this + 88) != 4 )
    {
      v10 = WdLogNewEntry5_WdAssertion((unsigned int)(*((_DWORD *)this + 88) - 3));
      *(_QWORD *)(v10 + 24) = 8744LL;
      WdLogEvent5_WdAssertion(v10);
      *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
      return (unsigned int)-1073741823;
    }
    goto LABEL_26;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL) + 8LL) + 192LL))(
         *((_QWORD *)this + 68),
         &v13);
  v7 = (unsigned int)v13;
  v2 = v5;
  v6 = v13 < 0;
  LODWORD(v7) = v13 & 0x7FFFFFFF;
  v13 &= ~0x80000000;
  if ( v5 >= 0 )
  {
    if ( (int)v7 <= 10 )
    {
      if ( (int)v7 < 9 )
      {
        if ( !(_DWORD)v7 )
        {
          *a2 = v6 + 1;
          return v2;
        }
        v11 = v7 - 2;
        if ( v11 )
        {
          v7 = (unsigned int)(v11 - 4);
          if ( !(_DWORD)v7 )
          {
            *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAFAULT;
            return v2;
          }
          if ( (_DWORD)v7 == 1 )
            goto LABEL_19;
          goto LABEL_24;
        }
LABEL_25:
        *a2 = D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY;
        return v2;
      }
LABEL_10:
      *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAPAGEFAULT;
      return v2;
    }
    if ( (int)v7 <= 13 )
      goto LABEL_25;
    if ( (_DWORD)v7 != 14 )
    {
      if ( (unsigned int)(v7 - 15) > 4 )
      {
LABEL_24:
        v12 = WdLogNewEntry5_WdAssertion(v7);
        *(_QWORD *)(v12 + 24) = 8731LL;
        WdLogEvent5_WdAssertion(v12);
        v2 = -1073741823;
        goto LABEL_25;
      }
      goto LABEL_10;
    }
LABEL_26:
    *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
  }
  return v2;
}
