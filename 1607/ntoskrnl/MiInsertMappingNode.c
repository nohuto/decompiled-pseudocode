/*
 * XREFs of MiInsertMappingNode @ 0x1401110D4
 * Callers:
 *     MmAllocateMappingAddress @ 0x14052C83C (MmAllocateMappingAddress.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiInsertMappingNode(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  KIRQL v3; // al
  _QWORD *v4; // r10
  bool v5; // dl
  KIRQL v6; // si
  _QWORD *v7; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = ExAcquireSpinLockExclusive(&dword_1403275A8);
  v4 = (_QWORD *)qword_1403275B0;
  v5 = 0;
  v6 = v3;
  if ( qword_1403275B0 )
  {
    while ( 1 )
    {
      if ( v1 < v4[3] )
      {
        v7 = (_QWORD *)*v4;
        if ( !*v4 )
          break;
      }
      else
      {
        v7 = (_QWORD *)v4[1];
        if ( !v7 )
        {
          v5 = 1;
          break;
        }
      }
      v4 = v7;
    }
  }
  RtlAvlInsertNodeEx(&qword_1403275B0, (unsigned __int64)v4, v5, a1);
  ExReleaseSpinLockExclusive(&dword_1403275A8, v6);
}
