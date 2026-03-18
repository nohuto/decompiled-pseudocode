/*
 * XREFs of CmpFindTagIndex @ 0x140754654
 * Callers:
 *     CmpAddDriverToList @ 0x1407547E0 (CmpAddDriverToList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpGetValueData @ 0x140422DD0 (CmpGetValueData.c)
 *     CmpFindValueByName @ 0x1404A8CEC (CmpFindValueByName.c)
 *     CmpValueToData @ 0x140523DB4 (CmpValueToData.c)
 */

__int64 __fastcall CmpFindTagIndex(__int64 BugCheckParameter3, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  ULONG_PTR v6; // rax
  unsigned int *v7; // rsi
  __int64 v8; // rax
  unsigned int ValueByName; // ebx
  __int64 v10; // rax
  unsigned int v11; // ebx
  int v13; // [rsp+40h] [rbp-20h] BYREF
  int v14; // [rsp+44h] [rbp-1Ch] BYREF
  int v15; // [rsp+48h] [rbp-18h] BYREF
  int v16; // [rsp+4Ch] [rbp-14h] BYREF
  int v17; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+54h] [rbp-Ch] BYREF
  PVOID P; // [rsp+58h] [rbp-8h] BYREF
  char v20; // [rsp+90h] [rbp+30h] BYREF

  P = 0LL;
  v17 = -1;
  v13 = -1;
  v14 = -1;
  v16 = -1;
  v4 = a2;
  v15 = -1;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(BugCheckParameter3 + 8))(BugCheckParameter3, a2, &v13);
  if ( !v6 )
    return (unsigned int)-2;
  v7 = (unsigned int *)CmpValueToData(BugCheckParameter3, v4, v6, &v18, (__int64)&v17);
  (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v13);
  if ( !v7 )
    return (unsigned int)-2;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(BugCheckParameter3 + 8))(BugCheckParameter3, a3, &v14);
  if ( v8 )
  {
    ValueByName = CmpFindValueByName(BugCheckParameter3, v8);
    (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v14);
    if ( ValueByName == -1 )
    {
      v11 = *v7;
      goto LABEL_16;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(BugCheckParameter3 + 8))(
            BugCheckParameter3,
            ValueByName,
            &v15);
    if ( v10 )
    {
      CmpGetValueData(BugCheckParameter3, ValueByName, v10, &v18, (__int64 *)&P, &v20, (__int64)&v16);
      (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v15);
      if ( P )
      {
        v11 = 1;
        if ( *(_DWORD *)P )
        {
          while ( *((_DWORD *)P + v11) != *v7 )
          {
            if ( ++v11 > *(_DWORD *)P )
              goto LABEL_10;
          }
          if ( v20 )
            ExFreePoolWithTag(P, 0);
        }
        else
        {
LABEL_10:
          if ( v20 )
            ExFreePoolWithTag(P, 0);
          v11 = -2;
        }
        (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v16);
        goto LABEL_16;
      }
    }
  }
  v11 = -2;
LABEL_16:
  (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v17);
  return v11;
}
