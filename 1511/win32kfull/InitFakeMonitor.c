/*
 * XREFs of InitFakeMonitor @ 0x1C01CD990
 * Callers:
 *     CreatePointerDeviceInfo @ 0x1C01C9610 (CreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitFakeMonitor(__int64 a1)
{
  __int64 result; // rax
  __int128 v2; // xmm1

  *(_OWORD *)(*(_QWORD *)(a1 + 280) + 44LL) = *(_OWORD *)(gpDispInfo + 120LL);
  *(_OWORD *)(*(_QWORD *)(a1 + 280) + 60LL) = *(_OWORD *)(gpDispInfo + 136LL);
  *(_OWORD *)(*(_QWORD *)(a1 + 280) + 28LL) = *(_OWORD *)(gpDispInfo + 104LL);
  result = *(_QWORD *)(a1 + 280);
  v2 = *(_OWORD *)(result + 28);
  *(_DWORD *)(a1 + 724) = 1;
  *(_OWORD *)(a1 + 124) = v2;
  return result;
}
