/*
 * XREFs of CmpFindTagIndex @ 0x1407AFCE0
 * Callers:
 *     CmpAddDriverToList @ 0x1407AFE90 (CmpAddDriverToList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpFindValueByName @ 0x1404018E8 (CmpFindValueByName.c)
 *     CmpGetValueData @ 0x140441E30 (CmpGetValueData.c)
 *     CmpValueToData @ 0x1405606E0 (CmpValueToData.c)
 */

__int64 __fastcall CmpFindTagIndex(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v6; // ebx
  ULONG_PTR v8; // rax
  unsigned int *v9; // rsi
  __int64 v10; // rax
  unsigned int ValueByName; // ebx
  __int64 v12; // rax
  unsigned int v13; // ebx
  unsigned int v15; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v16[2]; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v17[2]; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v18[2]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v19[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+68h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp-10h] BYREF
  char v22; // [rsp+B0h] [rbp+30h] BYREF

  v20 = 0xFFFFFFFFLL;
  v16[0] = -1;
  v16[1] = 0;
  v6 = a2;
  v17[0] = -1;
  v17[1] = 0;
  v19[0] = -1;
  v19[1] = 0;
  v18[0] = -1;
  v18[1] = 0;
  P[0] = 0LL;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter3 + 8))(BugCheckParameter3, a2, v16);
  if ( !v8 )
    return (unsigned int)-2;
  v9 = (unsigned int *)CmpValueToData(BugCheckParameter3, v6, v8, &v15, (__int64)&v20);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v16);
  if ( !v9 )
    return (unsigned int)-2;
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(BugCheckParameter3, a3, v17);
  if ( !v10 )
  {
LABEL_20:
    v13 = -2;
    goto LABEL_16;
  }
  ValueByName = CmpFindValueByName(BugCheckParameter3, v10, a4);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v17);
  if ( ValueByName != -1 )
  {
    v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
            BugCheckParameter3,
            ValueByName,
            v18);
    if ( v12 )
    {
      CmpGetValueData(BugCheckParameter3, ValueByName, v12, &v15, (__int64)P, (__int64)&v22, (__int64)v19);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v18);
      if ( P[0] )
      {
        v13 = 1;
        if ( *(_DWORD *)P[0] )
        {
          while ( *((_DWORD *)P[0] + v13) != *v9 )
          {
            if ( ++v13 > *(_DWORD *)P[0] )
              goto LABEL_10;
          }
          if ( v22 )
            ExFreePoolWithTag(P[0], 0);
        }
        else
        {
LABEL_10:
          if ( v22 )
            ExFreePoolWithTag(P[0], 0);
          v13 = -2;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v19);
        goto LABEL_16;
      }
    }
    goto LABEL_20;
  }
  v13 = *v9;
LABEL_16:
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v20);
  return v13;
}
