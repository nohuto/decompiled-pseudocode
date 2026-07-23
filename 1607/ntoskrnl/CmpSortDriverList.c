/*
 * XREFs of CmpSortDriverList @ 0x1407AF920
 * Callers:
 *     CmGetSystemDriverList @ 0x1407AF6CC (CmGetSystemDriverList.c)
 * Callees:
 *     CmpFindValueByName @ 0x1404018E8 (CmpFindValueByName.c)
 *     CmpFindSubKeyByName @ 0x1405603A4 (CmpFindSubKeyByName.c)
 *     CmpValueToData @ 0x1405606E0 (CmpValueToData.c)
 *     CmpDoSort @ 0x1407AFB38 (CmpDoSort.c)
 */

char __fastcall CmpSortDriverList(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned int SubKeyByName; // ebx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned int ValueByName; // ebx
  ULONG_PTR v11; // rax
  PVOID v12; // rbx
  char v13; // bl
  _DWORD v15[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  _WORD v17[4]; // [rsp+40h] [rbp-10h] BYREF
  PVOID v18; // [rsp+48h] [rbp-8h]
  unsigned int v19; // [rsp+80h] [rbp+30h] BYREF
  int v20; // [rsp+98h] [rbp+48h] BYREF
  int v21; // [rsp+9Ch] [rbp+4Ch]

  v16 = 0xFFFFFFFFLL;
  v15[0] = -1;
  v15[1] = 0;
  v20 = -1;
  v21 = 0;
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter3 + 8))(BugCheckParameter3, a2, &v20);
  if ( v5 )
  {
    SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, v5, (__m128i *)&CmpControlString);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v20);
    if ( SubKeyByName != -1 )
    {
      v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
             BugCheckParameter3,
             SubKeyByName,
             &v20);
      if ( v7 )
      {
        v8 = CmpFindSubKeyByName(BugCheckParameter3, v7, (__m128i *)L"\"$");
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v20);
        if ( v8 != -1 )
        {
          v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
                 BugCheckParameter3,
                 v8,
                 &v20);
          if ( v9 )
          {
            ValueByName = CmpFindValueByName(BugCheckParameter3, v9, (int)L"\b\n");
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v20);
            if ( ValueByName != -1 )
            {
              v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                      BugCheckParameter3,
                      ValueByName,
                      v15);
              if ( v11 )
              {
                if ( *(_DWORD *)(v11 + 12) == 7 )
                {
                  v18 = CmpValueToData(BugCheckParameter3, ValueByName, v11, &v19, (__int64)&v16);
                  v12 = v18;
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v15);
                  if ( v12 )
                  {
                    v17[1] = v19 - 2;
                    v17[0] = v19 - 2;
                    v13 = CmpDoSort(a3, v17);
                    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v16);
                    return v13;
                  }
                }
                else
                {
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v15);
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
