/*
 * XREFs of PfpParametersRead @ 0x14057221C
 * Callers:
 *     PfpParametersWatcher @ 0x140669FB8 (PfpParametersWatcher.c)
 *     PfpParametersInitialize @ 0x1407B3C34 (PfpParametersInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PfpGetParameter @ 0x1405727EC (PfpGetParameter.c)
 */

__int64 __fastcall PfpParametersRead(__int64 a1)
{
  __int128 v1; // xmm0
  void *v2; // rdi
  __int64 v3; // xmm1_8
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  int v8; // ecx
  int v9; // edx
  bool v10; // zf
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+38h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-18h]
  int v17; // [rsp+50h] [rbp-10h]

  v1 = *(_OWORD *)(a1 + 68);
  v2 = *(void **)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 84);
  v17 = *(_DWORD *)(a1 + 92);
  v16 = v3;
  LODWORD(v14) = 4;
  v15 = v1;
  if ( (int)PfpGetParameter(v2, (__int64)&v14) < 0 || InitSafeBootMode )
    LODWORD(v15) = 0x80000000;
  LODWORD(v14) = 4;
  PfpGetParameter(v2, (__int64)&v14);
  LODWORD(v14) = 4;
  PfpGetParameter(v2, (__int64)&v14);
  v5 = *(void **)(a1 + 8);
  LODWORD(v14) = 4;
  PfpGetParameter(v5, (__int64)&v14);
  v6 = *(void **)(a1 + 8);
  LODWORD(v14) = 4;
  PfpGetParameter(v6, (__int64)&v14);
  v7 = *(void **)(a1 + 8);
  LODWORD(v14) = 4;
  PfpGetParameter(v7, (__int64)&v14);
  v8 = -1073741811;
  v9 = v17;
  if ( (int)v15 < 0 )
    v10 = (_DWORD)v15 == 0x80000000;
  else
    v10 = (v15 & 0xFFFFFFFC) == 0;
  if ( v10
    && DWORD2(v15) <= 0x10000
    && HIDWORD(v15) <= 0x10000
    && (unsigned int)(v16 - 2500) <= 0xE09C
    && (unsigned int)(HIDWORD(v16) - 5000) <= 0xD6D8
    && (unsigned int)(v17 - 2500) <= 0xE09C )
  {
    v8 = 0;
  }
  if ( v8 >= 0 )
  {
    v11 = v15;
    v8 = 0;
    ++*(_DWORD *)(a1 + 512);
    v12 = v16;
    *(_OWORD *)(a1 + 68) = v11;
    *(_QWORD *)(a1 + 84) = v12;
    *(_DWORD *)(a1 + 92) = v9;
  }
  return (unsigned int)v8;
}
