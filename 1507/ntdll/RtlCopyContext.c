/*
 * XREFs of RtlCopyContext @ 0x180067250
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetContextFlagsLocation @ 0x180067664 (RtlpGetContextFlagsLocation.c)
 *     RtlpValidateContextFlags @ 0x1800676C0 (RtlpValidateContextFlags.c)
 *     RtlpCopyXStateChunk @ 0x180067734 (RtlpCopyXStateChunk.c)
 *     RtlpCopyLegacyContext @ 0x180067818 (RtlpCopyLegacyContext.c)
 */

__int64 __fastcall RtlCopyContext(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // ebx
  __int64 v7; // rbp
  __int64 result; // rax
  unsigned int v9; // r12d
  int v10; // esi
  unsigned int v11; // esi
  __int64 v12; // rcx
  unsigned int v13; // edi
  int v14; // ecx
  int v15; // [rsp+30h] [rbp-38h] BYREF
  unsigned int *ContextFlagsLocation; // [rsp+38h] [rbp-30h]
  int v17; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0LL;
  result = RtlpValidateContextFlags(a2, 0LL);
  if ( (int)result >= 0 )
  {
    ContextFlagsLocation = (unsigned int *)RtlpGetContextFlagsLocation(a1, a2);
    v9 = *ContextFlagsLocation;
    v10 = *(_DWORD *)RtlpGetContextFlagsLocation(a3, a2);
    result = RtlpValidateContextFlags(a2 | v10 | v9, 0LL);
    if ( (int)result >= 0 )
    {
      v11 = a2 & v10;
      result = RtlpValidateContextFlags(v11, &v15);
      if ( (int)result >= 0 )
      {
        result = RtlpValidateContextFlags(v9, &v17);
        v13 = result;
        if ( (int)result >= 0 )
        {
          if ( (~v17 & v15) != 0 )
          {
            return 2147483653LL;
          }
          else
          {
            RtlpCopyLegacyContext(v12, a1, v11, a3);
            *ContextFlagsLocation |= v9;
            if ( (v17 & 0xFFFFFFFE) != 0 )
            {
              if ( (v11 & 0x10000) != 0 )
              {
                v7 = a3 + 716;
                v6 = a1 + 716;
                LOBYTE(v14) = (v9 & 0x10020) != 65568;
                if ( ((unsigned __int8)v14 & ((v11 & 0x10020) == 65568)) != 0 )
                  *(_DWORD *)(a1 + 728) = 716;
              }
              else if ( (a2 & 0x100000) != 0 )
              {
                v7 = a3 + 1232;
                v6 = a1 + 1232;
              }
              else if ( (a2 & 0x200000) != 0 )
              {
                v7 = a3 + 416;
                v6 = a1 + 416;
              }
              else if ( (a2 & 0x400000) != 0 )
              {
                v7 = a3 + 912;
                v6 = a1 + 912;
              }
            }
            if ( (v15 & 2) == 0 )
              return v13;
            result = RtlpCopyXStateChunk(v14, v6, v6, v7, v7);
            v13 = result;
            if ( (int)result >= 0 )
              return v13;
          }
        }
      }
    }
  }
  return result;
}
