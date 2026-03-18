/*
 * XREFs of Crashdump_UcxEvtGetDumpData @ 0x1C00358F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010CC0 (memmove.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C001D504 (CommonBuffer_ReleaseBuffer.c)
 *     Crashdump_CommonBufferAcquire @ 0x1C003490C (Crashdump_CommonBufferAcquire.c)
 *     Crashdump_FreeDeviceContext @ 0x1C0034B30 (Crashdump_FreeDeviceContext.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C0034DDC (Crashdump_InitializeDeviceContext.c)
 *     Crashdump_Register_Initialize @ 0x1C0035EEC (Crashdump_Register_Initialize.c)
 *     Crashdump_EventRing_InitializeForDump @ 0x1C0036990 (Crashdump_EventRing_InitializeForDump.c)
 */

__int64 __fastcall Crashdump_UcxEvtGetDumpData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r12
  unsigned int v8; // esi
  __int64 *v9; // r13
  __int64 v10; // rdi
  __int64 *v11; // rbp
  __int64 **PoolWithTag; // rax
  __int64 **v13; // rbx
  int v14; // edi
  __int64 **v15; // r14
  int v16; // edx
  int v17; // eax
  __int64 *v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // ebp
  __int64 v22; // r8
  int v23; // edx
  int v24; // edx
  __int64 v26; // [rsp+30h] [rbp-88h]
  _DWORD v28[10]; // [rsp+40h] [rbp-78h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtGetDumpData: Begin\n");
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0041318);
  v8 = 0;
  v9 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    a1,
                    off_1C00410E8);
  v10 = v9[10];
  v11 = (__int64 *)v9[11];
  v26 = v9[13];
  *(_QWORD *)(a4 + 16) = Crashdump_Initialize;
  *(_QWORD *)(a4 + 56) = Crashdump_Cleanup;
  *(_QWORD *)(a4 + 24) = Crashdump_SendUrb;
  *(_QWORD *)(a4 + 48) = Crashdump_ResetDevice;
  *(_QWORD *)(a4 + 32) = Crashdump_SendUrbAsync;
  *(_QWORD *)(a4 + 40) = Crashdump_PollForCompletion;
  *(_BYTE *)(a4 + 84) = 0;
  PoolWithTag = (__int64 **)ExAllocatePoolWithTag(*(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type, 0x270uLL, 0x43434858u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v14 = -1073741670;
    goto LABEL_34;
  }
  memset(PoolWithTag, 0, 0x270uLL);
  v15 = v13 + 61;
  v13[62] = (__int64 *)(v13 + 61);
  v13[61] = (__int64 *)(v13 + 61);
  v13[60] = v11;
  Crashdump_Register_Initialize(v13, v10, v9);
  v14 = Crashdump_EventRing_InitializeForDump(v13 + 8, v13);
  if ( v14 >= 0 )
  {
    v13[24] = (__int64 *)v13;
    v13[25] = (__int64 *)v13;
    v13[26] = (__int64 *)((*v13)[5] + 32);
    v13[40] = (__int64 *)v13;
    v13[41] = (__int64 *)v13;
    v13[42] = (__int64 *)((*v13)[4] + 24);
    v14 = Crashdump_CommonBufferAcquire((__int64)v13, 32, (__int64)(v13 + 43));
    if ( v14 >= 0 )
    {
      v16 = *(_DWORD *)(a4 + 80);
      if ( !v16 )
        goto LABEL_8;
      v14 = Crashdump_CommonBufferAcquire((__int64)v13, v16, (__int64)(v13 + 73));
      if ( v14 >= 0 )
      {
        *(_QWORD *)(a4 + 64) = v13[74];
        *(_QWORD *)(a4 + 72) = v13[73];
LABEL_8:
        *((_DWORD *)v13 + 129) = *(_DWORD *)(v7 + 20);
        *(_OWORD *)((char *)v13 + 524) = *(_OWORD *)(v7 + 32);
        *(_OWORD *)((char *)v13 + 540) = *(_OWORD *)(v7 + 48);
        *((_DWORD *)v13 + 139) = *(_DWORD *)(v7 + 64);
        v17 = 30;
        if ( *(_BYTE *)(56LL * (unsigned int)(*((_DWORD *)v13 + 134) - 1) + *(_QWORD *)(v9[15] + 48) + 1) == 2 )
          v17 = 20;
        *((_DWORD *)v13 + 130) = v17;
        v18 = (__int64 *)ExAllocatePoolWithTag(
                           *(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type,
                           408LL * *((unsigned int *)v13 + 132),
                           0x43434858u);
        v13[70] = v18;
        if ( v18 )
        {
          memset(v18, 0, 408LL * *((unsigned int *)v13 + 132));
          if ( *((_DWORD *)v13 + 132) )
          {
            v21 = 1;
            while ( 1 )
            {
              memset(v28, 0, 0x24uLL);
              v28[1] = v21;
              memmove(&v28[3], v13 + 67, 4LL * v21);
              v22 = 0LL;
              if ( v21 == *((_DWORD *)v13 + 132) )
                v22 = a3;
              v14 = Crashdump_InitializeDeviceContext(
                      v26,
                      (int)v13,
                      v22,
                      (__int64)v28,
                      (__int64)&v13[70][51 * v21 - 51]);
              if ( v14 < 0 )
                break;
              if ( v21++ >= *((_DWORD *)v13 + 132) )
                goto LABEL_26;
            }
          }
          else
          {
LABEL_26:
            v13[71] = &v13[70][51 * (unsigned int)(*((_DWORD *)v13 + 132) - 1)];
            v14 = Crashdump_CommonBufferAcquire((__int64)v13, 64, (__int64)(v13 + 54));
            if ( v14 >= 0 )
            {
              v23 = 2112;
              if ( ((*v13)[13] & 4) == 0 )
                v23 = 1056;
              v14 = Crashdump_CommonBufferAcquire((__int64)v13, v23, (__int64)(v13 + 57));
              if ( v14 >= 0 )
              {
                v24 = *((_DWORD *)v13 + 132);
                *((_DWORD *)v13 + 100) = v24;
                v14 = Crashdump_CommonBufferAcquire((__int64)v13, 8 * v24 + 8, (__int64)(v13 + 51));
                if ( v14 >= 0 )
                {
                  DbgPrintEx(
                    0x93u,
                    3u,
                    "XHCIDUMP: CommonBuffer: Allocated %u pages, %u bytes. Used %u bytes\n",
                    *((_DWORD *)v13 + 126),
                    *((_DWORD *)v13 + 126) << 12,
                    *((_DWORD *)v13 + 127));
                  *((_DWORD *)v13 + 144) = 0;
                  v14 = 0;
                  *(_QWORD *)(a4 + 8) = v13;
                  v13[76] = v9;
                  v9[38] = (__int64)v13;
                  goto LABEL_34;
                }
              }
            }
          }
        }
        else
        {
          v14 = -1073741670;
        }
      }
    }
  }
  if ( v13[70] )
  {
    if ( *((_DWORD *)v13 + 132) )
    {
      do
        Crashdump_FreeDeviceContext((__int64)&v13[70][51 * v8++]);
      while ( v8 < *((_DWORD *)v13 + 132) );
    }
    ExFreePoolWithTag(v13[70], 0x43434858u);
  }
  while ( *v15 != (__int64 *)v15 )
  {
    v19 = *v15;
    v20 = **v15;
    if ( (__int64 **)(*v15)[1] != v15 || *(__int64 **)(v20 + 8) != v19 )
      __fastfail(3u);
    *v15 = (__int64 *)v20;
    *(_QWORD *)(v20 + 8) = v15;
    CommonBuffer_ReleaseBuffer((__int64)v13[60], (__int64)v19);
  }
  ExFreePoolWithTag(v13, 0x43434858u);
LABEL_34:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtGetDumpData: End 0x%X\n", v14);
  return (unsigned int)v14;
}
