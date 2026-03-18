/*
 * XREFs of NtGdiScaleViewportExtEx @ 0x140207400
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1402075D8 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiScaleViewportExtEx(HDC a1, int a2, int a3, int a4, int a5, void *a6)
{
  unsigned int v9; // ebx
  DC *v10; // rax
  _DWORD *v11; // rcx
  int v12; // edi
  int v13; // esi
  __int64 v15; // [rsp+38h] [rbp-A0h] BYREF
  DC *v16[19]; // [rsp+40h] [rbp-98h] BYREF

  v9 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v16, a1);
  v10 = v16[0];
  if ( v16[0] )
  {
    if ( a6 )
    {
      v15 = *(_QWORD *)(*((_QWORD *)v16[0] + 122) + 332LL);
      GreProbeAndWriteToUntrustedVa(a6, 8uLL, &v15, 8uLL, 4uLL);
      v10 = v16[0];
    }
    v11 = (_DWORD *)*((_QWORD *)v10 + 122);
    if ( v11[26] <= 6u )
      goto LABEL_12;
    v12 = v11[83] * a2;
    v13 = v11[84] * a4;
    if ( a3 && a5 && (v12 != 0x80000000 || a3 != -1) && (v13 != 0x80000000 || a5 != -1) && v12 / a3 && v13 / a5 )
    {
      v11[83] = v12 / a3;
      *(_DWORD *)(*((_QWORD *)v16[0] + 122) + 336LL) = v13 / a5;
      DC::MirrorWindowOrg(v16[0]);
      *(_DWORD *)(*((_QWORD *)v16[0] + 122) + 340LL) |= 0x4090u;
LABEL_12:
      v9 = 1;
    }
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
  return v9;
}
