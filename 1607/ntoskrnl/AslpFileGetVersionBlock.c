/*
 * XREFs of AslpFileGetVersionBlock @ 0x1406C820C
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x1406C8160 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     RtlFileMapFree @ 0x14010B304 (RtlFileMapFree.c)
 *     RtlULongLongAdd @ 0x14010D2A4 (RtlULongLongAdd.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlFileMapMapView @ 0x14023374C (RtlFileMapMapView.c)
 *     LdrResSearchResource @ 0x1404FE548 (LdrResSearchResource.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 *     AslAlloc @ 0x1405148D4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1406C5964 (AslFileMappingEnsure.c)
 */

__int64 __fastcall AslpFileGetVersionBlock(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // r8
  int v7; // ebx
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rbx
  ULONGLONG v11; // rbx
  const wchar_t *v12; // r13
  __int64 v13; // r9
  __int64 v14; // rcx
  _WORD *v15; // rax
  _WORD *v16; // r14
  __int64 v17; // rcx
  ULONGLONG pullResult; // [rsp+48h] [rbp-B0h] BYREF
  ULONGLONG ullAugend; // [rsp+50h] [rbp-A8h] BYREF
  _WORD *v21; // [rsp+58h] [rbp-A0h]
  ULONGLONG v22; // [rsp+60h] [rbp-98h]
  _QWORD v23[3]; // [rsp+68h] [rbp-90h] BYREF
  _QWORD v24[15]; // [rsp+80h] [rbp-78h] BYREF
  ULONGLONG ullAddend; // [rsp+118h] [rbp+20h] BYREF

  ullAugend = 0LL;
  v21 = 0LL;
  ullAddend = 0LL;
  memset(v24, 0, 0x38uLL);
  v6 = *(_QWORD *)(a3 + 584);
  if ( v6 )
  {
    if ( *(_WORD *)(v6 + 2) >= 0x34u )
      *a2 = v6 + 40;
    else
      *a2 = 0LL;
    *a1 = v6;
    v7 = 0;
    goto LABEL_40;
  }
  v7 = AslFileMappingEnsure(a3);
  if ( v7 < 0 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_40;
  }
  v8 = *(_DWORD *)(a3 + 576);
  if ( (unsigned int)(v8 - 5) > 1 || v8 == 5 )
  {
    v7 = -1073741687;
    goto LABEL_40;
  }
  v23[0] = 16LL;
  v23[1] = 1LL;
  v23[2] = 0LL;
  v22 = *(_QWORD *)(a3 + 544);
  pullResult = *(_QWORD *)(a3 + 552);
  v9 = LdrResSearchResource(
         v22,
         v23,
         3u,
         *(_BYTE *)(a3 + 571) == 0 ? 0x200 : 0,
         (__int64)&ullAugend,
         (__int64 *)&ullAddend,
         0LL,
         0LL);
  v7 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)(v9 + 1073741687) <= 2 )
      goto LABEL_40;
    if ( v9 != -1073741701 )
      goto LABEL_17;
    if ( *(_BYTE *)(a3 + 571) )
      goto LABEL_17;
    if ( *(_DWORD *)(a3 + 596) )
      goto LABEL_17;
    v10 = *(_QWORD *)(a3 + 520);
    memset(v24, 0, 0x38uLL);
    LOBYTE(v24[6]) = 0;
    v24[0] = v10;
    v7 = RtlFileMapMapView((__int64)v24, 1);
    if ( v7 < 0
      || (AslLogCallPrintf(3LL),
          v22 = v24[3],
          v7 = LdrResSearchResource(v24[3], v23, 3u, 0, (__int64)&ullAugend, (__int64 *)&ullAddend, 0LL, 0LL),
          AslLogCallPrintf(2LL),
          v7 < 0) )
    {
LABEL_17:
      AslLogCallPrintf(1LL);
      goto LABEL_40;
    }
  }
  v11 = ullAddend;
  v12 = (const wchar_t *)ullAugend;
  if ( RtlULongLongAdd(ullAugend, ullAddend, &pullResult) < 0
    || (unsigned __int64)v12 < v22
    || pullResult > v13 + v22
    || !*(_BYTE *)(a3 + 571) && !v24[1] && pullResult > *(_QWORD *)(a3 + 536) + v22 )
  {
    v7 = -1073741687;
    goto LABEL_39;
  }
  if ( v11 < 0x26 || wcsicmp(v12 + 3, L"VS_VERSION_INFO") )
  {
    v7 = -1073741595;
    goto LABEL_39;
  }
  v15 = AslAlloc(v14, v11);
  v16 = v15;
  v21 = v15;
  if ( !v15 )
  {
    v7 = -1073741801;
LABEL_39:
    AslLogCallPrintf(1LL);
    goto LABEL_40;
  }
  memmove(v15, v12, v11);
  if ( v11 < (unsigned __int16)*v16 )
    *v16 = v11;
  *(_QWORD *)(a3 + 584) = v16;
  v21 = 0LL;
  v17 = *(_QWORD *)(a3 + 584);
  if ( *(_WORD *)(v17 + 2) >= 0x34u )
    *a2 = v17 + 40;
  else
    *a2 = 0LL;
  *a1 = v17;
  v7 = 0;
LABEL_40:
  RtlFileMapFree(v24);
  return (unsigned int)v7;
}
