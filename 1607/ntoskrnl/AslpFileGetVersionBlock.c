/*
 * XREFs of AslpFileGetVersionBlock @ 0x1406C80D4
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x1406C8028 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     RtlFileMapFree @ 0x140084CFC (RtlFileMapFree.c)
 *     RtlULongLongAdd @ 0x1400890B4 (RtlULongLongAdd.c)
 *     _wcsicmp @ 0x14014D79C (_wcsicmp.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     RtlFileMapMapView @ 0x140233920 (RtlFileMapMapView.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     LdrResSearchResource @ 0x14051B158 (LdrResSearchResource.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1406C582C (AslFileMappingEnsure.c)
 */

__int64 __fastcall AslpFileGetVersionBlock(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // r8
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  const wchar_t *v13; // rax
  ULONGLONG v14; // rbx
  const wchar_t *v15; // r13
  __int64 v16; // r9
  const char *v17; // r9
  int v18; // r8d
  __int64 v19; // rcx
  _WORD *v20; // rax
  _WORD *v21; // r14
  __int64 v22; // rcx
  __int64 v24; // [rsp+20h] [rbp-D8h]
  __int64 v25; // [rsp+20h] [rbp-D8h]
  __int64 v26; // [rsp+28h] [rbp-D0h]
  __int64 v27; // [rsp+28h] [rbp-D0h]
  ULONGLONG pullResult; // [rsp+48h] [rbp-B0h] BYREF
  ULONGLONG ullAugend; // [rsp+50h] [rbp-A8h] BYREF
  _WORD *v30; // [rsp+58h] [rbp-A0h]
  ULONGLONG v31; // [rsp+60h] [rbp-98h]
  _QWORD v32[3]; // [rsp+68h] [rbp-90h] BYREF
  _QWORD v33[15]; // [rsp+80h] [rbp-78h] BYREF
  ULONGLONG ullAddend; // [rsp+118h] [rbp+20h] BYREF

  ullAugend = 0LL;
  v30 = 0LL;
  ullAddend = 0LL;
  memset(v33, 0, 0x38uLL);
  v6 = *(_QWORD *)(a3 + 584);
  if ( v6 )
  {
    if ( *(_WORD *)(v6 + 2) >= 0x34u )
      *a2 = v6 + 40;
    else
      *a2 = 0LL;
    *a1 = v6;
    v7 = 0;
    goto LABEL_47;
  }
  v8 = AslFileMappingEnsure(a3);
  v7 = v8;
  if ( v8 < 0 )
  {
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetVersionBlock",
      1328,
      (unsigned int)"AslFileMappingEnsure failed [%x]",
      v8);
    goto LABEL_47;
  }
  v9 = *(_DWORD *)(a3 + 576);
  if ( (unsigned int)(v9 - 5) > 1 || v9 == 5 )
  {
    v7 = -1073741687;
    goto LABEL_47;
  }
  v32[0] = 16LL;
  v32[1] = 1LL;
  v32[2] = 0LL;
  v31 = *(_QWORD *)(a3 + 544);
  pullResult = *(_QWORD *)(a3 + 552);
  v10 = LdrResSearchResource(
          v31,
          v32,
          3u,
          *(_BYTE *)(a3 + 571) == 0 ? 0x200 : 0,
          (__int64)&ullAugend,
          (__int64 *)&ullAddend,
          0LL,
          0LL);
  v7 = v10;
  if ( v10 < 0 )
  {
    if ( (unsigned int)(v10 + 1073741687) <= 2 )
      goto LABEL_47;
    if ( v10 != -1073741701 || *(_BYTE *)(a3 + 571) || *(_DWORD *)(a3 + 596) )
    {
      LODWORD(v26) = v10;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGetVersionBlock",
        1436,
        (unsigned int)"LdrResFindResource failed %ls [%x]",
        a3,
        v26);
      goto LABEL_47;
    }
    v11 = *(_QWORD *)(a3 + 520);
    memset(v33, 0, 0x38uLL);
    LOBYTE(v33[6]) = 0;
    v33[0] = v11;
    v12 = RtlFileMapMapView((__int64)v33, 1);
    v7 = v12;
    if ( v12 < 0 )
    {
      LODWORD(v24) = v12;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGetVersionBlock",
        1403,
        (unsigned int)"RtlFileMapMapView failed [%x]",
        v24);
      goto LABEL_47;
    }
    AslLogCallPrintf(
      3LL,
      (unsigned int)"AslpFileGetVersionBlock",
      1412,
      (unsigned int)"Re-mapped file as image to get version block: %ls",
      a3);
    v31 = v33[3];
    v7 = LdrResSearchResource(v33[3], v32, 3u, 0, (__int64)&ullAugend, (__int64 *)&ullAddend, 0LL, 0LL);
    v13 = L"Found";
    if ( v7 < 0 )
      v13 = L"Did not find";
    LODWORD(v27) = v7;
    AslLogCallPrintf(
      2LL,
      (unsigned int)"AslpFileGetVersionBlock",
      1425,
      (unsigned int)"%ls version block after re-mapping as image [%x]",
      v13,
      v27);
    if ( v7 < 0 )
    {
      LODWORD(v25) = v7;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGetVersionBlock",
        1428,
        (unsigned int)"LdrResFindResource failed [%x]",
        v25);
      goto LABEL_47;
    }
  }
  v14 = ullAddend;
  v15 = (const wchar_t *)ullAugend;
  if ( RtlULongLongAdd(ullAugend, ullAddend, &pullResult) < 0 )
  {
    v17 = "Version block has bad size";
    v18 = 1450;
    goto LABEL_45;
  }
  if ( (unsigned __int64)v15 < v31 || pullResult > v16 + v31 )
  {
    v18 = 1462;
    goto LABEL_44;
  }
  if ( !*(_BYTE *)(a3 + 571) && !v33[1] && pullResult > *(_QWORD *)(a3 + 536) + v31 )
  {
    v18 = 1480;
LABEL_44:
    v17 = "Version block out of range";
LABEL_45:
    v7 = -1073741687;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileGetVersionBlock", v18, (_DWORD)v17);
    goto LABEL_47;
  }
  if ( v14 < 0x26 || wcsicmp(v15 + 3, L"VS_VERSION_INFO") )
  {
    v7 = -1073741595;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileGetVersionBlock", 1492, (unsigned int)"Version block invalid");
  }
  else
  {
    v20 = AslAlloc(v19, v14);
    v21 = v20;
    v30 = v20;
    if ( v20 )
    {
      memmove(v20, v15, v14);
      if ( v14 < (unsigned __int16)*v21 )
        *v21 = v14;
      *(_QWORD *)(a3 + 584) = v21;
      v30 = 0LL;
      v22 = *(_QWORD *)(a3 + 584);
      if ( *(_WORD *)(v22 + 2) >= 0x34u )
        *a2 = v22 + 40;
      else
        *a2 = 0LL;
      *a1 = v22;
      v7 = 0;
    }
    else
    {
      v7 = -1073741801;
      AslLogCallPrintf(1LL, (unsigned int)"AslpFileGetVersionBlock", 1503, (unsigned int)"Out of memory");
    }
  }
LABEL_47:
  RtlFileMapFree(v33);
  return (unsigned int)v7;
}
