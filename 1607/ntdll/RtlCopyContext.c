/*
 * XREFs of RtlCopyContext @ 0x18008B9F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetContextFlagsLocation @ 0x1800765C4 (RtlpGetContextFlagsLocation.c)
 *     RtlpValidateContextFlags @ 0x180076620 (RtlpValidateContextFlags.c)
 *     RtlpCopyXStateChunk @ 0x18008BB44 (RtlpCopyXStateChunk.c)
 *     RtlpCopyLegacyContext @ 0x18008BC18 (RtlpCopyLegacyContext.c)
 */

__int64 __fastcall RtlCopyContext(__int64 a1, int a2, __int64 a3)
{
  int v6; // ebx
  __int64 v7; // rbp
  __int64 result; // rax
  int v9; // r12d
  int v10; // edx
  int v11; // esi
  unsigned int v12; // esi
  __int64 v13; // rcx
  unsigned int v14; // edi
  int v15; // ecx
  int v16; // [rsp+30h] [rbp-38h] BYREF
  int *ContextFlagsLocation; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0LL;
  result = RtlpValidateContextFlags(a2, 0LL);
  if ( (int)result >= 0 )
  {
    ContextFlagsLocation = (int *)RtlpGetContextFlagsLocation(a1, a2);
    v9 = *ContextFlagsLocation;
    v11 = *(_DWORD *)RtlpGetContextFlagsLocation(a3, v10);
    result = RtlpValidateContextFlags(a2 | v11 | (unsigned int)v9, 0LL);
    if ( (int)result >= 0 )
    {
      v12 = a2 & v11;
      result = RtlpValidateContextFlags(v12, &v16);
      if ( (int)result >= 0 )
      {
        result = RtlpValidateContextFlags(v9, &v18);
        v14 = result;
        if ( (int)result >= 0 )
        {
          if ( (~v18 & v16) != 0 )
          {
            return 2147483653LL;
          }
          else
          {
            RtlpCopyLegacyContext(v13, a1, v12, a3);
            *ContextFlagsLocation |= v9;
            if ( (v18 & 0xFFFFFFFE) != 0 )
            {
              if ( (v12 & 0x10000) != 0 )
              {
                v7 = a3 + 716;
                v6 = a1 + 716;
                LOBYTE(v15) = (v9 & 0x10020) != 65568;
                if ( ((unsigned __int8)v15 & ((v12 & 0x10020) == 65568)) != 0 )
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
            if ( (v16 & 2) == 0 )
              return v14;
            result = RtlpCopyXStateChunk(v15, v6, v6, v7, v7);
            v14 = result;
            if ( (int)result >= 0 )
              return v14;
          }
        }
      }
    }
  }
  return result;
}
