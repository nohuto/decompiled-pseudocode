/*
 * XREFs of MiSetPriorityVaRanges @ 0x1404E75C0
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1404F3D10 (NtSetInformationVirtualMemory.c)
 *     MmSetPriorityVaRanges @ 0x140659C28 (MmSetPriorityVaRanges.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14002BDA0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x14003E320 (MiObtainReferencedVad.c)
 *     MiWalkVaRange @ 0x1400BB684 (MiWalkVaRange.c)
 */

void __fastcall MiSetPriorityVaRanges(unsigned __int64 a1, __int64 *a2, unsigned int a3)
{
  unsigned int i; // edi
  __int64 v5; // r15
  __int64 v6; // rbp
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
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
        v10 = *(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32);
        v11 = (v5 + v6 - 1) | 0xFFF;
        v12 = 0;
        if ( v11 >> 12 > v10 )
        {
          v11 = (v10 << 12) | 0xFFF;
          v12 = 1;
          v5 = v6 - v11 + v5 - 1;
          v6 = v11 + 1;
        }
        if ( (((*(_DWORD *)(v9 + 48) & 7) - 1) & 0xFFFFFFFD) != 0 )
          MiWalkVaRange(v7, v11, v9, 2u, a3);
        MiUnlockAndDereferenceVad((char *)v9);
      }
      while ( v12 == 1 );
      a2 += 2;
    }
  }
}
