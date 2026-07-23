/*
 * XREFs of CmpLightWeightCommitRecreateKeyUoW @ 0x14060E7E8
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1404D35A0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140518304 (CmpFlushNotifiesOnKeyBodyList.c)
 */

void __fastcall CmpLightWeightCommitRecreateKeyUoW(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+54h] [rbp+Ch]
  int v10; // [rsp+58h] [rbp+10h] BYREF
  __int16 v11; // [rsp+5Ch] [rbp+14h]

  v8 = -1;
  v9 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v4 + 64);
  v6 = *(_QWORD *)(v4 + 24);
  *(_QWORD *)((*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v6 + 8))(v6, *(unsigned int *)(v5 + 32), &v8) + 4) = *a2;
  *(_QWORD *)(v5 + 160) = *a2;
  (*(void (__fastcall **)(__int64, int *))(v6 + 16))(v6, &v8);
  v7 = *(_QWORD *)(a1 + 48);
  v10 = 8;
  v11 = 257;
  CmpEnumerateAllHigherLayerKcbs(
    v7,
    (__int64)CmpFlushNotifiesPreCallback,
    (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpFlushNotifiesPostCallback,
    (__int64)&v10,
    1,
    1);
  CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 48), 8LL, 1);
}
