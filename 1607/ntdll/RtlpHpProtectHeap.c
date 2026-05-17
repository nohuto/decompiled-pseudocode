/*
 * XREFs of RtlpHpProtectHeap @ 0x1800F9E20
 * Callers:
 *     RtlProtectHeap @ 0x18002D7A0 (RtlProtectHeap.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 *     RtlpHpLargeAllocationProtect @ 0x1800FBF38 (RtlpHpLargeAllocationProtect.c)
 */

__int64 __fastcall RtlpHpProtectHeap(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  __int64 v4; // r8
  int v5; // eax
  _QWORD *i; // rbx
  int VirtualMemory; // eax
  int v8; // eax
  _QWORD *v9; // rbx
  int v11; // eax
  _QWORD *v12; // rax
  unsigned __int64 j; // rax
  __int64 v14; // [rsp+50h] [rbp-20h]
  int v15; // [rsp+58h] [rbp-18h]
  unsigned __int64 v16; // [rsp+B8h] [rbp+48h]

  v2 = a2;
  LODWORD(v4) = ZwQueryVirtualMemory();
  if ( (int)v4 >= 0 )
  {
    v5 = ZwProtectVirtualMemory();
    v4 = (unsigned int)v5;
    if ( v5 >= 0 )
    {
      for ( i = *(_QWORD **)(a1 + 96); ; i = (_QWORD *)*i )
      {
        if ( i == (_QWORD *)(a1 + 96) )
        {
          v9 = *(_QWORD **)(a1 + 56);
          if ( v9 )
          {
LABEL_14:
            while ( 1 )
            {
              v11 = RtlpHpLargeAllocationProtect(v9, v2, v4);
              v4 = (unsigned int)v11;
              if ( v11 < 0 )
                break;
              v12 = (_QWORD *)*v9;
              if ( !*v9 )
              {
                v12 = (_QWORD *)v9[1];
                if ( !v12 )
                {
                  for ( j = (unsigned __int64)v9; ; v9 = (_QWORD *)j )
                  {
                    j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                    if ( !j )
                      break;
                    if ( *(_QWORD *)(j + 8) && *(_QWORD **)(j + 8) != v9 )
                    {
                      v9 = *(_QWORD **)(j + 8);
                      goto LABEL_14;
                    }
                  }
                  return (unsigned int)v4;
                }
              }
              v9 = v12;
            }
          }
          else
          {
            LODWORD(v4) = 0;
          }
          return (unsigned int)v4;
        }
        v16 = (unsigned __int64)i;
        if ( i < i + 0x20000 )
          break;
LABEL_9:
        ;
      }
      while ( 1 )
      {
        VirtualMemory = ZwQueryVirtualMemory();
        v4 = (unsigned int)VirtualMemory;
        if ( VirtualMemory < 0 )
          break;
        if ( v15 == 4096 )
        {
          v8 = ZwProtectVirtualMemory();
          v4 = (unsigned int)v8;
          if ( v8 < 0 )
            break;
        }
        v16 += v14;
        if ( v16 >= (unsigned __int64)(i + 0x20000) )
          goto LABEL_9;
      }
    }
  }
  return (unsigned int)v4;
}
