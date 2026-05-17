/*
 * XREFs of LdrpResGetResourceDirectory @ 0x180037860
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180037C1C (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     RtlULongLongAdd @ 0x18003935C (RtlULongLongAdd.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x18007AF40 (LdrpSectionTableFromVirtualAddress.c)
 *     LdrpTraceLoadMUIDll @ 0x1800D44B4 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResGetResourceDirectory(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int16 a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v5; // rax
  char v8; // r12
  bool v9; // r14
  unsigned int v10; // ebx
  int v11; // r15d
  __int64 result; // rax
  unsigned __int64 v13; // r13
  __int128 *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // esi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r14
  unsigned int *v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // cx
  int v23; // [rsp+48h] [rbp-150h] BYREF
  const wchar_t *v24; // [rsp+50h] [rbp-148h]
  int v25; // [rsp+58h] [rbp-140h] BYREF
  const wchar_t *v26; // [rsp+60h] [rbp-138h]
  __int128 v27; // [rsp+70h] [rbp-128h]
  __int128 v28; // [rsp+80h] [rbp-118h]
  __int128 v29; // [rsp+90h] [rbp-108h]
  __int128 v30; // [rsp+A0h] [rbp-F8h]
  __int128 v31; // [rsp+B0h] [rbp-E8h]
  __int128 v32; // [rsp+C0h] [rbp-D8h]
  __int128 v33; // [rsp+D0h] [rbp-C8h]
  __int128 v34; // [rsp+E0h] [rbp-B8h]
  __int128 v35; // [rsp+F0h] [rbp-A8h]
  __int128 v36; // [rsp+100h] [rbp-98h]
  __int128 v37; // [rsp+110h] [rbp-88h]
  __int128 v38; // [rsp+120h] [rbp-78h]
  __int128 v39; // [rsp+130h] [rbp-68h]
  __int128 v40; // [rsp+140h] [rbp-58h]
  __int128 v41; // [rsp+150h] [rbp-48h]
  unsigned __int64 v42; // [rsp+1A0h] [rbp+8h] BYREF
  unsigned __int64 v43; // [rsp+1A8h] [rbp+10h]
  unsigned __int64 *v44; // [rsp+1B8h] [rbp+20h]

  v44 = a4;
  v43 = a2;
  v5 = a4;
  v8 = 1;
  v9 = 1;
  v25 = 4456514;
  v26 = L"LdrpResGetResourceDirectory Enter";
  v23 = 4325440;
  v24 = L"LdrpResGetResourceDirectory Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
  {
    LdrpTraceLoadMUIDll(&v25, MEMORY[0x7FFE0384]);
    a2 = v43;
    v5 = v44;
  }
  v10 = 0;
  if ( !a1 || !v5 || !a5 )
    return 3221225485LL;
  if ( (a1 & 3) != 0 )
  {
    v9 = (a1 & 1) == 0;
    a1 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  v11 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v11 == 0, a1, a2, &v42);
  if ( (int)result >= 0 )
  {
    v13 = v42;
    v14 = (__int128 *)(v42 + 24);
    if ( *(_WORD *)(v42 + 24) == 267 )
    {
      v27 = *v14;
      v28 = *(_OWORD *)(v42 + 40);
      v29 = *(_OWORD *)(v42 + 56);
      v30 = *(_OWORD *)(v42 + 72);
      v31 = *(_OWORD *)(v42 + 88);
      v32 = *(_OWORD *)(v42 + 104);
      v33 = *(_OWORD *)(v42 + 120);
      v34 = *(_OWORD *)(v42 + 136);
      v35 = *(_OWORD *)(v42 + 152);
      v36 = *(_OWORD *)(v42 + 168);
      v37 = *(_OWORD *)(v42 + 184);
      v38 = *(_OWORD *)(v42 + 200);
      v39 = *(_OWORD *)(v42 + 216);
      v40 = *(_OWORD *)(v42 + 232);
    }
    else
    {
      if ( *(_WORD *)v14 != 523 )
      {
        v10 = -1073741701;
        goto LABEL_40;
      }
      v27 = *v14;
      v28 = *(_OWORD *)(v42 + 40);
      v29 = *(_OWORD *)(v42 + 56);
      v30 = *(_OWORD *)(v42 + 72);
      v31 = *(_OWORD *)(v42 + 88);
      v32 = *(_OWORD *)(v42 + 104);
      v33 = *(_OWORD *)(v42 + 120);
      v34 = *(_OWORD *)(v42 + 136);
      v35 = *(_OWORD *)(v42 + 152);
      v36 = *(_OWORD *)(v42 + 168);
      v37 = *(_OWORD *)(v42 + 184);
      v38 = *(_OWORD *)(v42 + 200);
      v39 = *(_OWORD *)(v42 + 216);
      v40 = *(_OWORD *)(v42 + 232);
      v41 = *(_OWORD *)(v42 + 248);
      v8 = 0;
    }
    v15 = HIDWORD(v33);
    if ( v8 )
      v15 = HIDWORD(v32);
    if ( v15 <= 2 )
    {
      v10 = -1073741687;
    }
    else
    {
      v16 = v35;
      if ( v8 )
        v16 = v34;
      if ( v16 )
      {
        if ( v9 || v16 < HIDWORD(v30) )
        {
          if ( (int)RtlULongLongAdd(a1, v16, &v42) < 0 )
          {
            v10 = -1073741701;
            goto LABEL_40;
          }
          v17 = v42;
          v18 = v43;
        }
        else
        {
          v18 = v43;
          v19 = (unsigned int *)LdrpSectionTableFromVirtualAddress(a1, v43, v42, 0, v16, v11 != 0);
          if ( !v19 )
          {
            v10 = -1073741701;
            goto LABEL_40;
          }
          if ( !v19[4] )
          {
            v10 = -1073741687;
            goto LABEL_40;
          }
          v17 = a1 + v19[5] - (unsigned __int64)v19[3] + v16;
        }
        if ( !v17 )
        {
          v10 = -1073741687;
          goto LABEL_40;
        }
        if ( !v11 )
          goto LABEL_39;
        if ( v17 <= a1 )
          goto LABEL_44;
        v20 = (a1 & 0xFFFFFFFFFFFFFFFCuLL) + v18;
        if ( v17 + 16 > v20 )
          goto LABEL_44;
        v21 = *(_WORD *)(v17 + 12);
        v22 = *(_WORD *)(v17 + 14);
        if ( !v21 && !v22 )
        {
          v10 = -1073741686;
          goto LABEL_40;
        }
        if ( v17 + 8LL * (v22 + v21) > v20 )
        {
LABEL_44:
          v10 = -1073741701;
        }
        else
        {
LABEL_39:
          *v44 = v17;
          *a5 = v13;
        }
      }
      else
      {
        v10 = -1073741687;
      }
    }
LABEL_40:
    if ( (MEMORY[0x7FFE0385] & 1) != 0 )
      LdrpTraceLoadMUIDll(&v23, MEMORY[0x7FFE0384]);
    return v10;
  }
  return result;
}
