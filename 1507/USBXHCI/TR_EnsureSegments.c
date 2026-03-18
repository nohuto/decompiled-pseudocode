/*
 * XREFs of TR_EnsureSegments @ 0x1C00204A4
 * Callers:
 *     TR_AcquireSegments @ 0x1C001FFE0 (TR_AcquireSegments.c)
 *     Bulk_EP_EnableForwardProgress @ 0x1C0029CE0 (Bulk_EP_EnableForwardProgress.c)
 *     TR_Create @ 0x1C0050C08 (TR_Create.c)
 * Callees:
 *     CommonBuffer_AcquireBuffers @ 0x1C00058A4 (CommonBuffer_AcquireBuffers.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C001F854 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0020C3C (WPP_RECORDER_SF_DDDDD.c)
 */

__int64 __fastcall TR_EnsureSegments(__int64 a1, unsigned int a2, char a3)
{
  KSPIN_LOCK *v3; // r15
  unsigned int v4; // r14d
  _QWORD *v8; // r13
  KIRQL v9; // al
  _QWORD *v10; // rsi
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  int v15; // r14d
  int v16; // edi
  KIRQL v17; // al
  _QWORD *v18; // rcx
  __int64 v20; // [rsp+28h] [rbp-38h]
  __int64 v21; // [rsp+30h] [rbp-30h]
  __int64 v22; // [rsp+38h] [rbp-28h]
  __int64 v23; // [rsp+40h] [rbp-20h]
  _QWORD *v24; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v25; // [rsp+58h] [rbp-8h]

  v3 = (KSPIN_LOCK *)(a1 + 88);
  v4 = 0;
  v8 = *(_QWORD **)(*(_QWORD *)(a1 + 40) + 88LL);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v10 = (_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 96) = v9;
  v11 = *(_QWORD **)(a1 + 200);
  while ( v10 != v11 )
  {
    v11 = (_QWORD *)*v11;
    ++v4;
  }
  KeReleaseSpinLock(v3, v9);
  v12 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = *(_QWORD *)(a1 + 56);
    v14 = *(_DWORD *)(v13 + 144);
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL),
      v13,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      15,
      (__int64)&WPP_f16db56c32e588ad62ddfc8618af2a2c_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      v14,
      *(_DWORD *)(a1 + 64),
      v4,
      a2);
    v12 = 0LL;
  }
  if ( a2 > v4 )
  {
    v16 = a2 - v4;
    v25 = &v24;
    v24 = &v24;
    if ( a3 )
    {
      v12 = (_QWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 136) = a1;
      *(_QWORD *)(a1 + 160) = TR_CommonBufferCallback;
      *(_DWORD *)(a1 + 144) = v16;
      *(_DWORD *)(a1 + 148) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 152) = 828862034;
    }
    v15 = CommonBuffer_AcquireBuffers(v8, v16, *(_DWORD *)(a1 + 20), (int)&v24, a1, 828862034, v12);
    if ( v15 >= 0 )
    {
      v17 = KeAcquireSpinLockRaiseToDpc(v3);
      v18 = v24;
      *(_BYTE *)(a1 + 96) = v17;
      if ( v18 != &v24 )
      {
        **(_QWORD **)(a1 + 208) = v18;
        v24[1] = *(_QWORD *)(a1 + 208);
        *v25 = v10;
        *(_QWORD *)(a1 + 208) = v25;
        v25 = &v24;
        v24 = &v24;
      }
      KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 96));
    }
    else
    {
      LODWORD(v23) = v16;
      LODWORD(v22) = *(_DWORD *)(a1 + 64);
      LODWORD(v21) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
      LODWORD(v20) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL),
        2u,
        0xDu,
        0x10u,
        (__int64)&WPP_f16db56c32e588ad62ddfc8618af2a2c_Traceguids,
        v20,
        v21,
        v22,
        v23);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v15;
}
