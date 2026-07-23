/*
 * XREFs of MiAdjustCachedStacks @ 0x1400BCA34
 * Callers:
 *     MiWorkingSetManager @ 0x1400BBD98 (MiWorkingSetManager.c)
 * Callees:
 *     MmCreateKernelStack @ 0x1400EF600 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400EF9D0 (MmDeleteKernelStack.c)
 */

__int64 MiAdjustCachedStacks()
{
  unsigned __int16 v0; // r14
  __int64 v1; // rbp
  __int64 result; // rax
  PSLIST_HEADER v3; // rsi
  __int64 v4; // rbx
  int v5; // r13d
  unsigned int v6; // eax
  int v7; // edi
  int v8; // edx
  int v9; // edi
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  int Alignment; // ecx
  int v13; // eax
  int v14; // ecx
  __int64 KernelStack; // rax
  unsigned __int16 v16; // [rsp+60h] [rbp+8h]
  __int64 v17; // [rsp+68h] [rbp+10h]

  v0 = 0;
  v16 = KeNumberNodes;
  do
  {
    v1 = 0LL;
    result = 13LL * v0;
    v17 = 0LL;
    do
    {
      v3 = qword_1403269F0;
      v4 = 2 * (result + v1);
      v5 = *((_DWORD *)&qword_1403269F0[v4 + 8].HeaderX64 + 1);
      v6 = v5 - *((_DWORD *)&qword_1403269F0[v4 + 8].HeaderX64 + 2);
      if ( v6 )
      {
        Alignment = qword_1403269F0[v4 + 8].Alignment;
        if ( Alignment < 16 || v6 >= 0x10 )
        {
          v13 = Alignment / 4;
        }
        else if ( Alignment >= 64 )
        {
          v13 = Alignment / 16;
        }
        else
        {
          v13 = Alignment / 8;
        }
        *((_DWORD *)&qword_1403269F0[v4 + 8].HeaderX64 + 2) = v5;
        if ( !v13 )
          v13 = 1;
        v14 = v13 + Alignment;
        if ( v14 > 256 )
          v14 = 256;
        LODWORD(v3[v4 + 8].Alignment) = v14;
      }
      else if ( !*((_DWORD *)&qword_1403269F0[v4 + 8].HeaderX64 + 3) )
      {
        v7 = qword_1403269F0[v4 + 8].Alignment;
        v8 = v7 / 20;
        if ( !(v7 / 20) )
          v8 = v7 != 0;
        v9 = v7 - v8;
        if ( v1 != 1 && v9 < 5 )
          v9 = 5;
        LODWORD(qword_1403269F0[v4 + 8].Alignment) = v9;
        if ( v1 == 1 )
        {
          v10 = 16;
          v11 = 8;
        }
        else
        {
          v10 = 0;
          v11 = 0;
        }
        do
        {
          if ( LOWORD(v3[v4 + 7].Alignment) <= v9 )
            break;
          KernelStack = MmCreateKernelStack(v10, v0, 0LL);
          if ( !KernelStack )
            break;
          MmDeleteKernelStack(KernelStack, v11);
        }
        while ( v5 == *((_DWORD *)&v3[v4 + 8].HeaderX64 + 1) );
        v1 = v17;
      }
      result = 13LL * v0;
      ++v1;
      *((_DWORD *)&v3[v4 + 8].HeaderX64 + 3) = 0;
      v17 = v1;
    }
    while ( v1 <= 1 );
    ++v0;
  }
  while ( v0 < v16 );
  return result;
}
