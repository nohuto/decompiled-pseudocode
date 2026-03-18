/*
 * XREFs of GreHintDCWnd @ 0x1C0030DE0
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00FBE70 (UpdateRedirectedDCE.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreHintDCWnd(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a2;
  v6 = 0LL;
  LOBYTE(a2) = 1;
  v14[1] = 0LL;
  v9 = HmgShareLock(a1, a2);
  v14[0] = v9;
  v10 = v9;
  if ( !v9 )
    return 0LL;
  *(_QWORD *)(v9 + 480) = v5;
  *(_QWORD *)(v9 + 488) = a3;
  if ( a3 )
  {
    v12 = ValidateHwnd(a3);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 16);
      if ( v13 )
        v6 = **(_QWORD **)(v13 + 376);
    }
  }
  *(_QWORD *)(v10 + 496) = v6;
  *(_DWORD *)(v10 + 504) = a4;
  *(_DWORD *)(v10 + 508) = a5;
  XDCOBJ::RestoreAttributes((XDCOBJ *)v14);
  DEC_SHARE_REF_CNT(v14[0]);
  return 1LL;
}
