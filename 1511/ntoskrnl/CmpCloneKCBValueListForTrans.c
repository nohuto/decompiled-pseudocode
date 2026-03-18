/*
 * XREFs of CmpCloneKCBValueListForTrans @ 0x1404BD8D4
 * Callers:
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 * Callees:
 *     HvDuplicateCell @ 0x1404BD9A0 (HvDuplicateCell.c)
 */

char __fastcall CmpCloneKCBValueListForTrans(__int64 a1, __int64 a2, _BYTE *a3)
{
  bool v4; // zf
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = -1;
  v4 = *(_QWORD *)(a1 + 280) == 0LL;
  *a3 = 0;
  if ( !v4 )
    return 1;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
         *(_QWORD *)(a1 + 32),
         *(unsigned int *)(a1 + 40),
         &v13);
  v10 = v8;
  if ( v8 )
  {
    if ( !*(_DWORD *)(v8 + 36) )
    {
      *(_DWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 276) = -1;
      goto LABEL_7;
    }
    LOBYTE(v9) = 1;
    v11 = HvDuplicateCell(*(_QWORD *)(a1 + 32), *(unsigned int *)(v8 + 40), 1LL, v9);
    *(_DWORD *)(a1 + 276) = v11;
    if ( v11 != -1 )
    {
      *(_DWORD *)(a1 + 272) = *(_DWORD *)(v10 + 36);
LABEL_7:
      v12 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 280) = a2;
      *a3 = 1;
      (*(void (__fastcall **)(__int64, int *))(v12 + 16))(v12, &v13);
      return 1;
    }
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v13);
  }
  return 0;
}
