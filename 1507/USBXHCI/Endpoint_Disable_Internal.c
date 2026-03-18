/*
 * XREFs of Endpoint_Disable_Internal @ 0x1C00176F4
 * Callers:
 *     Endpoint_Disable @ 0x1C00176D0 (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C0017910 (Endpoint_Enable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0013F64 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_ReleaseBuffers @ 0x1C001404C (CommonBuffer_ReleaseBuffers.c)
 *     WPP_RECORDER_SF_ddql @ 0x1C001C974 (WPP_RECORDER_SF_ddql.c)
 */

void __fastcall Endpoint_Disable_Internal(__int64 *a1, int a2, int a3)
{
  char v4; // di
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rdx
  bool v8; // si
  __int64 v9; // r14
  unsigned int i; // ebp
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r15
  _QWORD *v14; // rdx
  _QWORD *v15; // rdx
  struct _MDL *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rbp
  _QWORD *v19; // rdx
  _QWORD *v20; // rdx
  struct _MDL *v21; // rcx
  _QWORD *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rdx

  v4 = a2;
  v5 = *a1;
  v6 = *(_QWORD *)(v5 + 88);
  WPP_RECORDER_SF_ddql(*(_QWORD *)(v5 + 64), a2, a3, *(unsigned __int8 *)(a1[2] + 135));
  v8 = !*((_BYTE *)a1 + 36) || v4;
  if ( *((_BYTE *)a1 + 37) )
  {
    v9 = a1[17];
    if ( v9 )
    {
      for ( i = 1; i <= *(_DWORD *)(v9 + 8); ++i )
      {
        v11 = 88LL * (i - 1);
        v12 = *(_QWORD *)(v11 + a1[17] + 40);
        LOBYTE(v11) = v8;
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 88LL);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v12 + 32) + 32LL))(v12, v11);
        _InterlockedExchange((volatile __int32 *)(v12 + 100), 0);
        if ( v8 )
        {
          v14 = (_QWORD *)(v12 + 200);
          if ( (_QWORD *)*v14 != v14 )
            CommonBuffer_ReleaseBuffers(v13, v14);
          v15 = (_QWORD *)(v12 + 216);
          if ( (_QWORD *)*v15 != v15 )
            CommonBuffer_ReleaseBuffers(v13, v15);
          v16 = *(struct _MDL **)(v12 + 112);
          if ( v16 )
          {
            IoFreeMdl(v16);
            *(_QWORD *)(v12 + 112) = 0LL;
          }
        }
      }
    }
  }
  else
  {
    v17 = a1[11];
    LOBYTE(v7) = v8;
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 40) + 88LL);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v17 + 32) + 32LL))(v17, v7);
    _InterlockedExchange((volatile __int32 *)(v17 + 100), 0);
    if ( !v8 )
      return;
    v19 = (_QWORD *)(v17 + 200);
    if ( (_QWORD *)*v19 != v19 )
      CommonBuffer_ReleaseBuffers(v18, v19);
    v20 = (_QWORD *)(v17 + 216);
    if ( (_QWORD *)*v20 != v20 )
      CommonBuffer_ReleaseBuffers(v18, v20);
    v21 = *(struct _MDL **)(v17 + 112);
    if ( v21 )
    {
      IoFreeMdl(v21);
      *(_QWORD *)(v17 + 112) = 0LL;
    }
  }
  if ( v8 )
  {
    if ( *((_BYTE *)a1 + 37) )
    {
      v22 = (_QWORD *)a1[17];
      if ( v22 )
      {
        v23 = v22[4];
        if ( v23 )
        {
          CommonBuffer_ReleaseBuffer(v6, v23);
          v22[4] = 0LL;
        }
        if ( v22 == (_QWORD *)a1[16] )
        {
          ExFreePoolWithTag(v22, 0x49434858u);
          a1[16] = 0LL;
        }
        a1[17] = 0LL;
      }
    }
    v24 = a1[10];
    if ( v24 )
    {
      if ( v24 != *(_QWORD *)(*a1 + 64) )
        imp_WppRecorderLogDelete(WPP_GLOBAL_Control, v24);
    }
    a1[10] = 0LL;
  }
}
