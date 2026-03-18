/*
 * XREFs of SglToPrp @ 0x1C0006094
 * Callers:
 *     ScsiToNVMe @ 0x1C00088F0 (ScsiToNVMe.c)
 *     IoctlToNVMe @ 0x1C000A2B0 (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C000A8FC (ProtocolCommandToNVMe.c)
 * Callees:
 *     memset @ 0x1C000EF40 (memset.c)
 */

_DWORD *__fastcall SglToPrp(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  unsigned int v4; // esi
  __int64 v5; // rbx
  _DWORD *result; // rax
  _QWORD *v7; // r8
  __int64 v8; // r13
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r12
  int v13; // r14d
  char v15; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  result = (_DWORD *)(v5 & 0xFFF);
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - (_QWORD)result + 4096;
  if ( *(_BYTE *)(v5 + 4167) && *(_BYTE *)(v5 + 4168) != 1 )
  {
    if ( !*(_QWORD *)(v5 + 4208) )
      *(_QWORD *)(v5 + 4208) = StorPortGetScatterGatherList(a1, a2, a3, 4096LL);
    result = *(_DWORD **)(v5 + 4208);
    v7 = (_QWORD *)(v5 + 4120);
    v8 = 0LL;
    v9 = (_QWORD *)(v5 + 4120);
    if ( *result )
    {
      do
      {
        if ( v3 )
        {
          memset((void *)v5, 0, 0x1000uLL);
          v3 = 0;
          v7 = (_QWORD *)(v5 + 4120);
        }
        v10 = *(_QWORD *)(v5 + 4208);
        v11 = *(_QWORD *)(v10 + 24 * v8 + 16);
        v12 = *(unsigned int *)(v10 + 24 * v8 + 24);
        if ( v12 + v11 % 4096 > 4096 )
        {
          while ( (_DWORD)v12 )
          {
            v13 = v11 & 0xFFF;
            if ( v3 )
            {
              memset((void *)v5, 0, 0x1000uLL);
              v3 = 0;
            }
            *v9 = v11;
            v7 = (_QWORD *)(v5 + 4120);
            if ( (unsigned int)(v13 + v12) <= 0x1000 )
              break;
            LODWORD(v12) = v13 + v12 - 4096;
            v11 += (unsigned int)(4096 - v13);
            if ( v9 == v7 )
            {
              v3 = 1;
              v9 = (_QWORD *)v5;
            }
            else
            {
              ++v9;
            }
            ++v4;
          }
        }
        else
        {
          *v9 = v11;
        }
        if ( v9 == v7 )
        {
          v3 = 1;
          v9 = (_QWORD *)v5;
        }
        else
        {
          ++v9;
        }
        result = *(_DWORD **)(v5 + 4208);
        ++v4;
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < *result );
      if ( v4 >= 2 )
      {
        if ( v4 == 2 )
          result = *(_DWORD **)v5;
        else
          result = (_DWORD *)StorPortGetPhysicalAddress(a1, 0LL, v5, &v15);
        *(_QWORD *)(v5 + 4128) = result;
      }
    }
  }
  return result;
}
