/*
 * XREFs of CmpSortDriverList @ 0x1407BA9C0
 * Callers:
 *     CmGetSystemDriverList @ 0x1407BA76C (CmGetSystemDriverList.c)
 * Callees:
 *     CmpFindValueByName @ 0x140429D14 (CmpFindValueByName.c)
 *     CmpFindSubKeyByName @ 0x140590DF0 (CmpFindSubKeyByName.c)
 *     CmpValueToData @ 0x14059110C (CmpValueToData.c)
 *     CmpDoSort @ 0x1407BABBC (CmpDoSort.c)
 */

char __fastcall CmpSortDriverList(__int64 BugCheckParameter3, __int64 a2, __int64 a3)
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
  int v15; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-1Ch] BYREF
  _WORD v17[4]; // [rsp+38h] [rbp-18h] BYREF
  PVOID v18; // [rsp+40h] [rbp-10h]
  int v19; // [rsp+70h] [rbp+20h] BYREF
  int v20; // [rsp+88h] [rbp+38h] BYREF

  v15 = -1;
  v20 = -1;
  v19 = -1;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(BugCheckParameter3 + 8))(BugCheckParameter3, a2, &v19);
  if ( v5 )
  {
    SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, v5, (unsigned __int16 *)&CmpControlString);
    (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v19);
    if ( SubKeyByName != -1 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(BugCheckParameter3 + 8))(
             BugCheckParameter3,
             SubKeyByName,
             &v19);
      if ( v7 )
      {
        v8 = CmpFindSubKeyByName(BugCheckParameter3, v7, L"\"$");
        (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v19);
        if ( v8 != -1 )
        {
          v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(BugCheckParameter3 + 8))(
                 BugCheckParameter3,
                 v8,
                 &v19);
          if ( v9 )
          {
            ValueByName = CmpFindValueByName(BugCheckParameter3, v9, (int)L"\b\n");
            (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v19);
            if ( ValueByName != -1 )
            {
              v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(BugCheckParameter3 + 8))(
                      BugCheckParameter3,
                      ValueByName,
                      &v20);
              if ( v11 )
              {
                if ( *(_DWORD *)(v11 + 12) == 7 )
                {
                  v18 = CmpValueToData(BugCheckParameter3, ValueByName, v11, &v16, (__int64)&v15);
                  v12 = v18;
                  (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v20);
                  if ( v12 )
                  {
                    v17[1] = v16 - 2;
                    v17[0] = v16 - 2;
                    v13 = CmpDoSort(a3, v17);
                    (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v15);
                    return v13;
                  }
                }
                else
                {
                  (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v20);
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
