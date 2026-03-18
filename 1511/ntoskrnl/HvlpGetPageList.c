/*
 * XREFs of HvlpGetPageList @ 0x1401B53F0
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401B2DB4 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1401B42A8 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401B48AC (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     sub_1401B54A4 @ 0x1401B54A4 (sub_1401B54A4.c)
 *     sub_1401B55C0 @ 0x1401B55C0 (sub_1401B55C0.c)
 */

__int64 __fastcall HvlpGetPageList(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v5; // rax
  _WORD *v6; // rbx
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // r8
  unsigned __int64 v11; // rcx

  *a2 = 0LL;
  *a3 = 0;
  v5 = sub_1401B54A4(a1);
  v6 = (_WORD *)v5;
  if ( !*(_BYTE *)(v5 + 2) )
    return 0LL;
  v8 = *(_QWORD *)(v5 + 8);
  v9 = 261;
  if ( *(_WORD *)v5 < *(_WORD *)(v8 + 8) )
  {
LABEL_6:
    v10 = (unsigned __int16)*v6;
    v11 = *(_QWORD *)(v8 + 8 * v10 + 16);
    *a2 = v11 & 0xFFFFFFFFFFLL;
    *v6 = v10 + 1;
    *a3 = v11 >> 40;
  }
  else
  {
    while ( *(_QWORD *)v8 != -1LL )
    {
      sub_1401B55C0(v6);
      *v6 = 0;
      if ( *(_WORD *)(v8 + 8) )
        goto LABEL_6;
    }
    return 0;
  }
  return v9;
}
