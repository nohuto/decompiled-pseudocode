/*
 * XREFs of TR_EnsureSegments @ 0x1C00010A0
 * Callers:
 *     TR_AcquireSegments @ 0x1C0001000 (TR_AcquireSegments.c)
 *     Bulk_EP_EnableForwardProgress @ 0x1C002DE50 (Bulk_EP_EnableForwardProgress.c)
 *     TR_Create @ 0x1C0053D8C (TR_Create.c)
 * Callees:
 *     CommonBuffer_AcquireBuffers @ 0x1C0007E44 (CommonBuffer_AcquireBuffers.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002846C (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C002911C (WPP_RECORDER_SF_DDDDD.c)
 */

__int64 __fastcall TR_EnsureSegments(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  unsigned int v7; // edi
  void *v8; // r13
  KIRQL v9; // al
  _QWORD *v10; // r14
  _QWORD *v11; // rcx
  int v12; // edx
  unsigned int v14; // ebp
  int v15; // edi
  int v16; // edx
  KIRQL v17; // al
  _QWORD *v18; // rcx
  _QWORD *v19; // [rsp+50h] [rbp-38h] BYREF
  _QWORD *v20; // [rsp+58h] [rbp-30h]

  v4 = 0LL;
  v7 = 0;
  v8 = *(void **)(*(_QWORD *)(a1 + 40) + 88LL);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v10 = (_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 96) = v9;
  v11 = *(_QWORD **)(a1 + 200);
  if ( (_QWORD *)(a1 + 200) != v11 )
  {
    do
    {
      v11 = (_QWORD *)*v11;
      ++v7;
    }
    while ( v10 != v11 );
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v9);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL),
      v12,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      15,
      (__int64)&WPP_7e99ab8c306b357b4764855264695a8e_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64),
      v7,
      a2);
  }
  if ( a2 <= v7 )
    return 0LL;
  v14 = a2 - v7;
  v20 = &v19;
  v19 = &v19;
  if ( a3 )
  {
    v4 = a1 + 120;
    *(_QWORD *)(a1 + 136) = a1;
    *(_QWORD *)(a1 + 160) = TR_CommonBufferCallback;
    *(_DWORD *)(a1 + 144) = v14;
    *(_DWORD *)(a1 + 148) = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 152) = 828862034;
  }
  v15 = CommonBuffer_AcquireBuffers(v8, a1, 828862034, v4);
  if ( v15 >= 0 )
  {
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v18 = v19;
    *(_BYTE *)(a1 + 96) = v17;
    if ( v18 != &v19 )
    {
      **(_QWORD **)(a1 + 208) = v18;
      v19[1] = *(_QWORD *)(a1 + 208);
      *v20 = v10;
      *(_QWORD *)(a1 + 208) = v20;
      v20 = &v19;
      v19 = &v19;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  }
  else
  {
    v16 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL),
      v16,
      13,
      16,
      (__int64)&WPP_7e99ab8c306b357b4764855264695a8e_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64),
      v14);
  }
  return (unsigned int)v15;
}
