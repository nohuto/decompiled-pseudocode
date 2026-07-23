/*
 * XREFs of ExpQueryNumaAvailableMemory @ 0x14054C624
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetAvailablePages @ 0x14006D13C (MmGetAvailablePages.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MmGetChannelInformation @ 0x14054C77C (MmGetChannelInformation.c)
 */

__int64 __fastcall ExpQueryNumaAvailableMemory(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v4; // r9d
  unsigned int v5; // edi
  __int64 i; // rbx
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 j; // r8
  __int64 AvailablePages; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  PVOID P; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h]
  unsigned __int64 v15; // [rsp+50h] [rbp-28h]

  if ( a2 < 4 )
  {
    if ( a3 )
      *a3 = 4;
    return 3221225476LL;
  }
  else
  {
    v4 = (unsigned __int16)KeNumberNodes;
    *a1 = (unsigned __int16)KeNumberNodes - 1;
    v5 = (a2 - 8) >> 3;
    if ( v5 > v4 )
      v5 = v4;
    if ( a2 >= 8 && v5 )
    {
      *a3 = 8 * v5 + 8;
      if ( (unsigned __int16)v4 <= 1u )
      {
        AvailablePages = MmGetAvailablePages();
        *(_QWORD *)(v11 + 8) = AvailablePages << 12;
      }
      else
      {
        for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
        {
          result = MmGetChannelInformation(0LL, (unsigned int)i, &P, &v12);
          if ( (int)result < 0 )
            return result;
          v8 = 0LL;
          v14 = 0LL;
          v15 = v12 / 0x28;
          for ( j = 0LL; (unsigned int)j < v12 / 0x28; j = (unsigned int)(j + 1) )
          {
            v8 += *((_QWORD *)P + 5 * j + 2) + *((_QWORD *)P + 5 * j + 3);
            v14 = v8;
          }
          ExFreePoolWithTag(P, 0);
          *(_QWORD *)&a1[2 * i + 2] = v8 << 12;
        }
      }
      return 0LL;
    }
    else
    {
      *a3 = 4;
      return 0LL;
    }
  }
}
