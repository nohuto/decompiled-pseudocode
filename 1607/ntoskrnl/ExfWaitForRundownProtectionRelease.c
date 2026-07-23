/*
 * XREFs of ExfWaitForRundownProtectionRelease @ 0x140074DD0
 * Callers:
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 */

int __fastcall ExfWaitForRundownProtectionRelease(volatile signed __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  bool v3; // zf
  signed __int32 *v4; // rax
  bool v5; // di
  int v6; // ebx
  unsigned __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  __int16 Object; // [rsp+38h] [rbp-30h] BYREF
  char v11; // [rsp+3Ah] [rbp-2Eh]
  int v12; // [rsp+3Ch] [rbp-2Ch]
  _QWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF
  signed __int32 v14[4]; // [rsp+50h] [rbp-18h] BYREF
  int v15; // [rsp+70h] [rbp+8h] BYREF

  v14[0] = 1;
  do
  {
    v2 = a2 >> 1;
    v9 = a2 >> 1;
    v4 = (signed __int32 *)_InterlockedCompareExchange64(a1, (signed __int64)&v9 + 1, a2);
    v3 = a2 == (_QWORD)v4;
    a2 = (unsigned __int64)v4;
  }
  while ( !v3 );
  if ( v2 )
  {
    v15 = 0;
    v5 = KeGetCurrentIrql() < 2u;
    v6 = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
      v6 = ExpSpinCount;
    while ( 1 )
    {
      LODWORD(v4) = v14[0];
      if ( (v14[0] & 1) == 0 )
        break;
      if ( v5 )
      {
        if ( !v6 )
        {
          Object = 1;
          v13[1] = v13;
          v13[0] = v13;
          v4 = v14;
          v11 = 6;
          v12 = 0;
          if ( _interlockedbittestandreset(v14, 0) )
            LODWORD(v4) = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          return (int)v4;
        }
        --v6;
        _mm_pause();
      }
      else
      {
        KeYieldProcessorEx(&v15);
      }
    }
  }
  return (int)v4;
}
