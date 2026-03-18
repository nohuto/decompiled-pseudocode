/*
 * XREFs of ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C0079C14
 * Callers:
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C0079BDC (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::GetDeviceExecutionState(
        DXGDEVICE *this,
        enum _D3DKMT_DEVICEEXECUTION_STATE *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  int v17; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v13 + 24) = 8578LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *((_DWORD *)this + 88) != 1 )
  {
    if ( *((_DWORD *)this + 88) == 2 )
    {
      *a2 = D3DKMT_DEVICEEXECUTION_RESET;
      return v4;
    }
    if ( *((_DWORD *)this + 88) == 3 )
    {
LABEL_19:
      *a2 = D3DKMT_DEVICEEXECUTION_HUNG;
      return v4;
    }
    if ( *((_DWORD *)this + 88) != 4 )
    {
      v14 = WdLogNewEntry5_WdAssertion((unsigned int)(*((_DWORD *)this + 88) - 3), a2, a3, a4);
      *(_QWORD *)(v14 + 24) = 8664LL;
      WdLogEvent5_WdAssertion(v14);
      *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
      return (unsigned int)-1073741823;
    }
    goto LABEL_26;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 376LL) + 8LL) + 192LL))(
         *((_QWORD *)this + 68),
         &v17);
  v11 = (unsigned int)v17;
  v4 = v7;
  LOBYTE(v10) = v17 < 0;
  LODWORD(v11) = v17 & 0x7FFFFFFF;
  v17 &= ~0x80000000;
  if ( v7 >= 0 )
  {
    if ( (int)v11 <= 10 )
    {
      if ( (int)v11 < 9 )
      {
        if ( !(_DWORD)v11 )
        {
          *a2 = ((_BYTE)v10 != 0) + 1;
          return v4;
        }
        v15 = v11 - 2;
        if ( v15 )
        {
          v11 = (unsigned int)(v15 - 4);
          if ( !(_DWORD)v11 )
          {
            *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAFAULT;
            return v4;
          }
          if ( (_DWORD)v11 == 1 )
            goto LABEL_19;
          goto LABEL_24;
        }
LABEL_25:
        *a2 = D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY;
        return v4;
      }
LABEL_10:
      *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAPAGEFAULT;
      return v4;
    }
    if ( (int)v11 <= 13 )
      goto LABEL_25;
    if ( (_DWORD)v11 != 14 )
    {
      if ( (unsigned int)(v11 - 15) > 4 )
      {
LABEL_24:
        v16 = WdLogNewEntry5_WdAssertion(v11, v10, v8, v9);
        *(_QWORD *)(v16 + 24) = 8651LL;
        WdLogEvent5_WdAssertion(v16);
        v4 = -1073741823;
        goto LABEL_25;
      }
      goto LABEL_10;
    }
LABEL_26:
    *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
  }
  return v4;
}
