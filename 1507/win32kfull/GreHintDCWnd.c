/*
 * XREFs of GreHintDCWnd @ 0x1C0016C90
 * Callers:
 *     UpdateRedirectedDCE @ 0x1C000B310 (UpdateRedirectedDCE.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0019FD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C025FF4C (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreHintDCWnd(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v6; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v17[40]; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0LL;
  v16[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v17);
  LOBYTE(v10) = 1;
  v11 = HmgShareLock(a1, v10);
  v16[0] = v11;
  if ( v11 )
  {
    *(_QWORD *)(v11 + 480) = a2;
    v12 = v16[0];
    *(_QWORD *)(v16[0] + 488LL) = a3;
    if ( a3 )
    {
      v13 = ValidateHwnd(a3);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 16);
        if ( v14 )
          v6 = **(_QWORD **)(v14 + 384);
      }
    }
    *(_QWORD *)(v12 + 496) = v6;
    LODWORD(v6) = 1;
    *(_DWORD *)(v16[0] + 504LL) = a4;
    *(_DWORD *)(v16[0] + 508LL) = a5;
    if ( v16[0] )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)v16);
      DEC_SHARE_REF_CNT(v16[0]);
    }
  }
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v17);
  return (unsigned int)v6;
}
