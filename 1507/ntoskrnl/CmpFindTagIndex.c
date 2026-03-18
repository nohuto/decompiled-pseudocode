/*
 * XREFs of CmpFindTagIndex @ 0x1407BAD70
 * Callers:
 *     CmpAddDriverToList @ 0x1407BAEFC (CmpAddDriverToList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpGetValueData @ 0x140428050 (CmpGetValueData.c)
 *     CmpFindValueByName @ 0x140429D14 (CmpFindValueByName.c)
 *     CmpValueToData @ 0x14059110C (CmpValueToData.c)
 */

__int64 __fastcall CmpFindTagIndex(__int64 BugCheckParameter3, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v6; // ebx
  ULONG_PTR v8; // rax
  unsigned int *v9; // rsi
  __int64 v10; // rax
  unsigned int ValueByName; // ebx
  __int64 v12; // rax
  unsigned int v13; // ebx
  int v15; // [rsp+40h] [rbp-20h] BYREF
  int v16; // [rsp+44h] [rbp-1Ch] BYREF
  int v17; // [rsp+48h] [rbp-18h] BYREF
  int v18; // [rsp+4Ch] [rbp-14h] BYREF
  int v19; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+54h] [rbp-Ch] BYREF
  PVOID P; // [rsp+58h] [rbp-8h] BYREF
  char v22; // [rsp+90h] [rbp+30h] BYREF

  P = 0LL;
  v19 = -1;
  v15 = -1;
  v16 = -1;
  v18 = -1;
  v6 = a2;
  v17 = -1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(BugCheckParameter3 + 8))(BugCheckParameter3, a2, &v15);
  if ( !v8 )
    return (unsigned int)-2;
  v9 = (unsigned int *)CmpValueToData(BugCheckParameter3, v6, v8, &v20, (__int64)&v19);
  (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v15);
  if ( !v9 )
    return (unsigned int)-2;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(BugCheckParameter3 + 8))(BugCheckParameter3, a3, &v16);
  if ( v10 )
  {
    ValueByName = CmpFindValueByName(BugCheckParameter3, v10, a4);
    (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v16);
    if ( ValueByName == -1 )
    {
      v13 = *v9;
      goto LABEL_16;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(BugCheckParameter3 + 8))(
            BugCheckParameter3,
            ValueByName,
            &v17);
    if ( v12 )
    {
      CmpGetValueData(BugCheckParameter3, ValueByName, v12, &v20, (__int64 *)&P, &v22, (__int64)&v18);
      (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v17);
      if ( P )
      {
        v13 = 1;
        if ( *(_DWORD *)P )
        {
          while ( *((_DWORD *)P + v13) != *v9 )
          {
            if ( ++v13 > *(_DWORD *)P )
              goto LABEL_10;
          }
          if ( v22 )
            ExFreePoolWithTag(P, 0);
        }
        else
        {
LABEL_10:
          if ( v22 )
            ExFreePoolWithTag(P, 0);
          v13 = -2;
        }
        (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v18);
        goto LABEL_16;
      }
    }
  }
  v13 = -2;
LABEL_16:
  (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v19);
  return v13;
}
