/*
 * XREFs of KiRemoveTimer2 @ 0x1400338E0
 * Callers:
 *     KeDisableTimer2 @ 0x1400319E4 (KeDisableTimer2.c)
 *     KiTimer2Expiration @ 0x1400332A0 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140034D90 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KeCancelTimer2 @ 0x1400C5258 (KeCancelTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x140120830 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiRemoveTimer2(__int64 a1)
{
  int v2; // ebp
  unsigned int v3; // esi
  unsigned __int64 v4; // rbx
  unsigned __int8 *v5; // r14
  __int64 v6; // r12
  __int64 result; // rax
  char *v8; // r13
  __int64 v9; // rdx
  BOOL v10; // edi
  __int64 *v11; // rcx
  __int64 v12; // rdx

  v2 = 0;
  v3 = 0;
  v4 = -1LL;
  v5 = (unsigned __int8 *)(a1 + 130);
  v6 = 48LL;
  do
  {
    result = *v5;
    if ( (result & 0x10) == 0 )
    {
      v8 = (char *)&KiTimer2Collections + 24 * (result & 3);
      v9 = a1 + 24 * (v3 + 1LL);
      v10 = *((_QWORD *)v8 + 1) == v9;
      result = RtlRbRemoveNode(v8, v9);
      if ( v10 )
      {
        result = *((_QWORD *)v8 + 1);
        v2 = 1;
        if ( result )
        {
          result = *(_QWORD *)(v6 + result);
          *((_QWORD *)v8 + 2) = result;
        }
        else
        {
          *((_QWORD *)v8 + 2) = -1LL;
        }
      }
    }
    ++v3;
    ++v5;
    v6 -= 16LL;
  }
  while ( v3 < 2 );
  if ( v2 )
  {
    result = *(_QWORD *)(a1 + 72);
    if ( KiNextTimer2DueTime == result )
    {
      v11 = &qword_1402E8910;
      v12 = 4LL;
      do
      {
        if ( *v11 < v4 )
          v4 = *v11;
        v11 += 3;
        --v12;
      }
      while ( v12 );
      KiNextTimer2DueTime = v4;
    }
  }
  return result;
}
