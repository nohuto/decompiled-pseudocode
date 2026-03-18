/*
 * XREFs of IcRemapInputs @ 0x1C008B278
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C008A080 (IrqArbCommitAllocation.c)
 *     IrqArbBootAllocation @ 0x1C008A3F0 (IrqArbBootAllocation.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C008D1E8 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 IcRemapInputs()
{
  unsigned __int8 i; // si
  __int64 j; // rdi
  int v2; // r14d
  unsigned int v3; // r12d
  __int64 v4; // rbx
  unsigned int v5; // r15d
  bool v6; // r13
  int v7; // ebp
  int v8; // r14d
  __int64 result; // rax

  for ( i = 0; i < 2u; ++i )
  {
    for ( j = IcListHead; &IcListHead != (__int64 *)j; j = *(_QWORD *)j )
    {
      if ( (*(_DWORD *)(j + 28) & 0x80000004) == 0 )
      {
        v3 = 0;
        v5 = *(_DWORD *)(j + 20) - *(_DWORD *)(j + 16) + 1;
        if ( *(_DWORD *)(j + 20) - *(_DWORD *)(j + 16) != -1 )
        {
          v4 = j + 140;
          do
          {
            v2 = *(_DWORD *)(v4 - 104);
            if ( !v2 && !*(_DWORD *)(v4 - 108) || *(_BYTE *)(v4 + 85) )
              goto LABEL_5;
            v6 = *(_DWORD *)(v4 - 88) != *(_DWORD *)v4
              || *(_DWORD *)(v4 - 80) != *(_DWORD *)(v4 + 8)
              || *(_DWORD *)(v4 - 76) != *(_DWORD *)(v4 + 12)
              || *(_WORD *)(v4 - 60) != *(_WORD *)(v4 + 28)
              || *(_QWORD *)(v4 - 68) != *(_QWORD *)(v4 + 20);
            v7 = *(_DWORD *)(v4 - 108) - *(_DWORD *)(v4 - 100);
            v8 = v2 - *(_DWORD *)(v4 - 96);
            if ( !i )
            {
              if ( v8 )
              {
                if ( !v7 || !v6 )
                  goto LABEL_5;
              }
              else if ( !v7 )
              {
                goto LABEL_5;
              }
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int))HalPrivateDispatchTable[65])(
                0LL,
                0LL,
                0LL,
                0LL,
                200LL * v3 + j + 48,
                1);
            }
            if ( i == 1 && v8 && (!v7 || v6) )
            {
              result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int))HalPrivateDispatchTable[64])(
                         0LL,
                         0LL,
                         0LL,
                         0LL,
                         200LL * v3 + j + 136,
                         1);
              if ( (int)result < 0 )
                return result;
            }
LABEL_5:
            ++v3;
            v4 += 200LL;
          }
          while ( v3 < v5 );
        }
      }
    }
  }
  return 0LL;
}
