/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x1403DDA84
 * Callers:
 *     CmCheckRegistry @ 0x1403D1730 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x1401A9C98 (SetFailureLocation.c)
 *     CmpInitSecurityCache @ 0x1403D1664 (CmpInitSecurityCache.c)
 *     CmpAddSecurityCellToCache @ 0x1403DDE74 (CmpAddSecurityCellToCache.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1403E083C (RtlValidRelativeSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     HvIsCellAllocated @ 0x1403F94C0 (HvIsCellAllocated.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FB310 (CmpFindSecurityCellCacheIndex.c)
 *     CmpDestroySecurityCache @ 0x140499358 (CmpDestroySecurityCache.c)
 *     CmpCheckSecurityCellAccess @ 0x1404BFEE8 (CmpCheckSecurityCellAccess.c)
 *     CmpAdjustSecurityCacheSize @ 0x1404C08A8 (CmpAdjustSecurityCacheSize.c)
 */

__int64 __fastcall CmpValidateHiveSecurityDescriptors(ULONG_PTR BugCheckParameter2, int a2, _BYTE *a3, __int64 a4)
{
  __int64 v4; // rsi
  bool v5; // zf
  _DWORD *v7; // rbp
  unsigned int v8; // ebx
  char IsCellAllocated; // al
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned int v13; // r14d
  unsigned int v14; // r12d
  __int64 v15; // rax
  unsigned int v16; // eax
  ULONG v17; // edx
  __int64 v18; // r8
  __int64 v19; // r8
  unsigned int v20; // r14d
  __int64 v21; // rax
  unsigned int v22; // r15d
  ULONG v23; // edx
  int v24; // eax
  __int64 v25; // rdx
  unsigned int v27; // [rsp+30h] [rbp-58h] BYREF
  BOOL v28; // [rsp+34h] [rbp-54h]
  _DWORD v29[20]; // [rsp+38h] [rbp-50h] BYREF
  int v30; // [rsp+90h] [rbp+8h] BYREF
  int v31; // [rsp+98h] [rbp+10h]
  _BYTE *v32; // [rsp+A0h] [rbp+18h]
  __int64 v33; // [rsp+A8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v31 = a2;
  v4 = *(_QWORD *)(BugCheckParameter2 + 56);
  v29[0] = -1;
  v5 = *(_DWORD *)(BugCheckParameter2 + 3040) == 0;
  v30 = -1;
  v7 = 0LL;
  v8 = 1;
  v28 = v5;
  IsCellAllocated = HvIsCellAllocated(
                      BugCheckParameter2,
                      *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
                      0LL);
  v10 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
  if ( IsCellAllocated )
  {
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            v10,
            v29);
    v12 = v11;
    if ( v11 )
    {
      v27 = 0;
      v13 = *(_DWORD *)(v11 + 44);
      v14 = v13;
      do
      {
        if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, v13, v33) )
        {
          if ( v14 == v13 )
          {
            SetFailureLocation(v4, 0, 9, -1073741492, 128);
            goto LABEL_50;
          }
          goto LABEL_31;
        }
        v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v13,
                &v30);
        v7 = (_DWORD *)v15;
        if ( !v15 )
        {
          SetFailureLocation(v4, 0, 9, -1073741492, 144);
          goto LABEL_50;
        }
        v16 = -4 - *(_DWORD *)(v15 - 4);
        if ( v16 < 0x14 )
          goto LABEL_30;
        v17 = v7[4];
        if ( v17 + 20 < v17 || v17 + 20 > v16 )
          goto LABEL_30;
        if ( v13 != v14 && v7[2] != v27 )
        {
          SetFailureLocation(v4, 0, 9, -1073741492, 160);
          goto LABEL_50;
        }
        if ( !RtlValidRelativeSecurityDescriptor(v7 + 5, v17, 0) )
        {
LABEL_30:
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v30);
          v7 = 0LL;
LABEL_31:
          if ( CmpSelfHeal || (CmpBootType & 6) != 0 )
          {
            if ( (unsigned __int8)HvIsCellAllocated(BugCheckParameter2, *(unsigned int *)(v12 + 44), 0LL) )
            {
              v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      *(unsigned int *)(v12 + 44),
                      &v30);
              v7 = (_DWORD *)v21;
              if ( v21 )
              {
                v22 = -4 - *(_DWORD *)(v21 - 4);
                if ( v22 < 0x14 || (v23 = *(_DWORD *)(v21 + 16), v23 + 20 < v23) || v23 + 20 > v22 )
                {
                  SetFailureLocation(v4, 0, 9, -1073741492, 80);
                }
                else if ( RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v21 + 20), v23, 0) )
                {
                  if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v12 + 44)) )
                  {
                    v24 = *(_DWORD *)(v12 + 44);
                    v7[2] = v24;
                    v7[1] = v24;
                    CmpDestroySecurityCache(BugCheckParameter2);
                    CmpInitSecurityCache(BugCheckParameter2);
                    v25 = *(_QWORD *)(BugCheckParameter2 + 64);
                    *v32 = 1;
                    v8 = 2;
                    *(_DWORD *)(v25 + 4088) |= 4u;
                  }
                  else
                  {
                    SetFailureLocation(v4, 0, 9, -1073741492, 96);
                  }
                }
                else
                {
                  SetFailureLocation(v4, 0, 9, -1073741492, 64);
                }
              }
              else
              {
                SetFailureLocation(v4, 0, 9, -1073741492, 48);
              }
            }
            else
            {
              SetFailureLocation(v4, 0, 9, -1073741492, 32);
            }
          }
          else
          {
            SetFailureLocation(v4, 0, 9, -1073741492, 112);
          }
          goto LABEL_50;
        }
        if ( v28 )
        {
          LOBYTE(v18) = 1;
          if ( (int)CmpAddSecurityCellToCache(BugCheckParameter2, v13, v18) < 0 )
          {
            SetFailureLocation(v4, 0, 9, -1073741492, 176);
            goto LABEL_50;
          }
        }
        else if ( !(unsigned __int8)CmpFindSecurityCellCacheIndex(BugCheckParameter2, v13, &v27) )
        {
          SetFailureLocation(v4, 0, 9, -1073741492, 192);
          goto LABEL_50;
        }
        v27 = v13;
        v13 = v7[1];
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v30);
        v7 = 0LL;
      }
      while ( v13 != v14 );
      if ( v28 )
        CmpAdjustSecurityCacheSize(BugCheckParameter2);
      if ( (v31 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter2 + 3040) > 1u )
      {
        v20 = 0;
        while ( 1 )
        {
          LOBYTE(v19) = 1;
          if ( (int)CmpCheckSecurityCellAccess(
                      BugCheckParameter2,
                      *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 3056) + 16LL * v20),
                      v19,
                      131097LL) < 0 )
            break;
          if ( ++v20 >= *(_DWORD *)(BugCheckParameter2 + 3040) )
            goto LABEL_26;
        }
        SetFailureLocation(v4, 0, 9, -1073741492, 208);
      }
      else
      {
LABEL_26:
        v8 = 0;
      }
LABEL_50:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
      if ( v7 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v30);
    }
    else
    {
      *(_DWORD *)(v4 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
      SetFailureLocation(v4, 0, 9, -1073741492, 16);
    }
  }
  else
  {
    *(_DWORD *)(v4 + 240) = v10;
    SetFailureLocation(v4, 0, 9, -1073741492, 0);
  }
  return v8;
}
