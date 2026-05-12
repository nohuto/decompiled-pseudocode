/*
 * XREFs of StorpAllocateHostMemoryBuffer @ 0x1C002E634
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0007ED0 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpAllocateHostMemoryBuffer(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        __int64 a8,
        __int64 a9,
        unsigned int *a10)
{
  unsigned int v10; // ebx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r9
  unsigned int v14; // r15d
  struct _MDL *v15; // rsi
  unsigned __int64 v17; // rdi
  SIZE_T v18; // r14
  _QWORD *p_Next; // r12
  PMDL PagesForMdl; // rax
  __int64 ByteCount; // r8
  __int64 v22; // rdx
  struct _MDL *Next; // rdi
  unsigned __int64 v24; // [rsp+30h] [rbp-38h]
  __int64 v25; // [rsp+38h] [rbp-30h]
  _QWORD *v26; // [rsp+70h] [rbp+8h]

  v10 = 0;
  v24 = 0LL;
  v12 = a2;
  v13 = 0LL;
  v14 = 0;
  v15 = 0LL;
  v25 = **(_QWORD **)(a1 - 16);
  if ( *(_QWORD *)(v25 + 5680) )
    return 3238002689LL;
  if ( !a2 )
    v12 = 4096LL;
  if ( a3 >= v12 && ((a3 | v12) & 0xFFF) == 0 && !(0x1000 % a5) )
  {
    if ( a10 )
    {
      LODWORD(v26) = *a10;
      if ( *a10 )
      {
        if ( !a8 )
        {
          if ( HmbAllocationPolicy != 1 )
          {
            if ( HmbAllocationPolicy == 2 )
              goto LABEL_17;
            if ( HmbAllocationPolicy != 3 )
              return 3238002690LL;
            v17 = (a4 / 0x3E8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
            if ( v17 >= v12 )
            {
              if ( v17 <= a3 )
              {
LABEL_19:
                v18 = v17;
                if ( *a10 )
                {
                  p_Next = v26;
                  do
                  {
                    if ( v18 < 0x1000 || v13 >= v17 )
                      break;
                    PagesForMdl = MmAllocatePagesForMdlEx(LowAddress, HighAddress, 0LL, v18, MmNonCached, 0x20u);
                    v13 = v24;
                    if ( PagesForMdl )
                    {
                      ByteCount = PagesForMdl->ByteCount;
                      v13 = ByteCount + v24;
                      v22 = v14++;
                      v22 *= 2LL;
                      v24 += ByteCount;
                      *(_QWORD *)(a9 + 8 * v22) = (__int64)PagesForMdl[1].Next << 12;
                      *(_DWORD *)(a9 + 8 * v22 + 8) = ByteCount;
                      if ( v15 )
                        *p_Next = PagesForMdl;
                      else
                        v15 = PagesForMdl;
                      p_Next = &PagesForMdl->Next;
                    }
                    else
                    {
                      v18 -= 4096LL;
                    }
                    if ( v18 > v17 - v13 )
                      v18 = v17 - v13;
                  }
                  while ( v14 < (unsigned int)v26 );
                  if ( v14 )
                  {
                    if ( v13 >= v12 )
                    {
                      *(_QWORD *)(v25 + 5680) = v15;
                      *a10 = v14;
                      return v10;
                    }
                    if ( v15 )
                    {
                      do
                      {
                        Next = v15->Next;
                        MmFreePagesFromMdl(v15);
                        ExFreePoolWithTag(v15, 0);
                        v15 = Next;
                      }
                      while ( Next );
                    }
                  }
                }
                return (unsigned int)-1056964605;
              }
LABEL_17:
              v17 = a3;
              goto LABEL_19;
            }
          }
          v17 = v12;
          goto LABEL_19;
        }
      }
    }
  }
  return 3238002694LL;
}
