/*
 * XREFs of KiRemoveTimer2 @ 0x1400F9890
 * Callers:
 *     KiTimer2Expiration @ 0x14005A0A0 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x1400EB320 (KeSetTimer2.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400EC8A0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KeDisableTimer2 @ 0x1400F79FC (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1400F97C0 (KeCancelTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14012A824 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140031320 (RtlRbRemoveNode.c)
 */

void __fastcall KiRemoveTimer2(__int64 a1)
{
  unsigned int v2; // esi
  int v3; // r12d
  _BYTE *v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  unsigned __int64 *v7; // r13
  unsigned __int64 *v8; // rdx
  BOOL v9; // edi
  unsigned __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rdx

  v2 = 0;
  v3 = 0;
  v4 = (_BYTE *)(a1 + 130);
  v5 = -1LL;
  v6 = 48LL;
  do
  {
    if ( (*v4 & 0x10) == 0 )
    {
      v7 = (unsigned __int64 *)((char *)&KiTimer2Collections + 24 * (*v4 & 3));
      v8 = (unsigned __int64 *)(a1 + 24 * (v2 + 1LL));
      v9 = v7[1] == (_QWORD)v8;
      RtlRbRemoveNode(v7, v8);
      if ( v9 )
      {
        v10 = v7[1];
        v3 = 1;
        if ( v10 )
          v7[2] = *(_QWORD *)(v6 + v10);
        else
          v7[2] = -1LL;
      }
    }
    ++v2;
    ++v4;
    v6 -= 16LL;
  }
  while ( v2 < 2 );
  if ( v3 && KiNextTimer2DueTime == *(_QWORD *)(a1 + 72) )
  {
    v11 = qword_14030E2F0;
    v12 = 4LL;
    do
    {
      if ( *v11 < v5 )
        v5 = *v11;
      v11 += 3;
      --v12;
    }
    while ( v12 );
    KiNextTimer2DueTime = v5;
  }
}
