/*
 * XREFs of NtGdiCancelDC @ 0x1C02A6FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0049624 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@XZ @ 0x1C0291324 (--0DCOBJA@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiCancelDC(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  MLOCKFAST *v6; // rcx
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF

  GreAcquireHmgrSemaphore();
  DCOBJA::DCOBJA((DCOBJA *)v8);
  v2 = 1;
  LOBYTE(v3) = 1;
  v4 = HmgShareLockCheck(a1, v3);
  v8[0] = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 512);
    if ( v5 )
      *(_DWORD *)(v5 + 112) |= 0x40000000u;
  }
  else
  {
    v2 = 0;
  }
  DCOBJA::~DCOBJA((DCOBJA *)v8);
  GreReleaseHmgrSemaphore(v6);
  return v2;
}
