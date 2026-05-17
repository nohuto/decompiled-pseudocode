/*
 * XREFs of LdrpResGetResourceDirectory @ 0x1800376C0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180037A78 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 *     RtlULongLongAdd @ 0x180039194 (RtlULongLongAdd.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x18007FEF4 (LdrpSectionTableFromVirtualAddress.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC874 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResGetResourceDirectory(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int16 a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v6; // rax
  char v8; // r12
  bool v9; // r14
  unsigned int v10; // ebx
  int v11; // r15d
  __int64 result; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // r13
  __int128 *v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // esi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r14
  unsigned int *v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // cx
  int v24; // [rsp+48h] [rbp-150h] BYREF
  const wchar_t *v25; // [rsp+50h] [rbp-148h]
  int v26; // [rsp+58h] [rbp-140h] BYREF
  const wchar_t *v27; // [rsp+60h] [rbp-138h]
  __int128 v28; // [rsp+70h] [rbp-128h]
  __int128 v29; // [rsp+80h] [rbp-118h]
  __int128 v30; // [rsp+90h] [rbp-108h]
  __int128 v31; // [rsp+A0h] [rbp-F8h]
  __int128 v32; // [rsp+B0h] [rbp-E8h]
  __int128 v33; // [rsp+C0h] [rbp-D8h]
  __int128 v34; // [rsp+D0h] [rbp-C8h]
  __int128 v35; // [rsp+E0h] [rbp-B8h]
  __int128 v36; // [rsp+F0h] [rbp-A8h]
  __int128 v37; // [rsp+100h] [rbp-98h]
  __int128 v38; // [rsp+110h] [rbp-88h]
  __int128 v39; // [rsp+120h] [rbp-78h]
  __int128 v40; // [rsp+130h] [rbp-68h]
  __int128 v41; // [rsp+140h] [rbp-58h]
  __int128 v42; // [rsp+150h] [rbp-48h]
  unsigned __int64 v43; // [rsp+1A0h] [rbp+8h] BYREF
  unsigned __int64 v44; // [rsp+1A8h] [rbp+10h]
  unsigned __int64 *v45; // [rsp+1B8h] [rbp+20h]

  v45 = a4;
  v44 = a2;
  v6 = a2;
  v8 = 1;
  v9 = 1;
  v24 = 4456514;
  v25 = L"LdrpResGetResourceDirectory Enter";
  v26 = 4325440;
  v27 = L"LdrpResGetResourceDirectory Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
  {
    LdrpTraceLoadMUIDll(&v24, MEMORY[0x7FFE0384]);
    v6 = v44;
    a4 = v45;
  }
  v10 = 0;
  if ( !a1 || !a4 || !a5 )
    return 3221225485LL;
  if ( (a1 & 3) != 0 )
  {
    v9 = (a1 & 1) == 0;
    a1 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  v11 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v11 == 0, a1, v6, &v43);
  if ( (int)result >= 0 )
  {
    v14 = v43;
    v15 = (__int128 *)(v43 + 24);
    if ( *(_WORD *)(v43 + 24) == 267 )
    {
      v28 = *v15;
      v29 = *(_OWORD *)(v43 + 40);
      v30 = *(_OWORD *)(v43 + 56);
      v31 = *(_OWORD *)(v43 + 72);
      v32 = *(_OWORD *)(v43 + 88);
      v33 = *(_OWORD *)(v43 + 104);
      v34 = *(_OWORD *)(v43 + 120);
      v35 = *(_OWORD *)(v43 + 136);
      v36 = *(_OWORD *)(v43 + 152);
      v37 = *(_OWORD *)(v43 + 168);
      v38 = *(_OWORD *)(v43 + 184);
      v39 = *(_OWORD *)(v43 + 200);
      v40 = *(_OWORD *)(v43 + 216);
      v41 = *(_OWORD *)(v43 + 232);
    }
    else
    {
      if ( *(_WORD *)v15 != 523 )
      {
        v10 = -1073741701;
        goto LABEL_40;
      }
      v28 = *v15;
      v29 = *(_OWORD *)(v43 + 40);
      v30 = *(_OWORD *)(v43 + 56);
      v31 = *(_OWORD *)(v43 + 72);
      v32 = *(_OWORD *)(v43 + 88);
      v33 = *(_OWORD *)(v43 + 104);
      v34 = *(_OWORD *)(v43 + 120);
      v35 = *(_OWORD *)(v43 + 136);
      v36 = *(_OWORD *)(v43 + 152);
      v37 = *(_OWORD *)(v43 + 168);
      v38 = *(_OWORD *)(v43 + 184);
      v39 = *(_OWORD *)(v43 + 200);
      v40 = *(_OWORD *)(v43 + 216);
      v41 = *(_OWORD *)(v43 + 232);
      v42 = *(_OWORD *)(v43 + 248);
      v8 = 0;
    }
    v16 = HIDWORD(v34);
    if ( v8 )
      v16 = HIDWORD(v33);
    if ( v16 <= 2 )
    {
      v10 = -1073741687;
    }
    else
    {
      v17 = v36;
      if ( v8 )
        v17 = v35;
      if ( v17 )
      {
        if ( v9 || v17 < HIDWORD(v31) )
        {
          if ( (int)RtlULongLongAdd(a1, v17, &v43, v13) < 0 )
          {
            v10 = -1073741701;
            goto LABEL_40;
          }
          v18 = v43;
          v19 = v44;
        }
        else
        {
          v19 = v44;
          v20 = (unsigned int *)LdrpSectionTableFromVirtualAddress(a1, v44, v43, 0, v17, v11 != 0);
          if ( !v20 )
          {
            v10 = -1073741701;
            goto LABEL_40;
          }
          if ( !v20[4] )
          {
            v10 = -1073741687;
            goto LABEL_40;
          }
          v18 = a1 + v20[5] - (unsigned __int64)v20[3] + v17;
        }
        if ( !v18 )
        {
          v10 = -1073741687;
          goto LABEL_40;
        }
        if ( !v11 )
          goto LABEL_39;
        if ( v18 <= a1 )
          goto LABEL_44;
        v21 = (a1 & 0xFFFFFFFFFFFFFFFCuLL) + v19;
        if ( v18 + 16 > v21 )
          goto LABEL_44;
        v22 = *(_WORD *)(v18 + 12);
        v23 = *(_WORD *)(v18 + 14);
        if ( !v22 && !v23 )
        {
          v10 = -1073741686;
          goto LABEL_40;
        }
        if ( v18 + 8LL * (v23 + v22) > v21 )
        {
LABEL_44:
          v10 = -1073741701;
        }
        else
        {
LABEL_39:
          *v45 = v18;
          *a5 = v14;
        }
      }
      else
      {
        v10 = -1073741687;
      }
    }
LABEL_40:
    if ( (MEMORY[0x7FFE0385] & 1) != 0 )
      LdrpTraceLoadMUIDll(&v26, MEMORY[0x7FFE0384]);
    return v10;
  }
  return result;
}
