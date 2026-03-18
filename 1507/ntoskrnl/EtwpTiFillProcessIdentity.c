/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x140195E68
 * Callers:
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406E2BC0 (EtwTimLogRedirectionTrustPolicy.c)
 * Callees:
 *     EtwpGetProcessStartKey @ 0x14054D95C (EtwpGetProcessStartKey.c)
 */

__int64 __fastcall EtwpTiFillProcessIdentity(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2 + 744;
  *(_DWORD *)(a1 + 8) = 4;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 16) = a2 + 776;
  *(_DWORD *)(a1 + 24) = 8;
  *a3 = EtwpGetProcessStartKey(a2);
  *(_DWORD *)(a1 + 44) = 0;
  *(_QWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 40) = 8;
  *(_DWORD *)(a1 + 60) = 0;
  *(_QWORD *)(a1 + 48) = a2 + 1712;
  *(_DWORD *)(a1 + 56) = 1;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 64) = a2 + 1713;
  *(_DWORD *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 92) = 0;
  *(_QWORD *)(a1 + 80) = a2 + 1714;
  result = 6LL;
  *(_DWORD *)(a1 + 88) = 1;
  return result;
}
