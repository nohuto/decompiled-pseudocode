/*
 * XREFs of Crashdump_UcxEvtGetDumpData @ 0x1C0034910
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0007C40 (memmove.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0013F64 (CommonBuffer_ReleaseBuffer.c)
 *     Crashdump_CommonBufferAcquire @ 0x1C003392C (Crashdump_CommonBufferAcquire.c)
 *     Crashdump_FreeDeviceContext @ 0x1C0033B50 (Crashdump_FreeDeviceContext.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C0033DFC (Crashdump_InitializeDeviceContext.c)
 *     Crashdump_Register_Initialize @ 0x1C0034F0C (Crashdump_Register_Initialize.c)
 *     Crashdump_EventRing_InitializeForDump @ 0x1C00359B0 (Crashdump_EventRing_InitializeForDump.c)
 */

__int64 __fastcall Crashdump_UcxEvtGetDumpData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r12
  __int64 *v8; // rax
  POOL_TYPE v9; // ecx
  __int64 *v10; // r13
  unsigned int v11; // esi
  __int64 v12; // rdi
  __int64 *v13; // rbp
  __int64 **PoolWithTag; // rax
  __int64 **v15; // rbx
  int v16; // edi
  __int64 **v17; // r14
  int v18; // edx
  int v19; // eax
  POOL_TYPE v20; // ecx
  __int64 *v21; // rax
  __int64 *v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // ebp
  __int64 v25; // r8
  int v26; // edx
  int v27; // edx
  __int64 v29; // [rsp+30h] [rbp-88h]
  _DWORD v31[10]; // [rsp+40h] [rbp-78h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtGetDumpData: Begin\n");
  v7 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a2,
         off_1C00402E8);
  v8 = (__int64 *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                    a1,
                    off_1C00400B8);
  v9 = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  v10 = v8;
  v11 = 0;
  v12 = v8[10];
  v13 = (__int64 *)v8[11];
  v29 = v8[13];
  *(_QWORD *)(a4 + 16) = Crashdump_Initialize;
  *(_QWORD *)(a4 + 56) = Crashdump_Cleanup;
  *(_QWORD *)(a4 + 24) = Crashdump_SendUrb;
  *(_QWORD *)(a4 + 48) = Crashdump_ResetDevice;
  *(_QWORD *)(a4 + 32) = Crashdump_SendUrbAsync;
  *(_QWORD *)(a4 + 40) = Crashdump_PollForCompletion;
  *(_BYTE *)(a4 + 84) = 0;
  PoolWithTag = (__int64 **)ExAllocatePoolWithTag(v9, 0x270uLL, 0x43434858u);
  v15 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v16 = -1073741670;
    goto LABEL_34;
  }
  memset(PoolWithTag, 0, 0x270uLL);
  v17 = v15 + 61;
  v15[62] = (__int64 *)(v15 + 61);
  v15[61] = (__int64 *)(v15 + 61);
  v15[60] = v13;
  Crashdump_Register_Initialize(v15, v12, v10);
  v16 = Crashdump_EventRing_InitializeForDump(v15 + 8, v15);
  if ( v16 >= 0 )
  {
    v15[24] = (__int64 *)v15;
    v15[25] = (__int64 *)v15;
    v15[26] = (__int64 *)((*v15)[5] + 32);
    v15[40] = (__int64 *)v15;
    v15[41] = (__int64 *)v15;
    v15[42] = (__int64 *)((*v15)[4] + 24);
    v16 = Crashdump_CommonBufferAcquire((__int64)v15, 32, (__int64)(v15 + 43));
    if ( v16 >= 0 )
    {
      v18 = *(_DWORD *)(a4 + 80);
      if ( !v18 )
        goto LABEL_8;
      v16 = Crashdump_CommonBufferAcquire((__int64)v15, v18, (__int64)(v15 + 73));
      if ( v16 >= 0 )
      {
        *(_QWORD *)(a4 + 64) = v15[74];
        *(_QWORD *)(a4 + 72) = v15[73];
LABEL_8:
        *((_DWORD *)v15 + 129) = *(_DWORD *)(v7 + 20);
        *(_OWORD *)((char *)v15 + 524) = *(_OWORD *)(v7 + 32);
        *(_OWORD *)((char *)v15 + 540) = *(_OWORD *)(v7 + 48);
        *((_DWORD *)v15 + 139) = *(_DWORD *)(v7 + 64);
        v19 = 30;
        v20 = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
        if ( *(_BYTE *)(56LL * (unsigned int)(*((_DWORD *)v15 + 134) - 1) + *(_QWORD *)(v10[15] + 48) + 1) == 2 )
          v19 = 20;
        *((_DWORD *)v15 + 130) = v19;
        v21 = (__int64 *)ExAllocatePoolWithTag(v20, 408LL * *((unsigned int *)v15 + 132), 0x43434858u);
        v15[70] = v21;
        if ( v21 )
        {
          memset(v21, 0, 408LL * *((unsigned int *)v15 + 132));
          if ( *((_DWORD *)v15 + 132) )
          {
            v24 = 1;
            while ( 1 )
            {
              memset(v31, 0, 0x24uLL);
              v31[1] = v24;
              memmove(&v31[3], v15 + 67, 4LL * v24);
              v25 = 0LL;
              if ( v24 == *((_DWORD *)v15 + 132) )
                v25 = a3;
              v16 = Crashdump_InitializeDeviceContext(
                      v29,
                      (int)v15,
                      v25,
                      (__int64)v31,
                      (__int64)&v15[70][51 * v24 - 51]);
              if ( v16 < 0 )
                break;
              if ( v24++ >= *((_DWORD *)v15 + 132) )
                goto LABEL_26;
            }
          }
          else
          {
LABEL_26:
            v15[71] = &v15[70][51 * (unsigned int)(*((_DWORD *)v15 + 132) - 1)];
            v16 = Crashdump_CommonBufferAcquire((__int64)v15, 64, (__int64)(v15 + 54));
            if ( v16 >= 0 )
            {
              v26 = 2112;
              if ( ((*v15)[13] & 4) == 0 )
                v26 = 1056;
              v16 = Crashdump_CommonBufferAcquire((__int64)v15, v26, (__int64)(v15 + 57));
              if ( v16 >= 0 )
              {
                v27 = *((_DWORD *)v15 + 132);
                *((_DWORD *)v15 + 100) = v27;
                v16 = Crashdump_CommonBufferAcquire((__int64)v15, 8 * v27 + 8, (__int64)(v15 + 51));
                if ( v16 >= 0 )
                {
                  DbgPrintEx(
                    0x93u,
                    3u,
                    "XHCIDUMP: CommonBuffer: Allocated %u pages, %u bytes. Used %u bytes\n",
                    *((_DWORD *)v15 + 126),
                    *((_DWORD *)v15 + 126) << 12,
                    *((_DWORD *)v15 + 127));
                  *((_DWORD *)v15 + 144) = 0;
                  v16 = 0;
                  *(_QWORD *)(a4 + 8) = v15;
                  v15[76] = v10;
                  v10[38] = (__int64)v15;
                  goto LABEL_34;
                }
              }
            }
          }
        }
        else
        {
          v16 = -1073741670;
        }
      }
    }
  }
  if ( v15[70] )
  {
    if ( *((_DWORD *)v15 + 132) )
    {
      do
        Crashdump_FreeDeviceContext((__int64)&v15[70][51 * v11++]);
      while ( v11 < *((_DWORD *)v15 + 132) );
    }
    ExFreePoolWithTag(v15[70], 0x43434858u);
  }
  while ( *v17 != (__int64 *)v17 )
  {
    v22 = *v17;
    v23 = **v17;
    if ( (__int64 **)(*v17)[1] != v17 || *(__int64 **)(v23 + 8) != v22 )
      __fastfail(3u);
    *v17 = (__int64 *)v23;
    *(_QWORD *)(v23 + 8) = v17;
    CommonBuffer_ReleaseBuffer((__int64)v15[60], (__int64)v22);
  }
  ExFreePoolWithTag(v15, 0x43434858u);
LABEL_34:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtGetDumpData: End 0x%X\n", v16);
  return (unsigned int)v16;
}
