/*
 * XREFs of RtlpHpProtectHeap @ 0x1800F123C
 * Callers:
 *     RtlProtectHeap @ 0x180005E30 (RtlProtectHeap.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x180093B30 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180093E00 (ZwProtectVirtualMemory.c)
 *     RtlpHpLargeAllocationProtect @ 0x1800F04C8 (RtlpHpLargeAllocationProtect.c)
 */

__int64 __fastcall RtlpHpProtectHeap(__int64 a1)
{
  int VirtualMemory; // r8d
  _QWORD *i; // rbx
  _QWORD *v4; // rbx
  _QWORD *v6; // rax
  unsigned __int64 j; // rax
  __int64 v8; // [rsp+50h] [rbp-20h]
  int v9; // [rsp+58h] [rbp-18h]
  unsigned __int64 v10; // [rsp+B8h] [rbp+48h]

  VirtualMemory = ZwQueryVirtualMemory();
  if ( VirtualMemory >= 0 )
  {
    VirtualMemory = ZwProtectVirtualMemory();
    if ( VirtualMemory >= 0 )
    {
      for ( i = *(_QWORD **)(a1 + 96); ; i = (_QWORD *)*i )
      {
        if ( i == (_QWORD *)(a1 + 96) )
        {
          v4 = *(_QWORD **)(a1 + 56);
          if ( v4 )
          {
LABEL_14:
            while ( 1 )
            {
              VirtualMemory = RtlpHpLargeAllocationProtect();
              if ( VirtualMemory < 0 )
                break;
              v6 = (_QWORD *)*v4;
              if ( !*v4 )
              {
                v6 = (_QWORD *)v4[1];
                if ( !v6 )
                {
                  for ( j = (unsigned __int64)v4; ; v4 = (_QWORD *)j )
                  {
                    j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                    if ( !j )
                      break;
                    if ( *(_QWORD *)(j + 8) && *(_QWORD **)(j + 8) != v4 )
                    {
                      v4 = *(_QWORD **)(j + 8);
                      goto LABEL_14;
                    }
                  }
                  return (unsigned int)VirtualMemory;
                }
              }
              v4 = v6;
            }
          }
          else
          {
            return 0;
          }
          return (unsigned int)VirtualMemory;
        }
        v10 = (unsigned __int64)i;
        if ( i < i + 0x20000 )
          break;
LABEL_9:
        ;
      }
      while ( 1 )
      {
        VirtualMemory = ZwQueryVirtualMemory();
        if ( VirtualMemory < 0 )
          break;
        if ( v9 == 4096 )
        {
          VirtualMemory = ZwProtectVirtualMemory();
          if ( VirtualMemory < 0 )
            break;
        }
        v10 += v8;
        if ( v10 >= (unsigned __int64)(i + 0x20000) )
          goto LABEL_9;
      }
    }
  }
  return (unsigned int)VirtualMemory;
}
