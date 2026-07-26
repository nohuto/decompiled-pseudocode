/*
 * XREFs of ndisCancelOidRequestOnMiniport @ 0x1C00410C8
 * Callers:
 *     ndisMDoOidRequest @ 0x1C0008EC8 (ndisMDoOidRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0025A0C (ndisMOidRequestCompleteInternal.c)
 *     ndisCancelOidRequestInternal @ 0x1C0040DEC (ndisCancelOidRequestInternal.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     Template_jqxqqq @ 0x1C004084C (Template_jqxqqq.c)
 *     ndisGrabOidCancellationList @ 0x1C0041E1C (ndisGrabOidCancellationList.c)
 */

__int64 __fastcall ndisCancelOidRequestOnMiniport(__int64 a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r9
  KIRQL v7; // r11
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v15[2]; // [rsp+58h] [rbp+17h] BYREF
  _QWORD v16[6]; // [rsp+68h] [rbp+27h] BYREF

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 520) = CurrentThread;
  LOBYTE(CurrentThread) = a3;
  *(_DWORD *)(a1 + 1856) = 2306670;
  ndisGrabOidCancellationList(a1 + 2200, v15, a2, CurrentThread);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
  while ( 1 )
  {
    result = v15[0];
    if ( (_QWORD *)v15[0] == v15 )
      break;
    v9 = *(_QWORD *)v15[0];
    if ( *(_QWORD **)(v15[0] + 8LL) != v15 || *(_QWORD *)(v9 + 8) != v15[0] )
      __fastfail(3u);
    v15[0] = *(_QWORD *)v15[0];
    *(_QWORD *)(v9 + 8) = v15;
    v10 = result - 72;
    memset(v16, 0, sizeof(v16));
    HIDWORD(v16[5]) |= 1u;
    v16[4] = v10;
    LODWORD(v16[5]) = -1073676276;
    v16[0] = a1;
    if ( (unsigned __int8)byte_1C0083712 >= 4u )
      WPP_SF_qq(0xB2u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v10, a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
      Template_jqxqqq(
        v12,
        &CancelMiniportOidRequestEx,
        (const GUID *)(a1 + 4064),
        a1 + 4064,
        *(_DWORD *)(a1 + 4112),
        *(_QWORD *)(a1 + 4080),
        *(_DWORD *)(v10 + 32),
        12,
        137);
    ndisOidRequestComplete((__int64)v16, v11, v13, v14);
  }
  return result;
}
