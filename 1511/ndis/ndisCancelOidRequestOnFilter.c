/*
 * XREFs of ndisCancelOidRequestOnFilter @ 0x1C0040F38
 * Callers:
 *     ndisFOidRequestCompleteInternal @ 0x1C00066F0 (ndisFOidRequestCompleteInternal.c)
 *     ndisCancelOidRequestInternal @ 0x1C0040DEC (ndisCancelOidRequestInternal.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     Template_jqxqqq @ 0x1C004084C (Template_jqxqqq.c)
 *     ndisGrabOidCancellationList @ 0x1C0041E1C (ndisGrabOidCancellationList.c)
 */

__int64 __fastcall ndisCancelOidRequestOnFilter(__int64 a1, __int64 a2, char a3)
{
  KSPIN_LOCK *v3; // rsi
  struct _KTHREAD *CurrentThread; // r9
  KIRQL v8; // r11
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v15[2]; // [rsp+58h] [rbp+17h] BYREF
  _QWORD v16[6]; // [rsp+68h] [rbp+27h] BYREF

  v3 = (KSPIN_LOCK *)(a1 + 144);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 152) = CurrentThread;
  LOBYTE(CurrentThread) = a3;
  *(_DWORD *)(a1 + 160) = 2306625;
  ndisGrabOidCancellationList(a1 + 168, v15, a2, CurrentThread);
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  KeReleaseSpinLock(v3, v8);
  while ( 1 )
  {
    result = v15[0];
    if ( (_QWORD *)v15[0] == v15 )
      break;
    v10 = *(_QWORD *)v15[0];
    if ( *(_QWORD **)(v15[0] + 8LL) != v15 || *(_QWORD *)(v10 + 8) != v15[0] )
      __fastfail(3u);
    v15[0] = *(_QWORD *)v15[0];
    *(_QWORD *)(v10 + 8) = v15;
    v11 = result - 72;
    memset(v16, 0, sizeof(v16));
    HIDWORD(v16[5]) |= 1u;
    v16[4] = v11;
    LODWORD(v16[5]) = -1073676276;
    v16[2] = a1;
    if ( (unsigned __int8)byte_1C0083712 >= 4u )
      WPP_SF_qq(0xB1u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v11, a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
      Template_jqxqqq(
        *(_QWORD *)(a1 + 832),
        &CancelFilterOidRequestEx,
        (const GUID *)(a1 + 808),
        a1 + 808,
        *(_DWORD *)(a1 + 824),
        *(_QWORD *)(*(_QWORD *)(a1 + 832) + 1312LL),
        *(_DWORD *)(v11 + 32),
        12,
        92);
    ndisOidRequestComplete((__int64)v16, v12, v13, v14);
  }
  return result;
}
