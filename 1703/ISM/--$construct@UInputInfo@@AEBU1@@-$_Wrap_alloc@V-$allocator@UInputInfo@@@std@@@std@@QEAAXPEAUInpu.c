/*
 * XREFs of ??$construct@UInputInfo@@AEBU1@@?$_Wrap_alloc@V?$allocator@UInputInfo@@@std@@@std@@QEAAXPEAUInputInfo@@AEBU2@@Z @ 0x180054AF0
 * Callers:
 *     ??$emplace_back@AEAUInputInfo@@@?$vector@UInputInfo@@V?$allocator@UInputInfo@@@std@@@std@@QEAAXAEAUInputInfo@@@Z @ 0x180054868 (--$emplace_back@AEAUInputInfo@@@-$vector@UInputInfo@@V-$allocator@UInputInfo@@@std@@@std@@QEAAXA.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<InputInfo>>::construct<InputInfo,InputInfo const &>(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3)
{
  __int64 v3; // rax
  __int128 v4; // xmm1

  if ( a2 )
  {
    v3 = 14LL;
    do
    {
      *a2 = *a3;
      a2[1] = a3[1];
      a2[2] = a3[2];
      a2[3] = a3[3];
      a2[4] = a3[4];
      a2[5] = a3[5];
      a2[6] = a3[6];
      a2 += 8;
      v4 = a3[7];
      a3 += 8;
      *(a2 - 1) = v4;
      --v3;
    }
    while ( v3 );
    *a2 = *a3;
    a2[1] = a3[1];
    a2[2] = a3[2];
    a2[3] = a3[3];
    a2[4] = a3[4];
    a2[5] = a3[5];
  }
}
