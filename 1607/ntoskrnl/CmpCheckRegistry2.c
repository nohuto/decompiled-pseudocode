/*
 * XREFs of CmpCheckRegistry2 @ 0x14043DE40
 * Callers:
 *     CmCheckRegistry @ 0x14047F0C8 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpCheckKey @ 0x14043C4E0 (CmpCheckKey.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1404C4624 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     RtlCompareUnicodeString @ 0x1404E27E0 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1404F5D50 (CmpCompareCompressedName.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14060AB08 (CmpRemoveSubKeyCellNoCellRef.c)
 */

__int64 __fastcall CmpCheckRegistry2(ULONG_PTR a1, int a2, int a3, __int64 a4, char a5, PRTL_BITMAP a6, int *a7)
{
  __int64 v7; // rsi
  char *PoolWithTag; // rax
  int *v11; // rcx
  char *v12; // r12
  int *v13; // r14
  int v14; // ebx
  int v15; // esi
  __int64 v16; // r15
  int v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdi
  unsigned __int16 v24; // di
  unsigned __int8 *v25; // rsi
  unsigned __int16 v26; // bx
  unsigned __int8 *v27; // r14
  unsigned int v28; // r15d
  unsigned int v29; // r12d
  int v30; // ecx
  bool v31; // sf
  char v32; // bl
  __int64 v33; // rax
  unsigned int v34; // edi
  __int64 v35; // rdx
  _WORD *v36; // rsi
  _WORD *v37; // rax
  unsigned int v38; // ecx
  int v39; // ebx
  unsigned int v40; // eax
  __int64 v41; // r14
  int v42; // ebx
  void *v43; // rsi
  __int64 v45; // r8
  __int64 v46; // r8
  BOOL v47; // edx
  __int64 v48; // rax
  int v49; // r9d
  int v50; // eax
  char v51[4]; // [rsp+20h] [rbp-81h]
  int v52; // [rsp+20h] [rbp-81h]
  int v53; // [rsp+20h] [rbp-81h]
  PRTL_BITMAP BitMapHeader; // [rsp+28h] [rbp-79h]
  unsigned int *P; // [rsp+30h] [rbp-71h]
  _DWORD v56[2]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v57; // [rsp+40h] [rbp-61h]
  _DWORD v58[2]; // [rsp+48h] [rbp-59h] BYREF
  _DWORD v59[2]; // [rsp+50h] [rbp-51h] BYREF
  _DWORD v60[2]; // [rsp+58h] [rbp-49h] BYREF
  _DWORD v61[2]; // [rsp+60h] [rbp-41h] BYREF
  char *v62; // [rsp+68h] [rbp-39h]
  int *v63; // [rsp+70h] [rbp-31h]
  __int64 v64; // [rsp+78h] [rbp-29h]
  UNICODE_STRING String2; // [rsp+80h] [rbp-21h] BYREF
  UNICODE_STRING String1; // [rsp+90h] [rbp-11h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-1h]
  __int64 v68; // [rsp+A8h] [rbp+7h]
  int v70; // [rsp+108h] [rbp+67h]

  v7 = *(_QWORD *)(a1 + 56);
  v58[0] = -1;
  v58[1] = 0;
  v57 = v7;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x2800uLL, 0x73634D43u);
  P = (unsigned int *)PoolWithTag;
  if ( !PoolWithTag )
  {
    SetFailureLocation(v7, 0, 13, -1073741801, 0);
    return 4099LL;
  }
  v11 = a7;
  *(_QWORD *)(v7 + 232) = PoolWithTag;
  v12 = PoolWithTag - 20;
  v13 = (int *)PoolWithTag;
  *(_DWORD *)PoolWithTag = a3;
  v14 = 0;
  v15 = 0;
  *a7 = 0;
  v16 = 0LL;
  *(_QWORD *)(PoolWithTag + 4) = -1LL;
  *((_DWORD *)PoolWithTag + 3) = 0;
  PoolWithTag[16] = 0;
  v70 = 0;
  v64 = 0LL;
  v63 = (int *)PoolWithTag;
  v62 = PoolWithTag - 20;
  while ( 1 )
  {
    if ( *((_BYTE *)v13 + 16) )
      goto LABEL_31;
    v17 = *v11;
    *((_BYTE *)v13 + 16) = 1;
    if ( v17 != -1 )
      *v11 = v17 + 1;
    v18 = CmpCheckKey(a1, a2, *v13, v13[1], a5, a6);
    if ( v18 )
      break;
    if ( v16 <= 0 )
      goto LABEL_31;
    v19 = *((_DWORD *)v12 + 2);
    if ( v19 != -1 )
    {
      v20 = (unsigned int)*v13;
      v59[0] = -1;
      v59[1] = 0;
      v60[1] = 0;
      v60[0] = -1;
      v68 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(a1 + 8))(a1, v20, v59);
      v21 = v68;
      v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v19, v60);
      v67 = v22;
      v23 = v22;
      if ( v21 && v22 )
      {
        if ( (*(_BYTE *)(v21 + 2) & 0x20) != 0 )
        {
          if ( (*(_BYTE *)(v22 + 2) & 0x20) != 0 )
          {
            v24 = *(_WORD *)(v22 + 72);
            v25 = (unsigned __int8 *)(v22 + 76);
            v26 = *(_WORD *)(v21 + 72);
            v27 = (unsigned __int8 *)(v21 + 76);
            if ( v24 )
            {
              while ( v26 )
              {
                v28 = *v25++;
                v29 = *v27++;
                if ( (_WORD)v28 != (_WORD)v29 )
                {
                  if ( v28 >= 0x61 )
                  {
                    if ( v28 > 0x7A )
                      LOWORD(v28) = RtlUpcaseUnicodeChar(v28);
                    else
                      LOWORD(v28) = v28 - 32;
                  }
                  if ( v29 >= 0x61 )
                  {
                    if ( v29 > 0x7A )
                      LOWORD(v29) = RtlUpcaseUnicodeChar(v29);
                    else
                      LOWORD(v29) = v29 - 32;
                  }
                  v30 = (unsigned __int16)v28 - (unsigned __int16)v29;
                  if ( (unsigned __int16)v28 != (unsigned __int16)v29 )
                    goto LABEL_21;
                }
                --v26;
                if ( !--v24 )
                  break;
              }
            }
            v30 = v24 - v26;
LABEL_21:
            v13 = v63;
            v31 = v30 < 0;
            v23 = v67;
            v21 = v68;
            v12 = v62;
            v15 = v70;
          }
          else
          {
            v46 = *(unsigned __int16 *)(v21 + 72);
            String1.Buffer = (wchar_t *)(v22 + 76);
            String1.Length = *(_WORD *)(v22 + 72);
            String1.MaximumLength = String1.Length;
            v31 = (int)CmpCompareCompressedName(&String1, v21 + 76, v46, 0LL, *(_DWORD *)v51, BitMapHeader) < 0;
          }
          if ( v31 )
          {
LABEL_23:
            v32 = 1;
LABEL_24:
            if ( v21 )
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
            if ( v23 )
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v60);
            if ( !v32 )
            {
              v18 = 4091;
              v52 = 48;
              v47 = 0;
              goto LABEL_81;
            }
            v16 = v64;
            goto LABEL_30;
          }
        }
        else if ( (*(_BYTE *)(v22 + 2) & 0x20) != 0 )
        {
          v45 = *(unsigned __int16 *)(v22 + 72);
          String2.Buffer = (wchar_t *)(v21 + 76);
          String2.Length = *(_WORD *)(v21 + 72);
          String2.MaximumLength = String2.Length;
          if ( (int)CmpCompareCompressedName(&String2, v22 + 76, v45, 0LL, *(_DWORD *)v51, BitMapHeader) > 0 )
            goto LABEL_23;
        }
        else
        {
          String1.Buffer = (wchar_t *)(v22 + 76);
          String1.Length = *(_WORD *)(v22 + 72);
          String1.MaximumLength = String1.Length;
          String2.Buffer = (wchar_t *)(v21 + 76);
          String2.Length = *(_WORD *)(v21 + 72);
          String2.MaximumLength = String2.Length;
          if ( RtlCompareUnicodeString(&String1, &String2, 1u) < 0 )
            goto LABEL_23;
        }
      }
      v32 = 0;
      goto LABEL_24;
    }
LABEL_30:
    v14 = 0;
    *((_DWORD *)v12 + 2) = *v13;
LABEL_31:
    v33 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, (unsigned int)*v13, v58);
    if ( !v33 )
    {
      v41 = v57;
      v18 = 4098;
      SetFailureLocation(v57, 0, 13, 4098, 64);
      goto LABEL_56;
    }
    v34 = v13[3];
    if ( v34 < *(_DWORD *)(v33 + 20) )
    {
      v35 = *(unsigned int *)(v33 + 28);
      v61[0] = -1;
      v61[1] = 0;
      v36 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(a1 + 8))(a1, v35, v61);
      if ( !v36 )
      {
        v50 = -1073741670;
        goto LABEL_91;
      }
      v56[0] = -1;
      v56[1] = 0;
      if ( *v36 == 26994 && v36[1] )
      {
        while ( 1 )
        {
          v37 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(
                           a1,
                           *(unsigned int *)&v36[2 * v14 + 2],
                           v56);
          if ( !v37 )
          {
            v39 = -1;
            goto LABEL_47;
          }
          v38 = (unsigned __int16)v37[1];
          if ( v34 < v38 )
            break;
          v34 -= v38;
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v56);
          if ( ++v14 >= (unsigned int)(unsigned __int16)v36[1] )
            goto LABEL_42;
        }
        if ( ((*v37 - 26220) & 0xFDFF) != 0 )
          v39 = *(_DWORD *)&v37[2 * v34 + 2];
        else
          v39 = *(_DWORD *)&v37[4 * v34 + 2];
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v56);
      }
      else
      {
LABEL_42:
        if ( ((*v36 - 26220) & 0xFDFF) != 0 )
          v39 = *(_DWORD *)&v36[2 * v34 + 2];
        else
          v39 = *(_DWORD *)&v36[4 * v34 + 2];
      }
LABEL_47:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v61);
      if ( v39 == -1 )
      {
        v50 = 0;
LABEL_91:
        v18 = 4097;
        v53 = 80;
        v49 = v50;
LABEL_92:
        v41 = v57;
        SetFailureLocation(v57, 0, 13, v49, v53);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v58);
LABEL_56:
        v42 = a2;
LABEL_57:
        v43 = P;
        goto LABEL_58;
      }
      ++v16;
      ++v13[3];
      v15 = v70 + 1;
      v12 += 20;
      ++v70;
      v13 += 5;
      v64 = v16;
      v62 = v12;
      v63 = v13;
      if ( v16 == 512 )
      {
        v18 = 4096;
        v53 = 96;
        v49 = 4096;
        goto LABEL_92;
      }
      v40 = *(_DWORD *)v12;
      *v13 = v39;
      v14 = 0;
      v13[3] = 0;
      *((_BYTE *)v13 + 16) = 0;
      v13[1] = v40;
      v13[2] = -1;
    }
    else
    {
      --v15;
      --v16;
      v12 -= 20;
      v70 = v15;
      v13 -= 5;
      v64 = v16;
      v63 = v13;
      v62 = v12;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v58);
    if ( v16 < 0 )
    {
      v18 = 0;
      v41 = v57;
      goto LABEL_56;
    }
    v11 = a7;
  }
  v47 = (a2 & 0x20000) == 0 && (CmpSelfHeal || (CmpBootType & 6) != 0);
  v52 = 16;
LABEL_81:
  v41 = v57;
  SetFailureLocation(v57, v47, 13, v18, v52);
  v42 = a2;
  if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 || !v15 )
    goto LABEL_57;
  v48 = v15;
  v43 = P;
  if ( (unsigned __int8)CmpRemoveSubKeyCellNoCellRef(a1, P[5 * v48 + 1]) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    v18 = -1;
  }
  else
  {
    SetFailureLocation(v41, 0, 13, v18, 32);
  }
LABEL_58:
  ExFreePoolWithTag(v43, 0x73634D43u);
  if ( !v18 && (v42 & 0x20000) == 0 && !(unsigned __int8)CmpCheckAndFixSecurityCellsRefcount(a1) )
  {
    v18 = 4099;
    SetFailureLocation(v41, 0, 13, 4099, 112);
  }
  return v18;
}
