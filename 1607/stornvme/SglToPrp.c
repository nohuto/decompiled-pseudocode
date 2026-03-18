/*
 * XREFs of SglToPrp @ 0x1C000C614
 * Callers:
 *     IoctlToNVMe @ 0x1C0009BF0 (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C000AD38 (ProtocolCommandToNVMe.c)
 * Callees:
 *     memset @ 0x1C0003180 (memset.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 */

__int64 __fastcall SglToPrp(__int64 a1, __int64 a2)
{
  char v2; // bp
  unsigned int v3; // esi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  _QWORD *v7; // rbx
  _QWORD *v8; // r8
  __int64 v9; // r13
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r15
  int v14; // r14d
  int v15; // eax
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0;
  result = GetSrbExtension(a2);
  v7 = (_QWORD *)result;
  if ( (*(_BYTE *)(result + 4245) & 6) == 2 )
  {
    if ( !*(_QWORD *)(result + 4208) )
      *(_QWORD *)(result + 4208) = StorPortGetScatterGatherList(v6, v5);
    result = v7[526];
    v8 = v7 + 515;
    v9 = 0LL;
    v10 = v7 + 515;
    v17 = 0;
    if ( *(_DWORD *)result )
    {
      do
      {
        if ( v2 )
        {
          memset(v7, 0, 0x1000uLL);
          v2 = 0;
          v8 = v7 + 515;
        }
        v11 = v7[526];
        v12 = *(unsigned int *)(v11 + 24 * v9 + 24);
        v13 = *(_QWORD *)(v11 + 24 * v9 + 16);
        if ( v12 + v13 % 4096 > 4096 )
        {
          if ( (_DWORD)v12 )
          {
            do
            {
              v14 = v13 & 0xFFF;
              if ( v2 )
              {
                memset(v7, 0, 0x1000uLL);
                v2 = 0;
              }
              *v10 = v13;
              v8 = v7 + 515;
              if ( (unsigned int)(v14 + v12) <= 0x1000 )
                break;
              v15 = v14 + v12;
              LODWORD(v12) = v14 + v12 - 4096;
              v13 += (unsigned int)(4096 - v14);
              if ( v10 == v8 )
              {
                v2 = 1;
                v10 = v7;
              }
              else
              {
                ++v10;
              }
              ++v3;
            }
            while ( v15 != 4096 );
            LODWORD(v9) = v17;
          }
        }
        else
        {
          *v10 = v13;
        }
        if ( v10 == v8 )
        {
          v2 = 1;
          v10 = v7;
        }
        else
        {
          ++v10;
        }
        result = v7[526];
        v9 = (unsigned int)(v9 + 1);
        ++v3;
        v17 = v9;
      }
      while ( (unsigned int)v9 < *(_DWORD *)result );
      if ( v3 >= 2 )
      {
        if ( v3 == 2 )
          result = *v7;
        else
          result = StorPortGetPhysicalAddress(a1, 0LL, v7, &v17);
        v7[516] = result;
      }
    }
  }
  return result;
}
