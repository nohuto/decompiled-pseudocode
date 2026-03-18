/*
 * XREFs of ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UMsgRoutingInfo@@PEAPEAV1@@Z @ 0x1C002369C
 * Callers:
 *     ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@PEAPEAVIInputQueue@@@Z @ 0x1C002361C (-CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@PEAPEAVIInputQueue@@@Z.c)
 * Callees:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UMsgRoutingInfo@@@Z @ 0x1C0023848 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UMsgRoutingInfo@@@Z.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputQueue::Create(int a1, __int64 a2, __int128 *a3, __int64 *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // xmm1_8
  int v12; // edi
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]
  int v16; // [rsp+38h] [rbp-10h]

  *a4 = 0LL;
  v8 = Win32AllocPool(64LL, 1902660937LL);
  v9 = v8;
  if ( v8 )
  {
    *(_QWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)v8 = &CInputQueue::`vftable';
    v14 = 0uLL;
    v15 = 0LL;
    *(_OWORD *)(v8 + 32) = 0uLL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_QWORD *)(v8 + 48) = 0LL;
    *(_DWORD *)(v8 + 56) = 0;
    *(_DWORD *)(v8 + 12) = a1;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v10 = *((_DWORD *)a3 + 6);
    v11 = *((_QWORD *)a3 + 2);
    v14 = *a3;
    v15 = v11;
    v16 = v10;
    v12 = CInputQueue::Initialize(v9, a2, &v14);
    if ( v12 < 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    else
      *a4 = v9;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v12;
}
