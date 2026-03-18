/*
 * XREFs of UsbhInsertQueuePortChangeObject @ 0x1C000E1A0
 * Callers:
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0004540 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000BF20 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C000D1E0 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000E550 (Usbh_PCE_QueueChange_Action.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C000ADCC (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C0019160 (UsbhUnlatchPdo.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dD @ 0x1C003CE78 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003CF38 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhInsertQueuePortChangeObject(__int64 a1, unsigned __int16 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  int v5; // r13d
  unsigned int v9; // r14d
  _DWORD *v10; // rdx
  _QWORD *PoolWithTag; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  char v18; // r10
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  void (__fastcall *v22)(_QWORD, _DWORD *); // rax
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rbx
  _QWORD *v28; // rcx
  __int64 v30; // rax
  _DWORD v31[14]; // [rsp+40h] [rbp-38h] BYREF

  v5 = a4;
  v9 = -1073741670;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      49,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      a2);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v10 = *(_DWORD **)(a1 + 64);
  if ( !v10 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v10, a3, a4);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x38uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    v9 = 0;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[5] = 0LL;
    PoolWithTag[6] = 0LL;
    v13 = (unsigned int)UsbhLogMask;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 1413771367;
        *(_QWORD *)(v15 + 16) = a2;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 24) = 0LL;
        v13 = (unsigned int)UsbhLogMask;
      }
    }
    if ( a2 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( !v16 )
        UsbhTrapFatal_Dbg(a1, 0LL, v12, v13);
      if ( *(_DWORD *)v16 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v16, v12, v13);
      if ( a2 <= *(unsigned __int8 *)(v16 + 2938) )
      {
        v17 = *(_QWORD *)(v16 + 3056);
        if ( v17 )
        {
          v18 = a2;
          v19 = v17 + 2928LL * (a2 - 1);
          if ( (v13 & 8) != 0 )
          {
            v20 = *(_QWORD *)(v16 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
            *(_DWORD *)v20 = 1044672615;
            *(_QWORD *)(v20 + 16) = a2;
            *(_QWORD *)(v20 + 8) = 0LL;
            *(_QWORD *)(v20 + 24) = v19;
          }
          if ( v19 )
          {
            *((_WORD *)PoolWithTag + 2) = a2;
            *((_DWORD *)PoolWithTag + 2) = *a3;
            *(_DWORD *)PoolWithTag = 1145332592;
            v21 = *(_QWORD *)(a1 + 64);
            if ( !v21 )
              UsbhTrapFatal_Dbg(a1, 0LL, v17, v13);
            if ( *(_DWORD *)v21 != 541218120 )
              UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v17, v13);
            v22 = *(void (__fastcall **)(_QWORD, _DWORD *))(v21 + 4592);
            if ( v22 )
            {
              v22(*(_QWORD *)(v21 + 4560), v31);
              v23 = v31[0];
              v18 = a2;
            }
            else
            {
              v23 = 0;
            }
            v24 = *((unsigned int *)PoolWithTag + 2);
            PoolWithTag[5] = a5;
            *((_DWORD *)PoolWithTag + 8) = v23;
            *((_DWORD *)PoolWithTag + 12) = v5;
            if ( (UsbhLogMask & 0x200) != 0 )
            {
              v16 = *(_QWORD *)(a1 + 64);
              if ( v16 )
              {
                v25 = *(_QWORD *)(v16 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
                *(_DWORD *)v25 = 1145262193;
                *(_QWORD *)(v25 + 8) = 0LL;
                *(_QWORD *)(v25 + 16) = v19;
                *(_QWORD *)(v25 + 24) = v24;
              }
            }
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_dD(
                WPP_GLOBAL_Control->DeviceExtension,
                v16,
                v24,
                50,
                (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
                v18,
                *((_DWORD *)PoolWithTag + 2));
            if ( v5 != 1 )
              goto LABEL_28;
            v30 = UsbhLatchPdo(a1, a2, (__int64)PoolWithTag, 0x49515043u);
            if ( v30 )
            {
              if ( v30 == a5 )
              {
LABEL_28:
                if ( (PoolWithTag[1] & 0x16) != 0 )
                  _InterlockedIncrement((volatile signed __int32 *)(v19 + 2876));
                if ( (PoolWithTag[1] & 1) == 0 )
                {
                  v26 = v19 + 456;
                  v27 = PoolWithTag + 2;
                  v28 = *(_QWORD **)(v19 + 464);
                  *v27 = v19 + 456;
                  v27[1] = v28;
                  if ( *v28 != v19 + 456 )
                    __fastfail(3u);
LABEL_32:
                  *v28 = v27;
                  *(_QWORD *)(v26 + 8) = v27;
                  KeSetEvent((PRKEVENT)(v19 + 496), 0, 0);
                  goto LABEL_33;
                }
                if ( !*(_BYTE *)(v19 + 2839) )
                {
                  *(_BYTE *)(v19 + 2839) = 1;
                  v26 = v19 + 456;
                  v28 = *(_QWORD **)(v19 + 464);
                  v27 = PoolWithTag + 2;
                  *v27 = v19 + 456;
                  v27[1] = v28;
                  if ( *v28 != v19 + 456 )
                    __fastfail(3u);
                  goto LABEL_32;
                }
                goto LABEL_51;
              }
              v9 = -1073741811;
              UsbhUnlatchPdo(a1, v30, PoolWithTag, 1230065731LL);
            }
            else
            {
              v9 = -1073741811;
            }
LABEL_51:
            ExFreePoolWithTag(PoolWithTag, 0);
            goto LABEL_33;
          }
        }
      }
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    v9 = -1073741811;
  }
LABEL_33:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      51,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      a2,
      v9);
  return v9;
}
