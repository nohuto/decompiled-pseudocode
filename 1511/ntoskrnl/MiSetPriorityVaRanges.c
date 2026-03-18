/*
 * XREFs of MiSetPriorityVaRanges @ 0x1404BFD14
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1403CA6EC (NtSetInformationVirtualMemory.c)
 *     MmSetPriorityVaRanges @ 0x140623DA0 (MmSetPriorityVaRanges.c)
 * Callees:
 *     MiWalkVaRange @ 0x14001C524 (MiWalkVaRange.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 */

void __fastcall MiSetPriorityVaRanges(unsigned __int64 a1, __int64 *a2, unsigned int a3)
{
  unsigned int i; // edi
  __int64 v5; // r15
  __int64 v6; // rbp
  unsigned __int64 v7; // r13
  unsigned int *v8; // rax
  unsigned int *v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  int v12; // r12d
  int v15; // [rsp+98h] [rbp+20h] BYREF

  if ( a1 )
  {
    for ( i = 0; i < a1; ++i )
    {
      v5 = a2[1];
      v6 = *a2;
      do
      {
        v7 = v6;
        v8 = MiObtainReferencedVad(v6, &v15);
        v9 = v8;
        if ( !v8 )
          break;
        v10 = v8[7] | ((unsigned __int64)*((unsigned __int8 *)v8 + 33) << 32);
        v11 = (v5 + v6 - 1) | 0xFFF;
        v12 = 0;
        if ( v11 >> 12 > v10 )
        {
          v11 = (v10 << 12) | 0xFFF;
          v12 = 1;
          v5 = v6 - v11 + v5 - 1;
          v6 = v11 + 1;
        }
        if ( (((v9[12] & 7) - 1) & 0xFFFFFFFD) != 0 )
          MiWalkVaRange(v7, v11, (__int64)v9, 2u, a3);
        MiUnlockAndDereferenceVad(v9);
      }
      while ( v12 == 1 );
      a2 += 2;
    }
  }
}
