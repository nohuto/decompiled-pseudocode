/*
 * XREFs of ??0?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@PEBU_TlgProvider_t@@PEBD_N@Z @ 0x180075A30
 * Callers:
 *     ??$?0$$$V@IconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800757C4 (--$-0$$$V@IconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wist.c)
 *     ??$?0$$$V@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180078460 (--$-0$$$V@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D.c)
 * Callees:
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall wil::ActivityBase<1,35184372088832,5>::ActivityBase<1,35184372088832,5>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v5; // rcx
  __int64 result; // rax

  v3 = a1 + 56;
  *(_QWORD *)a1 = &wil::ActivityBase<1,35184372088832,5>::`vftable';
  *(_QWORD *)(a1 + 40) = a1 + 104;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  v5 = (_QWORD *)(a1 + 144);
  *(_QWORD *)(v3 + 40) = a2;
  *(_DWORD *)v3 = 0;
  *(_BYTE *)(v3 + 4) = 0;
  *(_QWORD *)(v3 + 56) = a3;
  *(_BYTE *)(v3 + 72) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 64) = 0LL;
  *(_QWORD *)(v3 + 80) = 1LL;
  v5[18] = 0LL;
  v5[19] = 0LL;
  memset_0(v5, 0, 0x90uLL);
  *(_QWORD *)(v3 + 248) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 312) = 0LL;
  return result;
}
