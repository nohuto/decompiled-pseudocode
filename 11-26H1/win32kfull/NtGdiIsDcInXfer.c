/*
 * XREFs of NtGdiIsDcInXfer @ 0x140239880
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x140015860 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14004129C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiIsDcInXfer(HDC a1, void *a2)
{
  int v3; // eax
  _QWORD v5[9]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+90h] [rbp+18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v5, a1);
  v3 = 0;
  if ( v5[0] )
  {
    LOBYTE(v3) = *(_DWORD *)(v5[0] + 2136LL) != 0;
    v6 = v3;
    GreProbeAndWriteToUntrustedVa(a2, 4uLL, &v6, 4uLL, 1uLL);
    DCOBJA::~DCOBJA((DCOBJA *)v5);
    return 0LL;
  }
  else
  {
    DCOBJA::~DCOBJA((DCOBJA *)v5);
    return 3221225485LL;
  }
}
