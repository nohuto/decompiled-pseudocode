/*
 * XREFs of AslpFileGetVersionBlock @ 0x140682514
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x140682468 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     RtlFileMapFree @ 0x140002870 (RtlFileMapFree.c)
 *     RtlULongLongAdd @ 0x14009A12C (RtlULongLongAdd.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlFileMapMapView @ 0x140219770 (RtlFileMapMapView.c)
 *     AslFree @ 0x1403B7E1C (AslFree.c)
 *     AslAlloc @ 0x1403B8554 (AslAlloc.c)
 *     LdrResSearchResource @ 0x140464D10 (LdrResSearchResource.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x140680738 (AslFileMappingEnsure.c)
 */

__int64 __fastcall AslpFileGetVersionBlock(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // ecx
  ULONGLONG v10; // r12
  int v11; // eax
  __int64 v12; // rbx
  size_t v13; // rbx
  const wchar_t *v14; // r13
  __int64 v15; // r9
  __int64 v16; // rcx
  _WORD *v17; // rax
  _WORD *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  ULONGLONG pullResult; // [rsp+48h] [rbp-B0h] BYREF
  ULONGLONG ullAugend; // [rsp+50h] [rbp-A8h] BYREF
  _WORD *v24; // [rsp+58h] [rbp-A0h]
  _QWORD v25[3]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v26[16]; // [rsp+78h] [rbp-80h] BYREF
  ULONGLONG ullAddend; // [rsp+118h] [rbp+20h] BYREF

  ullAugend = 0LL;
  ullAddend = 0LL;
  v24 = 0LL;
  memset(v26, 0, 0x38uLL);
  v6 = *(_QWORD *)(a3 + 584);
  if ( v6 )
  {
    v7 = 0LL;
    if ( *(_WORD *)(v6 + 2) )
      v7 = v6 + 40;
    *a2 = v7;
    *a1 = v6;
    v8 = 0;
    goto LABEL_34;
  }
  v8 = AslFileMappingEnsure(a3);
  if ( v8 < 0 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_34;
  }
  v9 = *(_DWORD *)(a3 + 576);
  if ( (unsigned int)(v9 - 5) > 1 || v9 == 5 )
  {
    v8 = -1073741687;
    goto LABEL_34;
  }
  v25[0] = 16LL;
  v25[1] = 1LL;
  v25[2] = 0LL;
  v10 = *(_QWORD *)(a3 + 544);
  pullResult = *(_QWORD *)(a3 + 552);
  v11 = LdrResSearchResource(
          v10,
          v25,
          3u,
          *(_BYTE *)(a3 + 571) == 0 ? 0x200 : 0,
          (__int64)&ullAugend,
          (__int64 *)&ullAddend,
          0LL,
          0LL);
  v8 = v11;
  if ( v11 < 0 )
  {
    if ( (unsigned int)(v11 + 1073741687) <= 2 )
      goto LABEL_34;
    if ( v11 != -1073741701 )
      goto LABEL_15;
    if ( *(_BYTE *)(a3 + 571) )
      goto LABEL_15;
    v12 = *(_QWORD *)(a3 + 520);
    memset(v26, 0, 0x38uLL);
    LOBYTE(v26[6]) = 0;
    v26[0] = v12;
    v8 = RtlFileMapMapView((__int64)v26, 1);
    if ( v8 < 0
      || (AslLogCallPrintf(3LL),
          v10 = v26[3],
          v8 = LdrResSearchResource(v26[3], v25, 3u, 0, (__int64)&ullAugend, (__int64 *)&ullAddend, 0LL, 0LL),
          AslLogCallPrintf(2LL),
          v8 < 0) )
    {
LABEL_15:
      AslLogCallPrintf(1LL);
      goto LABEL_34;
    }
  }
  v13 = ullAddend;
  v14 = (const wchar_t *)ullAugend;
  if ( RtlULongLongAdd(ullAugend, ullAddend, &pullResult) < 0 || (unsigned __int64)v14 < v10 || pullResult >= v15 + v10 )
  {
    v8 = -1073741687;
    goto LABEL_33;
  }
  if ( v13 < 0x5C || wcsicmp(v14 + 3, L"VS_VERSION_INFO") )
  {
    v8 = -1073741595;
    goto LABEL_33;
  }
  v17 = AslAlloc(v16, v13 + 16);
  v18 = v17;
  v24 = v17;
  if ( !v17 )
  {
    v8 = -1073741801;
LABEL_33:
    AslLogCallPrintf(1LL);
    goto LABEL_34;
  }
  memmove(v17, v14, v13);
  if ( v13 < (unsigned __int16)*v18 )
    *v18 = v13;
  *(_QWORD *)(a3 + 584) = v18;
  v24 = 0LL;
  v19 = *(_QWORD *)(a3 + 584);
  v20 = 0LL;
  if ( *(_WORD *)(v19 + 2) )
    v20 = v19 + 40;
  *a2 = v20;
  *a1 = v19;
  v8 = 0;
LABEL_34:
  RtlFileMapFree(v26);
  return (unsigned int)v8;
}
