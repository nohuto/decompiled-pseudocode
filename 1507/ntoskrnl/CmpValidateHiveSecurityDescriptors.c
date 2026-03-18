/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x140445994
 * Callers:
 *     CmCheckRegistry @ 0x1404ADFB0 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x1401DE608 (SetFailureLocation.c)
 *     CmpAddSecurityCellToCache @ 0x140447E14 (CmpAddSecurityCellToCache.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmpInitSecurityCache @ 0x1404ADEE4 (CmpInitSecurityCache.c)
 *     HvIsCellAllocated @ 0x1404C29A0 (HvIsCellAllocated.c)
 *     CmpDestroySecurityCache @ 0x1404EE838 (CmpDestroySecurityCache.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1404FE3F0 (RtlValidRelativeSecurityDescriptor.c)
 *     CmpAdjustSecurityCacheSize @ 0x140558D7C (CmpAdjustSecurityCacheSize.c)
 *     CmpCheckSecurityCellAccess @ 0x1405598A8 (CmpCheckSecurityCellAccess.c)
 *     CmpResetCachedSecurity @ 0x140660A74 (CmpResetCachedSecurity.c)
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
  int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // r14d
  __int64 v22; // rax
  unsigned int v23; // r15d
  ULONG v24; // edx
  int v25; // eax
  __int64 v26; // rdx
  unsigned int v28; // [rsp+30h] [rbp-58h]
  bool v29; // [rsp+34h] [rbp-54h]
  _DWORD v30[20]; // [rsp+38h] [rbp-50h] BYREF
  int v31; // [rsp+90h] [rbp+8h] BYREF
  int v32; // [rsp+98h] [rbp+10h]
  _BYTE *v33; // [rsp+A0h] [rbp+18h]
  __int64 v34; // [rsp+A8h] [rbp+20h]

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v4 = *(_QWORD *)(BugCheckParameter2 + 56);
  v30[0] = -1;
  v5 = *(_DWORD *)(BugCheckParameter2 + 3040) == 0;
  v31 = -1;
  v7 = 0LL;
  v8 = 1;
  v29 = v5;
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
            v30);
    v12 = v11;
    if ( v11 )
    {
      if ( -4 - *(_DWORD *)(v11 - 4) >= 76 )
      {
        v13 = *(_DWORD *)(v11 + 44);
        v14 = 0;
        v28 = v13;
        do
        {
          if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, v13, v34) )
          {
            if ( v28 == v13 )
            {
              SetFailureLocation(v4, 0, 9, -1073741492, 128);
              goto LABEL_56;
            }
            goto LABEL_37;
          }
          v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  v13,
                  &v31);
          v7 = (_DWORD *)v15;
          if ( !v15 )
          {
            SetFailureLocation(v4, 0, 9, -1073741492, 144);
            goto LABEL_56;
          }
          v16 = -4 - *(_DWORD *)(v15 - 4);
          if ( v16 < 0x14 )
            goto LABEL_36;
          v17 = v7[4];
          if ( v17 + 20 < v17 || v17 + 20 > v16 )
            goto LABEL_36;
          if ( v13 != v28 && v7[2] != v14 )
          {
            SetFailureLocation(v4, 0, 9, -1073741492, 160);
            goto LABEL_56;
          }
          if ( !RtlValidRelativeSecurityDescriptor(v7 + 5, v17, 0) )
          {
LABEL_36:
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v31);
            v7 = 0LL;
LABEL_37:
            if ( CmpSelfHeal || (CmpBootType & 6) != 0 )
            {
              if ( (unsigned __int8)HvIsCellAllocated(BugCheckParameter2, *(unsigned int *)(v12 + 44), 0LL) )
              {
                v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                        BugCheckParameter2,
                        *(unsigned int *)(v12 + 44),
                        &v31);
                v7 = (_DWORD *)v22;
                if ( v22 )
                {
                  v23 = -4 - *(_DWORD *)(v22 - 4);
                  if ( v23 < 0x14 || (v24 = *(_DWORD *)(v22 + 16), v24 + 20 < v24) || v24 + 20 > v23 )
                  {
                    SetFailureLocation(v4, 0, 9, -1073741492, 80);
                  }
                  else if ( RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v22 + 20), v24, 0) )
                  {
                    if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v12 + 44)) )
                    {
                      v25 = *(_DWORD *)(v12 + 44);
                      v7[2] = v25;
                      v7[1] = v25;
                      CmpDestroySecurityCache(BugCheckParameter2);
                      CmpInitSecurityCache(BugCheckParameter2);
                      v26 = *(_QWORD *)(BugCheckParameter2 + 64);
                      *v33 = 1;
                      v8 = 2;
                      *(_DWORD *)(v26 + 4088) |= 4u;
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
            goto LABEL_56;
          }
          if ( v29 )
          {
            LOBYTE(v18) = 1;
            if ( (int)CmpAddSecurityCellToCache(BugCheckParameter2, v13, v18) < 0 )
            {
              SetFailureLocation(v4, 0, 9, -1073741492, 176);
              goto LABEL_56;
            }
          }
          else
          {
            v19 = CmpResetCachedSecurity(BugCheckParameter2, v13);
            if ( v19 < 0 )
            {
              SetFailureLocation(v4, 0, 9, v19, 184);
              goto LABEL_56;
            }
          }
          v14 = v13;
          v13 = v7[1];
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v31);
          v7 = 0LL;
        }
        while ( v13 != v28 );
        v7 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                         BugCheckParameter2,
                         v13,
                         &v31);
        if ( v7[2] == v14 )
        {
          if ( v29 )
            CmpAdjustSecurityCacheSize(BugCheckParameter2);
          if ( (v32 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter2 + 3040) > 1u )
          {
            v21 = 0;
            while ( 1 )
            {
              LOBYTE(v20) = 1;
              if ( (int)CmpCheckSecurityCellAccess(
                          BugCheckParameter2,
                          *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 3056) + 16LL * v21),
                          v20,
                          131097LL) < 0 )
                break;
              if ( ++v21 >= *(_DWORD *)(BugCheckParameter2 + 3040) )
                goto LABEL_33;
            }
            SetFailureLocation(v4, 0, 9, -1073741492, 208);
          }
          else
          {
LABEL_33:
            v8 = 0;
          }
        }
        else
        {
          SetFailureLocation(v4, 0, 9, -1073741492, 200);
        }
      }
      else
      {
        if ( v4 )
          *(_DWORD *)(v4 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
        SetFailureLocation(v4, 0, 9, -1073741492, 24);
      }
LABEL_56:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v30);
      if ( v7 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v31);
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
