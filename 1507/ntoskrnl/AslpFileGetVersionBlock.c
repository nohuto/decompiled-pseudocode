/*
 * XREFs of AslpFileGetVersionBlock @ 0x140707230
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x140707184 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     RtlFileMapFree @ 0x14016C7F8 (RtlFileMapFree.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlFileMapMapView @ 0x140269450 (RtlFileMapMapView.c)
 *     LdrResSearchResource @ 0x14046391C (LdrResSearchResource.c)
 *     AslFree @ 0x1405783C4 (AslFree.c)
 *     AslAlloc @ 0x1405783E4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x14070556C (AslFileMappingEnsure.c)
 */

__int64 __fastcall AslpFileGetVersionBlock(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  void *v13; // r13
  __int64 v14; // rcx
  _WORD *v15; // rax
  _WORD *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  void *Src; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v21[4]; // [rsp+58h] [rbp-80h] BYREF
  _QWORD v22[12]; // [rsp+78h] [rbp-60h] BYREF
  size_t Size; // [rsp+F8h] [rbp+20h] BYREF

  Src = 0LL;
  Size = 0LL;
  memset(v22, 0, 0x38uLL);
  v6 = *(_QWORD *)(a3 + 584);
  if ( v6 )
  {
    v7 = 0LL;
    if ( *(_WORD *)(v6 + 2) )
      v7 = v6 + 40;
    *a2 = v7;
    *a1 = v6;
    v8 = 0;
    goto LABEL_29;
  }
  v8 = AslFileMappingEnsure(a3);
  if ( v8 < 0 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_29;
  }
  v9 = *(_DWORD *)(a3 + 576);
  if ( (unsigned int)(v9 - 5) > 1 || v9 == 5 )
  {
    v8 = -1073741687;
    goto LABEL_29;
  }
  v21[0] = 16LL;
  v21[1] = 1LL;
  v21[2] = 0LL;
  v10 = LdrResSearchResource(
          *(_QWORD *)(a3 + 544),
          v21,
          3u,
          (*(_BYTE *)(a3 + 571) == 0 ? 0x200 : 0) | 0x2000u,
          (__int64)&Src,
          &Size,
          0LL,
          0LL);
  v8 = v10;
  if ( v10 < 0 )
  {
    if ( (unsigned int)(v10 + 1073741687) <= 2 )
      goto LABEL_29;
    if ( v10 != -1073741701 )
      goto LABEL_28;
    if ( *(_BYTE *)(a3 + 571) )
      goto LABEL_28;
    v11 = *(_QWORD *)(a3 + 520);
    memset(v22, 0, 0x38uLL);
    LOBYTE(v22[6]) = 0;
    v22[0] = v11;
    v8 = RtlFileMapMapView((__int64)v22, 1);
    if ( v8 < 0
      || (AslLogCallPrintf(3LL),
          v8 = LdrResSearchResource(v22[3], v21, 3u, 0, (__int64)&Src, &Size, 0LL, 0LL),
          AslLogCallPrintf(2LL),
          v8 < 0) )
    {
LABEL_28:
      AslLogCallPrintf(1LL);
      goto LABEL_29;
    }
  }
  v12 = Size;
  if ( Size < 0x5C || (v13 = Src, wcsicmp((const wchar_t *)Src + 3, L"VS_VERSION_INFO")) )
  {
    v8 = -1073741595;
    goto LABEL_28;
  }
  v15 = AslAlloc(v14, v12 + 16);
  v16 = v15;
  if ( !v15 )
  {
    v8 = -1073741801;
    goto LABEL_28;
  }
  memmove(v15, v13, v12);
  if ( v12 < (unsigned __int16)*v16 )
    *v16 = v12;
  *(_QWORD *)(a3 + 584) = v16;
  v17 = *(_QWORD *)(a3 + 584);
  v18 = 0LL;
  if ( *(_WORD *)(v17 + 2) )
    v18 = v17 + 40;
  *a2 = v18;
  *a1 = v17;
  v8 = 0;
LABEL_29:
  RtlFileMapFree(v22);
  return (unsigned int)v8;
}
