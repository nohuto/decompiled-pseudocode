/*
 * XREFs of TopologyProcessMIDIElement @ 0x1C0017110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00070A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TopologyProcessMIDIElement(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  _DWORD *v6; // r12
  unsigned int v7; // r14d
  unsigned int *v8; // rax
  int v10; // r13d
  __int64 v12; // r10
  int v13; // esi
  unsigned int v14; // edi
  __int64 v15; // rbx
  int v16; // r9d
  char v17; // r12
  unsigned int v18; // edx
  int v19; // ecx
  __int64 v20; // r8
  __int64 i; // r8
  __int64 v22; // rdx
  int v23; // r14d
  __int64 result; // rax

  v6 = a6;
  v7 = 0;
  v8 = a5;
  v10 = *(_DWORD *)(a2 + 64);
  v12 = a1;
  v13 = *a6;
  v14 = *a5;
  v15 = a4 + 16LL * *a6;
  v16 = 0;
  if ( v10 )
  {
    v17 = 1;
    do
    {
      if ( v16 < 0 )
        break;
      v18 = 0;
      v19 = v10 - (v10 & (v10 - 1));
      v10 &= v10 - 1;
      v20 = 152LL * v14;
      *(_DWORD *)(v20 + a3 + 80) = *(_DWORD *)(a2 + 16);
      if ( v19 == 2048 )
        v18 = 37;
      if ( v19 == 1024 )
        v18 = 36;
      if ( v19 == 512 )
        v18 = 35;
      if ( v19 == 256 )
        v18 = 34;
      if ( v19 == 128 )
        v18 = 33;
      if ( v19 == 64 )
        v18 = 32;
      if ( v19 == 32 )
        v18 = 31;
      if ( v19 == 16 )
        v18 = 30;
      if ( v19 == 8 )
        v18 = 29;
      if ( v19 == 4 )
        v18 = 28;
      if ( v19 == 2 )
        v18 = 27;
      if ( v19 == 1 )
        v18 = 26;
      *(_DWORD *)(v20 + a3 + 76) = v18;
      if ( v18 )
        *(_QWORD *)(v20 + a3 + 8) = NodeDescriptorInfo[4 * v18];
      *(_QWORD *)(v20 + a3 + 16) = (&off_1C0009498)[4 * v18];
      v16 = ((__int64 (__fastcall *)(__int64, __int64, __int64))MIDIElementProcessRtn[v18 - 26])(v12, a2, a3);
      if ( v17 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 32); v15 += 16LL )
        {
          v22 = 3 * i;
          ++v13;
          i = (unsigned int)(i + 1);
          *(_QWORD *)v15 = *(unsigned int *)(*(_QWORD *)(a2 + 56) + 4 * v22);
          *(_DWORD *)(v15 + 8) = v14;
          *(_DWORD *)(v15 + 12) = 1;
        }
        v17 = 0;
      }
      else
      {
        *(_DWORD *)(v15 + 4) = 0;
        *(_DWORD *)v15 = v7;
        *(_DWORD *)(v15 + 8) = v14;
        *(_DWORD *)(v15 + 12) = 1;
        v15 += 16LL;
        ++v13;
      }
      v12 = a1;
      v23 = v14++;
      v7 = v23 | 0x80000000;
    }
    while ( v10 );
    v6 = a6;
    v8 = a5;
  }
  *v8 = v14;
  result = 0LL;
  *v6 = v13;
  return result;
}
