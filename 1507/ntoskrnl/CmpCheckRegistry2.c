/*
 * XREFs of CmpCheckRegistry2 @ 0x1404AE1C0
 * Callers:
 *     CmCheckRegistry @ 0x1404ADFB0 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x1401DE608 (SetFailureLocation.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpCheckLexicographicalOrder @ 0x1404AE400 (CmpCheckLexicographicalOrder.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1404AE5EC (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpDoFindSubKeyByNumber @ 0x1404C2B50 (CmpDoFindSubKeyByNumber.c)
 *     CmpCheckKey @ 0x1404C2C40 (CmpCheckKey.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14065B23C (CmpRemoveSubKeyCellNoCellRef.c)
 */

__int64 __fastcall CmpCheckRegistry2(
        ULONG_PTR BugCheckParameter2,
        int a2,
        int a3,
        int a4,
        char a5,
        __int64 a6,
        int *a7)
{
  __int64 v7; // rbp
  unsigned int v10; // r13d
  char *PoolWithTag; // rax
  __int64 v12; // rbp
  int *v13; // r12
  unsigned int *v14; // r14
  int v15; // r15d
  unsigned int *v16; // rbx
  int v17; // eax
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // esi
  __int64 v22; // rbx
  void *v23; // r14
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int SubKeyByNumber; // esi
  int v28; // eax
  BOOL v29; // esi
  int v30; // r9d
  int v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+30h] [rbp-48h]
  unsigned int *P; // [rsp+38h] [rbp-40h]
  int v34; // [rsp+80h] [rbp+8h] BYREF
  int v35; // [rsp+88h] [rbp+10h]
  int v36; // [rsp+98h] [rbp+20h] BYREF

  v36 = a4;
  v35 = a2;
  v7 = *(_QWORD *)(BugCheckParameter2 + 56);
  v36 = -1;
  v32 = v7;
  v10 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x2800uLL, 0x73634D43u);
  P = (unsigned int *)PoolWithTag;
  if ( !PoolWithTag )
  {
    SetFailureLocation(v7, 0, 13, -1073741801, 0);
    return 4099LL;
  }
  *(_QWORD *)(v7 + 232) = PoolWithTag;
  v12 = 0LL;
  v13 = a7;
  v14 = (unsigned int *)(PoolWithTag - 20);
  v15 = 0;
  *(_DWORD *)PoolWithTag = a3;
  v16 = (unsigned int *)PoolWithTag;
  *v13 = 0;
  *(_QWORD *)(PoolWithTag + 4) = -1LL;
  *((_DWORD *)PoolWithTag + 3) = 0;
  PoolWithTag[16] = 0;
  while ( 1 )
  {
    if ( *((_BYTE *)v16 + 16) )
      goto LABEL_11;
    v17 = *v13;
    *((_BYTE *)v16 + 16) = 1;
    if ( v17 != -1 )
      *v13 = v17 + 1;
    v18 = v35;
    v10 = CmpCheckKey(BugCheckParameter2, a5, a6);
    if ( v10 )
      break;
    if ( v12 > 0 )
    {
      v19 = v14[2];
      if ( (_DWORD)v19 != -1 && !(unsigned __int8)CmpCheckLexicographicalOrder(BugCheckParameter2, v19, *v16) )
      {
        v22 = v32;
        v10 = 4091;
        SetFailureLocation(v32, 0, 13, 4091, 48);
        goto LABEL_35;
      }
      v14[2] = *v16;
    }
LABEL_11:
    v20 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, *v16, &v36);
    if ( !v20 )
    {
      v22 = v32;
      v10 = 4098;
      SetFailureLocation(v32, 0, 13, 4098, 64);
      goto LABEL_16;
    }
    v21 = v16[3];
    if ( v21 < *(_DWORD *)(v20 + 20) )
    {
      v25 = *(unsigned int *)(v20 + 28);
      v34 = -1;
      v26 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v25,
              &v34);
      if ( v26 )
      {
        SubKeyByNumber = CmpDoFindSubKeyByNumber(BugCheckParameter2, v26, v21);
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v34);
        if ( SubKeyByNumber != -1 )
        {
          ++v16[3];
          ++v15;
          v16 += 5;
          ++v12;
          v14 += 5;
          if ( v12 != 512 )
          {
            v16[1] = *v14;
            *v16 = SubKeyByNumber;
            v16[2] = -1;
            v16[3] = 0;
            *((_BYTE *)v16 + 16) = 0;
            goto LABEL_14;
          }
          v10 = 4096;
          v31 = 96;
          v30 = 4096;
LABEL_44:
          v22 = v32;
          SetFailureLocation(v32, 0, 13, v30, v31);
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v36);
          goto LABEL_16;
        }
        v28 = 0;
      }
      else
      {
        v28 = -1073741670;
      }
      v10 = 4097;
      v31 = 80;
      v30 = v28;
      goto LABEL_44;
    }
    --v15;
    --v12;
    v14 -= 5;
    v16 -= 5;
LABEL_14:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v36);
    if ( v12 < 0 )
    {
      v22 = v32;
LABEL_16:
      v18 = v35;
      goto LABEL_17;
    }
  }
  v29 = CmpSelfHeal || (CmpBootType & 6) != 0;
  v22 = v32;
  SetFailureLocation(v32, v29, 13, v10, 16);
  v18 = v35;
LABEL_35:
  if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
  {
LABEL_17:
    v23 = P;
    goto LABEL_18;
  }
  v23 = P;
  if ( v15 )
  {
    if ( (unsigned __int8)CmpRemoveSubKeyCellNoCellRef(BugCheckParameter2, P[5 * v15 + 1]) )
    {
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      v10 = -1;
    }
    else
    {
      SetFailureLocation(v22, 0, 13, v10, 32);
    }
  }
LABEL_18:
  ExFreePoolWithTag(v23, 0x73634D43u);
  if ( !v10 && (v18 & 0x20000) == 0 && !(unsigned __int8)CmpCheckAndFixSecurityCellsRefcount(BugCheckParameter2) )
  {
    v10 = 4099;
    SetFailureLocation(v22, 0, 13, 4099, 112);
  }
  return v10;
}
