/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x1403F7AE8
 * Callers:
 *     CmCheckRegistry @ 0x14047F0C8 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1403F5F04 (RtlValidRelativeSecurityDescriptor.c)
 *     CmpAddSecurityCellToCache @ 0x1403FA268 (CmpAddSecurityCellToCache.c)
 *     HvIsCellAllocated @ 0x140438890 (HvIsCellAllocated.c)
 *     CmpInitSecurityCache @ 0x14047EFEC (CmpInitSecurityCache.c)
 *     CmpCheckSecurityCellAccess @ 0x1404CC9B8 (CmpCheckSecurityCellAccess.c)
 *     CmpAdjustSecurityCacheSize @ 0x1404CD300 (CmpAdjustSecurityCacheSize.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpDestroySecurityCache @ 0x1405181E0 (CmpDestroySecurityCache.c)
 *     CmpResetCachedSecurity @ 0x14060B85C (CmpResetCachedSecurity.c)
 */

__int64 __fastcall CmpValidateHiveSecurityDescriptors(ULONG_PTR BugCheckParameter2, int a2, _BYTE *a3, __int64 a4)
{
  _DWORD *v5; // r14
  unsigned int v6; // ebx
  __int64 v7; // rsi
  bool v8; // al
  __int64 v9; // rax
  char IsCellAllocated; // al
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned int v14; // r15d
  __int64 v15; // rax
  unsigned int v16; // eax
  ULONG v17; // edx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // r15d
  __int64 v22; // rax
  unsigned int v23; // r12d
  ULONG v24; // edx
  int v25; // eax
  __int64 v26; // rdx
  unsigned int v28; // [rsp+30h] [rbp-28h]
  bool v29; // [rsp+34h] [rbp-24h]
  _DWORD v30[2]; // [rsp+38h] [rbp-20h] BYREF
  _DWORD v31[6]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v32; // [rsp+A0h] [rbp+48h]

  v31[0] = -1;
  v5 = 0LL;
  v30[0] = -1;
  v6 = 1;
  v7 = *(_QWORD *)(BugCheckParameter2 + 56);
  v8 = *(_DWORD *)(BugCheckParameter2 + 3040) == 0;
  v31[1] = 0;
  v29 = v8;
  v9 = *(_QWORD *)(BugCheckParameter2 + 64);
  v30[1] = 0;
  IsCellAllocated = HvIsCellAllocated(BugCheckParameter2, *(unsigned int *)(v9 + 36), 0LL);
  v11 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
  if ( IsCellAllocated )
  {
    v12 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            v11,
            v31);
    v13 = v12;
    if ( v12 )
    {
      if ( -4 - *(_DWORD *)(v12 - 4) >= 76 )
      {
        v14 = *(_DWORD *)(v12 + 44);
        v32 = 0;
        v28 = v14;
        do
        {
          if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, v14, a4) )
          {
            if ( v28 == v14 )
            {
              SetFailureLocation(v7, 0, 9, -1073741492, 128);
              goto LABEL_57;
            }
            goto LABEL_37;
          }
          v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  v14,
                  v30);
          v5 = (_DWORD *)v15;
          if ( !v15 )
          {
            SetFailureLocation(v7, 0, 9, -1073741492, 144);
            goto LABEL_57;
          }
          v16 = -4 - *(_DWORD *)(v15 - 4);
          if ( v16 < 0x14 )
            goto LABEL_36;
          v17 = v5[4];
          if ( v17 + 20 < v17 || v17 + 20 > v16 )
            goto LABEL_36;
          if ( v14 != v28 && v5[2] != v32 )
          {
            SetFailureLocation(v7, 0, 9, -1073741492, 160);
            goto LABEL_57;
          }
          if ( !RtlValidRelativeSecurityDescriptor(v5 + 5, v17, 0) )
          {
LABEL_36:
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v30);
            v5 = 0LL;
LABEL_37:
            if ( (a2 & 0x20000) == 0 && (CmpSelfHeal || (CmpBootType & 6) != 0) )
            {
              if ( (unsigned __int8)HvIsCellAllocated(BugCheckParameter2, *(unsigned int *)(v13 + 44), 0LL) )
              {
                v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                        BugCheckParameter2,
                        *(unsigned int *)(v13 + 44),
                        v30);
                v5 = (_DWORD *)v22;
                if ( v22 )
                {
                  v23 = -4 - *(_DWORD *)(v22 - 4);
                  if ( v23 < 0x14 || (v24 = *(_DWORD *)(v22 + 16), v24 + 20 < v24) || v24 + 20 > v23 )
                  {
                    SetFailureLocation(v7, 0, 9, -1073741492, 80);
                  }
                  else if ( RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v22 + 20), v24, 0) )
                  {
                    if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v13 + 44)) )
                    {
                      v25 = *(_DWORD *)(v13 + 44);
                      v5[2] = v25;
                      v5[1] = v25;
                      CmpDestroySecurityCache(BugCheckParameter2);
                      CmpInitSecurityCache(BugCheckParameter2);
                      v26 = *(_QWORD *)(BugCheckParameter2 + 64);
                      *a3 = 1;
                      v6 = 2;
                      *(_DWORD *)(v26 + 4088) |= 4u;
                    }
                    else
                    {
                      SetFailureLocation(v7, 0, 9, -1073741492, 96);
                    }
                  }
                  else
                  {
                    SetFailureLocation(v7, 0, 9, -1073741492, 64);
                  }
                }
                else
                {
                  SetFailureLocation(v7, 0, 9, -1073741492, 48);
                }
              }
              else
              {
                SetFailureLocation(v7, 0, 9, -1073741492, 32);
              }
            }
            else
            {
              SetFailureLocation(v7, 0, 9, -1073741492, 112);
            }
            goto LABEL_57;
          }
          if ( v29 )
          {
            LOBYTE(v18) = 1;
            if ( (int)CmpAddSecurityCellToCache(BugCheckParameter2, v14, v18) < 0 )
            {
              SetFailureLocation(v7, 0, 9, -1073741492, 176);
              goto LABEL_57;
            }
          }
          else
          {
            v19 = CmpResetCachedSecurity(BugCheckParameter2, v14);
            if ( v19 < 0 )
            {
              SetFailureLocation(v7, 0, 9, v19, 184);
              goto LABEL_57;
            }
          }
          v32 = v14;
          v14 = v5[1];
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v30);
          v5 = 0LL;
        }
        while ( v14 != v28 );
        v5 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                         BugCheckParameter2,
                         v14,
                         v30);
        if ( v5[2] == v32 )
        {
          if ( v29 )
            CmpAdjustSecurityCacheSize(BugCheckParameter2);
          if ( (a2 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter2 + 3040) > 1u )
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
            SetFailureLocation(v7, 0, 9, -1073741492, 208);
          }
          else
          {
LABEL_33:
            v6 = 0;
          }
        }
        else
        {
          SetFailureLocation(v7, 0, 9, -1073741492, 200);
        }
      }
      else
      {
        if ( v7 )
          *(_DWORD *)(v7 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
        SetFailureLocation(v7, 0, 9, -1073741492, 24);
      }
LABEL_57:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v31);
      if ( v5 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v30);
    }
    else
    {
      *(_DWORD *)(v7 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
      SetFailureLocation(v7, 0, 9, -1073741492, 16);
    }
  }
  else
  {
    *(_DWORD *)(v7 + 240) = v11;
    SetFailureLocation(v7, 0, 9, -1073741492, 0);
  }
  return v6;
}
